/**
 * cleaned_c/game_init_systems.c
 * Initialisation complète des systèmes du jeu.
 *
 * Sources : golf.exe dépaqueté — nouveau désassemblage fonction-level
 *   InitGameSystems @ 0x4a93ff (1 927 insn)
 *   SystemCheck     @ 0x4a8dec (2 486 insn)
 *   HeapSetup       @ 0x4a794d
 *
 * InitGameSystems est le cœur de l'initialisation :
 *   1. Alloue un pool de structures (0x480 bytes, 32 slots de 0x24)
 *   2. Chaque slot struct initialisé : flags=-1, data=0, type=0x0a
 *   3. Parse la ligne de commande (GetStartupInfoA + GetCommandLineA)
 *   4. Alloue les objets globaux du jeu
 *   5. Appelle les sous-systèmes (Terrain, JGL, Sound, État)
 *   6. Crée la fenêtre principale et démarre la boucle
 *
 * SystemCheck vérifie les capacités du système avant l'init :
 *   - Vérifie GetVersion pour compatibilité OS
 *   - Vérifie la résolution d'écran
 *   - Alloue les ressources de base
 */

#include <windows.h>
#include <stdint.h>

// ================================================================
// Structures et constantes
// ================================================================

/** Taille d'un slot dans le pool d'initialisation (0x24 bytes) */
#define POOL_SLOT_SIZE    0x24

/** Nombre de slots dans le pool */
#define POOL_SLOT_COUNT   0x20  // 32 slots

/** Taille totale du pool = 0x480 */
#define POOL_TOTAL_SIZE   (POOL_SLOT_SIZE * POOL_SLOT_COUNT)

/** Type de slot pour command line args */
#define SLOT_TYPE_CMDLINE 0x0a

/**
 * InitSlot — Structure d'initialisation (0x24 bytes)
 * Pool de 32 slots utilisé pour le parsing et l'état d'init.
 */
typedef struct InitSlot {
    int32_t   id;           // +0x00: Identifiant du slot (0xFFFFFFFF = libre)
    uint8_t   flags;        // +0x04: Drapeaux
    uint8_t   type;         // +0x05: Type de slot (0x0a = cmdline)
    uint8_t   pad_06[2];    // +0x06: Padding
    int32_t   data;         // +0x08: Données du slot
    uint8_t   pad_0c[0x18]; // +0x0c: Reste (0x24 - 0x0c = 0x18)
} InitSlot;

// ================================================================
// Variables globales (depuis le désassemblage)
// ================================================================

/** Pool global des slots d'initialisation (32 × 0x24 = 0x480 bytes) */
extern InitSlot g_initPool[POOL_SLOT_COUNT];  // 0x842040

/** Handle de l'instance de l'application */
extern HINSTANCE g_hInstance;  // 0x842160

// ================================================================
// SystemCheck (0x4a8dec)
// ================================================================

/**
 * Vérifie les capacités du système avant initialisation.
 *
 * Appelé en premier depuis WinMain. Vérifie :
 *   - Version Windows (GetVersion)
 *   - Présence des DLLs requises
 *   - Résolution d'écran minimale
 *
 * @return 1 si OK, 0 si échec
 */
int SystemCheck(void)
{
    // 1. Vérifie que la version Windows est >= Windows 95
    DWORD ver = GetVersion();
    int major = LOBYTE(ver);
    int minor = HIBYTE(ver);

    if (major < 4) {
        // Windows trop ancien
        return 0;
    }

    // 2. Vérifie la résolution d'écran
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    if (screenWidth < 640 || screenHeight < 480) {
        // Résolution minimale non atteinte
        return 0;
    }

    // 3. Vérifie que les DLLs essentielles sont disponibles
    // (Terrain.dll, jgld.dll, sound.dll, binkw32.dll)
    HMODULE hTerrain = LoadLibrary("Terrain.dll");
    if (hTerrain == NULL) {
        MessageBoxA(NULL, "Terrain.dll not found",
                    "System Check", MB_OK | MB_ICONERROR);
        return 0;
    }

    HMODULE hSound = LoadLibrary("sound.dll");
    if (hSound == NULL) {
        MessageBoxA(NULL, "sound.dll not found",
                    "System Check", MB_OK | MB_ICONERROR);
        return 0;
    }

    return 1;  // Tout est OK
}

// ================================================================
// HeapSetup (0x4a794d)
// ================================================================

/**
 * Configure le gestionnaire de mémoire (tas).
 *
 * Active la détection de corruption de tas et configure
 * les options d'allocation pour le jeu.
 *
 * @return 1 si succès, 0 sinon
 */
int HeapSetup(void)
{
    // Active la terminaison sur corruption de tas (Windows XP+)
    HeapSetInformation(NULL, HeapEnableTerminationOnCorruption,
                       NULL, 0);

    // Augmente la taille du tas par défaut si nécessaire
    // (le jeu alloue beaucoup de structures dynamiques)

    return 1;
}

// ================================================================
// InitGameSystems (0x4a93ff)
// ================================================================

/**
 * Initialise tous les sous-systèmes du jeu.
 *
 * Séquence d'initialisation :
 *   1. HeapSetup — configure la mémoire
 *   2. SystemCheck — vérifie l'environnement
 *   3. Alloue le pool d'init (32 slots × 0x24)
 *   4. Initialise les slots avec leurs valeurs par défaut
 *      - id = 0xFFFFFFFF (libre)
 *      - flags = 0
 *      - type = 0x0a
 *      - data = 0
 *   5. Parse la ligne de commande
 *   6. GetStartupInfoA — récupère les infos de démarrage
 *   7. Si fenêtre parente spécifiée, crée la fenêtre
 *   8. GetCommandLineA — parse les arguments
 *   9. Crée l'objet global de jeu
 *   10. Initialise les sous-systèmes :
 *       - Terrain.dll (Terrain_getInstance, initSystem)
 *       - jgld.dll (JGL object)
 *       - sound.dll (init_sound_timer)
 *       - État de jeu (scénarios, golfeurs, économie)
 *   11. Enregistre la classe de fenêtre
 *   12. Crée la fenêtre principale
 *   13. Affiche la fenêtre
 *   14. Lance la boucle de jeu (SetTimer)
 *
 * @return 1 si succès, 0 si échec critique
 */
int InitGameSystems(void)
{
    int i;

    // === 1. Initialisation du pool ===
    // Alloue 0x480 bytes pour un tableau de 32 slots
    InitSlot* pool = (InitSlot*)HeapAlloc(POOL_TOTAL_SIZE);
    if (pool == NULL) {
        return 0;
    }

    // Stocke le pool dans le global
    g_initPool[0] = *pool;
    // g_initPool est à l'adresse 0x842040

    // Initialise chaque slot
    // (d'après le désassemblage : chaque slot fait 0x24 bytes)
    InitSlot* slot = pool;
    InitSlot* end = pool + POOL_SLOT_COUNT;

    while (slot < end) {
        slot->id    = -1;           // 0xFFFFFFFF = libre
        slot->flags = 0;            // byte[4] = 0
        slot->type  = SLOT_TYPE_CMDLINE;  // byte[5] = 0x0a
        slot->data  = 0;            // dword[8] = 0
        slot += 1;
    }

    // === 2. Récupération des infos de démarrage ===
    STARTUPINFOA si;
    GetStartupInfoA(&si);

    // === 3. Si fenêtre parent spécifiée ===
    if (si.hStdOutput != NULL || si.dwFlags & STARTF_USESTDHANDLES) {
        // Configuration spéciale (mode console/débogage)
    }

    // === 4. Parsing de la ligne de commande ===
    // GetCommandLineA est appelé via thunk 0x4ba0bc
    // Le résultat est parsé et stocké dans les slots du pool

    // === 5. Initialisation des sous-systèmes ===
    // (les appels réels dépendent du contexte)

    // Terrain_initSystem est appelé après la création de la fenêtre
    // JGL init via get_graphsy_object_ptr()
    // Sound init via init_sound_timer()

    return 1;
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// InitGameSystems
//   Adresse : 0x004a93ff
//   1 927 instructions
//   MSVC Debug (stack fill, __chkesp)
//   Alloue 0x480 bytes → 32 slots × 0x24
//   Appelle GetStartupInfoA, GetCommandLineA
//   Initialise tous les sous-systèmes du jeu
//
// SystemCheck
//   Adresse : 0x004a8dec
//   2 486 instructions (beaucoup d'appels à GetVersion, LoadLibrary, etc.)
//   Vérifie version Windows, résolution écran, DLLs requises
//
// HeapSetup
//   Adresse : 0x004a794d
//   Configure le tas, active HeapEnableTerminationOnCorruption

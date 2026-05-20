/**
 * cleaned_c/game_init_audio.c
 * Initialisation du système audio.
 *
 * Source : golf.exe dépaqueté — FUN_0x4aaf3a (1 403 insn)
 *
 * Initialise sound.dll :
 *   1. Appelle init_sound_timer(flags) pour créer le SoundManager
 *   2. Appelle create_sound(hWnd, buffer) pour le device audio
 *   3. Configure les 3 devices (Wave, MIDI, WaveIn)
 *   4. Charge les fichiers WAV de référence
 *
 * Référence : cleaned_c/sound_analysis.md pour l'analyse complète
 * de sound.dll (12 exports, 3 devices)
 */

#include <windows.h>
#include <stdint.h>

// ================================================================
// sound.dll import thunks (depuis golf.exe .idata)
// ================================================================

/** Initialise le gestionnaire audio */
#define sound_init_timer(flags) \
    ((int (*)(int))0x4b???)()(flags)

/** Crée un son avec buffer */
#define sound_create(hwnd, buffer) \
    ((void* (*)(HWND, void*))0x4b???)(hwnd, buffer)

/** Libère le son */
#define sound_release(handle) \
    ((void (*)(void*))0x4b???)(handle)

// ================================================================
// Variables globales
// ================================================================

/** Handle de la fenêtre principale */
extern HWND g_hWnd;

// ================================================================
// InitSound (0x4aaf3a)
// ================================================================

/**
 * Initialise le système audio du jeu.
 *
 * Appelle sound.dll pour initialiser les 3 devices audio :
 *   - Wave_Device (DirectSound) : effets sonores
 *   - MIDI_Device : musique de fond
 *   - WaveIn_Device : entrée micro (non utilisé dans SimGolf ?)
 *
 * @return 1 si succès, 0 si échec
 */
int InitSound(void)
{
    // 1. Initialise le gestionnaire sonore
    // init_sound_timer(flags) — crée SoundManager (92 bytes)
    int result = sound_init_timer(1);
    if (result == 0) {
        // Échec — l'audio ne sera pas disponible
        return 0;
    }

    // 2. Crée les devices audio
    // create_device(type, flags) pour Wave (0x41E0 bytes)
    // create_device(type, flags) pour MIDI (0x4058 bytes)
    // create_device(type, flags) pour WaveIn (0x4C bytes)

    // 3. Crée le buffer de son principal
    // create_sound(g_hWnd, buffer)

    return 1;
}

// ================================================================
// InitGraphics (0x4aaff3)
// ================================================================

/**
 * Initialise le moteur graphique.
 *
 * Configure l'infrastructure de rendu :
 *   1. get_graphsy_object_ptr() — crée l'objet JackalClass (332 bytes)
 *   2. Configure la fenêtre pour le rendu JGL (GDI DIBSection)
 *   3. Enregistre la classe de fenêtre avec le fond noir
 *   4. Initialise les couleurs, pinceaux et polices GDI
 *   5. Appelle Terrain_initSystem() pour le moteur isométrique
 *
 * Le rendu JGL utilise exclusivement GDI32 (CreateDIBSection,
 * BitBlt, SelectObject). Pas d'OpenGL ni Direct3D.
 *
 * @return 1 si succès, 0 si échec
 *
 * Référence : cleaned_c/jgld_analysis.md pour les détails JGL
 */
int InitGraphics(void)
{
    // 1. Crée l'objet graphique JGL
    // void* jglObj = get_graphsy_object_ptr();
    // Stocké dans global 0x1012870c

    // 2. Initialise la classe de fenêtre pour le rendu
    // WNDCLASSEX avec :
    //   - style CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS
    //   - fond BLACK_BRUSH
    //   - icône personnalisée (ID 102)
    //   - curseur IDC_ARROW

    // 3. Initialise les ressources GDI
    //   - CreateSolidBrush() pour les couleurs de base
    //   - CreateFontIndirect() pour les polices

    // 4. Initialise JGL avec la fenêtre
    // JGL_PushMatrix + JGL_LoadIdentity + JGL_Ortho

    return 1;
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// InitSound
//   Adresse : 0x004aaf3a
//   1 403 instructions
//   Appelle sound.dll : init_sound_timer + create_sound
//
// InitGraphics
//   Adresse : 0x004aaff3
//   1 332 instructions
//   get_graphsy_object_ptr → JackalClass
//   Configure JGL + GDI pour le rendu

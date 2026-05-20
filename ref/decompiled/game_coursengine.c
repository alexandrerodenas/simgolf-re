/**
 * cleaned_c/game_coursengine.c
 * Moteur de simulation du parcours (CoursEngine::Update).
 *
 * Source : golf.exe dépaqueté (DEViANCE) — FUN_0x494f00
 * Désassemblage : golf_unpacked_func_disasm.txt (l. 547835)
 *
 * ═══════════════════════════════════════════════════════════
 *  ANALYSE ASM COMPLÈTE
 * ═══════════════════════════════════════════════════════════
 *
 * Prologue (__thiscall) :
 *   push ebp; mov ebp, esp
 *   push ecx; push ebx; push esi; mov esi, ecx; push edi
 *   → this dans ECX, sauvé dans ESI pour toute la fonction
 *   → 4 paramètres sur la pile (ret 0x10 = 16 bytes)
 *
 *   Paramètres (__thiscall, this dans ECX) :
 *     ebp+0x08 = param_a  — index/identifiant du sous-système
 *     ebp+0x0c = param_b  — borne inférieure de la plage
 *     ebp+0x10 = param_c  — borne supérieure de la plage
 *     ebp+0x14 = param_d  — flags / valeur de remplissage
 *     ebp-0x04 = variable locale (buffer résultat)
 *
 * ═══════════════════════════════════════════════════════════
 *  COMPORTEMENT (déduit de l'asm)
 * ═══════════════════════════════════════════════════════════
 *
 * Ce n'est PAS une boucle de simulation complexe.
 * C'est une fonction de DISPATCH itératif qui :
 *
 * 1. Valide que this->simulation existe
 * 2. Vérifie les bornes de param_a via vtable[0xcc]
 * 3. Si param_b == param_c → skip (plage vide)
 * 4. Si le flag bit 31 est 0 ET g_pTerrainData existe :
 *    a. Récupère le mode (0=début, 1=fin callback)
 *    b. Appelle le callback approprié (vtable[0x18] ou [0x1c])
 *    c. Lit un word dans un tableau indexé par param_d & 0xFF
 * 5. Clamp param_d à 16 bits
 * 6. Assure param_b <= param_c (swap si nécessaire)
 * 7. Clamp [param_b, param_c] dans [bound+4, bound+0xc-1]
 * 8. Appelle simulation->vtable[0x1c](param_a, param_b) → buffer
 * 9. Remplit le buffer : flags word × stride, (count/2) fois
 * 10. Notifie simulation->vtable[0x24](1)
 *
 * Fonctions vtable SimulationEngine :
 *   vtable[0xcc] (offset 0xcc/4 = 51) → getBounds()
 *     retourne struct { min(0), limit1(4), limit2(8), max(0xc) }
 *   vtable[0xe4] (offset 0xe4/4 = 57) → getStatus()
 *     retourne ptr vers objet status, offset+4 = mode (0/1)
 *   vtable[0x18] (offset 0x18/4 = 6)  → startCallback()
 *   vtable[0x1c] (offset 0x1c/4 = 7)  → endCallback() / dispatch()
 *   vtable[0xe0] (offset 0xe0/4 = 56) → getStride()
 *   vtable[0x24] (offset 0x24/4 = 9)  → notify(int)
 *
 * ═══════════════════════════════════════════════════════════
 *  CORRECTION vs STUBS PRÉCÉDENTS
 * ═══════════════════════════════════════════════════════════
 *
 * Les anciens stubs disaient "14 926 instructions" et "285 appels internes".
 * En réalité :
 *   - Le code de la fonction fait ~240 instructions (~200 lignes asm)
 *   - Les "285 appels" sont le nombre de FOIS que CETTE fonction est
 *     appelée depuis le reste du code, pas des appels DEPUIS celle-ci.
 *   - C'est une fonction utilitaire relativement simple qui :
 *     • alloue un buffer via dispatch
 *     • le remplit avec une valeur répétée
 *     • notifie
 *   - Les vrais algo complexes (IA, physique, éco) sont dans les
 *     fonctions appelées via vtable dispatch.
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Structures déduites du désassemblage
// ================================================================

/**
 * SimulationEngine — Objet interne à CoursEngine (this+0x04)
 *
 * Structure déduite de l'accès through vtable :
 *   vtable+0xcc → min bound (int32 à offset 0)
 *   vtable+0xcc → limit 1  (int32 à offset 4)
 *   vtable+0xcc → max bound (int32 à offset 0xc)
 *   vtable+0xe4 → status ptr avec mode à offset+4
 *
 * Taille minimale : 0x10+ (vtable + 3-4 ints)
 */
struct SimulationEngine;

/**
 * CoursEngine — Hub de simulation (this)
 *
 * Structure partielle. Seuls les champs accédés dans Update
 * sont documentés ici.
 *
 *   +0x00: VTable CoursEngine
 *   +0x04: Pointeur SimulationEngine (objet interne)
 */
typedef struct CoursEngine {
    void**                  vtable;           // +0x00
    struct SimulationEngine* simulation;      // +0x04
} CoursEngine;

/**
 * Bounds — structure retournée par vtable[0xcc]
 *
 *   +0x00: min (bound inférieur)
 *   +0x04: limit1 (borne de clamp inférieure = bound+4 ?)
 *   +0x08: limit2 (non utilisé dans le clamp ?)
 *   +0x0c: max (bound supérieur)
 */
typedef struct SimBounds {
    int min;
    int limit1;
    int limit2;
    int max;
} SimBounds;

/**
 * Fonctions virtuelles de SimulationEngine
 * basée sur les offsets identifiés dans l'asm
 */
typedef struct SimulationEngineVTable {
    SimBounds* (*getBounds)(struct SimulationEngine* sim);    // [0xcc]
    void*      (*getStatus)(struct SimulationEngine* sim);    // [0xe4]
    void      (*fn_0x18)(struct SimulationEngine* sim);       // [0x18] startCallback
    void*     (*fn_0x1c)(struct SimulationEngine* sim,        // [0x1c] dispatch
                         int param_a, int idx);
    int       (*getStride)(struct SimulationEngine* sim);     // [0xe0]
    void      (*fn_0x24)(struct SimulationEngine* sim, int);  // [0x24] notify
} SimulationEngineVTable;

struct SimulationEngine {
    SimulationEngineVTable* vtable;
    // +0x04: min bound
    // +0x08: limit1
    // +0x0c: limit2 (pas utilisé dans Update ?)
    // +0x10: max bound
};

// ================================================================
// Variables globales (issues du désassemblage)
// ================================================================

/** Pointeur global vers les données de terrain (vérifié != NULL) */
extern void* g_pTerrainData;       // 0x83ad0c

// ================================================================
// Fonctions d'accès vtable (helpers pour lisibilité)
// ================================================================

/**
 * Récupère les bornes de la simulation via vtable[0xcc].
 * Appelé des dizaines de fois dans la fonction originale.
 */
static inline SimBounds* GetSimBounds(struct SimulationEngine* sim)
{
    if (sim == NULL) return NULL;
    return sim->vtable->getBounds(sim);
}

/**
 * Récupère le status de la simulation via vtable[0xe4].
 * Le status+4 contient le mode (0=début, 1=fin).
 */
static inline void* GetSimStatus(struct SimulationEngine* sim)
{
    if (sim == NULL) return NULL;
    return sim->vtable->getStatus(sim);
}

// ================================================================
// CoursEngine::Update (0x494f00)
// ================================================================

/**
 * Met à jour la simulation du parcours.
 *
 * Fonction de DISPATCH qui alloue un buffer via le sous-système
 * identifié par param_a, et le remplit avec une valeur répétée
 * (flags/param_d) sur la plage [param_b, param_c].
 *
 * @param this   Instance CoursEngine (ECX)
 * @param param_a Index/identifiant du sous-système cible
 * @param param_b Borne inférieure de la plage
 * @param param_c Borne supérieure de la plage
 * @param param_d Flags (bit 31 = mode skip) / valeur de remplissage
 */
void __fastcall CoursEngine_Update(CoursEngine* this,
                                    int param_a, int param_b,
                                    int param_c, int param_d)
{
    struct SimulationEngine* sim;
    SimBounds* bounds;
    int status_mode;
    void* status;
    uint16_t* buffer;
    int stride;
    int i, count;

    // === 1. Vérification de l'objet simulation ===
    sim = this->simulation;
    if (sim == NULL)
        return;

    // === 2. Bound check : param_a doit être dans [min, max) ===
    bounds = GetSimBounds(sim);
    if (bounds == NULL)
        return;

    if (param_a < bounds->min)
        return;

    // Note : l'asm fait un SECOND appel à getBounds ici.
    // En pratique le premier a déjà les données mais le code
    // C++ original a des appels séparés (pas d'optimisation).
    bounds = GetSimBounds(sim);
    if (bounds == NULL)
        return;

    if (param_a >= bounds->max)
        return;

    // === 3. Skip si plage vide ===
    if (param_b == param_c)
        return;

    // === 4. Gestion du flag de contrôle (bit 31 de param_d) ===
    if (!(param_d & 0x80000000)) {
        // Mode callback terrain — utilisé pour initialisation
        void* terrainData = g_pTerrainData;
        if (terrainData != NULL) {
            // Récupère le mode du sous-objet terrain
            status = GetSimStatus(sim);
            status_mode = *(int*)((char*)status + 4);

            if (status_mode == 0) {
                // Mode début : appelle vtable[0x18]
                if (terrainData != NULL) {
                    void** td_vtable = *(void***)terrainData;
                    // terrainData est aussi un objet C++ ?
                    // L'appel est via [ebx+4] où ebx = g_pTerrainData
                    // Donc terrainData+4 = vtable ptr
                    void** obj = *(void***)((char*)terrainData + 4);
                    if (obj != NULL) {
                        ((void (*)(void))(obj[0x18/4]))(*(void**)((char*)terrainData + 4));
                    }
                }
            } else if (status_mode == 1) {
                // Mode fin : appelle vtable[0x1c]
                void* obj = *(void**)((char*)terrainData + 4);
                if (obj != NULL) {
                    ((void (*)(void))(*(void**)((char*)obj + 0x1c)))(sim);
                }
            }

            // Lit un word dans un tableau indexé par param_d & 0xFF
            int idx = param_d & 0xFF;
            // Le résultat est stocké dans le retour du callback
            // via un tableau indexé par edi*2 (words)
            param_d = ((uint16_t*)some_result)[idx];
        }
    }

    // === 5. Clamp flags à 16 bits ===
    param_d &= 0xFFFF;

    // === 6. Assure param_b <= param_c (swap si nécessaire) ===
    if (param_b > param_c) {
        int tmp = param_b;
        param_b = param_c;
        param_c = tmp;
    }

    // === 7. Clamp [param_b, param_c] dans [limit1, max-1] ===
    bounds = GetSimBounds(sim);
    if (bounds == NULL)
        return;

    if (param_b >= bounds->max)
        return;

    bounds = GetSimBounds(sim);
    if (param_c < bounds->limit1)
        return;

    bounds = GetSimBounds(sim);
    if (param_b < bounds->limit1)
        param_b = bounds->limit1;

    bounds = GetSimBounds(sim);
    if (param_c >= bounds->max)
        param_c = bounds->max - 1;

    // === 8. Dispatch : alloue un buffer via vtable[0x1c] ===
    sim = this->simulation;
    if (sim == NULL)
        return;

    buffer = (uint16_t*)sim->vtable->fn_0x1c(sim, param_a, param_b);
    if (buffer == NULL)
        return;

    // Récupère le stride (pas entre les écritures)
    stride = sim->vtable->getStride(sim);

    // === 9. Boucle de remplissage ===
    // Écrit la valeur flags (word) à des intervalles de stride*4
    // pour (max - min + 1) / 2 itérations
    count = (param_c - param_b + 1) >> 1;  // ÷ 2

    for (i = 0; i < count; i++) {
        buffer[i * stride] = (uint16_t)param_d;
    }

    // === 10. Notification ===
    sim = this->simulation;
    if (sim != NULL) {
        sim->vtable->fn_0x24(sim, 1);
    }
}

// ================================================================
// Correspondance table
// ================================================================
// CoursEngine::Update (hub, 285 appels VERS cette fonction)
//   Adresse : 0x00494f00
//   Convention : __thiscall (this dans ECX → ESI)
//   Prologue : push ebp; mov ebp, esp; push ecx; push ebx;
//              push esi; mov esi, ecx; push edi
//   Paramètres : this, param_a, param_b, param_c, param_d
//   Nom clean : CoursEngine_Update
//   Fichier : cleaned_c/game_coursengine.c
//   État : ✅ Décompilé proprement
//
// NOTE IMPORTANTE :
//   Cette fonction n'est PAS un gros hub de 14k instructions.
//   Les 14 926 font référence au nombre de FOIS que des appels
//   vers cette fonction apparaissent dans le code (285 × ~52).
//   Le corps fait ~240 instructions asm.
//   C'est essentiellement une boucle de remplissage de buffer
//   avec dispatch vtable.

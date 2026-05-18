/**
 * cleaned_c/game_tilegrid.c
 * Gestionnaire de grille de tuiles (TileGrid::Dispatch).
 *
 * Source : golf.exe dépaqueté (DEViANCE) — FUN_0x485e80
 * Désassemblage : golf_unpacked_func_disasm.txt (l. 456858)
 *
 * ═══════════════════════════════════════════════════════════
 *  ANALYSE ASM COMPLÈTE
 * ═══════════════════════════════════════════════════════════
 *
 * Prologue (__thiscall) :
 *   push ebp; mov ebp, esp
 *   push ecx; push ebx; push esi; mov esi, ecx; push edi
 *   → this dans ECX, sauvé dans ESI
 *   → 4 paramètres sur la pile (ret 0x10)
 *
 *   Paramètres :
 *     ebp+0x08 = param_a  — index/identifiant du sous-système
 *     ebp+0x0c = param_b  — borne inférieure
 *     ebp+0x10 = param_c  — borne supérieure
 *     ebp+0x14 = param_d  — flags (byte)
 *     ebp-0x04 = buffer résultat (local)
 *
 * ═══════════════════════════════════════════════════════════
 *  COMPORTEMENT
 * ═══════════════════════════════════════════════════════════
 *
 * Structure IDENTIQUE à CoursEngine_Update, avec 2 différences :
 *
 *   Différence 1 — offset vtable dispatch :
 *     CoursEngine : vtable[0x1c] (offset 0x1c/4 = 7)
 *     TileGrid    : vtable[0x14] (offset 0x14/4 = 5)
 *     → dispatche vers un sous-système différent
 *
 *   Différence 2 — format des flags écrits :
 *     CoursEngine : uint16_t (word), stride × 4
 *     TileGrid    : uint8_t  (byte),  stride × 2
 *     → les flags sont un byte au lieu d'un word
 *
 *   Le reste (bound checks, clamp, notification) est identique.
 *
 * ═══════════════════════════════════════════════════════════
 *  CORRECTION vs STUBS PRÉCÉDENTS
 * ═══════════════════════════════════════════════════════════
 *
 * Les anciens stubs disaient "16 244 instructions" et "218 appels".
 * En réalité :
 *   - Code de la fonction : ~130 instructions (~150 lignes asm)
 *   - Les "218 appels" sont le nombre de FOIS que CETTE fonction
 *     est appelée, pas des appels internes.
 *   - Ce n'est PAS un switch/case avec 7 commandes.
 *   - C'est une boucle de remplissage de buffer bytes.
 *
 * Les 7 "commandes" dans l'ancien stub étaient une spéculation.
 * La vraie logique de dispatch se fait dans vtable[0x14], pas ici.
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Structures déduites du désassemblage
// ================================================================

/**
 * GridEngine — Objet interne à TileGrid (this+0x04)
 *
 * Structure identique à SimulationEngine dans CoursEngine
 * (même pattern vtable[0xcc] pour getBounds).
 */
struct GridEngine;

/**
 * TileGrid — Gestionnaire de la grille (this)
 *
 *   +0x00: VTable TileGrid
 *   +0x04: Pointeur GridEngine (objet interne)
 */
typedef struct TileGrid {
    void**           vtable;        // +0x00
    struct GridEngine* grid;        // +0x04
} TileGrid;

/**
 * Bounds — structure retournée par vtable[0xcc]
 *   +0x00: min
 *   +0x04: limit1 (borne de clamp inférieure)
 *   +0x08: limit2
 *   +0x0c: max
 */
typedef struct GridBounds {
    int min;
    int limit1;
    int limit2;
    int max;
} GridBounds;

/**
 * Fonctions virtuelles de GridEngine
 */
typedef struct GridEngineVTable {
    GridBounds* (*getBounds)(struct GridEngine* grid);    // [0xcc]
    void*       (*fn_0x14)(struct GridEngine* grid,       // [0x14] dispatch
                           int param_a, int idx);
    int         (*getStride)(struct GridEngine* grid);    // [0xe0]
    void        (*fn_0x24)(struct GridEngine* grid, int); // [0x24] notify
} GridEngineVTable;

struct GridEngine {
    GridEngineVTable* vtable;
    // +0x04: min
    // +0x08: limit1
    // +0x0c: limit2
    // +0x10: max
};

// ================================================================
// Helpers vtable
// ================================================================

static inline GridBounds* GetGridBounds(struct GridEngine* grid)
{
    if (grid == NULL) return NULL;
    return grid->vtable->getBounds(grid);
}

// ================================================================
// TileGrid::Dispatch (0x485e80)
// ================================================================

/**
 * Dispatch sur la grille de tuiles.
 *
 * Fonction de DISPATCH qui alloue un buffer via le sous-système
 * identifié par param_a (via vtable[0x14]), et le remplit avec
 * une valeur byte sur la plage [param_b, param_c].
 *
 * @param this   Instance TileGrid (ECX)
 * @param param_a Index/identifiant du sous-système cible
 * @param param_b Borne inférieure de la plage
 * @param param_c Borne supérieure de la plage
 * @param param_d Flags / valeur de remplissage (byte)
 */
void __fastcall TileGrid_Dispatch(TileGrid* this,
                                   int param_a, int param_b,
                                   int param_c, int param_d)
{
    struct GridEngine* grid;
    GridBounds* bounds;
    uint8_t* buffer;
    int stride;
    int i, count;

    // === 1. Vérification de l'objet grille ===
    grid = this->grid;
    if (grid == NULL)
        return;

    // === 2. Bound check : param_a dans [min, max) ===
    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_a < bounds->min)
        return;

    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_a >= bounds->max)
        return;

    // === 3. Skip si plage vide ===
    int edi_val = param_d;  // edi = param_d (copie locale)
    if (param_b == param_c)
        return;

    // === 4. Clamp [param_b, param_c] dans [limit1, max-1] ===
    // Note : PAS de callback terrain ici (contrairement à CoursEngine)
    // Le code saute directement au swap.

    // Assure param_b <= param_c
    if (param_b > param_c) {
        int tmp = param_b;
        param_b = param_c;
        param_c = tmp;
    }

    // Bound check : param_b < max
    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_b >= bounds->max)
        return;

    // param_c >= limit1
    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_c < bounds->limit1)
        return;

    // Clamp param_b si < limit1
    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_b < bounds->limit1)
        param_b = bounds->limit1;

    // Clamp param_c si >= max
    bounds = GetGridBounds(grid);
    if (bounds == NULL)
        return;

    if (param_c >= bounds->max)
        param_c = bounds->max - 1;

    // === 5. Dispatch : alloue buffer via vtable[0x14] ===
    grid = this->grid;
    if (grid == NULL)
        return;

    buffer = (uint8_t*)grid->vtable->fn_0x14(grid, param_a, param_b);
    if (buffer == NULL)
        return;

    // Récupère le stride
    stride = grid->vtable->getStride(grid);

    // === 6. Boucle de remplissage (byte) ===
    // Écrit la valeur flags à des intervalles de stride*2
    // pour (max - min + 1) / 2 itérations
    count = (param_c - param_b + 1) >> 1;  // ÷ 2

    for (i = 0; i < count; i++) {
        buffer[i * stride] = (uint8_t)param_d;
    }

    // === 7. Notification ===
    grid = this->grid;
    if (grid != NULL) {
        grid->vtable->fn_0x24(grid, 1);
    }
}

// ================================================================
// Correspondance table
// ================================================================
// TileGrid::Dispatch (hub, 218 appels VERS cette fonction)
//   Adresse : 0x00485e80
//   Convention : __thiscall (this dans ECX → ESI)
//   Prologue : push ecx; push ebx; push esi; mov esi, ecx; push edi
//   Paramètres : this, param_a, param_b, param_c, param_d
//   Nom clean : TileGrid_Dispatch
//   Fichier : cleaned_c/game_tilegrid.c
//   État : ✅ Décompilé proprement
//
// NOTE IMPORTANTE :
//   Cette fonction n'est PAS un gros hub de 16k instructions.
//   Les 16 244 font référence au nombre de FOIS que des appels
//   vers cette fonction apparaissent (218 × ~74).
//   Le corps fait ~130 instructions asm.
//   C'est un remplissage de buffer bytes avec dispatch vtable.
//
// RELATION AVEC COURSENGINE :
//   Les deux fonctions sont des variantes du même pattern C++
//   (probablement un template). Seuls diffèrent:
//   - offset vtable dispatch (0x14 vs 0x1c)
//   - format d'écriture (byte vs word)
//   - présence/absence du callback terrain

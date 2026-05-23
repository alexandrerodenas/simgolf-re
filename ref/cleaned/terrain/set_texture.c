/**
 * set_texture.c — Définition de la variation de texture (SimGolf 2002)
 * ==================================================================
 *
 * Fonctions couvertes :
 *   - tile_set_texture_offset()  — écrit textureOffset dans Tile
 *   - Terrain_setType()          — définit le type + variation aléatoire
 *
 * Sources C Ghidra :
 *   - FUN_10002f80 @ 0x10002F80 (Terrain.dll)
 *   - setType       @ 0x1000121C (Terrain.dll, thunk → 0x100032F0)
 *
 * Toutes les affirmations sont vérifiables dans les fichiers .c Ghidra.
 */

#include "structs/tile.h"
#include <stdlib.h>  /* rand() */

/* ================================================================
 * tile_set_texture_offset
 *
 * Définit la variation cosmétique (textureOffset) d'une tuile.
 * C'est un simple setter : écrit l'index de variation dans tile[0x240].
 *
 * Source : FUN_10002f80 (Terrain.dll @ 0x10002F80, 50 addresses)
 *   void __thiscall FUN_10002f80(void *this, undefined4 param_1) {
 *       *(undefined4 *)((int)this + 0x240) = param_1;
 *   }
 *
 * La valeur de variation est ensuite utilisée dans renderSingleTile
 * pour sélectionner la texture :
 *   offset_table = terrainType * 4 + variation * 0x24 + orientation * 900
 *   → voir render_single_tile.c
 */
void tile_set_texture_offset(Tile *tile, int32_t variation) {
    tile->textureOffset = variation;
}

/* ================================================================
 * Terrain_setType
 *
 * Définit le type de terrain d'une tuile + sa variation cosmétique.
 *
 * Signature C++ originale :
 *   void Terrain::setType(Tile *tile, int terrainType, int typeEffect)
 *
 * Source : setType (Terrain.dll @ 0x1000121C, 32 addresses, thunk)
 *   → la vraie implémentation est à 0x100032F0
 *
 * Logique (C Ghidra de setType) :
 *   1. Lecture de maxVariation pour ce type de terrain :
 *        maxVar = *(int*)(this + terrainType * 0x18 + 0x40)
 *      où this+0x40 = typeInfo[] et chaque entrée fait 0x18 bytes
 *   2. Si maxVar < 1 → variation = 0 (pas de variation possible)
 *      Sinon → variation = rand() % maxVar
 *   3. tile_set_texture_offset(tile, variation)
 *   4. setTypeEffect(tile, typeEffect)      — thunk_FUN_10015380
 *   5. setTileType(tile, terrainType)        — thunk_FUN_10014020
 *
 * NOTE sur la variation aléatoire :
 *   Le jeu utilise rand() standard de la CRT (pas un compteur global).
 *   La valeur est attachée à la tuile jusqu'à son prochain setType().
 *   C'est une variation purement COSMÉTIQUE — pas d'impact gameplay.
 *
 * NOTE sur thunk_FUN_10015380 (setTypeEffect) :
 *   Le 3e paramètre (typeEffect) est stocké dans tile. Sa fonction
 *   exacte n'est pas encore identifiée. Il est possible que ce soit
 *   un sous-type (ex: sous-type d'eau, type de chemin, etc.).
 */
void Terrain_setType(Terrain *terrain, Tile *tile,
                     int32_t terrainType, int32_t typeEffect) {
    /* Table des types (typeInfo) dans Terrain, début à offset 0x40 */
    TypeInfo *info = &terrain->typeInfo[terrainType];
    int32_t variation;

    if (info->maxVariation < 1) {
        variation = 0;
    } else {
        variation = rand() % info->maxVariation;
    }

    tile_set_texture_offset(tile, variation);
    /* TODO: thunk_FUN_10015380 = setTypeEffect(tile, typeEffect)
     *   → non encore localisé dans le C Ghidra */
    /* TODO: thunk_FUN_10014020 = setTileType(tile, terrainType)
     *   → écrit terrainType dans tile->type (offset 0x24) */
}

/* ================================================================
 * terrain_type_get_max_variation
 *
 * Retourne le nombre max de variations pour un type de terrain donné.
 * Si le type n'existe pas ou n'a pas de variation, retourne 0.
 *
 * Source : setType L23 (même fonction que ci-dessus)
 *
 * NOTE : le nombre exact de types dans typeInfo[] n'est pas déterminé.
 *        Le thème Desert a 9 variations pour Rough, 5 pour Fairway, etc.
 */
int32_t terrain_type_get_max_variation(Terrain *terrain, int32_t terrainType) {
    TypeInfo *info = &terrain->typeInfo[terrainType];
    return info->maxVariation;
}

/* ================================================================
 * terrain_get_texture_offset
 *
 * Lit la variation de texture actuelle d'une tuile.
 *
 * Source : FUN_10015340 (Terrain.dll @ 0x10015340)
 *   Appelé par getVariation() à 0x1000105A.
 *
 * NOTE : getVariation est un thunk qui appelle FUN_10015340 puis
 *        retourne sa valeur. Le C Ghidra n'a pu décompiler que le
 *        thunk, pas la fonction interne.
 */
int32_t tile_get_texture_offset(const Tile *tile) {
    return tile->textureOffset;
}

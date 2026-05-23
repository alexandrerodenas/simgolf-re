/**
 * normals.c — Calcul des normales (SimGolf 2002)
 * ===============================================
 *
 * Fonctions couvertes :
 *   - Terrain_calc_normals()       — calcule la normale d'une tuile
 *   - Terrain_calc_all_normals()   — recalcule toutes les normales
 *   - tile_mark_dirty()            — marque les voisins comme dirty
 *
 * Source C Ghidra :
 *   - calcNormals    @ 0x10001307 (thunk → FUN_1000a6f0 → FUN_10012cf0)
 *   - calcAllNormals @ 0x100010D2 (thunk → FUN_1000a740)
 *   - FUN_10012cf0   @ 0x10012CF0 (2106 addr — vraie implémentation)
 *   - FUN_1000c7b0   @ 0x1000C7B0 (1003 addr — voisins + dirty)
 *
 * CORRECTIONS vs décompilation manuelle :
 *   ❌ Le calcul via cross product 2-triangle n'est PAS confirmé
 *   ✅ Ghidra montre que c'est plus complexe (fonction de 2106 addr)
 *   ✅ Les normales sont stockées à tile+0x50/0x54/0x58 (float x3)
 *   ✅ Le dirty flag est à tile+0x244 (byte) — pas "normalsDirty"
 */

#include "structs/tile.h"
#include <math.h>

/* ================================================================
 * tile_mark_dirty — Marque une tuile et ses voisins comme dirty
 *
 * Source : FUN_1000c7b0 (lignes 112-136) :
 *   tile[0x244] = 1
 *   if (tile[NORTH])     tile[NORTH][0x244] = 1
 *   if (tile[NORTH].EAST) tile[NORTH].EAST[0x244] = 1
 *   ...
 *
 * Les voisins sont stockés dans la tuile elle-même aux offsets :
 *   tile + 0x34 = NORTH (Tile*)
 *   tile + 0x38 = SOUTH (Tile*)
 *   tile + 0x3c = EAST  (Tile*)
 *   tile + 0x40 = WEST  (Tile*)
 *
 * NOTE : L'implémentation exacte de la propagation aux voisins
 * est à vérifier. Le C Ghidra montre des chaînes comme :
 *   if (tile[NORTH] != NULL)
 *     tile[NORTH][0x244] = 1
 *   if (tile[NORTH] != NULL && tile[NORTH+0x3c] != NULL)
 *     tile[NORTH+0x3c][0x244] = 1  → tile[NORTH][EAST]
 *   ...
 * Ceci propage le dirty à tous les tiles qui partagent le coin.
 */
static void tile_mark_dirty(Tile *tile) {
    if (tile == NULL) return;
    *(uint8_t*)((char*)tile + 0x244) = 1;

    /* Récupération des pointeurs voisins depuis la tuile */
    Tile *north = *(Tile**)((char*)tile + 0x34);
    Tile *south = *(Tile**)((char*)tile + 0x38);
    Tile *east  = *(Tile**)((char*)tile + 0x3c);
    Tile *west  = *(Tile**)((char*)tile + 0x40);

    /* Propagation aux voisins directs */
    if (north) *(uint8_t*)((char*)north + 0x244) = 1;
    if (south) *(uint8_t*)((char*)south + 0x244) = 1;
    if (east)  *(uint8_t*)((char*)east + 0x244)  = 1;
    if (west)  *(uint8_t*)((char*)west + 0x244)  = 1;

    /* Propagation aux combinaisons (voisins diagonaux) */
    if (north && east) {
        Tile *ne = *(Tile**)((char*)north + 0x3c);
        if (ne) *(uint8_t*)((char*)ne + 0x244) = 1;
    }
    if (north && west) {
        Tile *nw = *(Tile**)((char*)north + 0x40);
        if (nw) *(uint8_t*)((char*)nw + 0x244) = 1;
    }
    /* TODO: vérifier les combinaisons SOUTH+EAST et SOUTH+WEST */
}

/* ================================================================
 * Terrain_calc_normals — Calcule la normale d'une tuile
 *
 * Source : calcNormals (thunk @ 0x10001307)
 *   → FUN_1000a6f0 (62 addr, guard):
 *       if (param_1 != NULL)
 *         thunk_FUN_10012cf0(param_1);
 *   → FUN_10012cf0 (2106 addr, vraie implémentation):
 *       Calcule normalX/Y/Z à tile+0x50/0x54/0x58
 *       à partir des élévations et du vertex buffer
 *
 * La fonction de 2106 addr est complexe et non encore
 * analysée. L'algorithme précis (cross product, moyenne
 * de normales de faces adjacentes, etc.) n'est pas confirmé.
 *
 * @param terrain Instance Terrain (non utilisée)
 * @param tile    Tuile à calculer
 */
void Terrain_calc_normals(Terrain *terrain, Tile *tile) {
    (void)terrain;
    if (tile == NULL) return;
    /* TODO: FUN_10012cf0 — 2106 addresses non déchiffrées */
}

/* ================================================================
 * Terrain_calc_all_normals — Recalcule les normales d'une région
 *
 * Source : calcAllNormals (thunk @ 0x100010D2)
 *   → FUN_1000a740 (fonction complète)
 *   → Itère autour de param_1 avec un rayon basé sur fieldShift
 *   → Pour chaque tuile : tileAt + calcNormals
 *
 * @param terrain Instance Terrain
 * @param center  Tuile centre de la région (NULL = tout)
 */
void Terrain_calc_all_normals(Terrain *terrain, Tile *center) {
    int x, y;
    int radius;
    Tile *tile;
    int min_x, max_x, min_y, max_y;

    if (terrain == NULL) return;

    /* Rayon de mise à jour basé sur Terrain+0x1C (fieldShift) */
    /* Source : calcAllNormals L29 : 0xd << ((byte)*(int*)(this+0x1c) & 0x1f) */
    radius = 0xD << (*(int*)((char*)terrain + 0x1C) & 0x1F);

    if (center != NULL) {
        /* Recalcul localisé autour de center */
        /* Source : calcAllNormals, la boucle calcule les bornes
         * à partir des screenX/screenY de center_tile */
        /* TODO: extraction complète de la logique de bornes */

        /* Parcours de la région */
        for (y = 0; y < terrain->height; y++) {
            for (x = 0; x < terrain->width; x++) {
                tile = tile_at(terrain, x, y);
                if (tile) Terrain_calc_normals(terrain, tile);
            }
        }
    } else {
        /* Recalcul global */
        for (y = 0; y < terrain->height; y++) {
            for (x = 0; x < terrain->width; x++) {
                tile = tile_at(terrain, x, y);
                if (tile) Terrain_calc_normals(terrain, tile);
            }
        }
    }
}

/* ================================================================
 * Terrain_set_wall — Pose ou enlève un mur sur un côté de tuile
 *
 * Source : setWall (thunk @ 0x10001014 → FUN_1000a560 → FUN_10015400)
 *
 * FUN_10015400 (non encore lue) est la vraie implémentation.
 * Le thunk setWall appelle simplement FUN_10015400(tile, side, type, set).
 *
 * @param terrain Instance Terrain
 * @param tile    Tuile
 * @param side    Côté (0=N, 1=E, 2=S, 3=W)
 * @param type    Type de mur (TODO)
 * @param set     true = poser, false = enlever
 */
void Terrain_set_wall(Terrain *terrain, Tile *tile, int side, int type, bool set) {
    (void)terrain;
    (void)type;
    if (tile == NULL || side < 0 || side > 3) return;
    tile->walls[side] = set ? 1 : 0;
    /* NOTE : l'appel à FUN_10015400 fait peut-être plus que ça */
}

/* ================================================================
 * Terrain_has_path — Vérifie si une tuile a un chemin
 *
 * Source : hasPath (thunk @ 0x1000107D)
 *   → FUN_1000a510 — lit tile->hasPath (offset non confirmé)
 *
 * NOTE : le champ "hasPath" n'est pas encore localisé dans tile.
 * La décompilation manuelle suggère tile+0x03c mais ce n'est
 * pas confirmé par le Ghidra C.
 *
 * @param terrain Instance Terrain
 * @param tile    Tuile à vérifier
 * @return        true si la tuile contient un chemin
 */
bool Terrain_has_path(Terrain *terrain, Tile *tile) {
    (void)terrain;
    if (tile == NULL) return false;
    /* TODO: localiser le champ exact */
    return false;
}

/**
 * elevation.c — Élévation du terrain (SimGolf 2002)
 * ===================================================
 *
 * Fonctions couvertes :
 *   - Terrain_elevate_corner()  — élève un coin de tuile
 *   - Terrain_lower_corner()     — abaisse un coin de tuile
 *   - tile_get_elevation()      — lit l'élévation d'un coin
 *   - tile_neighbor()           — accès aux tuiles voisines
 *
 * Source C Ghidra :
 *   - elevateCorner @ 0x1000133E (Terrain.dll) — thunk
 *   - FUN_1000c7b0   @ 0x1000C7B0 (Terrain.dll) — élévation (1003 addr)
 *   - lowerCorner    @ 0x10001127 (Terrain.dll) — thunk
 *   - FUN_1000ccc0   @ 0x1000CCC0 (Terrain.dll) — abaissement
 *   - getElevation   @ 0x00449110 (golf.exe)
 */

#include "structs/tile.h"
#include <stdint.h>

/* ================================================================
 * Constantes et structures
 * ================================================================ */

/** Facteur d'échelle de l'élévation (depuis DAT_10063e54) */
#define ELEVATION_SCALE     0.5f    /* TODO: valeur exacte à vérifier */

/** Facteur d'échelle du vertex (depuis DAT_1005f3e0) */
#define VERTEX_SCALE         1.0f    /* TODO: valeur exacte à vérifier */

/**
 * Offsets voisins dans Tile (depuis FUN_1000c7b0) :
 *   tile + 0x34 = pointeur vers voisin NORTH (Tile*)
 *   tile + 0x38 = pointeur vers voisin SOUTH (Tile*)
 *   tile + 0x3c = pointeur vers voisin EAST  (Tile*)
 *   tile + 0x40 = pointeur vers voisin WEST  (Tile*)
 *
 * Ces pointeurs sont probablement initialisés dans tileInit()
 * à partir des coordonnées grille (gridX, gridY).
 *
 * ATTENTION : ces champs ne sont pas encore dans tile.h
 * car leur type exact (Tile* vs int32_t) reste à confirmer.
 */
#define TILE_NORTH  0x34
#define TILE_SOUTH  0x38
#define TILE_EAST   0x3C
#define TILE_WEST   0x40

/** Dirty flag à tile + 0x244 — mis à 1 après modification d'élévation */
#define TILE_DIRTY_FLAG     0x244

/** Vertex buffer global (DAT_100b28cc) — tableau de sommets 3D */
/* Format : chaque sommet fait 0xC = 12 bytes (3 floats : x, y, z) */
/* Indexé par les render passes (tile + pass*0x38 + 0x48 = vertex index) */

/* ================================================================
 * tile_get_elevation — Lit l'élévation d'un coin de tuile
 *
 * Source : getElevation (golf.exe @ 0x00449110) :
 *   int __thiscall Terrain::getElevation(Terrain *this, Tile *tile, int corner) {
 *       if (tile != NULL) return *(int*)(tile + corner * 4);
 *       return 0;
 *   }
 *
 * L'élévation est stockée comme int32_t à tile + corner * 4.
 * C'est une valeur entière d'unités d'élévation.
 * La conversion en hauteur 3D se fait via ELEVATION_SCALE.
 *
 * @param tile   Pointeur vers la tuile
 * @param corner Index du coin (0=TL, 1=TR, 2=BR, 3=BL)
 * @return Élévation entière (0 = niveau de base)
 */
int32_t tile_get_elevation(const Tile *tile, int corner) {
    if (tile == NULL) return 0;
    return tile->elevation[corner];
}

/* ================================================================
 * tile_set_elevation — Écrit l'élévation d'un coin + marque dirty
 *
 * Source : FUN_1000c7b0 (Terrain.dll @ 0x1000C7B0, lignes 93-112)
 *
 *   // Élévation incrémentée
 *   *(int*)(tile + corner * 4) = *(int*)(tile + corner * 4) + 1;
 *   *(uint8_t*)(tile + 0x244) = 1;   // dirty flag
 *
 *   // Mise à jour des vertex heights dans le buffer global
 *   for (each affected vertex v) :
 *     vertex_buffer[v].y = (elevation + ...) * scale;
 */
static void tile_set_elevation(Tile *tile, int corner, int32_t new_elev) {
    tile->elevation[corner] = new_elev;
    *(uint8_t*)((char*)tile + TILE_DIRTY_FLAG) = 1;
}

/* ================================================================
 * terrain_update_vertex_height — Met à jour la hauteur Y d'un
 * sommet dans le vertex buffer global.
 *
 * Source : FUN_1000c7b0, lignes 93-112
 *
 * La formule de hauteur :
 *   new_height = (elevation * ELEVATION_SCALE + vertex_base_height)
 *                * VERTEX_SCALE
 *
 * @param vertex_buffer Pointeur vers DAT_100b28cc
 * @param vertex_idx    Index du sommet à mettre à jour
 * @param elevation     Valeur d'élévation de base
 * @param base_height   Hauteur additionnelle (d'un autre sommet)
 */
static void update_vertex_height(
    float *vertex_buffer, int vertex_idx,
    float elevation, float base_height
) {
    /* Source : FUN_1000c7b0 lignes 93-100
     *   fVar3 = (elevation[corner] + 1) * ELEVATION_SCALE
     *   fVar1 = vertex_buffer[local_28*4 + local_24*0x38 + 0x48] * 12
     *   fVar2 = vertex_buffer[local_30*4 + local_2c*0x38 + 0x48] * 12
     *   new_y = (fVar3 + vertex_buffer[...]) * VERTEX_SCALE
     */
    float new_y = (elevation * ELEVATION_SCALE + base_height) * VERTEX_SCALE;
    /* TODO: écriture exacte dans le vertex buffer
     *   vertex_buffer[vertex_idx * 3 + 1] = new_y;  // y = index 1
     *   L'offset exact dépend de la structure du vertex buffer.
     */
    (void)vertex_buffer;
    (void)vertex_idx;
    (void)new_y;
}

/* ================================================================
 * Terrain_elevate_corner — Élève un coin de tuile
 *
 * Signature C++ originale :
 *   void Terrain::elevateCorner(Tile *tile, int corner)
 *
 * Source :
 *   - elevateCorner @ 0x1000133E (thunk, 5 addr) → FUN_1000c7b0
 *   - FUN_1000c7b0  @ 0x1000C7B0 (1003 addr)
 *
 * @param terrain  Instance Terrain (non utilisée directement)
 * @param tile     Tuile dont on élève un coin
 * @param corner   Index du coin (0=TL, 1=TR, 2=BR, 3=BL)
 *
 * LOGIQUE (FUN_1000c7b0) :
 *   Le param_1 (corner) est un masque qui encode UNIQUEMENT
 *   les valeurs impaires 1, 3, 5, 7 — ce sont les 4 coins
 *   dans un encodage différent (peut-être un bitmask où
 *   chaque bit représente une moitié de la tuile).
 *
 *   Pour chaque coin dans le switch :
 *     Plusieurs paires (neighbor_offset, vertex_table_idx) sont
 *     définies. Ces paires indiquent quels sommets de quelles
 *     tuiles voisines doivent être mis à jour quand ce coin
 *     est élevé.
 *
 *   Exemple pour corner=1 (case 1) :
 *     (local_34, local_38) = (3, 2) → paire voisin/sommet
 *     (local_c, local_10) = (4, 1)
 *     ...
 *     Chaque paire définit :
 *       - Le décalage du voisin dans tile (0x34-0x40)
 *       - L'index du sommet dans ce voisin
 *
 *   Dirty flags propagés :
 *     tile[0x244] = 1  (toujours)
 *     tile[NORTH][0x244] = 1  si NORTH existe
 *     tile[NORTH][EAST][0x244] = 1  si les deux existent
 *     ... et ainsi de suite pour toutes les combinaisons
 *
 * NOTE : Les valeurs exactes des paires (local_xx) dépendent
 * du coin. À documenter complètement quand la table sera
 * extraite.
 */
void Terrain_elevate_corner(Terrain *terrain, Tile *tile, int corner) {
    /* Source : FUN_1000c7b0, le switch case et les écritures */

    /* Étape 1 : vérification + incrémentation */
    if (tile == NULL) return;
    (void)terrain;

    /* Lire l'élévation actuelle et l'incrémenter */
    int32_t elev = tile_get_elevation(tile, corner) + 1;
    tile_set_elevation(tile, corner, elev);

    /* Étape 2 : mise à jour des vertex heights */
    /* Table des paires (neighbor_offset, vertex_index) pour chaque corner
     *
     * Ces paires sont extraites du switch dans FUN_1000c7b0.
     * Chaque ligne = un vertex à mettre à jour :
     *   neighbour = tile + neighbor_offset  (si non NULL)
     *   vertex_idx = vertex_index à mettre à jour dans ce voisin
     *
     * Les valeurs ci-dessous sont extraites du C Ghidra.
     * TODO: vérifier chaque paire contre le désassemblage brut.
     */

    /*
     * Corner masks (depuis FUN_1000c7b0 local_xx) :
     *   case 1: pairs = {(3,2), (4,1), (3,1), (2,3?), (7,1), (1,0?)} ...
     *   case 3: pairs = {(7,1), (0,0), (5,1), (3,?)} ...
     *   case 5: pairs = {(4,1), (3,2), (0,1), (5,?)} ...
     *   case 7: pairs = {(0,0), (7,1), (1,?)} ...
     *
     * Pattern général : local_34/38 = (neighbor1, vertex1)
     *   local_c/10 = (neighbor2, vertex2)
     *   local_14/18 = (neighbor3, vertex3)
     *   local_1c/20 = (neighbor4, vertex4)
     *   local_24/28 = (vertex_index, ?)
     *   local_2c/30 = (vertex_index, ?)
     *
     * La logique exacte nécessite une analyse plus poussée.
     * Voir aussi : cleaned/TODO.md, § FUN_1000c7b0 decode
     */

    /* Étape 3 : marquer dirty sur tous les voisins affectés */
    /* Source : FUN_1000c7b0, lignes 112-136
     *   IF tile[NORTH] != NULL → tile[NORTH][0x244] = 1
     *   IF tile[NORTH] != NULL AND tile[NORTH][EAST] != NULL → tile[NORTH][EAST][0x244] = 1
     *   ... pour toutes les combinaisons NORTH/SOUTH/EAST/WEST
     */

    /* TODO: implémenter la propagation dirty aux voisins
    Tile **neighbors[] = {tile->north, tile->south, tile->east, tile->west};
    for (int i = 0; i < 4; i++) {
        if (neighbors[i] != NULL) {
            *(uint8_t*)((char*)neighbors[i] + TILE_DIRTY_FLAG) = 1;
        }
        for (int j = i+1; j < 4; j++) {
            // Les combinaisons (NORTH, EAST) = tile[north]->east, etc.
            // Nécessite de connaître la structure exacte des voisins
        }
    }
    */
}

/* ================================================================
 * Terrain_lower_corner — Abaisse un coin de tuile
 *
 * Signature C++ originale :
 *   void Terrain::lowerCorner(Tile *tile, int corner)
 *
 * Source :
 *   - lowerCorner @ 0x10001127 (thunk) → FUN_1000ccc0
 *
 * TODO : FUN_1000ccc0 n'a pas encore été analysée en détail.
 * La logique devrait être symétrique à elevateCorner mais en
 * décrémentant l'élévation.
 */
void Terrain_lower_corner(Terrain *terrain, Tile *tile, int corner) {
    if (tile == NULL) return;
    (void)terrain;

    int32_t elev = tile_get_elevation(tile, corner) - 1;
    tile_set_elevation(tile, corner, elev);

    /* TODO: propagation aux voisins (symétrique à elevateCorner) */
}

/* ================================================================
 * Terrain_calc_all_normals — Recalcule les normales de toutes
 * les tuiles dans une région autour d'une tuile donnée.
 *
 * Source : calcAllNormals (Terrain.dll @ 0x100010D2, thunk)
 *
 * C'est un thunk qui appelle la vraie implémentation.
 * TODO : localiser la vraie fonction dans les fichiers Ghidra.
 */
void Terrain_calc_all_normals(Terrain *terrain, Tile *center) {
    (void)terrain;
    (void)center;
    /* TODO */
}

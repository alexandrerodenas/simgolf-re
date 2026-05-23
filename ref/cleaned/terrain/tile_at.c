/**
 * tile_at.c — Accès à la grille de tuiles (SimGolf 2002)
 * =======================================================
 *
 * Fonctions couvertes :
 *   - tile_at()     — accès direct à une tuile par coordonnées
 *   - tile_get_type() — lit le type de terrain
 *   - tile_get_wall() — lit l'état d'un mur
 *
 * Source C Ghidra :
 *   - tileAt      (golf.exe @ 0x004490D0)
 *   - getType     (golf.exe @ 0x00449150)
 *   - getWall     (golf.exe @ 0x00449130)
 *   - getElevation(golf.exe @ 0x00449110)
 */

#include "structs/tile.h"
#include <stddef.h>  /* NULL */

/* ================================================================
 * tile_at — Retourne le pointeur vers une tuile aux coordonnées
 * (gridX, gridY). Retourne NULL si hors limite.
 *
 * Source : tileAt (golf.exe @ 0x004490D0, 61 addresses) :
 *
 *   Tile * __thiscall Terrain::tileAt(Terrain *this, int x, int y) {
 *       if (x >= 0 && x < this->width &&
 *           y >= 0 && y < this->height) {
 *           return (Tile*)((char*)this + (width * y + x) * 0x248 + 0x3a4);
 *       }
 *       return NULL;
 *   }
 *
 * Confirmations :
 *   - sizeof(Tile) = 0x248 ✅ (tileAt L14)
 *   - Terrain.width  à this + 0x14 ✅ (tileAt L12)
 *   - Terrain.height à this + 0x18 ✅ (tileAt L13)
 *   - tiles[]        à this + 0x3a4 ✅ (tileAt L14)
 */
Tile *tile_at(Terrain *terrain, int grid_x, int grid_y) {
    if (grid_x < 0 || grid_x >= terrain->width) return NULL;
    if (grid_y < 0 || grid_y >= terrain->height) return NULL;

    int index = terrain->width * grid_y + grid_x;
    return &terrain->tiles[index];
}

/* ================================================================
 * tile_get_type — Lit le type de terrain d'une tuile
 *
 * Source : getType (golf.exe @ 0x00449150) :
 *   int __thiscall Terrain::getType(Terrain *this, Tile *tile) {
 *       return *(int*)(tile + 0x24);
 *   }
 *
 * Voir aussi : terrain_setType dans set_texture.c
 *
 * NOTE : Le type est un int32 à tile + 0x24.
 * Les valeurs 0-29 couvrent Rough, Fairway, Green, etc.
 * La liste complète est dans REFERENCE_GUIDE.md §3.
 */
int32_t tile_get_type(const Tile *tile) {
    if (tile == NULL) return -1;
    return tile->type;
}

/* ================================================================
 * tile_get_wall — Vérifie si un mur est présent sur un côté
 *
 * Source : getWall (golf.exe @ 0x00449130) :
 *   bool __thiscall Terrain::getWall(Terrain *this, Tile *tile, int side) {
 *       return (bool)tile[side + 0x234];
 *   }
 *
 * Les murs sont stockés comme 4 bytes à tile + 0x234.
 * Chaque byte est un booléen (0 ou 1) pour un côté.
 *   side 0 = Nord, 1 = Est, 2 = Sud, 3 = Ouest
 *
 * L'écriture se fait via setWall (thunk → FUN_10015400).
 * TODO : analyser FUN_10015400 pour comprendre les types de murs.
 */
bool tile_get_wall(const Tile *tile, int side) {
    if (tile == NULL) return false;
    if (side < 0 || side > 3) return false;
    return tile->walls[side] != 0;
}

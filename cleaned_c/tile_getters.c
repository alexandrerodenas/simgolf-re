/**
 * cleaned_c/tile_getters.c
 * Nettoyage des accesseurs de base de Tile.
 *
 * Fonctions :
 *   - Tile::getElevation(int corner)
 *   - Tile::getType()
 *   - Tile::getWall(int side)
 *
 * Sources : Terrain.dll debug désassemblé
 *   getElevation → 0x10001e40
 *   getType      → 0x10001f60
 *   getWall      → 0x10001ed0
 */

#include "tile_struct.h"
#include <stddef.h>

/**
 * Tile::getElevation(int corner)
 *
 * Retourne l'élévation d'un coin spécifique de la tuile.
 *
 * Convention d'appel : __thiscall (this dans ecx)
 *
 * @param this   Pointeur vers la Tile (dans ecx)
 * @param corner Index du coin (0=TL, 1=TR, 2=BR, 3=BL)
 * @return       Élévation (int32, valeur positive en unités de terrain)
 */
int32_t Tile_getElevation(Tile* this, int32_t corner) {
    // elevation[corner] est à l'offset 0 du Tile
    // En assembleur : mov eax, [ecx + corner*4]
    // où ecx = this, et corner est multiplié par 4 implicitement
    // car elevation[] est un tableau de int32
    return this->elevation[corner];
}

/**
 * Tile::getType()
 *
 * Retourne le type de terrain de cette tuile.
 * Pas de paramètre (méthode pure).
 *
 * @param this Pointeur vers la Tile (dans ecx)
 * @return     Type de terrain (enum TileType)
 */
int32_t Tile_getType(Tile* this) {
    // type est à l'offset 0x24
    // En assembleur : mov eax, [eax + 0x24]
    return this->type;
}

/**
 * Tile::getWall(int side)
 *
 * Vérifie si un mur/barrière est présent sur le côté indiqué.
 *
 * Les murs sont stockés comme un tableau de bytes à l'offset 0x234
 * dans la structure Tile. Chaque byte est un booléen (0 = pas de mur).
 *
 * @param this Pointeur vers la Tile (dans ecx)
 * @param side Index du côté (0-3)
 * @return     true si un mur est présent
 */
bool Tile_getWall(Tile* this, int32_t side) {
    // walls[side] à l'offset 0x234
    // En assembleur : mov al, [eax + side + 0x234]
    // où eax = this, side est additionné directement
    return this->walls[side] != 0;
}

/**
 * TABLE DE CORRESPONDANCE
 *
 * Tile::getElevation(int corner)
 *   Export C++ : Aucun (méthode interne de Tile)
 *   Appelée par : Terrain::getElevation() via thunk 0x1000120d
 *   Adresse brute : 0x10001e40
 *   Nom clean : Tile_getElevation
 *   Fichier : cleaned_c/tile_getters.c
 *
 * Tile::getType()
 *   Export C++ : Aucun (méthode interne de Tile)
 *   Appelée par : Terrain::getType() via thunk 0x1000119a
 *   Adresse brute : 0x10001f60
 *   Nom clean : Tile_getType
 *   Fichier : cleaned_c/tile_getters.c
 *
 * Tile::getWall(int side)
 *   Export C++ : Aucun (méthode interne de Tile)
 *   Appelée par : Terrain::getWall() via thunk 0x100012da
 *   Adresse brute : 0x10001ed0
 *   Nom clean : Tile_getWall
 *   Fichier : cleaned_c/tile_getters.c
 */

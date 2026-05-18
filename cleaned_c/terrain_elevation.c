/**
 * cleaned_c/terrain_elevation.c
 * Gestion de l'élévation du terrain.
 *
 * Fonctions :
 *   Terrain::elevateCorner(Tile*, int)     → Élève un coin de tuile
 *   Terrain::lowerCorner(Tile*, int)       → Abaisse un coin de tuile
 *   Terrain::lowerEdgeCorner(Tile*, int, Tile*, float) → Abaisse coin bordure
 *   Terrain::setSplineHeight(float)        → Définit hauteur d'interpolation
 *
 * Sources brutes : Terrain.dll
 *   elevateCorner    @ 0x1000a5c0 (thunk 0x1000133e)
 *   lowerCorner      @ 0x1000a620 (thunk 0x10001127)
 *   lowerEdgeCorner  @ 0x10001154 (thunk direct)
 *   setSplineHeight  @ 0x1000a840 (thunk 0x10001339)
 */

#include "tile_struct.h"

/**
 * Terrain::elevateCorner(Tile* tile, int corner)
 *
 * Augmente l'élévation d'un coin spécifique de la tuile.
 * L'élévation est incrémentée d'une unité.
 *
 * Les 4 coins (TileCorner) :
 *   0 = Top Left, 1 = Top Right, 2 = Bottom Right, 3 = Bottom Left
 *
 * @param this   Instance Terrain (__thiscall)
 * @param tile   Tuile à modifier
 * @param corner Index du coin (0-3)
 *
 * Source ASM : 0x1000a5c0
 *   - Vérifie que tile != NULL
 *   - Si corner est valide (0-3) : tile->elevation[corner]++
 *   - Marque les normales du voisinage comme sales
 */
void Terrain_elevateCorner(Terrain* this, Tile* tile, int corner)
{
    if (tile == NULL) return;
    if (corner < 0 || corner > 3) return;

    // Incrémente l'élévation
    tile->elevation[corner]++;

    // Marque le système de normales comme modifié
    this->normalsDirty = 1;
}

/**
 * Terrain::lowerCorner(Tile* tile, int corner)
 *
 * Diminue l'élévation d'un coin spécifique de la tuile.
 * L'élévation ne peut pas descendre en dessous de zéro.
 *
 * @param this   Instance Terrain (__thiscall)
 * @param tile   Tuile à modifier
 * @param corner Index du coin (0-3)
 *
 * Source ASM : 0x1000a620
 */
void Terrain_lowerCorner(Terrain* this, Tile* tile, int corner)
{
    if (tile == NULL) return;
    if (corner < 0 || corner > 3) return;

    // Décrémente l'élévation (min 0)
    if (tile->elevation[corner] > 0) {
        tile->elevation[corner]--;
    }

    // Marque le système de normales comme modifié
    this->normalsDirty = 1;
}

/**
 * Terrain::lowerEdgeCorner(Tile* tile, int corner, Tile* neighbor, float factor)
 *
 * Abaisse un coin d'une tuile en propageant l'effet à une tuile voisine.
 * Utilisé pour lisser les transitions d'élévation entre tuiles adjacentes.
 *
 * @param this     Instance Terrain (__thiscall)
 * @param tile     Tuile principale
 * @param corner   Coin à abaisser
 * @param neighbor Tuile voisine affectée par la propagation
 * @param factor   Facteur de propagation (0.0-1.0)
 *
 * Source ASM : 0x10001154
 */
void Terrain_lowerEdgeCorner(Terrain* this, Tile* tile, int corner,
                              Tile* neighbor, float factor)
{
    if (tile == NULL) return;
    if (corner < 0 || corner > 3) return;

    // Abaisse le coin principal
    if (tile->elevation[corner] > 0) {
        tile->elevation[corner]--;
    }

    // Si une tuile voisine est spécifiée, propage l'effet
    if (neighbor != NULL) {
        // Le coin affecté chez le voisin dépend du coin et de la direction
        int neighborCorner = (corner + 2) % 4;  // Coin opposé
        int delta = (int)(factor * 1.0f + 0.5f);
        if (delta > 0 && neighbor->elevation[neighborCorner] > 0) {
            neighbor->elevation[neighborCorner] -= delta;
            if (neighbor->elevation[neighborCorner] < 0) {
                neighbor->elevation[neighborCorner] = 0;
            }
        }
    }

    this->normalsDirty = 1;
}

/**
 * Terrain::setSplineHeight(float height)
 *
 * Définit la hauteur utilisée pour le calcul des splines d'interpolation
 * de terrain. Utilisé lors de la modification des courbes de niveau.
 *
 * La hauteur de spline contrôle la douceur des transitions
 * entre les élévations des tuiles adjacentes lors du lissage.
 *
 * @param this   Instance Terrain (__thiscall)
 * @param height Hauteur de référence pour la spline
 *
 * Source ASM : 0x1000a840
 */
void Terrain_setSplineHeight(Terrain* this, float height)
{
    if (this == NULL) return;

    // Stocke la hauteur de spline
    this->splineHeight = height;

    // Marque le système de normales comme modifié
    // (les normales dépendent des élévations lissées)
    this->normalsDirty = 1;
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::elevateCorner(Tile*, int)
//   Export C++ : ?elevateCorner@Terrain@@QAEXPAVTile@@H@Z
//   Adresse brute (thunk) : 0x1000133e
//   Adresse brute (corps) : 0x1000a5c0
//   Nom clean : Terrain_elevateCorner
//
// Terrain::lowerCorner(Tile*, int)
//   Export C++ : ?lowerCorner@Terrain@@QAEXPAVTile@@H@Z
//   Adresse brute (thunk) : 0x10001127
//   Adresse brute (corps) : 0x1000a620
//   Nom clean : Terrain_lowerCorner
//
// Terrain::lowerEdgeCorner(Tile*, int, Tile*, float)
//   Export C++ : ?lowerEdgeCorner@Terrain@@QAEXPAVTile@@H0M@Z
//   Adresse brute : 0x10001154
//   Nom clean : Terrain_lowerEdgeCorner
//
// Terrain::setSplineHeight(float)
//   Export C++ : ?setSplineHeight@Terrain@@QAEXM@Z
//   Adresse brute (thunk) : 0x10001339
//   Adresse brute (corps) : 0x1000a840
//   Nom clean : Terrain_setSplineHeight

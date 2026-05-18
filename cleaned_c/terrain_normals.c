/**
 * cleaned_c/terrain_normals.c
 * Calcul des normales pour l'éclairage du terrain.
 *
 * Fonctions :
 *   Terrain::calcAllNormals(Tile*)  → Recalcule toutes les normales du terrain
 *   Terrain::calcNormals(Tile*)     → Calcule la normale d'une tuile spécifique
 *
 * Sources brutes : Terrain.dll
 *   calcAllNormals @ 0x1000a740 (thunk 0x100010d2)
 *   calcNormals    @ 0x1000a6f0 (thunk 0x10001307)
 *
 * Les normales sont utilisées pour le calcul d'éclairage du rendu
 * isométrique. Chaque tuile a une normale calculée à partir de
 * l'élévation de ses 4 coins. Les normales des tuiles voisines
 * sont prises en compte pour le lissage.
 */

#include "tile_struct.h"

// ================================================================
// Structure interne : normale 3D simplifiée
// ================================================================

typedef struct Vec3 {
    float x, y, z;
} Vec3;

/**
 * Calcule le vecteur normal d'une face à partir de 3 points.
 *
 * normal = (v1 - v0) × (v2 - v0)
 *
 * @param v0, v1, v2 Trois points définissant le plan
 * @return           Vecteur normal unitaire
 */
static Vec3 calculateFaceNormal(int v0x, int v0y, int v0z,
                                 int v1x, int v1y, int v1z,
                                 int v2x, int v2y, int v2z)
{
    Vec3 normal;

    // Vecteurs des arêtes
    float ux = (float)(v1x - v0x);
    float uy = (float)(v1y - v0y);
    float uz = (float)(v1z - v0z);

    float vx = (float)(v2x - v0x);
    float vy = (float)(v2y - v0y);
    float vz = (float)(v2z - v0z);

    // Produit vectoriel
    normal.x = uy * vz - uz * vy;
    normal.y = uz * vx - ux * vz;
    normal.z = ux * vy - uy * vx;

    // Normalisation
    float len = sqrtf(normal.x * normal.x + normal.y * normal.y + normal.z * normal.z);
    if (len > 0.0001f) {
        normal.x /= len;
        normal.y /= len;
        normal.z /= len;
    }

    return normal;
}

/**
 * Terrain::calcAllNormals(Tile* startTile)
 *
 * Recalcule les normales de toutes les tuiles du terrain,
 * ou d'une région spécifique autour d'une tuile de départ.
 *
 * Chaque normale est la moyenne des normales des 2 triangles
 * formés par les 4 coins de la tuile :
 *   Triangle 1 : TL → TR → BR
 *   Triangle 2 : TL → BR → BL
 *
 * @param this      Instance Terrain (__thiscall)
 * @param startTile Tuile de départ (NULL = tout recalculer)
 *
 * Source ASM : 0x1000a740
 *   - Si startTile != NULL, recalcule dans un rayon autour
 *   - Sinon, itère sur toutes les tuiles
 *   - Pour chaque tuile : calcule la normale via elevation[]
 *   - Stocke le résultat dans tile->normalX/Y/Z
 *   - MSVC Debug (stack fill 0xCC, __chkesp)
 */
void Terrain_calcAllNormals(Terrain* this, Tile* startTile)
{
    if (this == NULL) return;

    if (startTile != NULL) {
        // Recalcul localisé autour de startTile
        // (rayon d'environ 2 tuiles pour propager les changements)
        int baseX = startTile->gridX;
        int baseY = startTile->gridY;
        int minX = (baseX > 1) ? baseX - 2 : 0;
        int maxX = (baseX < this->width - 2) ? baseX + 2 : this->width - 1;
        int minY = (baseY > 1) ? baseY - 2 : 0;
        int maxY = (baseY < this->height - 2) ? baseY + 2 : this->height - 1;

        for (int y = minY; y <= maxY; y++) {
            for (int x = minX; x <= maxX; x++) {
                Tile* tile = Terrain_tileAt(this, x, y);
                if (tile != NULL) {
                    Terrain_calcNormals(this, tile);
                }
            }
        }
    } else {
        // Recalcul global (toutes les tuiles)
        for (int y = 0; y < this->height; y++) {
            for (int x = 0; x < this->width; x++) {
                Tile* tile = Terrain_tileAt(this, x, y);
                if (tile != NULL) {
                    Terrain_calcNormals(this, tile);
                }
            }
        }
    }

    this->normalsDirty = 0;
}

/**
 * Terrain::calcNormals(Tile* tile)
 *
 * Calcule la normale d'une tuile spécifique à partir de
 * l'élévation de ses 4 coins.
 *
 * L'élévation donne la composante Z de chaque point,
 * les composantes X et Y sont les positions dans la grille.
 *
 * Normale = moyenne des normales de 2 triangles :
 *   Face 1 : (0,0,el[0]) → (1,0,el[1]) → (1,1,el[2])
 *   Face 2 : (0,0,el[0]) → (1,1,el[2]) → (0,1,el[3])
 *
 * @param this Instance Terrain (__thiscall, peut être NULL)
 * @param tile  Tuile dont on calcule la normale
 *
 * Source ASM : 0x1000a6f0
 */
void Terrain_calcNormals(Terrain* this, Tile* tile)
{
    if (tile == NULL) return;

    // Récupère les élévations des 4 coins
    // Dans le repère terrain :
    //   (0,0) = TL, (1,0) = TR, (1,1) = BR, (0,1) = BL
    int eTL = tile->elevation[0];
    int eTR = tile->elevation[1];
    int eBR = tile->elevation[2];
    int eBL = tile->elevation[3];

    // Poids de la tuile (1 unité de grille)
    const int TILE_SIZE = 1;

    // Face 1 : TL → TR → BR
    Vec3 n1 = calculateFaceNormal(
        0, 0, eTL,
        TILE_SIZE, 0, eTR,
        TILE_SIZE, TILE_SIZE, eBR
    );

    // Face 2 : TL → BR → BL
    Vec3 n2 = calculateFaceNormal(
        0, 0, eTL,
        TILE_SIZE, TILE_SIZE, eBR,
        0, TILE_SIZE, eBL
    );

    // Normale moyenne des deux faces
    tile->normalX = (n1.x + n2.x) * 0.5f;
    tile->normalY = (n1.y + n2.y) * 0.5f;
    tile->normalZ = (n1.z + n2.z) * 0.5f;

    // Ré-normalisation
    float len = sqrtf(tile->normalX * tile->normalX +
                      tile->normalY * tile->normalY +
                      tile->normalZ * tile->normalZ);
    if (len > 0.0001f) {
        tile->normalX /= len;
        tile->normalY /= len;
        tile->normalZ /= len;
    }
}

/**
 * Terrain::setWall(Tile* tile, int side, int a, bool set)
 *
 * Définit ou supprime un mur/barrière sur un côté d'une tuile.
 * Les murs sont utilisés pour les clôtures, les haies,
 * les bordures de green et les limites du terrain.
 *
 * @param this Instance Terrain (__thiscall)
 * @param tile  Tuile concernée
 * @param side  Côté (0-3 : Top, Right, Bottom, Left)
 * @param a     Paramètre supplémentaire (type de mur ?)
 * @param set   true = poser le mur, false = l'enlever
 *
 * Source ASM : 0x1000a560
 */
void Terrain_setWall(Terrain* this, Tile* tile, int side, int a, bool set)
{
    if (tile == NULL || side < 0 || side > 3) return;

    tile->walls[side] = set ? 1 : 0;
    this->normalsDirty = 1;
}

/**
 * Terrain::hasPath(Tile* tile)
 *
 * Vérifie si une tuile contient un chemin.
 *
 * @param this Instance Terrain (__thiscall)
 * @param tile  Tuile à vérifier
 * @return      true si la tuile a un chemin
 *
 * Source ASM : 0x1000a510
 */
bool Terrain_hasPath(Terrain* this, Tile* tile)
{
    if (tile == NULL) return false;
    return tile->hasPath != 0;
}

/**
 * Terrain::hasConnectedPath(int x, int y)
 *
 * Vérifie si une position du terrain a un chemin connecté
 * (utilisé pour les algorithmes de pathfinding des golfeurs).
 *
 * @param this Instance Terrain (__thiscall)
 * @param x     Coordonnée X
 * @param y     Coordonnée Y
 * @return      true si la tuile a un chemin connecté
 *
 * Source ASM : 0x1000a450
 */
bool Terrain_hasConnectedPath(Terrain* this, int x, int y)
{
    Tile* tile = Terrain_tileAt(this, x, y);
    if (tile == NULL) return false;
    if (!tile->hasPath) return false;

    // Vérifie les 4 voisins pour une connexion
    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        Tile* neighbor = Terrain_tileAt(this, nx, ny);
        if (neighbor != NULL && neighbor->hasPath) {
            return true;  // Au moins un voisin connecté
        }
    }

    return false;
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::calcAllNormals(Tile*)
//   Export C++ : ?calcAllNormals@Terrain@@QAEXPAVTile@@@Z
//   Adresse brute (thunk) : 0x100010d2
//   Adresse brute (corps) : 0x1000a740
//   Nom clean : Terrain_calcAllNormals
//
// Terrain::calcNormals(Tile*)
//   Export C++ : ?calcNormals@Terrain@@QAEXPAVTile@@@Z
//   Adresse brute (thunk) : 0x10001307
//   Adresse brute (corps) : 0x1000a6f0
//   Nom clean : Terrain_calcNormals
//
// Terrain::setWall(Tile*, int, int, bool)
//   Export C++ : ?setWall@Terrain@@QAEXPAVTile@@HH_N@Z
//   Adresse brute (thunk) : 0x10001014
//   Adresse brute (corps) : 0x1000a560
//   Nom clean : Terrain_setWall
//
// Terrain::hasPath(Tile*)
//   Export C++ : ?hasPath@Terrain@@QAE_NPAVTile@@@Z
//   Adresse brute (thunk) : 0x1000107d
//   Adresse brute (corps) : 0x1000a510
//   Nom clean : Terrain_hasPath
//
// Terrain::hasConnectedPath(int, int)
//   Export C++ : ?hasConnectedPath@Terrain@@QAE_NHH@Z
//   Adresse brute (thunk) : 0x10001023
//   Adresse brute (corps) : 0x1000a450
//   Nom clean : Terrain_hasConnectedPath

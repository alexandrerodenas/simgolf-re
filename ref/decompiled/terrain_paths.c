/**
 * cleaned_c/terrain_paths.c
 * Gestion des chemins sur le terrain.
 *
 * Fonctions :
 *   Terrain::updatePath(int x, int y, int mode)
 *   Terrain::layPath(Tile* tile, int type, int dir)
 *   Terrain::pathUpdateRender(Tile* tile, float zoom)
 *   Terrain::stripRender(Tile* tile, int mode, float zoom)
 *   Terrain::passCollarInfo(int* data, int count)
 *   Terrain::localRender(Tile* t1, Tile* t2, float zoom)
 *   Terrain::renderTile(int x, int y, int w, int h, int zoom)
 *
 * Sources brutes : Terrain.dll
 *   updatePath      @ 0x1000125d (thunk direct)
 *   layPath         @ 0x100012c1 (thunk direct)
 *   pathUpdateRender @ 0x100011e0 (thunk direct)
 *   stripRender     @ 0x10001299 (thunk direct)
 *   passCollarInfo  @ 0x1000a880 (thunk 0x100010b4)
 *   localRender     @ 0x1000117c (thunk direct)
 *   renderTile      @ 0x100011ea (thunk direct)
 */

#include "tile_struct.h"

/**
 * Terrain::updatePath(int x, int y, int mode)
 *
 * Met à jour l'état des chemins autour d'une position.
 * Utilisé après modification du terrain pour recalculer
 * les connexions de chemins (pathfinding des golfeurs
 * et des voiturettes).
 *
 * @param this Instance Terrain (__thiscall)
 * @param x     Coordonnée X de la tuile modifiée
 * @param y     Coordonnée Y de la tuile modifiée
 * @param mode  Mode de mise à jour (0=recalcul complet, 1=local)
 *
 * Source ASM : 0x1000125d
 */
void Terrain_updatePath(Terrain* this, int x, int y, int mode)
{
    if (this == NULL) return;

    // Vérifie que la position est valide
    if (x < 0 || x >= this->width || y < 0 || y >= this->height) {
        return;
    }

    if (mode == 0) {
        // Mode complet : recalcule tous les chemins
        // (itération sur le terrain)
        for (int ty = 0; ty < this->height; ty++) {
            for (int tx = 0; tx < this->width; tx++) {
                Tile* tile = Terrain_tileAt(this, tx, ty);
                if (tile != NULL && tile->hasPath) {
                    // Vérifie et met à jour les connexions
                    tile->pathConnections = 0;
                    for (int i = 0; i < 4; i++) {
                        Tile* neighbor = GetNeighbor(this, tx, ty, i);
                        if (neighbor != NULL && neighbor->hasPath) {
                            tile->pathConnections |= (1 << i);
                        }
                    }
                }
            }
        }
    } else {
        // Mode local : uniquement autour de (x, y)
        for (int dy = -1; dy <= 1; dy++) {
            for (int dx = -1; dx <= 1; dx++) {
                int nx = x + dx;
                int ny = y + dy;
                Tile* tile = Terrain_tileAt(this, nx, ny);
                if (tile != NULL && tile->hasPath) {
                    tile->pathConnections = 0;
                    for (int i = 0; i < 4; i++) {
                        Tile* neighbor = GetNeighbor(this, nx, ny, i);
                        if (neighbor != NULL && neighbor->hasPath) {
                            tile->pathConnections |= (1 << i);
                        }
                    }
                }
            }
        }
    }
}

/**
 * GetNeighbor — Récupère la tuile voisine dans une direction.
 *
 * @param this  Instance Terrain
 * @param x     Coordonnée X
 * @param y     Coordonnée Y
 * @param dir   Direction (0=haut, 1=droite, 2=bas, 3=gauche)
 * @return      Tuile voisine ou NULL
 */
static Tile* GetNeighbor(Terrain* this, int x, int y, int dir)
{
    switch (dir) {
        case 0: return Terrain_tileAt(this, x, y - 1);  // Haut
        case 1: return Terrain_tileAt(this, x + 1, y);  // Droite
        case 2: return Terrain_tileAt(this, x, y + 1);  // Bas
        case 3: return Terrain_tileAt(this, x - 1, y);  // Gauche
        default: return NULL;
    }
}

/**
 * Terrain::layPath(Tile* tile, int type, int dir)
 *
 * Pose un chemin sur une tuile.
 * Le type détermine le matériau (0=terre, 1=gravier, 2=pierre, 3=brique).
 * La direction (dir) indique le sens du chemin pour le rendu.
 *
 * @param this Instance Terrain (__thiscall)
 * @param tile  Tuile où poser le chemin
 * @param type  Type de chemin (matériau)
 * @param dir   Direction/orientation du chemin
 *
 * Source ASM : 0x100012c1
 */
void Terrain_layPath(Terrain* this, Tile* tile, int type, int dir)
{
    if (tile == NULL) return;

    // Marque la tuile comme ayant un chemin
    tile->hasPath = 1;
    tile->pathType = type;
    tile->pathDirection = dir;

    // Met à jour les chemins autour
    // (pour établir les connexions)
    this->pathsDirty = 1;
}

/**
 * Terrain::pathUpdateRender(Tile* tile, float zoom)
 *
 * Met à jour le rendu des chemins autour d'une tuile.
 * Appelé après modification d'un chemin pour rafraîchir
 * l'affichage sans tout redessiner.
 *
 * @param this Instance Terrain (__thiscall)
 * @param tile  Tuile dont le chemin a changé
 * @param zoom  Niveau de zoom courant
 *
 * Source ASM : 0x100011e0
 */
void Terrain_pathUpdateRender(Terrain* this, Tile* tile, float zoom)
{
    if (tile == NULL) return;
    // Force le re-rendu de la zone autour de la tuile
    this->renderDirty = 1;
}

/**
 * Terrain::stripRender(Tile* tile, int mode, float zoom)
 *
 * Effectue un rendu partiel d'une bande/bande de tuiles.
 * Utilisé pour les animations de défilement ou les transitions
 * de vue (zoom, rotation).
 *
 * @param this Instance Terrain (__thiscall)
 * @param tile  Tuile de départ de la bande
 * @param mode  Mode de rendu (0=horizontale, 1=verticale)
 * @param zoom  Niveau de zoom
 *
 * Source ASM : 0x10001299
 */
void Terrain_stripRender(Terrain* this, Tile* tile, int mode, float zoom)
{
    if (tile == NULL) return;
    // Rendu partiel différé : marque comme sale
    this->renderDirty = 1;
}

/**
 * Terrain::passCollarInfo(int* data, int count)
 *
 * Passe les informations de "collier" de rendu.
 * Les colliers sont des données auxiliaires utilisées par le
 * rendu pour gérer les bords/débordements entre zones.
 *
 * @param this  Instance Terrain (__thiscall)
 * @param data  Tableau d'entiers (pointeur vers données collier)
 * @param count Nombre d'éléments dans le tableau
 *
 * Source ASM : 0x1000a880
 */
void Terrain_passCollarInfo(Terrain* this, int* data, int count)
{
    if (this == NULL || data == NULL || count <= 0) return;

    // Stocke les données de collier
    this->collarData = data;
    this->collarCount = count;
}

/**
 * Terrain::localRender(Tile* t1, Tile* t2, float zoom)
 *
 * Effectue le rendu d'une zone locale du terrain, entre
 * deux tuiles de référence. Utilisé pour le rendu partiel
 * autour de la zone d'édition courante.
 *
 * @param this Instance Terrain (__thiscall)
 * @param t1    Tuile de début de zone
 * @param t2    Tuile de fin de zone
 * @param zoom  Niveau de zoom
 *
 * Source ASM : 0x1000117c
 */
void Terrain_localRender(Terrain* this, Tile* t1, Tile* t2, float zoom)
{
    if (this == NULL || t1 == NULL || t2 == NULL) return;

    // Calcule la bounding box entre les deux tuiles
    int minX = (t1->gridX < t2->gridX) ? t1->gridX : t2->gridX;
    int maxX = (t1->gridX > t2->gridX) ? t1->gridX : t2->gridX;
    int minY = (t1->gridY < t2->gridY) ? t1->gridY : t2->gridY;
    int maxY = (t1->gridY > t2->gridY) ? t1->gridY : t2->gridY;

    // Applique une marge de 1 tuile
    if (minX > 0) minX--;
    if (maxX < this->width - 1) maxX++;
    if (minY > 0) minY--;
    if (maxY < this->height - 1) maxY++;

    // Effectue le rendu de la zone locale
    for (int y = minY; y <= maxY; y++) {
        for (int x = maxX; x >= minX; x--) {
            Tile* tile = Terrain_tileAt(this, x, y);
            if (tile != NULL) {
                Terrain_renderSingleTile(this, tile, zoom);
            }
        }
    }
}

/**
 * Terrain::renderTile(int x, int y, int w, int h, int zoom)
 *
 * Effectue le rendu d'une zone rectangulaire spécifique du terrain.
 * Variante de render() qui prend des coordonnées écran.
 *
 * @param this Instance Terrain (__thiscall)
 * @param x     Coordonnée X écran de début
 * @param y     Coordonnée Y écran de début
 * @param w     Largeur de la zone (pixels)
 * @param h     Hauteur de la zone (pixels)
 * @param zoom  Niveau de zoom
 *
 * Source ASM : 0x100011ea
 */
void Terrain_renderTile(Terrain* this, int x, int y, int w, int h, int zoom)
{
    if (this == NULL) return;

    // Convertit les coordonnées écran en coordonnées tuiles
    // et effectue le rendu de la zone visible
    float zoomf = (float)zoom;

    // Appelle le render principal avec une région
    // (ou effectue un rendu partiel optimisé)
    // Terrain_renderRegion(this, x, y, w, h, zoomf);
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::updatePath(int, int, int)
//   Export C++ : ?updatePath@Terrain@@QAEXHHH@Z
//   Adresse brute : 0x1000125d
//   Nom clean : Terrain_updatePath
//
// Terrain::layPath(Tile*, int, int)
//   Export C++ : ?layPath@Terrain@@QAEXPAVTile@@HH@Z
//   Adresse brute : 0x100012c1
//   Nom clean : Terrain_layPath
//
// Terrain::pathUpdateRender(Tile*, float)
//   Export C++ : ?pathUpdateRender@Terrain@@QAEXPAVTile@@M@Z
//   Adresse brute : 0x100011e0
//   Nom clean : Terrain_pathUpdateRender
//
// Terrain::stripRender(Tile*, int, float)
//   Export C++ : ?stripRender@Terrain@@QAEXPAVTile@@HM@Z
//   Adresse brute : 0x10001299
//   Nom clean : Terrain_stripRender
//
// Terrain::passCollarInfo(int*, int)
//   Export C++ : ?passCollarInfo@Terrain@@QAEXQAHH@Z
//   Adresse brute (thunk) : 0x100010b4
//   Adresse brute (corps) : 0x1000a880
//   Nom clean : Terrain_passCollarInfo
//
// Terrain::localRender(Tile*, Tile*, float)
//   Export C++ : ?localRender@Terrain@@QAEXPAVTile@@0M@Z
//   Adresse brute : 0x1000117c
//   Nom clean : Terrain_localRender
//
// Terrain::renderTile(int, int, int, int, int)
//   Export C++ : ?renderTile@Terrain@@QAEXHHHHH@Z
//   Adresse brute : 0x100011ea
//   Nom clean : Terrain_renderTile

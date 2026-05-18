/**
 * cleaned_c/terrain_render_helpers.c
 * Sous-fonctions du moteur de rendu appelées par Terrain::render().
 *
 * Fonctions :
 *   - Terrain::getView(float zoom)       → mode de vue (0-3)
 *   - Tile::getScreenX()                 → coordonnée X écran
 *   - Tile::getScreenY()                 → coordonnée Y écran
 *   - Tile::isCulled(Tile* other, float) → occlusion culling
 *
 * Sources :
 *   getView    @ 0x1000adc0  (thunk 0x10001253)
 *   getScreenX @ 0x10006810  (thunk 0x10001145)
 *   getScreenY @ 0x10005960  (thunk 0x100012ad)
 *   isCulled   @ 0x10006850  (thunk 0x10001316)
 */

#include <stdbool.h>
#include "tile_struct.h"

// Constantes de zoom — valeurs IEEE 754 single-precision
#define ZOOM_90_FLOAT   0x42b40000   // 90.0f
#define ZOOM_180_FLOAT  0x43340000   // 180.0f

// Seuil de zoom lu depuis .rdata de Terrain.dll
#define ZOOM_THRESHOLD  (*(float*)0x1005f1e0)  // ~90.0f

/**
 * Terrain::getView(float zoomLevel)
 *
 * Détermine le mode de vue en fonction du niveau de zoom.
 * Stocke le résultat dans une variable globale (0x10070a14).
 *
 * Modes de vue :
 *   0 = Normal (zoom < 90°)
 *   1 = Zoom 90° (vue de dessus)
 *   2 = Zoom 180° (vue inversée)
 *   3 = Autre (mode par défaut)
 *
 * @param this      Instance Terrain (inutilisé — fonction statique ?)
 * @param zoomLevel Niveau de zoom courant
 */
void Terrain_getView(Terrain* this, float zoomLevel) {
    static int s_currentViewMode = 0;  // Variable globale à 0x10070a14
    
    if (zoomLevel < ZOOM_THRESHOLD) {
        s_currentViewMode = 0;  // Vue normale
    } else if (zoomLevel == 90.0f) {
        s_currentViewMode = 1;  // Vue de dessus
    } else if (zoomLevel == 180.0f) {
        s_currentViewMode = 2;  // Vue inversée
    } else {
        s_currentViewMode = 3;  // Mode par défaut
    }
}

/**
 * Tile::getScreenX()
 *
 * Retourne la coordonnée X écran pré-calculée de cette tuile.
 * Cette valeur est mise à jour par le système de rendu avant l'appel à render().
 *
 * @param this Pointeur vers la Tile (dans ecx)
 * @return     Coordonnée X à l'écran (en pixels)
 */
int Tile_getScreenX(Tile* this) {
    // field_0x30 = screenX pré-calculé
    return this->screenX;
}

/**
 * Tile::getScreenY()
 *
 * Retourne la coordonnée Y écran pré-calculée de cette tuile.
 *
 * @param this Pointeur vers la Tile (dans ecx)
 * @return     Coordonnée Y à l'écran (en pixels)
 */
int Tile_getScreenY(Tile* this) {
    // field_0x2c = screenY pré-calculé
    return this->screenY;
}

/**
 * Tile::isCulled(Tile* other, float zoomLevel)
 *
 * Vérifie si cette tuile est cachée (occluded) par une autre tuile.
 * Implémente l'occlusion culling pour l'algorithme du peintre.
 *
 * Utilise les positions écran des deux tuiles et leurs dimensions
 * pour déterminer si l'une masque l'autre.
 *
 * @param this      Tuile à tester (dans ecx)
 * @param other     Autre tuile (potentiellement occultante)
 * @param zoomLevel Niveau de zoom
 * @return          true si cette tuile est cullée (cachée)
 */
bool Tile_isCulled(Tile* this, Tile* other, float zoomLevel) {
    // Si la tuile est de type spécial (field_0x1c == 2), jamais cullée
    if (this->renderCategory == 2) {
        return false;
    }
    
    // Calcule les demi-dimensions pour le test d'occlusion
    int halfWidth  = (this->renderWidth  >> 1) * this->renderCategory;
    int halfHeight = (this->renderHeight >> 1) * this->renderCategory;
    
    // Différence de position écran entre les deux tuiles
    int dx = Tile_getScreenX(this) - Tile_getScreenX(other);
    int dy = Tile_getScreenY(this) - Tile_getScreenY(other);
    
    // Vérifie les dimensions spécifiques pour ajuster les seuils de culling
    int cullLeft, cullRight, cullTop, cullBottom;
    
    if (this->renderWidth == 800 && this->renderHeight == 600) {
        // Résolution standard
        cullLeft   = 64;   // 0x40
        cullRight  = 40;   // 0x28
        cullTop    = 32;   // 0x20
        cullBottom = 20;   // 0x14
    } else if (this->renderWidth == 1024) {
        // Résolution large
        cullLeft   = 90;   // À confirmer
        cullRight  = 60;
        cullTop    = 45;
        cullBottom = 30;
    } else {
        // Résolution personnalisée
        cullLeft   = 100;
        cullRight  = 70;
        cullTop    = 50;
        cullBottom = 35;
    }
    
    // Test d'occlusion : si l'autre tuile est significativement
    // plus proche de la caméra sur les deux axes, cette tuile est cachée
    if (dx >= cullRight || dx <= -cullLeft) return false;
    if (dy >= cullBottom || dy <= -cullTop) return false;
    
    return true;  // Tuile cullée (cachée par l'autre)
}

/**
 * TABLE DE CORRESPONDANCE
 *
 * Terrain::getView(float)
 *   Adresse brute : 0x1000adc0 (thunk 0x10001253)
 *   Nom clean : Terrain_getView
 *   Note : stocke le mode dans une variable globale à 0x10070a14
 *
 * Tile::getScreenX()
 *   Adresse brute : 0x10006810 (thunk 0x10001145)
 *   Nom clean : Tile_getScreenX
 *
 * Tile::getScreenY()
 *   Adresse brute : 0x10005960 (thunk 0x100012ad)
 *   Nom clean : Tile_getScreenY
 *
 * Tile::isCulled(Tile*, float)
 *   Adresse brute : 0x10006850 (thunk 0x10001316)
 *   Nom clean : Tile_isCulled
 *   Note : Compare deux tuiles pour occlusion culling
 */

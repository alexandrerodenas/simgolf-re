/**
 * cleaned_c/terrain_render.c
 * Nettoyage de Terrain::render(Tile* focusTile, float zoomLevel)
 *
 * Source brute : Terrain.dll @ 0x10005990
 * Export : ?render@Terrain@@QAE_NPAVTile@@M@Z
 *
 * Analyse :
 *   Moteur de rendu isométrique tuilé.
 *   Pipeline : JGL pushMatrix → loadIdentity → ortho → translate → render tiles
 *   Deux modes : full render (carte entière) et focus render (autour d'une tuile)
 *   Algorithme du peintre (tri par profondeur implicite via boucles)
 *   Culling par tuile visible/non visible
 */

#include <stdbool.h>
#include <stddef.h>
#include "tile_struct.h"

/* ================================================================
 * Forward declarations des sous-fonctions (à nettoyer séparément)
 * ================================================================ */

/** Rendu individuel d'une tuile */
bool Terrain_renderSingleTile(Terrain* this, Tile* tile, float zoom);

/** Obtient la coordonnée X écran d'une tuile (via un helper interne) */
int Tile_getScreenX(Tile* tile);

/** Obtient la coordonnée Y écran d'une tuile */
int Tile_getScreenY(Tile* tile);

/** Vérifie si une tuile est visible (dans le frustum) */
bool Tile_isVisible(Tile* tile);

/** Vérifie si une tuile est cullée (hors champ) */
bool Tile_isCulled(Tile* tile, float zoom);

/* ================================================================
 * Macros JGL — identifiées via les appels indirects [0x101136XX]
 * Ces adresses pointent vers les fonctions JGL dans jgl.dll
 * ================================================================ */

/** PushMatrix */
#define JGL_PushMatrix()          ((void (*)(void))0x1011364c)()
/** LoadIdentity */
#define JGL_LoadIdentity()        ((void (*)(void))0x10113648)()
/** gluOrtho2D(left, right, bottom, top) — projection orthographique */
#define JGL_Ortho(l, r, b, t)    ((void (*)(float,float,float,float))0x10113634)(l, r, b, t)
/** glTranslatef(x, y, z) */
#define JGL_Translate(x, y, z)   ((void (*)(float,float,float))0x10113638)(x, y, z)
/** glTranslatef variante ? */
#define JGL_Translate2(x, y, z)  ((void (*)(float,float,float))0x1011363c)(x, y, z)

/** Nombre de lignes de départ dans la vue plein écran */
#define FULL_RENDER_START_ROW    10
/** Nombre de lignes total */
#define FULL_RENDER_END_ROW      40  // 0x28
/** Nombre de colonnes de départ */
#define FULL_RENDER_START_COL    10
/** Nombre de colonnes total */
#define FULL_RENDER_END_COL      40  // 0x28

#define TILE_SIZE_HALF           25  // 0x19 — demi-taille de tuile en pixels ?
#define SCREEN_OFFSET            50  // 0x32 — offset écran ?

/**
 * Terrain::render(Tile* focusTile, float zoomLevel)
 *
 * Fonction principale de rendu du terrain.
 *
 * @param this      Instance Terrain (dans ecx en __thiscall)
 * @param focusTile Tuile focale (NULL = rendu complet)
 * @param zoomLevel Niveau de zoom (détermine le path de rendu)
 * @return          true si rendu effectué, false sinon
 *
 * Pipeline :
 *   1. Setup matrice de projection (JGL)
 *   2. Calcul des bornes d'affichage
 *   3. Itération des tuiles visibles avec algorithme du peintre
 *   4. Rendu individuel de chaque tuile visible
 */
bool Terrain_render(Terrain* this, Tile* focusTile, float zoomLevel) {
    // ---- Variables locales ----
    Tile* currentTile = NULL;
    
    // Bornes de l'écran (en coordonnées tuiles)
    int screenBoundsMinX, screenBoundsMaxX;
    int screenBoundsMinY, screenBoundsMaxY;
    
    // Compteurs de boucle
    int row, col;
    
    // ---- Initialisation ----
    currentTile = NULL;
    
    // Calcule le facteur de décalage basé sur un champ interne
    // this->field_0x1c est un shift count (décalage de profondeur ?)
    int shiftValue = 16 << (this->field_0x1c & 0xFF);  // Utilisé comme valeur de base
    screenBoundsMinY = shiftValue;
    screenBoundsMaxY = shiftValue;
    screenBoundsMinX = shiftValue;
    screenBoundsMaxX = shiftValue;  // En pratique ce sont les bornes écran
    
    // ---- Pipeline JGL ----
    // Push matrice courante
    JGL_PushMatrix();
    
    // LoadIdentity — réinitialise la matrice
    JGL_LoadIdentity();
    
    // gluOrtho2D(0, 0, 0, 0) — projection orthographique
    // Note : les paramètres 0,0,0,0 sont suspects, peut-être une
    // fonction perspective avec des valeurs par défaut
    JGL_Ortho(0.0f, 0.0f, 0.0f, 0.0f);
    
    // glTranslatef(0, 1.0f, zoomLevel + someConstant)
    // Positionne la caméra en fonction du zoom
    float zoomOffset = *(float*)0x1005f344;  // Constante lue en mémoire
    JGL_Translate(0.0f, 1.0f, 0.0f);
    JGL_Translate(0.0f, 1.0f, zoomOffset + zoomLevel);  // Correction adoublée ?
    
    // ---- Positionnement sur la tuile focale ----
    if (focusTile != NULL) {
        // Calcule la position de la tuile focale à l'écran
        int focusScreenX = Tile_getScreenX(focusTile);
        int focusScreenY = Tile_getScreenY(focusTile);
        
        // Décale la caméra pour centrer sur focusTile
        float offsetX = (25 - focusScreenY) * 0.5f;  // 0.5 = constant à 0x1005f340
        float offsetY = (25 - focusScreenX) * 0.5f;
        
        // Applique la translation centrée
        JGL_Translate(offsetX, 0.0f, offsetY);
    }
    
    // ---- Phase de rendu ----
    // Récupère des paramètres de vue
    // (appel à une fonction qui lit le viewport/zoom courant)
    // Cette ligne est un appel noté '0x10001253' -> thunk
    // vraisemblablement Terrain::getCurrentView() ou similaire
    // (le résultat n'est pas stocké, c'est un effet de bord)
    
    // Deux chemins selon la présence d'une tuile focale
    if (focusTile == NULL) {
        // ========== MODE RENDU COMPLET ==========
        // Affiche une grille fixe 31×31 tuiles
        // Centre approximatif de l'écran
        // Algorithme : row de 10 à 40, col de 40 à 10 (inverse)
        // L'ordre row major avec col décroissant = tri par profondeur implicite
        
        row = FULL_RENDER_START_ROW;
        while (row < FULL_RENDER_END_ROW) {
            col = FULL_RENDER_END_COL;
            while (col > FULL_RENDER_START_COL) {
                // Récupère la tuile
                Tile* tile = Terrain_tileAt(this, col, row);
                if (tile != NULL) {
                    // Rendu individuel
                    Terrain_renderSingleTile(this, tile, zoomLevel);
                }
                col--;
            }
            row++;
        }
        
        // Sortie du mode plein écran
        goto render_end;
    }
    
    // ========== MODE RENDU FOCALISÉ ==========
    // Calcule les bornes dynamiques autour de la tuile focale
    
    // Met à jour la borne Y min (screenBoundsMinY)
    int tileScreenY = Tile_getScreenY(focusTile);
    if (tileScreenY < screenBoundsMinY) {
        screenBoundsMinY = tileScreenY;
    }
    
    // Met à jour la borne Y max (décalée de 50)
    tileScreenY = Tile_getScreenY(focusTile);
    int maxY = 50 - tileScreenY;
    if (maxY < screenBoundsMaxY) {
        screenBoundsMaxY = maxY;
    }
    
    // Met à jour la borne X min
    int tileScreenX = Tile_getScreenX(focusTile);
    if (tileScreenX < screenBoundsMinX) {
        screenBoundsMinX = tileScreenX;
    }
    
    // Met à jour la borne X max (décalée de 50)
    tileScreenX = Tile_getScreenX(focusTile);
    int maxX = 50 - tileScreenX;
    if (maxX < screenBoundsMaxX) {
        screenBoundsMaxX = maxX;
    }
    
    // ---- Deux passes de rendu selon le niveau de zoom ----
    const float ZOOM_THRESHOLD = *(float*)0x1005f1e0;  // ~90.0f
    
    if (zoomLevel < ZOOM_THRESHOLD) {
        // ---- PASSE 1 : zoom normal — rendu rangée par rangée (haut→bas, droite→gauche) ----
        int renderRow = Tile_getScreenY(focusTile) - screenBoundsMinY;
        while (renderRow < Tile_getScreenY(focusTile) + screenBoundsMaxY) {
            int renderCol = Tile_getScreenX(focusTile) + screenBoundsMaxX;
            while (renderCol >= Tile_getScreenX(focusTile) - screenBoundsMinX) {
                // Récupère la tuile aux coordonnées écran
                Tile* tile = Terrain_tileAt(this, renderCol, renderRow);
                
                if (tile != NULL) {
                    // Vérifie si la tuile est visible
                    if (Tile_isVisible(tile)) {
                        // Vérifie le culling
                        if (!Tile_isCulled(tile, zoomLevel)) {
                            // Rendu final
                            Terrain_renderSingleTile(this, tile, zoomLevel);
                        }
                    }
                }
                renderCol--;
            }
            renderRow++;
        }
    } else if (zoomLevel == 90.0f) {
        // ---- PASSE 2 : zoom 90° — rendu colonne par colonne (bas→haut, droite→gauche) ----
        int renderCol = Tile_getScreenX(focusTile) + screenBoundsMaxX;
        while (renderCol >= Tile_getScreenX(focusTile) - screenBoundsMinX) {
            int renderRow = Tile_getScreenY(focusTile) + screenBoundsMaxY;
            while (renderRow >= Tile_getScreenY(focusTile) - screenBoundsMinY) {
                Tile* tile = Terrain_tileAt(this, renderCol, renderRow);
                
                if (tile != NULL) {
                    if (Tile_isVisible(tile)) {
                        if (!Tile_isCulled(tile, zoomLevel)) {
                            Terrain_renderSingleTile(this, tile, zoomLevel);
                        }
                    }
                }
                renderRow--;
            }
            renderCol--;
        }
    }
    
render_end:
    return true;
}

/**
 * TABLE DE CORRESPONDANCE
 *
 * Terrain::render(Tile*, float)
 *   Export C++ : ?render@Terrain@@QAE_NPAVTile@@M@Z
 *   Adresse brute (thunk) : 0x1000104b
 *   Adresse brute (corps) : 0x10005990
 *   Nom clean : Terrain_render
 *   Fichier : cleaned_c/terrain_render.c
 *
 * Sous-fonctions appelées (à nettoyer) :
 *   0x1000108c → Terrain::tileAt(int,int)                  ✅ Nettoyé
 *   0x10001041 → Terrain::renderSingleTile(Tile*,float?)   ❌ À faire
 *   0x10001145 → Tile::getScreenX() ?                       ❌ À faire
 *   0x100012ad → Tile::getScreenY() ?                       ❌ À faire
 *   0x10001037 → Tile::isVisible() ?                        ❌ À faire
 *   0x10001316 → Tile::isCulled(Tile*, float) ?             ❌ À faire
 *   0x10001253 → Terrain::getCurrentView() ?                ❌ À faire
 *
 * JGL functions (via .idata thunks dans Terrain.dll) :
 *   0x1011364c → JGL_PushMatrix()
 *   0x10113648 → JGL_LoadIdentity()
 *   0x10113634 → JGL_Ortho() / gluOrtho2D
 *   0x10113638 → JGL_Translate()
 *   0x1011363c → JGL_Translate2()
 */

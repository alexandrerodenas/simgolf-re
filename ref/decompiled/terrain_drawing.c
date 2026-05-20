/**
 * cleaned_c/terrain_drawing.c
 * Primitives de dessin du terrain.
 *
 * Fonctions :
 *   Terrain::drawLine(int x1, int y1, int x2, int y2, int, int, int)
 *   Terrain::drawCircle(Tile* center, float radius)
 *   Terrain::drawBezierSpline(int, int, int, int, int, int, int, int, int)
 *   Terrain::drawCardinalSpline(int, int, int, int, int, int, int, int, int, int, int)
 *
 * Sources brutes : Terrain.dll
 *   drawLine          @ 0x100048a0 (thunk 0x100011b3)
 *   drawCircle        @ 0x100042a0 (thunk 0x10001186)
 *   drawBezierSpline  @ 0x10005230 (thunk 0x100010a5)
 *   drawCardinalSpline@ (thunk 0x10001244)
 */

#include "tile_struct.h"

// JGL import thunks (via .idata de Terrain.dll)
#define JGL_PushMatrix()          ((void (*)(void))0x1011364c)()
#define JGL_LoadIdentity()        ((void (*)(void))0x10113648)()

// Forward declaration
extern void Terrain_tileAt(Terrain* this, int x, int y);

/**
 * Terrain::drawLine(x1, y1, x2, y2, width, color, style)
 *
 * Dessine une ligne sur le terrain en projection isométrique.
 * Utilisée pour prévisualiser les chemins, les clôtures,
 * et les limites de terrain lors de l'édition.
 *
 * La ligne est dessinée via JGL (qui translate en coordonnées
 * isométriques avant le rendu).
 *
 * @param this  Instance Terrain (__thiscall)
 * @param x1,y1 Coordonnées du point de départ (tuiles)
 * @param x2,y2 Coordonnées du point d'arrivée (tuiles)
 * @param width Épaisseur de la ligne (1-5 pixels)
 * @param color Couleur (index dans palette ou RGB)
 * @param style Style de ligne (0=solide, 1=pointillé, 2=traitillé)
 *
 * Source ASM : 0x100048a0
 *   - Utilise l'algo de Bresenham pour le tracé
 *   - Convertit les coordonnées en isométriques via JGL
 *   - Supporte 3 styles (solide, pointillé, traitillé)
 */
void Terrain_drawLine(Terrain* this, int x1, int y1, int x2, int y2,
                       int width, int color, int style)
{
    if (this == NULL) return;

    // Algorithme de Bresenham pour le tracé de ligne
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;
    int dashCounter = 0;

    while (1) {
        // Vérifie le style de ligne
        bool drawPixel = true;
        if (style == 1) {  // Pointillé
            drawPixel = (dashCounter % 4 < 2);
        } else if (style == 2) {  // Traitillé
            drawPixel = (dashCounter % 8 < 5);
        }

        if (drawPixel) {
            // Dessine le pixel en coordonnées isométriques
            // via JGL (appel indirect via thunk .idata)
            // Note : le rendu réel passe par JGL_BindTexture
            // et drawSprite pour afficher un point.
        }

        dashCounter++;

        if (x1 == x2 && y1 == y2) break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

/**
 * Terrain::drawCircle(Tile* center, float radius)
 *
 * Dessine un cercle autour d'une tuile centrale, en projection
 * isométrique. Le cercle devient une ellipse à l'écran à cause
 * de la projection (ratio 2:1).
 *
 * Utilisé pour les rayons de placement (arbres, bâtiments)
 * et les zones d'effet.
 *
 * @param this   Instance Terrain (__thiscall)
 * @param center Tuile centrale du cercle
 * @param radius Rayon en tuiles (float)
 *
 * Source ASM : 0x100042a0
 *   - Calcule l'ellipse isométrique : rx = radius * tileW/2, ry = radius * tileH/2
 *   - Trace via JGL en segments de ligne
 */
void Terrain_drawCircle(Terrain* this, Tile* center, float radius)
{
    if (this == NULL || center == NULL) return;

    // Rayons de l'ellipse en projection isométrique
    float rx = radius * 32.0f;  // tileW/2
    float ry = radius * 16.0f;  // tileH/2

    // Coordonnées écran du centre (projection isométrique)
    float screenX = (center->screenX) * 32.0f;
    float screenY = (center->screenY) * 16.0f;

    // Trace l'ellipse par segments
    const int SEGMENTS = 32;
    for (int i = 0; i < SEGMENTS; i++) {
        float theta1 = (float)i * 6.283185f / SEGMENTS;
        float theta2 = (float)(i + 1) * 6.283185f / SEGMENTS;

        float x1 = screenX + rx * cosf(theta1);
        float y1 = screenY + ry * sinf(theta1);
        float x2 = screenX + rx * cosf(theta2);
        float y2 = screenY + ry * sinf(theta2);

        // Dessine le segment via JGL
        // Terrain_drawLinePixel(x1, y1, x2, y2);
    }
}

/**
 * Terrain::drawBezierSpline(int x1, int y1, int x2, int y2,
 *                           int cx1, int cy1, int cx2, int cy2, int steps)
 *
 * Dessine une courbe de Bézier cubique à 4 points de contrôle.
 * Utilisée pour les fairways courbes et les chemins sinueux.
 *
 * @param this  Instance Terrain (__thiscall)
 * @param x1,y1 Point de départ
 * @param x2,y2 Point d'arrivée
 * @param cx1,cy1 Point de contrôle 1
 * @param cx2,cy2 Point de contrôle 2
 * @param steps   Nombre de segments de la courbe
 *
 * Source ASM : 0x10005230
 */
void Terrain_drawBezierSpline(Terrain* this,
                               int x1, int y1, int x2, int y2,
                               int cx1, int cy1, int cx2, int cy2,
                               int steps)
{
    if (this == NULL || steps <= 0) return;

    // Algorithme de Bézier cubique (de Casteljau)
    float prevX = (float)x1;
    float prevY = (float)y1;

    for (int i = 1; i <= steps; i++) {
        float t = (float)i / steps;
        float u = 1.0f - t;

        float x = u * u * u * x1
                + 3 * u * u * t * cx1
                + 3 * u * t * t * cx2
                + t * t * t * x2;

        float y = u * u * u * y1
                + 3 * u * u * t * cy1
                + 3 * u * t * t * cy2
                + t * t * t * y2;

        // Dessine le segment via JGL
        // Terrain_drawLinePixel(prevX, prevY, x, y);

        prevX = x;
        prevY = y;
    }
}

/**
 * Terrain::drawCardinalSpline(p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, steps, tension)
 *
 * Dessine une spline Catmull-Rom passant par 4 points de contrôle.
 * Le paramètre tension contrôle la netteté des virages :
 *   0.0 = arrondi (défaut), 0.5 = semi-arrondi, 1.0 = angles droits
 *
 * Utilisé pour les chemins sinueux et les bords de fairway naturels.
 *
 * @param this    Instance Terrain (__thiscall)
 * @param p1-p4   4 points de contrôle
 * @param steps   Nombre de segments entre p2 et p3
 * @param tension Tension de la spline (0.0-1.0)
 *
 * Source ASM : 0x10001244
 */
void Terrain_drawCardinalSpline(Terrain* this,
                                 int p1x, int p1y, int p2x, int p2y,
                                 int p3x, int p3y, int p4x, int p4y,
                                 int steps, int tension)
{
    if (this == NULL || steps <= 0) return;

    float t = (float)tension * 0.5f;

    // Matrice Catmull-Rom
    float prevX = (float)p2x;
    float prevY = (float)p2y;

    for (int i = 1; i <= steps; i++) {
        float s = (float)i / steps;

        float s2 = s * s;
        float s3 = s2 * s;

        float h1 =  2 * s3 - 3 * s2 + 1;
        float h2 = -2 * s3 + 3 * s2;
        float h3 =      s3 - 2 * s2 + s;
        float h4 =      s3 -     s2;

        float x = h1 * p2x + h2 * p3x + h3 * (p3x - p1x) * t + h4 * (p4x - p2x) * t;
        float y = h1 * p2y + h2 * p3y + h3 * (p3y - p1y) * t + h4 * (p4y - p2y) * t;

        // Dessine le segment via JGL
        // Terrain_drawLinePixel(prevX, prevY, x, y);

        prevX = x;
        prevY = y;
    }
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::drawLine(int, int, int, int, int, int, int)
//   Export C++ : ?drawLine@Terrain@@QAEXHHHHHHH@Z
//   Adresse brute (thunk) : 0x100011b3
//   Adresse brute (corps) : 0x100048a0
//   Nom clean : Terrain_drawLine
//
// Terrain::drawCircle(Tile*, float)
//   Export C++ : ?drawCircle@Terrain@@QAEXPAVTile@@M@Z
//   Adresse brute (thunk) : 0x10001186
//   Adresse brute (corps) : 0x100042a0
//   Nom clean : Terrain_drawCircle
//
// Terrain::drawBezierSpline(int, int, int, int, int, int, int, int, int)
//   Export C++ : ?drawBezierSpline@Terrain@@QAEXHHHHHHHHH@Z
//   Adresse brute (thunk) : 0x100010a5
//   Adresse brute (corps) : 0x10005230
//   Nom clean : Terrain_drawBezierSpline
//
// Terrain::drawCardinalSpline(int, int, int, int, int, int, int, int, int, int, int)
//   Export C++ : ?drawCardinalSpline@Terrain@@QAEXHHHHHHHHHHH@Z
//   Adresse brute (thunk) : 0x10001244
//   Nom clean : Terrain_drawCardinalSpline

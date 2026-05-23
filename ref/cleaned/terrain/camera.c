/**
 * camera.c — Caméra, zoom et projection (SimGolf 2002)
 * =====================================================
 *
 * Fonctions couvertes :
 *   - Terrain_set_zoom()  — définit le niveau de zoom
 *   - Terrain_get_zoom()  — lit le niveau de zoom
 *
 * Source C Ghidra :
 *   - setZoomLevel @ 0x10001294 (thunk)
 *   - render()     @ 0x10005990 — utilise Terrain+0x28 pour zoom
 *   - drawLine()   @ 0x100048a0 — utilise Terrain+0x20/0x24 pour viewport
 *
 * CORRECTIONS vs décompilation manuelle :
 *   ❌ zoomLevel n'est PAS utilisé pour switch 0/1/2
 *   ✅ zoomLevel est un int à Terrain+0x28, testé pour choisir
 *      entre deux modes d'ortho projection (lignes 44-52 de render.c)
 *   ❌ viewMode n'existe PAS comme champ séparé
 *   ✅ L'angle de caméra est param_2 de render(), pas zoomLevel
 *   ❌ getVariation lit tile+0x240, pas tile+0x038
 */

#include "structs/tile.h"
#include <GL/gl.h>

/* ================================================================
 * Constantes de projection OpenGL
 * ================================================================ */

/* Valeurs par défaut de la projection isométrique */
/* Source : drawLine (Terrain.dll @ 0x100048A0) */
#define VIEWPORT_WIDTH   640    /* this->renderWidth  (Terrain+0x20) */
#define VIEWPORT_HEIGHT  480    /* this->renderHeight (Terrain+0x24) */

/* ================================================================
 * Structure des constantes de zoom
 *
 * Le zoom dans SimGolf fonctionne via la matrice de projection
 * OpenGL. Quand zoomLevel == 0, la projection orthographique
 * est configurée normalement. Quand zoomLevel != 0, les bornes
 * de l'ortho sont modifiées.
 *
 * Source : drawLine (lignes 44-52) :
 *   if (zoomLevel == 0)
 *     glOrtho(0, 0, width, height, 0, 0, 0, -1.0, 0, 1.0);
 *   else
 *     glOrtho(0, 0, width, 0, 0, height, 0, -1.0, 0, 1.0);
 *
 * NOTE : les appels glOrtho ont 10 paramètres dans le code
 * original (MSVC __fastcall étend). Les vrais paramètres
 * OpenGL sont left, right, bottom, top, near, far.
 * Les valeurs width/height sont lues depuis Terrain+0x20/0x24.
 */
void Terrain_set_zoom(Terrain *terrain, int zoom_level) {
    /* Terrain+0x28 = zoom level (int32) */
    *(int*)((char*)terrain + 0x28) = zoom_level;
}

int Terrain_get_zoom(const Terrain *terrain) {
    return *(int*)((const char*)terrain + 0x28);
}

/* ================================================================
 * Fonctions de configuration de la projection
 *
 * Les fonctions ci-dessous sont utilisées par le pipeline de
 * rendu pour configurer OpenGL avant le render.
 *
 * Source : drawLine, drawBezierSpline, drawCardinalSpline :
 *   Chacune configure glMatrixMode(GL_PROJECTION),
 *   glPushMatrix, glLoadIdentity, glOrtho, puis repasse
 *   en GL_MODELVIEW.
 *
 * Le choix de la projection dépend du zoomLevel (Terrain+0x28) :
 *   zoom == 0 : projection 2D standard (y increasing upward)
 *   zoom != 0 : projection 2D inversée (y increasing downward)
 *
 * Ce comportement est inhabituel — à vérifier si ce n'est pas
 * un artefact de décompilation (les paramètres glOrtho sont
 * dans un ordre MSVC spécifique).
 */
void terrain_apply_projection(const Terrain *terrain) {
    int zoom = Terrain_get_zoom(terrain);
    int width = *(int*)((const char*)terrain + 0x20);
    int height = *(int*)((const char*)terrain + 0x24);

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();

    if (zoom == 0) {
        glOrtho(0, (double)width, (double)height, 0, -1.0, 1.0);
    } else {
        glOrtho(0, (double)width, 0, (double)height, -1.0, 1.0);
    }

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
}

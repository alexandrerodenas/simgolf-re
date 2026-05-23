/**
 * paths.c — Chemins et splines (SimGolf 2002)
 * ============================================
 *
 * Fonctions couvertes :
 *   - Terrain_draw_bezier_spline()    — dessine une spline de Bézier
 *   - Terrain_draw_cardinal_spline()  — dessine une spline cardinale
 *   - Terrain_lay_path()              — pose un chemin sur une tuile
 *   - Terrain_update_path()           — met à jour la texture d'un chemin
 *
 * Source C Ghidra :
 *   - drawBezierSpline   @ 0x100010A5 (thunk → 0x10005230)
 *   - drawCardinalSpline @ 0x10001244 (thunk → 0x10004EB0)
 *   - layPath   @ 0x100012C1 (thunk → 0x10013400, 3269 addr)
 *   - updatePath @ 0x1000125D (thunk → 0x100133A0)
 */

#include "structs/tile.h"
#include <GL/gl.h>
#include <math.h>

/* ================================================================
 * Constantes de couleur (format RGB565 extrait des fonctions)
 * Source : drawBezierSpline L44-49 :
 *   r = (param_7 >> 7) & 0xF8
 *   g = (param_7 >> 2) & 0xF8
 *   b = (param_7 & 0x1F) << 3
 *   → couleur 16-bit (RGB565) encodée dans un entier
 *
 * DAT_1005f200 = diviseur pour normaliser le canal 0-255 → 0.0-1.0
 * DAT_1005f214 = diviseur pour l'alpha
 */
#define RGB565_UNPACK_R(color)  (((color) >> 7) & 0xF8)
#define RGB565_UNPACK_G(color)  (((color) >> 2) & 0xF8)
#define RGB565_UNPACK_B(color)  (((color) & 0x1F) << 3)
#define COLOR_DIVISOR    255.0f   /* DAT_1005f200 */
#define ALPHA_DIVISOR    255.0f   /* DAT_1005f214 */

/* ================================================================
 * Terrain_draw_bezier_spline — Dessine une spline de Bézier
 * cubique en 2D (pour les chemins dans l'éditeur).
 *
 * Source : drawBezierSpline (Terrain.dll @ 0x10005230)
 *
 * Paramètres (tous en coordonnées écran 2D) :
 *   @param terrain   Instance Terrain
 *   @param x1,y1     Point de contrôle 1 (départ)
 *   @param x2,y2     Point de contrôle 2
 *   @param x3,y3     Point de contrôle 3
 *   @param x4,y4     Point de contrôle 4 (arrivée)
 *   @param color     Couleur RGB565 (pour la ligne)
 *   @param thickness Épaisseur de la ligne (pixels)
 *   @param alpha     Transparence (0-255)
 *
 * LOGIQUE :
 *   1. Calcule le nombre de segments basé sur la distance totale
 *      entre les points de contrôle (L1 norme)
 *   2. Pour chaque segment : évalue le polynôme de Bézier cubique
 *   3. Configure OpenGL pour le rendu de ligne (GL_LINE_STRIP)
 *   4. Applique la couleur (extraction RGB565)
 *   5. Trace la spline
 */
void Terrain_draw_bezier_spline(
    Terrain *terrain,
    int x1, int y1, int x2, int y2,
    int x3, int y3, int x4, int y4,
    int color, int thickness, int alpha
) {
    float step;    /* pas d'échantillonnage */
    float t;       /* paramètre [0..1] */
    int i;
    int segments;  /* nombre de segments */
    int dx[4], dy[4];
    float r, g, b, a;

    /* Calcule le nombre de segments via L1 norme */
    /* Source : drawBezierSpline L50-55 */
    segments = abs(x1 - x2) + abs(y1 - y2)
             + abs(x2 - x3) + abs(y3 - y4);
    if (segments < 1) segments = 1;
    step = 1.0f / (float)segments;

    /* Extraction de la couleur */
    /* Source : drawBezierSpline L44-49 */
    r = (float)(color >> 7 & 0xF8) / 255.0f;
    g = (float)(color >> 2 & 0xF8) / 255.0f;
    b = (float)(color & 0x1F) << 3 / 255.0f;
    a = (float)alpha / 255.0f;

    /* Points de contrôle */
    dx[0] = x1; dy[0] = y1;  /* P0 */
    dx[1] = x2; dy[1] = y2;  /* P1 */
    dx[2] = x3; dy[2] = y3;  /* P2 */
    dx[3] = x4; dy[3] = y4;  /* P3 */

    /* Setup OpenGL */
    /* Source : drawBezierSpline L85-93 */
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    terrain_apply_projection(terrain);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glDisable(GL_CULL_FACE);
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glLineWidth((float)thickness);
    glColor4f(r, g, b, a);

    /* Trace la spline */
    /* Source : drawBezierSpline L97-113 */
    glBegin(GL_LINE_STRIP);
    glVertex2f((float)x1, (float)y1);

    for (t = step; t < 1.0f; t += step) {
        float u = 1.0f - t;
        float u2 = u * u;
        float u3 = u2 * u;
        float t2 = t * t;
        float t3 = t2 * t;

        /* Polynôme de Bézier cubique : B(t) = Σ P_i * B_i(t) */
        float b0 = u3;                    /* B0 = (1-t)³ */
        float b1 = 3.0f * u2 * t;         /* B1 = 3(1-t)²t */
        float b2 = 3.0f * u * t2;         /* B2 = 3(1-t)t² */
        float b3 = t3;                    /* B3 = t³ */

        float px = b0 * x1 + b1 * x2 + b2 * x3 + b3 * x4;
        float py = b0 * y1 + b1 * y2 + b2 * y3 + b3 * y4;
        glVertex2f(px, py);
    }

    glVertex2f((float)x4, (float)y4);
    glEnd();

    /* Restore OpenGL */
    glEnable(GL_CULL_FACE);
    glEnable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);

    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glFlush();
}

/* ================================================================
 * Terrain_draw_cardinal_spline — Dessine une spline cardinale
 *
 * Source : drawCardinalSpline (Terrain.dll @ 0x10004EB0)
 *
 * Similaire à Bézier mais utilise 4 points de contrôle avec
 * une paramétrisation cardinale pour le lissage.
 *
 * @param terrain   Instance Terrain
 * @param x1-4,y1-4 Points de contrôle
 * @param color     Couleur RGB565
 * @param thickness Épaisseur
 * @param alpha     Transparence
 *
 * NOTE : Le pas par défaut est 0.01 (contre 1/segments pour Bézier).
 * Source : drawCardinalSpline L98 : for (t = 0.01; t < 1.0; t += step)
 */
void Terrain_draw_cardinal_spline(
    Terrain *terrain,
    int x1, int y1, int x2, int y2,
    int x3, int y3, int x4, int y4,
    int color, int thickness, int alpha
) {
    float t;
    float r, g, b, a;
    /* Source : drawCardinalSpline L48-53 */
    r = (float)((color >> 7) & 0xF8) / 255.0f;
    g = (float)((color >> 2) & 0xF8) / 255.0f;
    b = (float)((color & 0x1F) << 3) / 255.0f;
    a = (float)alpha / 255.0f;

    float p0x = (float)(x1 - x3);   /* tension vectors */
    float p0y = (float)(y1 - y3);
    float p3x = (float)(x4 - x2);
    float p3y = (float)(y4 - y2);

    /* Setup OpenGL */
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    terrain_apply_projection(terrain);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glDisable(GL_CULL_FACE);
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glLineWidth((float)thickness);
    glColor4f(r, g, b, a);

    /* Trace la spline cardinale */
    /* Source : drawCardinalSpline L94-103, appelle thunk_FUN_10005090
     * pour chaque point intermédiaire */
    glBegin(GL_LINE_STRIP);
    glVertex2f((float)x1, (float)y1);

    for (t = 0.01f; t < 0.999f; t += 0.01f) {
        float t2 = t * t;
        float t3 = t2 * t;

        /* Formule cardinale */
        float c0 = 1.0f * t3 + (-2.0f) * t2 + 0.0f * t + 1.0f;
        float c1 = 2.0f * t3 + (-3.0f) * t2 + 0.0f * t + 1.0f;
        float c2 = 1.0f * t3 + (-1.0f) * t2 + 0.0f * t + 0.0f;

        /* TODO: remplacer par l'appel à FUN_10005090 qui fait
         * le vrai calcul Hermite. Les coefficients ci-dessus
         * sont une approximation. */
        float px = 0.5f * (2.0f * x2 + t * (-x3 + x1)
                   + t2 * (2.0f * x3 - 2.0f * x2 + x4 - x1)
                   + t3 * (-x3 + 3.0f * x2 - 3.0f * x1 + x4));
        float py = 0.5f * (2.0f * y2 + t * (-y3 + y1)
                   + t2 * (2.0f * y3 - 2.0f * y2 + y4 - y1)
                   + t3 * (-y3 + 3.0f * y2 - 3.0f * y1 + y4));
        glVertex2f(px, py);
    }

    glVertex2f((float)x2, (float)y2);
    glEnd();

    glEnable(GL_CULL_FACE);
    glEnable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);

    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glFlush();
}

/* ================================================================
 * Terrain_lay_path — Pose un chemin sur une tuile
 *
 * Source : layPath (Terrain.dll @ 0x100012C1) :
 *   if (param_2 == 0)
 *     thunk_FUN_10013400(tile, 0, param_3);
 *   else
 *     thunk_FUN_10013400(tile, 1, param_3);
 *
 * @param terrain   Instance Terrain
 * @param tile      Tuile où poser le chemin
 * @param path_type 0 = droit, 1 = tournant
 * @param material  Matériau du chemin (TODO)
 *
 * NOTE : FUN_10013400 (3269 addresses) est une grosse fonction
 * qui gère le placement des chemins avec auto-tiling.
 * TODO: analyser FUN_10013400 en détail.
 */
void Terrain_lay_path(Terrain *terrain, Tile *tile, int path_type, int material) {
    (void)terrain;
    if (tile == NULL) return;

    /* Source : layPath L22-28 */
    if (path_type == 0) {
        /* Chemin droit */
        /* thunk_FUN_10013400(tile, 0, material) */
    } else {
        /* Chemin tournant */
        /* thunk_FUN_10013400(tile, 1, material) */
    }
    /* TODO: implémenter quand FUN_10013400 sera analysée */
}

/* ================================================================
 * Terrain_update_path — Met à jour le rendu d'un chemin
 *
 * Source : updatePath (Terrain.dll @ 0x1000125D) :
 *   tile = tileAt(this, param_1, param_2);
 *   thunk_FUN_100133A0(tile, param_3);
 *
 * @param terrain  Instance Terrain
 * @param grid_x   Coordonnée X de la tuile
 * @param grid_y   Coordonnée Y de la tuile
 * @param material Nouveau matériau
 */
void Terrain_update_path(Terrain *terrain, int grid_x, int grid_y, int material) {
    Tile *tile = tile_at(terrain, grid_x, grid_y);
    if (tile == NULL) return;

    /* thunk_FUN_100133A0(tile, material) — TODO */
    (void)material;
}

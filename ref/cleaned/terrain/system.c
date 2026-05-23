/**
 * system.c — Initialisation et configuration du terrain (SimGolf 2002)
 * ====================================================================
 *
 * Fonctions couvertes :
 *   - Terrain_init_system()     — création contexte OpenGL + allocation
 *   - Terrain_resize()          — redimensionnement de la grille
 *   - Terrain_close_system()    — libération OpenGL
 *   - Terrain_get_instance()    — singleton (factory)
 *
 * Source C Ghidra :
 *   - initSystem     @ 0x100012E4 (thunk → FUN_10009c80)
 *   - resize         @ 0x100012F8 (thunk → FUN_10009ed0)
 *   - closeSystem    @ 0x10001217
 *   - getInstance    @ 0x10001136
 */

#include "structs/tile.h"
#include <GL/gl.h>
#include <windows.h>  /* HDC, HGLRC, wgl* */

/* ================================================================
 * Constantes de résolution et angle isométrique
 *
 * Source : initSystem (Terrain.dll @ 0x10009C80)
 *
 * L'angle de rotation isométrique (DAT_10070a10) est ajusté
 * selon la résolution de l'écran pour que le rendu isométrique
 * remplisse correctement la fenêtre.
 */
#define RES_800x600_W    800
#define RES_800x600_H    600
#define ANGLE_800x600    0x421ABA8F  /* ~42.73° en float */

#define RES_1024x768_W   1024
#define RES_1024x768_H   768
#define ANGLE_1024x768   0x42222A9A  /* ~40.67° */

#define RES_1280x1024_W  1280
#define RES_1280x1024_H  1024
#define ANGLE_1280x1024  0x42235431  /* ~40.83° */

/* ================================================================
 * Angle de projection isométrique global (DAT_10070a10)
 *
 * Variable globale dans Terrain.dll. Utilisée par render() et
 * renderSingleTile() pour les rotations OpenGL :
 *   glRotated(angle, 0, 1, 0)
 *
 * L'angle est stocké en double précision.
 * TODO : confirmer si c'est un float ou double (glRotated vs glRotatef)
 */
extern double g_isometric_angle;

/* ================================================================
 * Terrain_init_system — Initialisation du moteur de terrain
 *
 * Signature C++ originale :
 *   void Terrain::initSystem(int width, int height, HDC hdc, bool zoom)
 *
 * ÉTAPES :
 *   1. Vérifie si déjà initialisé (this->vtable != NULL)
 *   2. Crée le contexte de rendu OpenGL (wglCreateContext)
 *      - Choisit un pixel format
 *      - SetPixelFormat
 *      - wglCreateContext + wglMakeCurrent
 *   3. Initialise les sous-systèmes (thunk_FUN_100033e0, 100037e0, 100076e0)
 *   4. Redimensionne la grille (resize)
 *   5. Stocke renderWidth/renderHeight
 *   6. Configure l'angle isométrique selon la résolution
 *   7. Stocke le flag zoom (param_4) dans this[0x28]
 */
void Terrain_init_system(Terrain *terrain, int width, int height,
                          HDC hdc, bool zoom_flag) {
    int pixel_format;

    if (*(void**)terrain != NULL) return;  /* déjà init */

    if (hdc != NULL) {
        /* Configuration du pixel format OpenGL */
        /* DAT_10063e10 = PIXELFORMATDESCRIPTOR pré-configuré */
        pixel_format = ChoosePixelFormat(hdc,
            (const PIXELFORMATDESCRIPTOR*)0x10063e10);
        if (pixel_format == 0) {
            MessageBoxA(NULL, "Can't Find A Suitable PixelFormat.",
                       "ERROR", MB_ICONEXCLAMATION);
        }

        if (!SetPixelFormat(hdc, pixel_format,
            (const PIXELFORMATDESCRIPTOR*)0x10063e10)) {
            MessageBoxA(NULL, "Can't Set The PixelFormat.",
                       "ERROR", MB_ICONEXCLAMATION);
        }

        /* Création du contexte de rendu OpenGL */
        *(void**)terrain = wglCreateContext(hdc);
        if (*(void**)terrain == NULL) {
            MessageBoxA(NULL, "Can't Create A GL Rendering Context.",
                       "ERROR", MB_ICONEXCLAMATION);
        }

        /* Activation du contexte */
        if (!wglMakeCurrent(hdc, *(HGLRC*)terrain)) {
            MessageBoxA(NULL, "Can't Activate The GL Rendering Context.",
                       "ERROR", MB_ICONEXCLAMATION);
        }
    }

    /* Stockage du flag zoom */
    *(int*)((char*)terrain + 0x28) = zoom_flag ? 1 : 0;

    /* Initialisation des sous-systèmes internes */
    /* thunk_FUN_100033e0() — init des buffers de rendu */
    /* thunk_FUN_100037e0() — init des textures */
    /* thunk_FUN_100076e0(terrain) — init du terrain (2297 addr) */

    /* Redimensionnement de la grille */
    /* resize(terrain, width, height) */

    /* Stockage des dimensions */
    *(int*)((char*)terrain + 0x20) = width;   /* renderWidth */
    *(int*)((char*)terrain + 0x24) = height;  /* renderHeight */

    /* Ajustement de l'angle isométrique selon la résolution */
    /* Source : initSystem L28-36 */
    if (width == RES_800x600_W && height == RES_800x600_H) {
        g_isometric_angle = *(double*)&ANGLE_800x600;
    } else if (width == RES_1024x768_W && height == RES_1024x768_H) {
        g_isometric_angle = *(double*)&ANGLE_1024x768;
    } else if (width == RES_1280x1024_W && height == RES_1280x1024_H) {
        g_isometric_angle = *(double*)&ANGLE_1280x1024;
    }
}

/* ================================================================
 * Terrain_resize — Redimensionne la grille de tuiles
 *
 * Signature C++ originale :
 *   void Terrain::resize(int width, int height)
 *
 * Source : resize (thunk @ 0x100012F8) → FUN_10009ed0
 *
 * TODO : FUN_10009ed0 — logique exacte de redimension
 */
void Terrain_resize(Terrain *terrain, int width, int height) {
    (void)terrain;
    (void)width;
    (void)height;
    /* TODO: implémenter */
}

/* ================================================================
 * Terrain_close_system — Fermeture du moteur de terrain
 *
 * Source : closeSystem (Terrain.dll @ 0x10001217) :
 *   if (this->hglrc != NULL) {
 *     wglMakeCurrent(NULL, NULL);
 *     wglDeleteContext(this->hglrc);
 *     this->hglrc = NULL;
 *     thunk_FUN_100380a0(this);  // libération mémoire
 *   }
 */
void Terrain_close_system(Terrain *terrain) {
    if (*(void**)terrain != NULL) {
        wglMakeCurrent(NULL, NULL);
        wglDeleteContext(*(HGLRC*)terrain);
        *(void**)terrain = NULL;
        /* thunk_FUN_100380a0(terrain) — cleanup */
    }
}

/* ================================================================
 * Terrain_get_instance — Retourne l'instance singleton du terrain
 *
 * Source : getInstance (Terrain.dll @ 0x10001136)
 *
 * Le singleton est stocké dans une variable globale de Terrain.dll.
 * Si pas encore créé, alloue un nouveau Terrain.
 *
 * NOTE : Fonction statique (pas de this). Alloue avec new.
 */
Terrain *Terrain_get_instance(void) {
    /* TODO: implémenter quand le singleton global sera localisé */
    return NULL;
}

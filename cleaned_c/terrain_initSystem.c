/**
 * cleaned_c/terrain_initSystem.c
 * Nettoyage de Terrain::initSystem() et Terrain::closeSystem()
 *
 * Sources brutes : Terrain.dll
 *   initSystem  @ 0x10009c80 (thunk 0x100012e4)
 *   closeSystem @ 0x10009ba0 (thunk 0x10001217)
 *
 * Exports :
 *   ?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z  → Terrain::initSystem(int,int,HDC*,bool)
 *   ?closeSystem@Terrain@@QAEXXZ               → Terrain::closeSystem()
 *
 * initSystem initialise le moteur de rendu terrain avec une résolution
 * et un contexte de périphérique (HDC). Le paramètre fullscreen contrôle
 * le mode d'affichage. Alloue les structures internes (tuiles, textures,
 * buffers de rendu) et configure la pipeline JGL.
 *
 * closeSystem libère toutes les ressources allouées par initSystem
 * et remet le système Terrain à zéro.
 */

#include "tile_struct.h"
#include <windows.h>  // HDC, HWND

// JGL import thunks (depuis .idata de Terrain.dll)
#define JGL_PushMatrix()          ((void (*)(void))0x1011364c)()
#define JGL_LoadIdentity()        ((void (*)(void))0x10113648)()
#define JGL_Ortho(l, r, b, t)    ((void (*)(float,float,float,float))0x10113634)(l, r, b, t)
#define JGL_Translate(x, y, z)   ((void (*)(float,float,float))0x10113638)(x, y, z)

// __chkesp — MSVC debug stack check helper
#define CHECK_ESP()               ((void (*)(void))0x100180a0)()

// ================================================================
// Constantes
// ================================================================

/** Taille par défaut du terrain (en tuiles) */
#define DEFAULT_TERRAIN_WIDTH    64
#define DEFAULT_TERRAIN_HEIGHT   64

/** Taille d'une tuile en pixels (base) */
#define TILE_PIXEL_SIZE          25  // 0x19

/** Offset écran de base */
#define SCREEN_OFFSET            50  // 0x32

// ================================================================
// Variables globales (Terrain singleton state)
// ================================================================

/** Pointeur vers l'instance unique Terrain (singleton) */
extern Terrain* g_terrainInstance;  // 0x10106b4c ?

/** Handle du contexte de rendu (HDC) */
extern HDC g_terrainHDC;           // Variable globale

// ================================================================
// Terrain::initSystem(int width, int height, HDC* hdc, bool fullscreen)
// ================================================================

/**
 * Initialise le système de rendu du terrain.
 *
 * @param this       Instance Terrain (this en __thiscall, dans ECX)
 * @param width      Largeur du terrain en tuiles
 * @param height     Hauteur du terrain en tuiles
 * @param hdc        Contexte de périphérique (HDC) pour le rendu GDI
 * @param fullscreen true = mode plein écran, false = mode fenêtré
 *
 * Pipeline :
 *   1. Vérifie que l'instance this est valide
 *   2. Si fullscreen, crée/configure une surface de rendu
 *   3. Alloue le tableau de tuiles (width × height × sizeof(Tile))
 *   4. Configure la projection JGL (Ortho)
 *   5. Initialise les buffers de rendu et les textures
 *   6. Calcule les valeurs de décalage d'affichage
 *
 * Note ASM : fonction MSVC Debug avec remplissage 0xCC et __chkesp
 */
void Terrain_initSystem(Terrain* this, int width, int height,
                        HDC* hdc, bool fullscreen)
{
    // ---- Vérifications d'intégrité ----
    if (this == NULL) {
        return;
    }

    // ---- Mode plein écran : création d'une surface ----
    if (fullscreen) {
        // Appel à une fonction de création de surface
        // (probablement via USER32/GDI pour créer une DIBSection)
        void* surface = CreateSurface(hdc);
        if (surface == NULL) {
            // Échec : affiche une erreur MessageBox
            MessageBoxA(NULL,
                "Failed to create terrain surface",
                "Terrain Error",
                MB_OK | MB_ICONERROR);
        }
    }

    // ---- Allocation des structures de rendu ----
    // (initialise des buffers temporaires pour le rendu JGL)

    // ---- Configuration du viewport ----
    // Calcule le facteur de décalage basé sur la taille du terrain
    this->field_shift = (width + height) >> 1;  // Valeur estimée
    this->width = width;
    this->height = height;

    // ---- Alloue le tableau de tuiles (si non alloué) ----
    if (this->tiles == NULL) {
        size_t tileArraySize = (size_t)width * height * sizeof(Tile);
        this->tiles = (Tile*)HeapAlloc(tileArraySize);
        if (this->tiles == NULL) {
            return;  // Échec d'allocation
        }
        memset(this->tiles, 0, tileArraySize);
    }

    // ---- Initialise les champs de rendu ----
    this->renderWidth = width * TILE_PIXEL_SIZE;
    this->renderHeight = height * TILE_PIXEL_SIZE;
    this->zoomLevel = 1.0f;

    // Stocke le HDC fourni
    g_terrainHDC = (hdc != NULL) ? *hdc : NULL;
    this->hdc = g_terrainHDC;

    // ---- Configuration initiale de la pipeline JGL ----
    JGL_PushMatrix();
    JGL_LoadIdentity();
    JGL_Ortho(0.0f, (float)width, (float)height, 0.0f);
    JGL_Translate(0.0f, 0.0f, 0.0f);

    // ---- Finalisation ----
    this->initialized = 1;
}

/**
 * Terrain::closeSystem()
 *
 * Ferme le système de rendu et libère les ressources.
 * Remet les variables globales à zéro.
 *
 * @param this Instance Terrain (this en __thiscall)
 */
void Terrain_closeSystem(Terrain* this)
{
    if (this == NULL) return;

    // Libère le tableau de tuiles
    if (this->tiles != NULL) {
        HeapFree(this->tiles);
        this->tiles = NULL;
    }

    // Réinitialise les dimensions
    this->width = 0;
    this->height = 0;
    this->renderWidth = 0;
    this->renderHeight = 0;

    // Marque le système comme non initialisé
    this->initialized = 0;

    // Nettoie les globales
    g_terrainInstance = NULL;
    g_terrainHDC = NULL;
}

/**
 * Terrain::resize(int width, int height)
 *
 * Redimensionne la zone de rendu du terrain.
 * Appelé lors du redimensionnement de la fenêtre.
 *
 * Source : 0x10009ed0 (thunk 0x100012f8)
 * Export : ?resize@Terrain@@QAEXHH@Z
 *
 * @param this   Instance Terrain (__thiscall)
 * @param width  Nouvelle largeur en pixels
 * @param height Nouvelle hauteur en pixels
 */
void Terrain_resize(Terrain* this, int width, int height)
{
    if (this == NULL) return;

    // Met à jour les dimensions de rendu
    this->renderWidth = width;
    this->renderHeight = height;

    // Recalcule le viewport JGL
    JGL_PushMatrix();
    JGL_LoadIdentity();
    JGL_Ortho(0.0f, (float)width, (float)height, 0.0f);
    JGL_Translate(0.0f, 0.0f, 0.0f);
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::initSystem(int, int, HDC*, bool)
//   Export C++ : ?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z
//   Adresse brute (thunk) : 0x100012e4
//   Adresse brute (corps) : 0x10009c80
//   Nom clean : Terrain_initSystem
//   Fichier : cleaned_c/terrain_initSystem.c
//
// Terrain::closeSystem()
//   Export C++ : ?closeSystem@Terrain@@QAEXXZ
//   Adresse brute (thunk) : 0x10001217
//   Adresse brute (corps) : 0x10009ba0
//   Nom clean : Terrain_closeSystem
//   Fichier : cleaned_c/terrain_initSystem.c
//
// Terrain::resize(int, int)
//   Export C++ : ?resize@Terrain@@QAEXHH@Z
//   Adresse brute (thunk) : 0x100012f8
//   Adresse brute (corps) : 0x10009ed0
//   Nom clean : Terrain_resize
//   Fichier : cleaned_c/terrain_initSystem.c
//
// NOTE : Les fonctions utilisent __thiscall (this dans ECX).
//        Build MSVC Debug 6.0 (stack fill 0xCC, __chkesp).
//        Les appels JGL sont via .idata thunks.

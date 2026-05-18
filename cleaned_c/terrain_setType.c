/**
 * cleaned_c/terrain_setType.c
 * Modification du type et des accès directs aux tuiles.
 *
 * Fonctions :
 *   Terrain::setType(Tile*, int, int)   → Définit le type d'une tuile
 *   Terrain::getInstance()              → Singleton accessor
 *   Terrain::tileHit(int x, int y)      → Coordonnées écran → tuile
 *   Terrain::~Terrain()                 → Destructeur
 *
 * Sources brutes : Terrain.dll
 *   setType      @ 0x100032f0 (thunk 0x1000121c)
 *   getInstance  @ 0x100031a0 (thunk 0x10001136)
 *   tileHit      @ 0x1000ab30 (thunk 0x1000109b)
 *   ~Terrain     @ 0x10003090 (thunk 0x10001302)
 */
 
#include "tile_struct.h"
#include <stddef.h>

/** Variable globale stockant l'instance singleton Terrain */
static Terrain* s_terrainInstance = NULL;

// ================================================================
// Forward declarations (depuis d'autres fichiers cleaned_c)
// ================================================================

/** Récupère une tuile par ses coordonnées. Définie dans terrain_tileAt.c */
extern Tile* Terrain_tileAt(Terrain* this, int x, int y);

// ================================================================
// Terrain::setType(Tile* tile, int type, int variation)
// ================================================================

/**
 * Définit le type de terrain et la variation d'une tuile.
 *
 * Le type détermine l'apparence et les propriétés de jeu de la tuile :
 *   0 = Grass, 1 = Fairway, 2 = Green, 3 = Sand, 4 = Water,
 *   5 = Path, 6 = Tee, 7 = Building, 8 = Tree, 9 = Bush...
 *
 * La variation (0-8) détermine quelle texture parmi les variantes
 * du même type sera utilisée pour le rendu.
 *
 * @param this      Instance Terrain (__thiscall)
 * @param tile      Tuile à modifier
 * @param type      Nouveau type de terrain (0 = indéfini)
 * @param variation Variation de texture (0-8)
 *
 * Source ASM : 0x100032f0
 *   - MSVC Debug, stack 0x44 bytes, __chkesp
 *   - Vérifie que tile != NULL
 *   - tile->type = type; tile->variation = variation
 *   - Marque le voisinage pour mise à jour des normales
 */
void Terrain_setType(Terrain* this, Tile* tile, int type, int variation)
{
    if (tile == NULL) return;

    // Met à jour le type et la variation
    tile->type = type;
    tile->variation = variation;

    // Marque les normales de la zone comme modifiées
    // (le rendu recalculera les ombres si nécessaire)
    this->normalsDirty = 1;
}

// ================================================================
// Terrain::getInstance() — Singleton
// ================================================================

/**
 * Retourne l'instance unique du moteur Terrain.
 *
 * Implémente le pattern Singleton C++ classique.
 * Si l'instance n'existe pas encore, elle est créée (allocation heap).
 *
 * Note : Cette fonction utilise SEH (Structured Exception Handling)
 * pour la sécurité des threads.
 *
 * @return Pointeur vers l'instance unique Terrain
 *
 * Source ASM : 0x100031a0
 *   - SEH prologue (fs:[0])
 *   - Vérifie le global à 0x10106b4c
 *   - Si NULL : alloue 0x164AD0 bytes (taille de la structure Terrain)
 *   - Appelle le constructeur Terrain
 *   - Stocke dans le global et retourne
 */
Terrain* Terrain_getInstance(void)
{
    if (s_terrainInstance == NULL) {
        // Allocation de la mémoire pour l'instance Terrain
        // (taille estimée d'après le désassemblage)
        s_terrainInstance = (Terrain*)HeapAlloc(0x164AD0);
        if (s_terrainInstance != NULL) {
            memset(s_terrainInstance, 0, 0x164AD0);

            // Initialise les champs par défaut
            s_terrainInstance->width = 0;
            s_terrainInstance->height = 0;
            s_terrainInstance->tiles = NULL;
            s_terrainInstance->initialized = 0;
        }
    }

    return s_terrainInstance;
}

// ================================================================
// Terrain::tileHit(int screenX, int screenY)
// ================================================================

/**
 * Convertit des coordonnées écran en coordonnées tuile.
 *
 * Effectue la transformation inverse du rendu isométrique :
 *   worldX = (screenX / tileH + screenY / tileW) / 2
 *   worldY = (screenY / tileW - screenX / tileH) / 2
 *
 * Utilisé pour détecter sur quelle tuile l'utilisateur a cliqué.
 *
 * @param this   Instance Terrain (__thiscall)
 * @param screenX Coordonnée X à l'écran (pixels)
 * @param screenY Coordonnée Y à l'écran (pixels)
 * @return       Pointeur vers la Tile sous le curseur, ou NULL
 *
 * Source ASM : 0x1000ab30
 *   - Stack frame 0x7c bytes (31 × 0xCC du debug fill)
 *   - Appels à des fonctions de conversion string/float
 *   - Itération sur les tuiles pour tester l'intersection
 */
Tile* Terrain_tileHit(Terrain* this, int screenX, int screenY)
{
    // Paramètres de projection isométrique
    const float tileHalfW = 32.0f;  // 64/2
    const float tileHalfH = 16.0f;  // 32/2

    // Coordonnées du centre de l'écran
    float centerX = this->renderWidth * 0.5f;
    float centerY = this->renderHeight * 0.5f;

    // Conversion inverse de la projection isométrique
    float relX = (float)screenX - centerX;
    float relY = (float)screenY - centerY;

    // tileX = (relY + relX) / (tileHalfH + tileHalfW)
    // tileY = (relY - relX) / (tileHalfH + tileHalfW)
    int tileX = (int)((relY + relX) / (tileHalfH + tileHalfW) + 0.5f);
    int tileY = (int)((relY - relX) / (tileHalfH + tileHalfW) + 0.5f);

    // Vérifie les limites
    return Terrain_tileAt(this, tileX, tileY);
}

// ================================================================
// Terrain::~Terrain() — Destructeur
// ================================================================

/**
 * Destructeur de la classe Terrain.
 *
 * Libère les ressources allouées et nettoie l'instance.
 * Appelé lors de la fermeture du jeu.
 *
 * @param this Instance Terrain (__thiscall)
 *
 * Source ASM : 0x10003090
 *   - Vérifie que this n'est pas NULL
 *   - Appelle closeSystem() pour libérer les ressources
 *   - Appelle l'opérateur delete si nécessaire
 *   - Réinitialise le global singleton
 */
void Terrain_destructor(Terrain* this)
{
    if (this == NULL) return;

    // Nettoie le système de rendu
    this->initialized = 0;

    // Libère le tableau de tuiles
    if (this->tiles != NULL) {
        HeapFree(this->tiles);
        this->tiles = NULL;
    }

    // Réinitialise les dimensions
    this->width = 0;
    this->height = 0;

    // Réinitialise le singleton si c'est l'instance courante
    if (s_terrainInstance == this) {
        s_terrainInstance = NULL;
    }
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::setType(Tile*, int, int)
//   Export C++ : ?setType@Terrain@@QAEXPAVTile@@HH@Z
//   Adresse brute (thunk) : 0x1000121c
//   Adresse brute (corps) : 0x100032f0
//   Nom clean : Terrain_setType
//   Fichier : cleaned_c/terrain_setType.c
//
// Terrain::getInstance()
//   Export C++ : ?getInstance@Terrain@@SAPAV1@XZ
//   Adresse brute (thunk) : 0x10001136
//   Adresse brute (corps) : 0x100031a0
//   Nom clean : Terrain_getInstance
//   Fichier : cleaned_c/terrain_setType.c
//
// Terrain::tileHit(int, int)
//   Export C++ : ?tileHit@Terrain@@QAEPAVTile@@HH@Z
//   Adresse brute (thunk) : 0x1000109b
//   Adresse brute (corps) : 0x1000ab30
//   Nom clean : Terrain_tileHit
//   Fichier : cleaned_c/terrain_setType.c
//
// Terrain::~Terrain()
//   Export C++ : ??1Terrain@@QAE@XZ
//   Adresse brute (thunk) : 0x10001302
//   Adresse brute (corps) : 0x10003090
//   Nom clean : Terrain_destructor
//   Fichier : cleaned_c/terrain_setType.c

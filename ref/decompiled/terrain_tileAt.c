/**
 * cleaned_c/terrain_tileAt.c
 * Nettoyage de Terrain::tileAt(int x, int y)
 *
 * Source brute : Terrain.dll @ 0x10001d50
 * Export : ?tileAt@Terrain@@QAEPAVTile@@HH@Z
 *
 * Structures déduites :
 *   Tile : 584 bytes (0x248)
 *   Terrain.fields:
 *     offset 0x14 → int width
 *     offset 0x18 → int height
 *     offset 0x3a4 → Tile tiles[] (1D array, row-major)
 */

#include <stddef.h>  // NULL

// Forward declarations
typedef struct Tile Tile;
typedef struct Terrain Terrain;

/**
 * struct Tile - Représente une tuile de terrain dans SimGolf.
 * Taille : 584 octets (0x248).
 *
 * Note : les champs exacts sont à déduire par analyse croisée
 * des autres fonctions (getElevation, getType, etc.)
 */
struct Tile {
    // À déterminer par analyse des autres fonctions…
    // Premières hypothèses :
    //   0x000: int type;         // Type de terrain (herbe, sable, eau…)
    //   0x004: int elevation[4]; // Élévation des 4 coins
    //   0x014: int flags;        // Drapeaux (mur, chemin…)
    //   … 584 bytes au total
    char data[584];
};

/**
 * struct Terrain - Moteur de rendu terrain (singleton).
 * Taille totale inconnue.
 */
struct Terrain {
    // 0x000-0x013: unknown (vtable pointer + autres données)
    char _pad_00[0x14];
    // 0x014: int width  - Nombre de tuiles en largeur
    int width;
    // 0x018: int height - Nombre de tuiles en hauteur
    int height;
    // 0x01c-0x3a3: unknown
    char _pad_1c[0x3a4 - 0x1c];
    // 0x3a4: Tile tiles[] - Tableau 1D (row-major) de tuiles
    Tile tiles[];  // flexible array
};

/**
 * Terrain::tileAt(int x, int y)
 *
 * Retourne un pointeur vers la tuile aux coordonnées (x, y),
 * ou NULL si les coordonnées sont hors limites.
 *
 * @param this  Pointeur vers l'instance Terrain (dans ecx en __thiscall)
 * @param x     Coordonnée X (colonne)
 * @param y     Coordonnée Y (ligne)
 * @return      Pointeur vers Tile, ou NULL
 */
Tile* Terrain_tileAt(Terrain* this, int x, int y) {
    // Vérification des limites : x dans [0, width)
    if (x < 0 || x >= this->width) {
        return NULL;
    }
    
    // Vérification des limites : y dans [0, height)
    if (y < 0 || y >= this->height) {
        return NULL;
    }
    
    // Calcul de l'index dans le tableau row-major
    int index = y * this->width + x;
    
    // Chaque tuile fait 0x248 = 584 octets
    // Le tableau commence à l'offset 0x3a4 dans la structure Terrain
    return &this->tiles[index];
}

/**
 * TABLE DE CORRESPONDANCE
 * 
 * Adresse brute (export) : 0x1000108c (thunk → 0x10001d50)
 * Adresse brute (corps)  : 0x10001d50
 * Nom original C++        : Terrain::tileAt(int, int)
 * Nom clean C             : Terrain_tileAt
 * Fichier                 : cleaned_c/terrain_tileAt.c
 * 
 * ---
 * 
 * Note : la version compilée MSVC Debug remplit la stack avec 0xCC
 * (rep stosd, 17 × 0xCCCCCCCC) et la convention d'appel est __thiscall
 * (this dans ecx, arguments sur la stack, caller nettoie).
 * 
 * sizeof(Tile) = 0x248 = 584 bytes.
 * Capacité max approximative : le .data section fait 3.5 Mo,
 * donc ~6000 tuiles max (584 * 6000 ≈ 3.5 Mo).
 * 
 * La taille de .data dans golf.exe (3.5 Mo) suggère que le tableau
 * de tuiles est dans la section .data, probablement alloué statiquement
 * avec une taille max de terrain d'environ 80×80 = 6400 tuiles.
 */

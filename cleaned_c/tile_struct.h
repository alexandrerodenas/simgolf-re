/**
 * cleaned_c/tile_struct.h
 * Structure reconstituée de Tile (0x248 = 584 bytes).
 *
 * Sources :
 *   - Terrain::tileAt()      : sizeof(Tile)=0x248, tiles[] à offset 0x3a4
 *   - Tile::getElevation()   : elevation[4] à offset 0x000 (int)
 *   - Tile::getType()        : type à offset 0x024 (int)
 *   - Tile::getWall()        : walls[] à offset 0x234 (byte[4])
 *   - Terrain::width/height  : offsets 0x14 et 0x18
 */

#ifndef TILE_STRUCT_H
#define TILE_STRUCT_H

#include <stdint.h>
#include <stdbool.h>

/**
 * TileTypes - Types de terrain identifiés dans le jeu.
 * À affiner avec l'analyse des données.
 */
enum TileType {
    TILE_GRASS       = 0,   // Herbe (rough)
    TILE_FAIRWAY     = 1,   // Fairway
    TILE_GREEN       = 2,   // Green
    TILE_SAND        = 3,   // Bunker de sable
    TILE_WATER       = 4,   // Eau (hazard)
    TILE_PATH        = 5,   // Chemin
    TILE_TEE         = 6,   // Départ
    TILE_BUILDING    = 7,   // Bâtiment
    TILE_TREE        = 8,   // Arbre
    TILE_BUSH        = 9,   // Buisson
    TILE_FLOWER      = 10,  // Fleurs
    // ...
    TILE_COUNT
};

/**
 * TileCorner - Repère les 4 coins d'une tuile.
 * Utilisé pour getElevation/setElevation.
 */
enum TileCorner {
    CORNER_TOP_LEFT     = 0,
    CORNER_TOP_RIGHT    = 1,
    CORNER_BOTTOM_RIGHT = 2,
    CORNER_BOTTOM_LEFT  = 3,
};

/**
 * struct Tile - Représentation complète d'une tuile SimGolf.
 * Taille totale : 584 octets (0x248).
 *
 * Organisation mémoire (basée sur le désassemblage) :
 *
 * Offset  Taille  Champ        Description
 * ------  ------  -----------  -----------------------------------
 *  0x000  16      elevation[4] Élévation des 4 coins (int32)
 *  0x010  4       waterLevel   Niveau d'eau ? (int32)
 *  0x014  4       ?            Inconnu (int32)
 *  0x018  4       ?            Inconnu (int32)
 *  0x01c  4       ?            Inconnu (int32) 
 *  0x020  4       ?            Inconnu (int32)
 *  0x024  4       type         Type de terrain (enum TileType, int32)
 *  0x028  524     unknown[524] Champs non encore analysés
 *  0x234  4       walls[4]     Murs/bordures (byte par côté, bool)
 *  0x238  8       ?            Padding ou autres flags
 *  0x240  8       ?            Données de rendu ?
 * ------  ------  -----------  -----------------------------------
 * Total:  584                  
 *
 * NB : Les offsets 0x028-0x233 (524 bytes) seront affinés par l'analyse
 * des fonctions restantes (setType, renderTile, etc.).
 */
typedef struct Tile {
    /* 0x000 */ int32_t    elevation[4];       // Élévation des 4 coins
    
    /* 0x010 */ int32_t    waterLevel;          // Hypothèse : niveau d'eau
    
    /* 0x014 */ int32_t    field_014;           // À identifier
    /* 0x018 */ int32_t    field_018;           // À identifier
    /* 0x01c */ int32_t    field_01c;           // À identifier
    /* 0x020 */ int32_t    field_020;           // À identifier
    
    /* 0x024 */ int32_t    type;                // Type de terrain (enum TileType)
    
    /* 0x028 */ uint8_t    unknown_data[524];   // À analyser
    
    /* 0x234 */ uint8_t    walls[4];            // Murs/bordures (bool par côté)
    
    /* 0x238 */ uint8_t    pad_238[8];          // Padding ou flags
    /* 0x240 */ uint8_t    render_data[8];      // Données spécifiques au rendu
} Tile;

// Vérification de la taille à la compilation
STATIC_ASSERT(sizeof(Tile) == 584, "Tile must be exactly 584 bytes");

/**
 * struct Terrain - Moteur de rendu terrain.
 *
 * Offset  Taille  Champ     Description
 * ------  ------  --------  -----------------------------------
 *  0x000  4       vtable    Pointeur vtable C++
 *  0x004  16      ?         Données internes
 *  0x014  4       width     Nombre de tuiles en X
 *  0x018  4       height    Nombre de tuiles en Y
 *  0x01c  0x388   ?         Autres données + padding
 *  0x3a4  N       tiles[]   Tableau de tuiles (width × height)
 * ------  ------  --------  -----------------------------------
 * Total:  variable selon la taille du terrain
 */
typedef struct Terrain {
    /* 0x000 */ void*       vtable;              // VTable C++
    /* 0x004 */ uint8_t    internal_data[0x14 - 0x004]; // Données internes
    
    /* 0x014 */ int32_t    width;               // Largeur en tuiles
    /* 0x018 */ int32_t    height;              // Hauteur en tuiles
    
    /* 0x01c */ uint8_t    pad[0x3a4 - 0x01c];  // Padding
    
    /* 0x3a4 */ Tile       tiles[];             // Flexible array member
} Terrain;

#endif // TILE_STRUCT_H

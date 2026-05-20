/**
 * cleaned_c/tile_struct.h
 * Structure reconstituée de Tile (0x248 = 584 bytes).
 *
 * Sources :
 *   - Terrain::tileAt()      : sizeof(Tile)=0x248, tiles[] à offset 0x3a4
 *   - Tile::getElevation()   : elevation[4] à offset 0x000 (int)
 *   - Tile::getType()        : type à offset 0x024 (int)
 *   - Tile::getWall()        : walls[] à offset 0x234 (byte[4])
 *   - Tile::getScreenX()     : screenX à offset 0x030 (int)
 *   - Tile::getScreenY()     : screenY à offset 0x02c (int)
 *   - Tile::isCulled()       : renderCategory@0x01c, renderWidth@0x020, renderHeight@0x024
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
 * Offset  Taille  Champ            Description
 * ------  ------  ---------------  -----------------------------------
 *  0x000  16      elevation[4]     Élévation des 4 coins (int32)
 *  0x010  4       waterLevel       Niveau d'eau (int32)
 *  0x014  4       flags            Drapeaux généraux (int32)
 *  0x018  4       gridX            Position X dans la grille (int32)
 *  0x01c  4       renderCategory   Catégorie de rendu (int)
 *  0x020  4       renderWidth      Largeur affichage (int)
 *  0x024  4       type             Type de terrain (enum TileType)
 *  0x028  4       renderHeight     Hauteur affichage (int)
 *  0x02c  4       screenY          Coordonnée Y écran (int)
 *  0x030  4       screenX          Coordonnée X écran (int)
 *  0x034  4       tileFlags        Flags de rendu (int, voir terrain_render_tile.c)
 *  0x038  4       variation        Variation de texture (int)
 *  0x03c  4       hasPath          1 si chemin présent (int)
 *  0x040  4       pathType         Type de chemin/matériau (int)
 *  0x044  4       pathDirection    Direction du chemin (int)
 *  0x048  4       pathConnections  Masque bits connexions (int)
 *  0x04c  4       gridY            Position Y dans la grille (int32)
 *  0x050  4       normalX          Normale X (float)
 *  0x054  4       normalY          Normale Y (float)
 *  0x058  4       normalZ          Normale Z (float)
 *  0x05c  4       renderPassCount  Nombre de passes de rendu (int)
 *  0x060  0x00c   unknown_060[12]  Champs non analysés
 *  0x06c  varies   renderPasses[]   Tableau de passes (0x38 bytes each)
 *  0x234  4       walls[4]         Murs/bordures (byte par côté)
 *  0x238  0x010   unknown_238[16]  Padding ou autres données
 * ------  ------  ---------------  -----------------------------------
 * Total:  584 (0x248)
 *
 * NB : Les offsets sont basés sur l'analyse statique du désassemblage.
 *      renderPasses commence à offset 0x6c, chaque passe fait 0x38 bytes.
 *      Le nombre de passes est dans renderPassCount (offset 0x05c).
 */
typedef struct Tile {
    /* 0x000 */ int32_t    elevation[4];       // Élévation des 4 coins
    
    /* 0x010 */ int32_t    waterLevel;          // Niveau d'eau
    
    /* 0x014 */ int32_t    flags;               // Drapeaux généraux
    /* 0x018 */ int32_t    gridX;               // Position X dans la grille
    /* 0x01c */ int32_t    renderCategory;      // Catégorie de rendu
    /* 0x020 */ int32_t    renderWidth;         // Largeur rendu (px)
    
    /* 0x024 */ int32_t    type;                // Type de terrain (enum TileType)
    
    /* 0x028 */ int32_t    renderHeight;        // Hauteur rendu (px)
    /* 0x02c */ int32_t    screenY;             // Coordonnée Y écran
    /* 0x030 */ int32_t    screenX;             // Coordonnée X écran
    
    /* 0x034 */ int32_t    tileFlags;           // Flags de rendu
    /* 0x038 */ int32_t    variation;           // Variation de texture
    /* 0x03c */ int32_t    hasPath;             // Booléen : chemin présent
    /* 0x040 */ int32_t    pathType;            // Type de chemin
    /* 0x044 */ int32_t    pathDirection;       // Direction du chemin
    /* 0x048 */ int32_t    pathConnections;     // Masque bits connexions
    /* 0x04c */ int32_t    gridY;               // Position Y dans la grille
    
    /* 0x050 */ float      normalX;             // Normale X (éclairage)
    /* 0x054 */ float      normalY;             // Normale Y
    /* 0x058 */ float      normalZ;             // Normale Z
    
    /* 0x05c */ int32_t    renderPassCount;     // Nombre de passes de rendu
    /* 0x060 */ uint8_t    unknown_060[12];     // Padding/champs inconnus
    
    /* 0x06c */ RenderPass renderPasses[];      // Tableau flexible de passes
    /* 0x234 */ uint8_t    walls[4];            // Murs (booléens par côté)
    /* 0x238 */ uint8_t    unknown_238[16];     // Padding
} Tile;

// Vérification de la taille à la compilation
STATIC_ASSERT(sizeof(Tile) == 584, "Tile must be exactly 584 bytes");

/**
 * RenderPass — Une passe de rendu individuelle (0x38 = 56 bytes)
 *
 * Utilisée par le système de rendu pour stocker les informations
 * de texture nécessaires au rendu d'une tuile.
 * Chaque tuile peut avoir plusieurs passes (textures superposées).
 */
typedef struct RenderPass {
    /* 0x00 */ void*     textureID;       // ID de texture OpenGL/JGL
    /* 0x04 */ uint8_t   texCoord;        // Coordonnée de texture ?
    /* 0x05 */ uint8_t   pad_05[0x33];    // 51 bytes de données inconnues
} RenderPass;

// Vérification de la taille à la compilation
// (désactivé : pas de STATIC_ASSERT standard en C pur)
// sizeof(Tile) ≈ 584, sizeof(RenderPass) ≈ 56

/**
 * struct Terrain - Moteur de rendu terrain.
 *
 * Taille totale : ~0x164AD0 bytes (estimé depuis le désassemblage)
 * Cette structure est allouée dynamiquement par getInstance().
 *
 * Offset  Taille  Champ            Description
 * ------  ------  ---------------  -----------------------------------
 *  0x000  4       vtable           Pointeur vtable C++
 *  0x004  16      internal_data    Données internes
 *  0x014  4       width            Nombre de tuiles en X
 *  0x018  4       height           Nombre de tuiles en Y
 *  0x01c  4       field_shift      Valeur de décalage (rendu)
 *  0x020  4       rendered         Flag : rendu effectué (bool)
 *  0x024  4       renderWidth      Largeur viewport (px)
 *  0x028  4       renderHeight     Hauteur viewport (px)
 *  0x02c  4       zoomLevel        Niveau de zoom (int)
 *  0x030  4       viewMode         Mode de vue (0-3)
 *  0x034  4       lightingMode     Mode d'éclairage
 *  0x038  4       lightingDirty    Flag : éclairage à recalculer
 *  0x03c  4       normalsDirty     Flag : normales à recalculer
 *  0x040  4       renderDirty      Flag : rendu à rafraîchir
 *  0x044  4       courseType       Type de parcours (0-3)
 *  0x048  4       splineHeight     Hauteur de spline (float)
 *  0x04c  4       pathsDirty       Flag : chemins à recalculer
 *  0x050  4       initialized      Flag : système initialisé
 *  0x054  4       hdc              Contexte de périphérique (HDC)
 *  0x058  4       renderScale      Facteur d'échelle (float)
 *  0x05c  4       collarData*      Pointeur données collier
 *  0x060  4       collarCount      Nombre d'éléments collier
 *  0x064  ~0x340  ...              Autres champs + padding
 *  0x3a4  N       tiles[]          Tableau de tuiles (width × height)
 * ------  ------  ---------------  -----------------------------------
 */
typedef struct Terrain {
    /* 0x000 */ void*       vtable;              // VTable C++
    /* 0x004 */ uint8_t    internal_data[0x14 - 0x004]; // Données internes
    
    /* 0x014 */ int32_t    width;               // Largeur en tuiles
    /* 0x018 */ int32_t    height;              // Hauteur en tuiles
    
    /* 0x01c */ int32_t    field_shift;         // Valeur de décalage rendu
    /* 0x020 */ int32_t    rendered;            // Flag rendu effectué
    /* 0x024 */ int32_t    renderWidth;         // Largeur viewport (px)
    /* 0x028 */ int32_t    renderHeight;        // Hauteur viewport (px)
    /* 0x02c */ int32_t    zoomLevel;           // Niveau de zoom
    /* 0x030 */ int32_t    viewMode;            // Mode de vue (0-3)
    /* 0x034 */ int32_t    lightingMode;        // Mode d'éclairage
    /* 0x038 */ int32_t    lightingDirty;       // Flag : éclairage sale
    /* 0x03c */ int32_t    normalsDirty;        // Flag : normales sales
    /* 0x040 */ int32_t    renderDirty;         // Flag : rendu sale
    /* 0x044 */ int32_t    courseType;          // Type de parcours
    /* 0x048 */ float      splineHeight;        // Hauteur de spline
    /* 0x04c */ int32_t    pathsDirty;          // Flag : chemins sales
    /* 0x050 */ int32_t    initialized;         // Flag : système prêt
    /* 0x054 */ void*      hdc;                 // Contexte HDC
    /* 0x058 */ float      renderScale;         // Facteur d'échelle
    /* 0x05c */ int32_t*   collarData;          // Données collier
    /* 0x060 */ int32_t    collarCount;         // Nb éléments collier
    
    /* 0x064 */ uint8_t    pad[0x3a4 - 0x064]; // Padding
    
    /* 0x3a4 */ Tile       tiles[];             // Flexible array member
|} Terrain;

#endif // TILE_STRUCT_H

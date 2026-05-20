/**
 * cleaned_c/terrain_render_tile.c
 * Fonctions de rendu individuel d'une tuile.
 *
 * Fonctions :
 *   - Tile::isVisible()             → test visibilité (type == 20)
 *   - Terrain::renderSingleTile()   → rendu texture OpenGL
 *
 * Sources :
 *   isVisible       @ 0x10015460  (thunk 0x10001037)
 *   renderSingleTile @ 0x1000e6c0 (thunk 0x10001041)
 */

#include <stdbool.h>
#include "tile_struct.h"

// Constante OpenGL — 0x0DE1 = GL_TEXTURE_2D
#define GL_TEXTURE_2D  0x0de1

// Variable globale stockant le mode de vue courant
// Initialisée par Terrain::getView()
extern int g_currentViewMode;  // Address: 0x10070a14

// JGL function table (importer depuis .idata)
// 0x10113624 = glBindTexture
#define JGL_BindTexture(target, texture) \
    ((void (*)(int, void*))0x10113624)(target, texture)

/**
 * Tile::isVisible()
 *
 * Vérifie si cette tuile est visible (doit être rendue).
 * Actuellement, seules les tuiles de type == 20 (0x14) sont testées.
 * Retourne 1 si la tuile est dans la catégorie visible.
 *
 * Note : type 20 = valeur arbitraire ; pourrait correspondre à
 * "toujours visible" ou "décor" (arbres, buissons, etc.)
 *
 * @param this  Pointeur vers la Tile (dans ecx)
 * @return      1 si visible, 0 sinon
 */
int Tile_isVisible(Tile* this) {
    return (this->type == 20) ? 1 : 0;
}

/**
 * Terrain::renderSingleTile(Tile* tile, float zoomLevel)
 *
 * Rendu individuel d'une tuile avec sélection de texture.
 * Parcourt les passes de rendu de la tuile et binde la texture
 * OpenGL appropriée pour chaque passe.
 *
 * Évite les changements de texture redondants (cache du dernier
 * texture ID bindé).
 *
 * @param this      Instance Terrain (dans ecx)
 * @param tile      Tuile à rendre
 * @param zoomLevel Niveau de zoom (passé mais utilisé indirectement)
 *
 * Structure de données de la tuile utilisée :
 *   this->renderPassCount (field_0x44) : nombre de passes de rendu
 *   this->renderPasses[] (field_0x6c)  : tableau des passes (0x38 bytes each)
 *     - renderPasses[i].textureID (field_0x6c + i*0x38) : ID texture OpenGL
 *   this->tileType (field_0x24)       : type de terrain
 *   this->tileFlags (field_0x28)      : flags de rendu
 *   this->textureOffset (field_0x240) : offset de texture ?
 */
void Terrain_renderSingleTile(Terrain* this, Tile* tile, float zoomLevel) {
    // Cache la dernière texture bindée pour éviter les changements redondants
    static void* s_lastTextureID = NULL;
    
    // Parcourt toutes les passes de rendu de cette tuile
    for (int pass = 0; pass < this->renderPassCount; pass++) {
        // Vérifie le mode de vue global
        if (g_currentViewMode != 0) {
            // ---- Vue spéciale (non-standard) ----
            // Seulement pour les tuiles de type 7 (eau ? chemin de fer ?)
            if (Tile_getType(tile) == 7) {
                // Calcule l'index de texture basé sur les flags et le viewMode
                int adjustedFlags = tile->tileFlags & 3;
                int viewDelta = adjustedFlags - g_currentViewMode;
                
                // Normalisation modulo 4
                if (viewDelta < 0) viewDelta += 4;
                
                // Calcul de l'adresse de la texture dans une table globale
                // Table située à 0x100687f8, 0x384 bytes par type, 0x24 bytes par sous-type
                int tableIndex = (viewDelta + 27) * 0x384 + tile->textureOffset * 0x24;
                void** textureTable = (void**)(0x100687f8 + tableIndex);
                
                // L'index dans la table est déterminé par la passe courante
                int texIndex = tile->renderPasses[pass].texCoord;  // byte à offset 0x70
                void* textureID = textureTable[texIndex];
                
                // Bind la texture si différente de la précédente
                if (textureID != s_lastTextureID) {
                    JGL_BindTexture(GL_TEXTURE_2D, textureID);
                    s_lastTextureID = textureID;
                }
            }
        } else {
            // ---- Vue normale — bind direct de la texture de la passe ----
            void* textureID = tile->renderPasses[pass].textureID;
            
            if (textureID != s_lastTextureID) {
                JGL_BindTexture(GL_TEXTURE_2D, textureID);
                s_lastTextureID = textureID;
            }
        }
    }
}

/**
 * Structures de données internes (déduites)
 *
 * RenderPass — une passe de rendu individuelle
 * Taille : 0x38 = 56 bytes
 * 
 * Offset  Type    Champ
 * ------  ------  -----------
 *  0x00    void*   textureID    ID de texture OpenGL
 *  0x04    byte    texCoord     Coordonnée de texture ?
 *  ...     ...     ...          Autres données de rendu
 *
 * Tile.renderPasses
 *   Tableau de RenderPass commençant à Tile+0x6c
 *   Nombre de passes : Tile+0x44 (renderPassCount)
 *
 * Tile additional fields :
 *   Offset  Type    Champ
 *   ------  ------  -----------
 *   0x28    int     tileFlags    Drapeaux de rendu
 *   0x240   int     textureOffset  Offset dans la table de textures
 */

/**
 * TABLE DE CORRESPONDANCE
 *
 * Tile::isVisible()
 *   Adresse brute : 0x10015460 (thunk 0x10001037)
 *   Nom clean : Tile_isVisible
 *   Logique : return (type == 0x14) ? 1 : 0
 *
 * Terrain::renderSingleTile(Tile*, float)
 *   Adresse brute : 0x1000e6c0 (thunk 0x10001041)
 *   Nom clean : Terrain_renderSingleTile
 *   Logique : boucle sur les passes de rendu → glBindTexture
 */

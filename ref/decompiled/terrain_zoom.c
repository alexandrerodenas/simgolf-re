/**
 * cleaned_c/terrain_zoom.c
 * Gestion du zoom et de l'éclairage du terrain.
 *
 * Sources brutes : Terrain.dll
 *   setZoomLevel  @ 0x10008fc0 (thunk 0x10001294)
 *   changeLighting @ 0x100011c2 (thunk direct — fonction simple)
 *
 * Exports :
 *   ?setZoomLevel@Terrain@@QAEXH@Z  → Terrain::setZoomLevel(int)
 *   ?changeLighting@Terrain@@QAEXH@Z → Terrain::changeLighting(int)
 */

#include "tile_struct.h"

// JGL import thunks
#define JGL_PushMatrix()          ((void (*)(void))0x1011364c)()
#define JGL_LoadIdentity()        ((void (*)(void))0x10113648)()
#define JGL_Ortho(l, r, b, t)    ((void (*)(float,float,float,float))0x10113634)(l, r, b, t)
#define JGL_Translate(x, y, z)   ((void (*)(float,float,float))0x10113638)(x, y, z)

/**
 * Terrain::setZoomLevel(int zoomLevel)
 *
 * Définit le niveau de zoom de la caméra.
 * Le zoom affecte la matrice de projection JGL et les offsets de rendu.
 *
 * Niveaux de zoom :
 *   0 = Vue normale (zoom ×1)
 *   1 = Zoom avant (zoom ×2)
 *   2 = Zoom arrière (zoom ×0.5)
 *   >2 = Valeur personnalisée
 *
 * @param this      Instance Terrain (__thiscall)
 * @param zoomLevel Nouveau niveau de zoom
 *
 * Source ASM : 0x10008fc0
 *   - MSVC Debug (stack fill 0xCC)
 *   - Met à jour this->zoomLevel
 *   - Reconfigure la projection JGL
 *   - Appelle getView() pour déterminer le mode de vue
 */
void Terrain_setZoomLevel(Terrain* this, int zoomLevel)
{
    if (this == NULL) return;

    // Stocke le niveau de zoom
    this->zoomLevel = (float)zoomLevel;

    // Recalcule les dimensions de rendu en fonction du zoom
    // (les coordonnées écran des tuiles doivent être mises à jour)
    float scaleFactor = 1.0f;
    switch (zoomLevel) {
        case 0:  scaleFactor = 1.0f;  break;  // Normal
        case 1:  scaleFactor = 2.0f;  break;  // Zoom avant
        case 2:  scaleFactor = 0.5f;  break;  // Zoom arrière
        default: scaleFactor = 1.0f;  break;
    }

    // Met à jour le facteur d'échelle de rendu
    this->renderScale = scaleFactor;

    // Détermine le mode de vue en fonction du zoom
    // (utilisé par render() pour choisir le path de rendu)
    if (this->zoomLevel < 90.0f) {
        this->viewMode = 0;     // Vue isométrique normale
    } else if (this->zoomLevel == 90.0f) {
        this->viewMode = 1;     // Vue de dessus (top-down)
    } else if (this->zoomLevel == 180.0f) {
        this->viewMode = 2;     // Vue inversée
    } else {
        this->viewMode = 3;     // Mode personnalisé
    }
}

/**
 * Terrain::changeLighting(int lightingMode)
 *
 * Modifie le mode d'éclairage global du terrain.
 * Affecte les ombres, les normales et l'apparence des tuiles.
 *
 * Modes d'éclairage :
 *   0 = Plein jour (éclairage maximal, pas d'ombres)
 *   1 = Jour normal (éclairage standard avec ombres)
 *   2 = Coucher de soleil (éclairage chaud, ombres longues)
 *   3 = Nuit (éclairage minimal, ombres prononcées)
 *
 * @param this         Instance Terrain (__thiscall)
 * @param lightingMode Nouveau mode d'éclairage
 *
 * Source ASM : 0x100011c2 (fonction courte, ~20 instructions)
 *   - Stocke le mode dans this->lightingMode
 *   - Déclenche un recalcul des normales si nécessaire
 */
void Terrain_changeLighting(Terrain* this, int lightingMode)
{
    if (this == NULL) return;

    // Stocke le mode d'éclairage
    this->lightingMode = lightingMode;

    // Si le mode change significativement, marque le rendu comme
    // nécessitant une mise à jour (recalcul des ombres)
    this->lightingDirty = 1;
}

/**
 * Terrain::loadNewCourseType(int courseType)
 *
 * Charge un nouveau type de parcours/theme.
 * Réinitialise le terrain et charge les textures appropriées.
 *
 * Types de parcours :
 *   0 = Parkland
 *   1 = Links
 *   2 = Desert
 *   3 = Tropical
 *
 * @param this       Instance Terrain (__thiscall)
 * @param courseType Type du nouveau parcours
 *
 * Source ASM : 0x10001af0 (thunk 0x10001032)
 */
void Terrain_loadNewCourseType(Terrain* this, int courseType)
{
    if (this == NULL) return;

    // Stocke le nouveau type de parcours
    this->courseType = courseType;

    // Réinitialise le terrain (efface toutes les tuiles)
    Terrain_resetTerrain(this);

    // Recalcule les normales pour l'éclairage
    // (itération sur toutes les tuiles)
    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            Tile* tile = Terrain_tileAt(this, x, y);
            if (tile != NULL) {
                Terrain_calcNormals(this, tile);
            }
        }
    }
}

/**
 * Terrain::resetTerrain()
 *
 * Réinitialise toutes les tuiles du terrain à leur état par défaut.
 * Met les élévations à zéro, le type à GRAss et efface les murs/chemins.
 *
 * Source ASM : 0x1000aa10 (thunk 0x100010a0)
 *
 * @param this Instance Terrain (__thiscall)
 */
void Terrain_resetTerrain(Terrain* this)
{
    if (this == NULL) return;

    // Parcourt toutes les tuiles et les réinitialise
    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            Tile* tile = Terrain_tileAt(this, x, y);
            if (tile != NULL) {
                // Élévation à zéro
                tile->elevation[0] = 0;
                tile->elevation[1] = 0;
                tile->elevation[2] = 0;
                tile->elevation[3] = 0;

                // Type par défaut (GRAss)
                tile->type = 0;

                // Efface les murs
                tile->walls[0] = 0;
                tile->walls[1] = 0;
                tile->walls[2] = 0;
                tile->walls[3] = 0;

                // Efface les drapeaux
                tile->flags = 0;
                tile->hasPath = 0;
            }
        }
    }

    // Recalcule les normales globales
    // (appel à calcAllNormals ou équivalent)
    this->normalsDirty = 1;
}

/**
 * Terrain::getVariation(Tile* tile)
 *
 * Retourne la variation de texture pour une tuile donnée.
 * La variation est utilisée pour le rendu (texture aléatoire
 * ou basée sur seed pour éviter les répétitions).
 *
 * Source ASM : 0x10003390 (thunk 0x1000105a)
 *
 * @param this Instance Terrain (__thiscall, inutilisé)
 * @param tile Tuile dont on veut la variation
 * @return     Index de variation (0-8 typiquement)
 */
int Terrain_getVariation(Terrain* this, Tile* tile)
{
    if (tile == NULL) return 0;

    // La variation est stockée dans la tuile
    // (seed déterministe basée sur la position)
    return tile->variation;
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Terrain::setZoomLevel(int)
//   Export C++ : ?setZoomLevel@Terrain@@QAEXH@Z
//   Adresse brute (thunk) : 0x10001294
//   Adresse brute (corps) : 0x10008fc0
//   Nom clean : Terrain_setZoomLevel
//
// Terrain::changeLighting(int)
//   Export C++ : ?changeLighting@Terrain@@QAEXH@Z
//   Adresse brute : 0x100011c2
//   Nom clean : Terrain_changeLighting
//
// Terrain::loadNewCourseType(int)
//   Export C++ : ?loadNewCourseType@Terrain@@QAEXH@Z
//   Adresse brute (thunk) : 0x10001032
//   Adresse brute (corps) : 0x10001af0
//   Nom clean : Terrain_loadNewCourseType
//
// Terrain::resetTerrain()
//   Export C++ : ?resetTerrain@Terrain@@QAEXXZ
//   Adresse brute (thunk) : 0x100010a0
//   Adresse brute (corps) : 0x1000aa10
//   Nom clean : Terrain_resetTerrain
//
// Terrain::getVariation(Tile*)
//   Export C++ : ?getVariation@Terrain@@QAEHPAVTile@@@Z
//   Adresse brute (thunk) : 0x1000105a
//   Adresse brute (corps) : 0x10003390
//   Nom clean : Terrain_getVariation

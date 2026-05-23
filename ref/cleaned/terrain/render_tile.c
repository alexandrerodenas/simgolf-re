/**
 * render_tile.c — Rendu individuel d'une tuile (SimGolf 2002)
 * ===========================================================
 *
 * Fonction principale :
 *   - render_single_tile()  — rend une tuile avec ses passes OpenGL
 *
 * Source C Ghidra :
 *   - FUN_1000e6c0 @ 0x1000E6C0 (Terrain.dll) — 703 adresses
 *     C'est la VRAIE implémentation de renderTile.
 *     Le thunk renderTile (0x100011EA, 5 adresses) → jmp 0x1000e6c0
 *
 * ATTENTION — VÉRIFICATION EN COURS :
 *   Le code ci-dessous est une interprétation du C Ghidra. Chaque
 *   offset est sourcé. Certains détails (structure RenderPass)
 *   restent à confirmer par l'analyse d'autres fonctions.
 */

#include "structs/tile.h"
#include <GL/gl.h>

/* ================================================================
 * Constantes OpenGL identifiées dans le C Ghidra
 * Source : drawLine.c (Terrain.dll)
 *
 * NOTE : Les valeurs hexadécimales sont les constantes OpenGL
 * réelles, vérifiées dans glext.h/gl.h.
 * ================================================================ */
#define GL_TEXTURE_2D       0x0DE1   /* ✅ drawLine L62 : glDisable(0xde1) */
#define GL_CULL_FACE        0x0B50   /* ✅ drawLine L60 : glDisable(0xb50) */
#define GL_BLEND            0x0BE2   /* ✅ drawLine L64 : glEnable(0xbe2) */
#define GL_SRC_ALPHA        0x0302   /* ✅ drawLine L66 : glBlendFunc(0x302,0x303) */
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_PROJECTION       0x1701   /* ✅ drawLine L38 : glMatrixMode(0x1701) */
#define GL_MODELVIEW        0x1700   /* ✅ drawLine L54 : glMatrixMode(0x1700) */
#define GL_FLOAT            0x1406   /* ✅ initTerrain L27 : glVertexPointer(3, 0x1406, ...) */
#define GL_TRIANGLES        0x0004   /* ✅ FUN_1000e6c0 L53 : glBegin(4) */
#define GL_LINES            0x0001   /* ✅ drawLine L72 : glBegin(1) */
#define GL_LINE_STRIP       0x0003   /* ✅ drawBezierSpline L97 : glBegin(3) */

/* ================================================================
 * render_single_tile — Rendu multi-passes d'une tuile
 *
 * Cette fonction rend une tuile avec ses N passes de rendu.
 * Chaque passe est un triangle (3 sommets) avec texture.
 *
 * Source : FUN_1000e6c0 (Terrain.dll @ 0x1000E6C0)
 *
 * @param tile  Pointeur vers la tuile à rendre
 *
 * LOGIQUE (reconstituée du C Ghidra, lignes 26-78) :
 *
 *   Pour chaque passe de rendu (passCount à tile+0x44) :
 *     Si mode normal ou tile n'est pas de type 7 (TODO) :
 *       Bind la texture pré-calculée (tile + pass*0x38 + 0x6c)
 *     Sinon (mode eau/reflection ?) :
 *       Calcule l'orientation : (tileFlags & 3) - currentPass
 *       Calcule la texture : base[type*4 + variation*0x24 + orient*900]
 *       Bind la texture calculée
 *     
 *     Pour les 3 sommets du triangle :
 *       glTexCoord2f (basé sur la table de coordonnées à DAT_10063ca0)
 *       glArrayElement (vertex index depuis tile + pass*0x38 + 0x48/0x4c/0x50)
 *
 *   Si flags 0x208 et 0x20a sont set :
 *     Fonction de rendu additionnelle (overlay ?)
 *
 *   Fonctions de fin de rendu :
 *     FUN_1000f7f0 — post-process (?)
 *     FUN_1000ea30 — terminaison rendu (?)
 *
 * NOTE sur tile + 0x28 & 0x80000003 :
 *   Les bits 0-1 de tileFlags codent l'orientation de la tuile.
 *   0 = Nord, 1 = Est, 2 = Sud, 3 = Ouest.
 *   Dans renderSingleTile, on calcule :
 *     orientation = (tileFlags & 3) - currentPass
 *     if (orientation < 0) orientation += 4
 *   Cela permet de faire varier la texture par passe.
 *
 * NOTE sur DAT_10070a14 (currentPass) :
 *   Variable globale qui semble contenir l'index de passe courant
 *   (0-3). Utilisée pour calculer l'orientation et pour indexer
 *   la table de coordonnées de texture.
 */
void render_single_tile(Tile *tile) {
    int pass;
    int current_pass; /* DAT_10070a14 — variable globale non extraite */
    int *texture_db;  /* DAT_100687f8 — table globale des textures GLuint */

    /* Initialisation des variables depuis les globales */
    /* TODO: ces globales ne sont pas encore nommées dans le Ghidra C */
    current_pass = 0; /* à remplacer par la vraie globale */
    texture_db = NULL; /* à remplacer par DAT_100687f8 */

    for (pass = 0; pass < tile->renderPassCount; pass++) {
        /* Récupération des données de cette passe */
        /* NOTE : les offsets (pass*0x38+0x48 etc.) sont relatifs à
         * tile+0x48 où commence le tableau RenderPass[].
         * Voir structs/tile.h pour la structure RenderPass. */

        /* TODO: cette section est une reconstruction à vérifier */

        /* Vérification si on peut utiliser la texture pré-calculée */
        if (current_pass == 0 || tile_get_type(tile) != 7) {
            /* Bind la texture déjà stockée dans la passe */
            glBindTexture(GL_TEXTURE_2D,
                          get_pass_texture_id(tile, pass));
        } else {
            /* Mode réflexion/eau : calcul de la texture */
            int orientation = (tile->tileFlags & 3) - current_pass;
            if (orientation < 0) orientation += 4;

            GLuint tex_id = compute_texture_from_table(
                texture_db,
                get_pass_terrain_type(tile, pass),
                tile->textureOffset,
                orientation
            );
            glBindTexture(GL_TEXTURE_2D, tex_id);
        }

        /* Rendu triangle */
        glBegin(GL_TRIANGLES);
        {
            /* Sommet 0 */
            glTexCoord2fv(get_texcoord(current_pass,
                           get_pass_texcoord_u(tile, pass, 0),
                           get_pass_texcoord_v(tile, pass, 0)));
            glArrayElement(get_pass_vertex(tile, pass, 0));

            /* Sommet 1 */
            glTexCoord2fv(get_texcoord(current_pass,
                           get_pass_texcoord_u(tile, pass, 1),
                           get_pass_texcoord_v(tile, pass, 1)));
            glArrayElement(get_pass_vertex(tile, pass, 1));

            /* Sommet 2 */
            glTexCoord2fv(get_texcoord(current_pass,
                           get_pass_texcoord_u(tile, pass, 2),
                           get_pass_texcoord_v(tile, pass, 2)));
            glArrayElement(get_pass_vertex(tile, pass, 2));
        }
        glEnd();
    }

    /* Post-processing : overlay si flags spéciaux */
    /* tile[0x208] != 0 && tile[0x20a] != 0 → overlay */
    /* TODO: ces flags ne sont pas nommés */
}

/* ================================================================
 * compute_texture_from_table
 *
 * Calcule l'ID de texture OpenGL à partir de la table g_textureTable.
 *
 * Source : FUN_1000e6c0, lignes 44-46 (C Ghidra) :
 *   local_18 = *(int*)(&DAT_100687f8
 *     + (uint)*(byte*)(tile + pass*0x38 + 0x70) * 4        // terrainType
 *     + *(int*)(tile + 0x240) * 0x24                        // textureOffset
 *     + (orientation + 0x1b) * 900);                         // orientation
 *
 * Formule finale :
 *   texture_id = g_textureTable[
 *       terrainType * 4 +
 *       textureOffset * 36 +
 *       (orientation + 27) * 900
 *   ]
 *
 * NOTE : L'étrange décalage "+ 0x1b" (27) suggère que la table
 * a un préfixe de 27×900 = 24300 entrées, ou bien que le type
 * '0' (Rough) commence après 27 slots d'orientation.
 * Vérifier avec l'analyse des textures réelles.
 *
 * NOTE : Le stride de 900 correspond à 225 types × 4 bytes
 * par orientation. 225 est plus que les 30 types de terrain
 * connus — probablement une table pré-allouée large.
 *
 * NOTE : Le type est lu comme un BYTE (uint8), limité à 255.
 *
 * Voir : REFERENCE_GUIDE.md §5.8.6
 *
 * @param texture_db  Pointeur vers g_textureTable (DAT_100687f8)
 * @param terrain_type  Type de terrain (byte)
 * @param variation      Index de variation (0-8 typiquement)
 * @param orientation    Index d'orientation (0-3 pour A-D)
 * @return ID de texture OpenGL (GLuint)
 */
static GLuint compute_texture_from_table(
    GLuint *texture_db,
    int terrain_type,
    int variation,
    int orientation
) {
    /* Formule brute du C Ghidra (ligne 44-46) */
    int index = terrain_type * 4
              + variation * 0x24       /* 36 bytes par variation */
              + (orientation + 0x1b) * 900;  /* 900 bytes par orientation */

    return texture_db[index / sizeof(GLuint)];
}

/* ================================================================
 * Fonctions d'accès aux passes de rendu
 *
 * Le tableau RenderPass[] commence à tile+0x48.
 * Chaque passe fait 0x38 = 56 bytes.
 * Les champs dans chaque passe sont relatifs à pass*0x38+0x48.
 *
 * Structure d'une passe (tentative — à vérifier) :
 *   offset 0x00 (global 0x48) : vertexIndex[3] (3×4=12 bytes)
 *   offset 0x0c (global 0x54) : texCoord0_x_index (int)
 *   offset 0x10 (global 0x58) : texCoord0_y_index (int)
 *   offset 0x14 (global 0x5c) : texCoord1_x_index (int)
 *   offset 0x18 (global 0x60) : texCoord1_y_index (int)
 *   offset 0x1c (global 0x64) : texCoord2_x_index (int)
 *   offset 0x20 (global 0x68) : texCoord2_y_index (int)
 *   offset 0x24 (global 0x6c) : textureID (GLuint/int32)
 *   offset 0x28 (global 0x70) : terrainType (uint8)
 *   offset 0x29-0x37 : padding ??? (15 bytes)
 *
 * NOTE : les fonctions ci-dessous ne sont PAS utilisables tant que
 * la structure RenderPass n'est pas confirmée par d'autres fonctions.
 * Elles sont données à titre indicatif pour la compréhension.
 */

// Récupère les vertex indices de la passe (3 sommets du triangle)
// #define GET_PASS_VERTEX(tile, pass, vertex) \
//     (*(int*)((uint8_t*)(tile) + 0x48 + (pass) * 0x38 + (vertex) * 4))

// Récupère les index de coordonnées de texture
// #define GET_PASS_TEXCOORD_U(tile, pass, vertex) \
//     (*(int*)((uint8_t*)(tile) + 0x48 + (pass) * 0x38 + 0x0c + (vertex) * 8))
// #define GET_PASS_TEXCOORD_V(tile, pass, vertex) \
//     (*(int*)((uint8_t*)(tile) + 0x48 + (pass) * 0x38 + 0x0c + (vertex) * 8 + 4))

// Récupère l'ID de texture de la passe
// #define GET_PASS_TEXTURE(tile, pass) \
//     (*(GLuint*)((uint8_t*)(tile) + 0x48 + (pass) * 0x38 + 0x24))

// Récupère le type de terrain pour cette passe (byte)
// #define GET_PASS_TERRAIN_TYPE(tile, pass) \
//     (*(uint8_t*)((uint8_t*)(tile) + 0x48 + (pass) * 0x38 + 0x28))

/* ================================================================
 * tile_get_type — Lit le type de terrain d'une tuile
 *
 * Source : getType (golf.exe @ 0x00449150) :
 *   int __thiscall Terrain::getType(Terrain *this, Tile *param_1) {
 *       return *(int*)(param_1 + 0x24);
 *   }
 */
int tile_get_type(const Tile *tile) {
    return tile->type;
}

/* ================================================================
 * Fonctions d'accès aux passes — STUB
 *
 * À COMPLÉTER quand la structure RenderPass sera confirmée.
 * Les fonctions ci-dessous sont temporairement non-implémentées.
 */
static GLuint get_pass_texture_id(const Tile *tile, int pass) {
    (void)tile; (void)pass;
    /* TODO: implémenter quand la structure RenderPass sera stable */
    return 0;
}

static int get_pass_terrain_type(const Tile *tile, int pass) {
    (void)tile; (void)pass;
    /* TODO: implémenter quand la structure RenderPass sera stable */
    return 0;
}

static int get_pass_texcoord_u(const Tile *tile, int pass, int vertex) {
    (void)tile; (void)pass; (void)vertex;
    /* TODO */
    return 0;
}

static int get_pass_texcoord_v(const Tile *tile, int pass, int vertex) {
    (void)tile; (void)pass; (void)vertex;
    /* TODO */
    return 0;
}

static int get_pass_vertex(const Tile *tile, int pass, int vertex) {
    (void)tile; (void)pass; (void)vertex;
    /* TODO */
    return 0;
}

static const float* get_texcoord(int current_pass, int u_idx, int v_idx) {
    (void)current_pass; (void)u_idx; (void)v_idx;
    /* TODO: lire dans DAT_10063ca0 avec la formule :
     *   &DAT_10063ca0 + current_pass*8 + u_idx*0x20 + v_idx*0x60 */
    return NULL;
}

/**
 * tile.h — Structure Tile (SimGolf 2002) — VÉRIFIÉE v2
 * =====================================================
 * Sources : 39+ fonctions Ghidra C de Terrain.dll + golf.exe
 *
 * RÈGLE : chaque offset est soit :
 *   ✅ CONFIRMÉ — par le C Ghidra (fonction source en commentaire)
 *   ⚠️ PROVISOIRE — déduit du contexte, à vérifier
 *   ❌ NON VÉRIFIÉ — marqué /* TODO *\/ — PAS DE GUESS
 */

#ifndef SIMGOLF_TILE_H
#define SIMGOLF_TILE_H

#include <stdint.h>
#include <stdbool.h>

/* ================================================================
 * CONFIRMÉ : Tile — taille 0x248 = 584 bytes
 * Source : tileAt (golf.exe @ 0x004490D0) :
 *   return (Tile*)(this + (width * y + x) * 0x248 + 0x3a4);
 * ================================================================ */
#define TILE_SIZE   0x248

/**
 * RenderPass — Une passe de rendu individuelle (0x38 = 56 bytes)
 *
 * Stockée dans Tile à partir de l'offset 0x48.
 * Chaque passe = un triangle texturé (GL_TRIANGLES).
 *
 * ✅ Structure confirmée par FUN_1000e6c0 (renderSingleTile) :
 *   tile + pass * 0x38 + 0x48 = vertexIndex[0]
 *   tile + pass * 0x38 + 0x4c = vertexIndex[1]
 *   tile + pass * 0x38 + 0x50 = vertexIndex[2]
 *   tile + pass * 0x38 + 0x54 = texCoord[0].x
 *   tile + pass * 0x38 + 0x58 = texCoord[0].y
 *   tile + pass * 0x38 + 0x5c = texCoord[1].x
 *   tile + pass * 0x38 + 0x60 = texCoord[1].y
 *   tile + pass * 0x38 + 0x64 = texCoord[2].x
 *   tile + pass * 0x38 + 0x68 = texCoord[2].y
 *   tile + pass * 0x38 + 0x6c = textureID
 *   tile + pass * 0x38 + 0x70 = terrainType (byte)
 */
typedef struct RenderPass {
    /* 0x00 (global 0x48) */ int32_t    vertexIndex[3];
    /* 0x0c (global 0x54) */ int32_t    texCoordX[3];
    /* 0x18 (global 0x60) */ int32_t    texCoordY[3];   /* ⚠️ interleaved selon ligne 72 */
    /* 0x24 (global 0x6c) */ uint32_t   textureID;
    /* 0x28 (global 0x70) */ uint8_t    terrainType;
    /* 0x29 */               uint8_t    pad[0x38 - 0x29];
} RenderPass;

/**
 * struct Tile — 584 bytes
 *
 * Champs vérifiés ci-dessous, sourcés vers la fonction Ghidra.
 */
typedef struct Tile {
    /* 0x000 */ int32_t    elevation[4];    /* ✅ getElevation(golf.exe@0x49110):
                                              *   return *(int*)(tile + corner * 4) */
    /* 0x010 */ int32_t    waterLevel;      /* ❌ TODO */

    /* 0x014 */ int32_t    flags;           /* ❌ TODO */
    /* 0x018 */ int32_t    gridX;           /* ❌ TODO */
    /* 0x01c */ int32_t    renderCategory;  /* ❌ TODO */
    /* 0x020 */ int32_t    renderWidth;     /* ❌ TODO */

    /* 0x024 */ int32_t    type;            /* ✅ getType(golf.exe@0x49150):
                                              *   return *(int*)(tile + 0x24) */
    /* 0x028 */ int32_t    tileFlags;       /* ✅ FUN_1000e6c0 L35:
                                              *   uVar2 = *(uint*)(tile+0x28)&0x80000003 */
    /* 0x02c */ int32_t    screenY;         /* ❌ TODO */
    /* 0x030 */ int32_t    screenX;         /* ❌ TODO */

    /* 0x034 */ Tile*       neighbor_north;  /* ✅ FUN_1000c7b0 L114:
                                              *   *(int*)(tile + 0x34) = pointeur N */
    /* 0x038 */ Tile*       neighbor_south;  /* ✅ FUN_1000c7b0 L128:
                                              *   *(int*)(tile + 0x38) = pointeur S */
    /* 0x03c */ Tile*       neighbor_east;   /* ✅ FUN_1000c7b0 L123:
                                              *   *(int*)(tile + 0x3c) = pointeur E */
    /* 0x040 */ Tile*       neighbor_west;   /* ✅ FUN_1000c7b0 L125:
                                              *   *(int*)(tile + 0x40) = pointeur W */

    /* 0x044 */ int32_t    renderPassCount;  /* ✅ FUN_1000e6c0 L26:
                                              *   for (pass=0; pass<tile[0x44]; pass++) */
    /* 0x048 */ RenderPass renderPasses[];   /* ✅ tableau flexible */

    /* 0x04c */ int32_t    gridY;           /* ❌ TODO */
    /* 0x050 */ float      normalX;         /* ⚠️ supposé, à confirmer */
    /* 0x054 */ float      normalY;         /* ⚠️ supposé */
    /* 0x058 */ float      normalZ;         /* ⚠️ supposé */

    /* 0x05c */ uint8_t    pad_05c[0x208 - 0x05c]; /* ❌ TODO — zone complexe
                                              *   contient les passes de rendu
                                              *   (sizeof(RenderPass)*renderPassCount) */

    /* 0x208 */ uint8_t    flag_decal;      /* ✅ FUN_1000e6c0 L79:
                                              *   if (tile[0x208]!=0 && tile[0x20a]!=0) */
    /* 0x209 */ uint8_t    pad_209;
    /* 0x20a */ uint8_t    flag_overlay;    /* ✅ FUN_1000e6c0 L79 */
    /* 0x20b */ uint8_t    pad_20b[0x234 - 0x20b];

    /* 0x234 */ uint8_t    walls[4];        /* ✅ getWall(golf.exe@0x49130):
                                              *   return (bool)(tile[side + 0x234]) */

    /* 0x238 */ uint8_t    pad_238[0x240 - 0x238];

    /* 0x240 */ int32_t    textureOffset;   /* ✅ FUN_10002f80 L18:
                                              *   *(int*)(tile+0x240) = variation
                                              * ✅ FUN_1000e6c0 L45:
                                              *   *(int*)(tile+0x240)*0x24 dans formule */

    /* 0x244 */ uint8_t    dirtyFlag;       /* ✅ FUN_1000c7b0 L112:
                                              *   *(byte*)(tile+0x244) = 1 */
    /* 0x245 */ uint8_t    pad_245[0x248 - 0x245];
} Tile;

static_assert(sizeof(Tile) == TILE_SIZE, "Tile size mismatch");

/* ================================================================
 * TypeInfo — Entrée de la table des types de terrain
 * Confirmé par setType (Terrain.dll@0x0121C) :
 *   maxVariation = *(int*)(this + terrainType * 0x18 + 0x40)
 *   → typeInfo[terrainType].maxVariation
 *   → chaque entrée = 0x18 bytes, table à Terrain+0x40
 */
#define TYPEINFO_SIZE   0x18

typedef struct TypeInfo {
    /* 0x00 */ int32_t    maxVariation;    /* ✅ setType L23-28 :
                                              *   if < 1 → variation=0
                                              *   else → variation=rand()%max */
    /* 0x04 */ uint8_t    unknown_04[0x18 - 0x04]; /* ❌ TODO */
} TypeInfo;

static_assert(sizeof(TypeInfo) == TYPEINFO_SIZE, "TypeInfo size mismatch");

/* ================================================================
 * Terrain — Structure principale du moteur de terrain
 *
 * Offsets confirmés par le C Ghidra. La classe est allouée
 * dynamiquement (new/getInstance). Pas de sizeof disponible.
 * ================================================================ */
typedef struct Terrain {
    /* 0x000 */ void*       vtable;           /* ❌ TODO */
    /* 0x004 */ uint8_t     pad_004[0x014 - 0x004];

    /* 0x014 */ int32_t     width;            /* ✅ tileAt, resetTerrain */
    /* 0x018 */ int32_t     height;           /* ✅ tileAt, resetTerrain */

    /* 0x01c */ int32_t     fieldShift;       /* ✅ calcAllNormals, render:
                                                *   utilisé pour culling */
    /* 0x020 */ int32_t     renderWidth;      /* ✅ drawLine: glOrtho */
    /* 0x024 */ int32_t     renderHeight;     /* ✅ drawLine: glOrtho */
    /* 0x028 */ int32_t     zoomLevel;        /* ✅ drawLine: test 0x28 */

    /* 0x02c */ uint8_t     pad_02c[0x040 - 0x02c];

    /* 0x040 */ TypeInfo    typeInfo[];       /* ✅ setType */
    /* 0x3a4 */ Tile        tiles[];          /* ✅ tileAt */
} Terrain;

/* ================================================================
 * Constantes OpenGL (vérifiées dans le C Ghidra)
 * ================================================================ */
#define GL_TEXTURE_2D       0x0DE1
#define GL_CULL_FACE        0x0B50
#define GL_BLEND            0x0BE2
#define GL_SRC_ALPHA        0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_PROJECTION       0x1701
#define GL_MODELVIEW        0x1700
#define GL_FLOAT            0x1406
#define GL_TRIANGLES        0x0004
#define GL_LINES            0x0001
#define GL_LINE_STRIP       0x0003

#endif /* SIMGOLF_TILE_H */

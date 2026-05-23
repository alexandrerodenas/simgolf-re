/**
 * tile.h — Structure Tile (SimGolf 2002) — VÉRIFIÉE
 * ==================================================
 * Sources : 39 fonctions Ghidra C de Terrain.dll + golf.exe
 *           Désassemblage brut (ref/raw_disasm/)
 *           Manuel existant (ref/decompiled/tile_struct.h)
 *
 * RÈGLE : chaque offset est soit :
 *   ✅ CONFIRMÉ — par le C Ghidra (au moins 1 fonction qui lit/écrit)
 *   ❌ NON VÉRIFIÉ — marqué /* TODO vérifier *\/ — PAS DE GUESS
 */

#ifndef SIMGOLF_TILE_H
#define SIMGOLF_TILE_H

#include <stdint.h>
#include <stdbool.h>

/* ================================================================
 * CONFIRMÉ : Tile — taille 0x248 = 584 bytes
 * Source : tileAt (golf.exe @ 0x004490D0, ligne 14) :
 *   return (Tile*)(this + (width * y + x) * 0x248 + 0x3a4);
 * ================================================================ */
#define TILE_SIZE   0x248

/**
 * struct Tile — 584 bytes
 *
 * Champs vérifiés ci-dessous. Les offsets marqués "TODO" proviennent
 * du manuel existant mais n'ont PAS été confirmés par le C Ghidra.
 */
typedef struct Tile {
    /* 0x000 */ int32_t    elevation[4];    /* ✅ getElevation(golf.exe@0x49110):
                                              *   return *(int*)(tile + corner * 4) */
    /* 0x010 */ int32_t    waterLevel;      /* ❌ TODO: non vérifié dans le C Ghidra */

    /* 0x014 */ int32_t    flags;           /* ❌ TODO: non vérifié */
    /* 0x018 */ int32_t    gridX;           /* ❌ TODO: non vérifié */
    /* 0x01c */ int32_t    renderCategory;  /* ❌ TODO: non vérifié */
    /* 0x020 */ int32_t    renderWidth;     /* ❌ TODO: non vérifié */

    /* 0x024 */ int32_t    type;            /* ✅ getType(golf.exe@0x49150):
                                              *   return *(int*)(tile + 0x24) */

    /* 0x028 */ int32_t    tileFlags;       /* ✅ FUN_1000e6c0@0x1000E6C0 L35:
                                              *   uVar2 = *(uint*)(tile + 0x28) & 0x80000003 */
    /* 0x02c */ int32_t    screenY;         /* ❌ TODO */
    /* 0x030 */ int32_t    screenX;         /* ❌ TODO */

    /* 0x034 */ int32_t    tileFlags2;      /* ❌ TODO */
    /* 0x038 */ int32_t    unknown_038;     /* ❌ le manuel dit "variation" mais
                                              *   Ghidra montre textureOffset à 0x240 */
    /* 0x03c */ int32_t    hasPath;         /* ❌ TODO */
    /* 0x040 */ int32_t    pathType;        /* ❌ TODO */
    /* 0x044 */ int32_t    pathDirection;   /* ❌ TODO */
    /* 0x048 */ int32_t    pathConnections; /* ❌ TODO */
    /* 0x04c */ int32_t    gridY;           /* ❌ TODO */

    /* 0x050 */ float      normalX;         /* ❌ TODO */
    /* 0x054 */ float      normalY;         /* ❌ TODO */
    /* 0x058 */ float      normalZ;         /* ❌ TODO */

    /* 0x05c */ int32_t    unknown_05c;     /* ❌ le manuel dit renderPassCount
                                              *   mais Ghidra le voit à 0x44 */

    /* 0x060 */ uint8_t    pad_060[0x06c - 0x060]; /* ❌ TODO */
    /* 0x06c */ uint8_t    unknown_06c[0x208 - 0x06c]; /* ❌ TODO — zone complexe */

    /* 0x208 */ uint8_t    flag_208;        /* ✅ FUN_1000e6c0 L79:
                                              *   if (tile[0x208] != 0 && tile[0x20a] != 0) */
    /* 0x209 */ uint8_t    pad_209;
    /* 0x20a */ uint8_t    flag_20a;        /* ✅ FUN_1000e6c0 L79 */
    /* 0x20b */ uint8_t    pad_20b[0x234 - 0x20b];

    /* 0x234 */ uint8_t    walls[4];        /* ✅ getWall(golf.exe@0x49130):
                                              *   return (bool)tile[side + 0x234] */

    /* 0x238 */ uint8_t    pad_238[0x240 - 0x238];

    /* 0x240 */ int32_t    textureOffset;   /* ✅ FUN_10002f80@0x10002F80 L18:
                                              *   *(int*)(tile + 0x240) = variation
                                              * ✅ FUN_1000e6c0 L45:
                                              *   *(int*)(tile + 0x240) * 0x24 */
    /* 0x244 */ uint8_t    pad_244[0x248 - 0x244];
} Tile;

static_assert(sizeof(Tile) == TILE_SIZE, "Tile size mismatch");

/* ================================================================
 * TypeInfo — Entrée de la table des types de terrain
 * CONFIRMÉ : chaque entrée fait 0x18 = 24 bytes
 * Source : setType (Terrain.dll@0x0121C L23) :
 *   this + param_2 * 0x18 + 0x40  → maxVariation
 *   → typeInfo table starts at Terrain+0x40
 *   → each entry is 0x18 bytes
 *   → maxVariation is at offset 0x00 within entry
 * ================================================================ */
#define TYPEINFO_SIZE   0x18

typedef struct TypeInfo {
    /* 0x00 */ int32_t    maxVariation;    /* ✅ setType L23-28 :
                                              *   if (maxVariation < 1) → variation = 0
                                              *   else → variation = rand() % maxVariation */
    /* 0x04 */ uint8_t    unknown_04[0x18 - 0x04]; /* ❌ TODO */
} TypeInfo;

static_assert(sizeof(TypeInfo) == TYPEINFO_SIZE, "TypeInfo size mismatch");

/* ================================================================
 * RenderPassState — État de rendu d'une tuile (1 passe)
 * ⚠️ Ce n'est PAS stocké dans Tile — c'est un wrapper alloué
 *    dynamiquement par le moteur de rendu.
 * Source : FUN_1000e6c0 (renderSingleTile)
 *   Le param_1 de FUN_1000e6c0 n'est PAS un Tile* mais un pointeur
 *   vers une structure de rendu qui contient une reference au Tile.
 *   Champs uses : 0x44, 0x28, 0x208, 0x20a, 0x240 (→ confirme que
 *   ce sont des offsets de Tile, pas de RenderPassState)
 *
 * ❌ NON VÉRIFIÉ — à analyser plus tard
 * ================================================================ */

/* ================================================================
 * Terrain — Structure principale du moteur de terrain (classe C++)
 * Taille non determinée (allocation dynamique via getInstance)
 * Champs vérifiés ci-dessous.
 * ================================================================ */

/**
 * struct Terrain — Moteur de terrain
 *
 * Les offsets de cette structure sont confirmés par le C Ghidra
 * des fonctions Terrain::xxx. La classe est allouée par new/getInstance.
 */
typedef struct Terrain {
    /* 0x000 */ void*       vtable;           /* ❌ TODO */
    /* 0x004 */ uint8_t     pad_004[0x014 - 0x004];

    /* 0x014 */ int32_t     width;            /* ✅ tileAt L12:
                                                *   param_1 < *(int*)(this + 0x14)
                                                * ✅ resetTerrain L27 :
                                                *   iStack_c < *(int*)(this + 0x14) */
    /* 0x018 */ int32_t     height;           /* ✅ tileAt L13:
                                                *   param_2 < *(int*)(this + 0x18)
                                                * ✅ resetTerrain L28 */

    /* 0x01c */ int32_t     fieldShift;       /* ✅ calcAllNormals L29:
                                                *   0xd << ((byte)*(int*)(this + 0x1c) & 0x1f)
                                                *   → field shift pour calculs de grille */
    /* 0x020 */ int32_t     renderWidth;      /* ✅ drawLine L44-52:
                                                *   glOrtho(..., (double)*(int*)(this + 0x20), ...) */
    /* 0x024 */ int32_t     renderHeight;     /* ✅ drawLine L44-52:
                                                *   glOrtho(..., (double)*(int*)(this + 0x24), ...) */
    /* 0x028 */ int32_t     zoomLevel;        /* ✅ drawLine L44:
                                                *   pTStack_8[0x28] == (Terrain)0x0 → test zoom */

    /* 0x02c */ uint8_t     pad_02c[0x040 - 0x02c];

    /* 0x040 */ TypeInfo    typeInfo[];       /* ✅ setType L23:
                                                *   *(int*)(this + type * 0x18 + 0x40)
                                                *   → typeInfo[type].maxVariation
                                                *   → tableau flexible, n = nbTypes */
    /* 0x3a4 */ Tile        tiles[];          /* ✅ tileAt L14:
                                                *   return (Tile*)(this + (w*y + x)*0x248 + 0x3a4)
                                                *   → tableau flexible, n = width * height */
} Terrain;

/* Offsets de Terrain confirmés supplémentaires : */

/* Terrain + 0x164AC4 → render queue (itérateur de tiles à rendre)
 *   Source : render (L109, L195) :
 *     thunk_FUN_1000af70(this + 0x164ac4, &iterator);
 *     → file d'attente des tuiles à afficher cette frame */

/* Terrain + 0x2C → zoomLevel
 *   Source : drawLine L44 :
 *     pTStack_8[0x28] == (Terrain)0x0
 *   Note : 0x28 = offset 0x28 de Terrain, divisé par sizeof(Terrain)?
 *   En C ce n'est pas standard, on garde offset 0x28 */

#endif /* SIMGOLF_TILE_H */

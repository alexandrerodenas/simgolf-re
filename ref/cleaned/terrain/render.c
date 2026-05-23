/**
 * render.c — Pipeline de rendu du terrain (SimGolf 2002)
 * =======================================================
 *
 * Fonctions couvertes :
 *   - Terrain_render_full()   — rend tout le terrain (vue globale)
 *   - Terrain_render_around() — rend une région autour d'une tuile
 *   - tile_is_skipped()       — test de skipping (PotSandBunker)
 *
 * Source C Ghidra :
 *   - render        @ 0x1000104B (Terrain.dll) — thunk vers render impl
 *   - FUN_10005990  @ 0x10005990 (Terrain.dll) — vraie implémentation (213 addr)
 *   - FUN_10015460  @ 0x10015460 (Terrain.dll) — test skip tile
 */

#include "structs/tile.h"
#include <GL/gl.h>

/* ================================================================
 * Constantes de rendu
 * ================================================================ */

/** Taille de la grille de rendu (en tuiles) */
#define RENDER_GRID_MIN     10
#define RENDER_GRID_MAX     0x28  /* 40 */
#define RENDER_GRID_CENTER  0x19  /* 25 — centre de la grille */

/** Offset du champ fieldShift dans Terrain */
#define TERRAIN_FIELDSHIFT  0x1C

/* ================================================================
 * tile_is_skipped — Vérifie si une tuile doit être sautée en rendu
 *
 * Source : FUN_10015460 (Terrain.dll @ 0x10015460, 50 addresses)
 *
 *   bool __fastcall FUN_10015460(int param_1) {
 *       return *(int*)(param_1 + 0x24) == 0x14;
 *   }
 *
 *   0x24 = tile->type
 *   0x14 = 20 = PotSandBunker
 *
 * Les PotSandBunkers sont skip dans le rendu normal. Ils sont
 * probablement rendus par un système séparé (décorations).
 *
 * À VÉRIFIER : est-ce que d'autres types sont skip ?
 * Le C Ghidra ne montre que type == 20, mais l'analyse ASM
 * pourrait révéler d'autres conditions.
 */
static bool tile_is_skipped(const Tile *tile) {
    return tile->type == 20;  /* PotSandBunker */
}

/* ================================================================
 * tile_is_visible_in_view — Vérifie si une tuile est dans le cône
 * de vue pour une rotation donnée.
 *
 * Source : thunk_FUN_10006850 (appelé par render)
 *
 * Cette fonction n'est pas encore localisée dans le C Ghidra.
 * Son rôle est déduit de son utilisation :
 *   - Elle compare la position de la tuile à la position de
 *     référence (param_1, la tuile centrale)
 *   - Elle prend l'angle de rotation (param_2)
 *   - Retourne 0 si visible, non-0 si hors champ
 *
 * TODO: localiser FUN_10006850 dans les fichiers Ghidra
 */
static bool tile_is_visible_in_view(
    Terrain *terrain, Tile *tile, Tile *center_tile, float angle
) {
    (void)terrain; (void)tile; (void)center_tile; (void)angle;
    /* TODO: implémenter quand FUN_10006850 sera analysée */
    return true;
}

/* ================================================================
 * Terrain_render_tiles_in_region — Parcourt et rend les tuiles
 * d'une région rectangulaire, avec skipping + culling.
 *
 * Source : render (FUN_10005990), la boucle interne de rendu.
 *
 * Le scan direction dépend de l'angle de rotation :
 *   0°    → scan Ouest→Est, Nord→Sud
 *   90°   → scan Sud→Nord, Ouest→Est
 *   180°  → scan Est→Ouest, Sud→Nord
 *   autre → scan Nord→Sud, Est→Ouest
 *
 * Ces 4 variantes existent pour que les tuiles soient rendues
 * dans le bon ordre (tri du peintre — tiles les plus éloignées
 * d'abord).
 *
 * Pour chaque tuile visitée :
 *   si tile != NULL
 *   ET si !tile_is_skipped(tile)
 *   ET si la tuile est dans le champ de vision → render_single_tile(tile)
 */
static void render_region(
    Terrain *terrain,
    int start_x, int end_x, int step_x,
    int start_y, int end_y, int step_y,
    Tile *center_tile, float angle
) {
    int x, y;
    Tile *tile;

    for (y = start_y; y != end_y; y += step_y) {
        for (x = start_x; x != end_x; x += step_x) {
            tile = tileAt(terrain, x, y);
            if (tile == NULL) continue;
            if (tile_is_skipped(tile)) continue;
            /* TODO: décommenter quand FUN_10006850 sera localisée
            if (!tile_is_visible_in_view(terrain, tile, center_tile, angle))
                continue;
            */
            render_single_tile(tile);
        }
    }
}

/* ================================================================
 * Terrain_render — Point d'entrée principal du rendu terrain
 *
 * Signature C++ originale :
 *   bool Terrain::render(Tile *centerTile, float rotation)
 *
 * Source : FUN_10005990 (Terrain.dll @ 0x10005990, 213 addresses)
 *
 * @param terrain     Instance du moteur de terrain
 * @param center_tile Tuile centrale du rendu (NULL = vue complète)
 * @param rotation    Angle de rotation de la caméra (0, 90, 180...)
 *
 * LOGIQUE :
 *   1. Setup OpenGL (identity, push, rotate, translate)
 *   2. Si center_tile == NULL :
 *        → rend toutes les tuiles dans la région [10..40)x[10..40)
 *      Sinon :
 *        → calcule les bornes de rendu autour de center_tile
 *        → rend selon l'angle de rotation (4 variantes)
 *   3. Pop matrix, flush
 *
 * NOTE sur la grille de rendu :
 *   Le jeu fixe la région de rendu entre les indices 10 et 40
 *   (sur 50×50 max). Cela suggère une zone de jeu active de
 *   30×30 tuiles centrée sur la vue.
 *
 * NOTE sur fieldShift (Terrain + 0x1C) :
 *   Utilisé pour calculer les distances de culling.
 *   Formule : 0x10 << (fieldShift & 0x1F)
 *   → stack_18 = 16 * 2^(fieldShift & 31)
 *   C'est la distance en demi-tuiles du bord de l'écran.
 */
bool Terrain_render(Terrain *terrain, Tile *center_tile, float rotation) {
    int tile_y, tile_x;
    int cull_dist;    /* distance de culling (stack_18) */
    int cull_north;   /* stack_c  — borne nord */
    int cull_south;   /* stack_10 — borne sud */
    int cull_west;    /* stack_14 — borne ouest */
    int cull_east;    /* stack_18 — borne est */

    /* Initialisation */
    cull_dist = 0x10 << (*(int*)((char*)terrain + TERRAIN_FIELDSHIFT) & 0x1F);
    cull_north = cull_south = cull_west = cull_east = cull_dist;

    /* Setup OpenGL */
    glLoadIdentity();
    glPushMatrix();

    /* Rotation selon angle de la carte (isométrique) */
    /* DAT_10070a10 = angle de base de la carte (45° pour isométrique) */
    /* DAT_1005f344 + rotation = angle de rotation supplémentaire */
    /* TODO: remplacer les globales par leurs vrais noms */
    glRotated(45.0, 0, 1, 0);    /* DAT_10070a10 → angle iso */
    glRotatef(/* _DAT_1005f344 */ 0.0f + rotation, 0, 1, 0);

    /* Translation vers la position de la tuile centrale */
    if (center_tile != NULL) {
        /* Récupération des coordonnées de la tuile */
        /* thunk_FUN_10006810 = tile_get_screen_y(tile) */
        /* thunk_FUN_10005960 = tile_get_screen_x(tile) */
        /* TODO: localiser ces deux fonctions */
        tile_y = 0x19 - /* thunk_FUN_10006810(center_tile) */ 0;
        tile_x = 0x19 - /* thunk_FUN_10005960(center_tile) */ 0;
        glTranslatef(tile_x * /* _DAT_1005f340 */ 1.0f, 0, tile_y * /* _DAT_1005f340 */ 1.0f);
    }

    /* Appel de fonction de pré-rendu (éclairage ?) */
    /* thunk_FUN_1000adc0(rotation) — TODO: localiser */
    /* thunk_FUN_1000adc0(rotation); */

    if (center_tile == NULL) {
        /* ============================================================
         * Mode VUE COMPLÈTE : rend toutes les tuiles dans [10,40)
         * ============================================================ */
        for (tile_y = 10; tile_y < 0x28; tile_y++) {
            for (tile_x = 0x28; tile_x > 10; tile_x--) {
                Tile *t = tileAt(terrain, tile_x, tile_y);
                if (t) render_single_tile(t);
            }
        }
    } else {
        /* ============================================================
         * Mode VUE CENTRÉE : rend une région autour de center_tile
         * Les bornes sont calculées à partir de la position de la
         * tuile centrale et de la distance de culling.
         * ============================================================ */

        /* TODO: calcul des bornes cull_north/cull_south/cull_west/cull_east
         * à partir de center_tile + cull_dist
         * Le C Ghidra montre :
         *   iStack_c   = min(tileGetY(center), ...)
         *   iStack_10  = max(0x32 - tileGetY(center), ...)
         *   iStack_14  = min(tileGetX(center), ...)
         *   iStack_18  = max(0x32 - tileGetX(center), ...)
         */

        /* 4 variantes d'ordre de rendu selon l'angle */
        if (rotation == 0.0f) {
            /* Scan : X décroissant, Y croissant */
            /* TODO: remplacer les bornes par les valeurs calculées */
            render_region(terrain,
                /* start_x */ 0x28, /* end_x */ 10, /* step_x */ -1,
                /* start_y */ 10,   /* end_y */ 0x28, /* step_y */ 1,
                center_tile, rotation);
        } else if (rotation == 90.0f) {
            /* Scan : Y croissant, X croissant */
            render_region(terrain,
                /* start_x */ 10,   /* end_x */ 0x28, /* step_x */ 1,
                /* start_y */ 0x28, /* end_y */ 10,   /* step_y */ -1,
                center_tile, rotation);
        } else if (rotation == 180.0f) {
            /* Scan : X croissant, Y croissant */
            render_region(terrain,
                /* start_x */ 10,   /* end_x */ 0x28,  /* step_x */ 1,
                /* start_y */ 0x28, /* end_y */ 10,    /* step_y */ -1,
                center_tile, rotation);
        } else {
            /* Scan : Y décroissant, X décroissant (fallback) */
            render_region(terrain,
                /* start_x */ 10,   /* end_x */ 0x28, /* step_x */ 1,
                /* start_y */ 10,   /* end_y */ 0x28, /* step_y */ 1,
                center_tile, rotation);
        }
    }

    glPopMatrix();
    glFlush();

    /* NOTE : le C Ghidra retourne SUB41(uVar6, 0) — le résultat
     * de __chkesp() — qui est probablement un code d'erreur.
     * Nous retournons true pour simplifier. */
    return true;
}

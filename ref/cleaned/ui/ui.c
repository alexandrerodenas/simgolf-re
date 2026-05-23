/**
 * ui.c — Système d'interface utilisateur (SimGolf 2002)
 * ======================================================
 *
 * Sources : ref/decompiled/game_ui_statemachine.h (262 lignes)
 *           ref/decompiled/game_ui_system.c (941 lignes)
 *
 * 25 écrans identifiés, machine d'état avec transitions.
 * L'UI utilise les PCX chargés via jgld.dll (JGL/GDI).
 */

#include "structs/game_state.h"
#include <stdint.h>

/* ================================================================
 * États de l'écran (25 valeurs)
 * ================================================================ */

typedef enum Screen {
    SCR_NONE = 0,
    SCR_SPLASH,              /* bink64.pcx + logo.pcx */
    SCR_LOADING,             /* LoadingScreen01-12.pcx */
    SCR_TITLE,               /* TitleBASE.pcx */
    SCR_SCENARIO_SELECT,     /* TitleSelDiffMO.pcx */
    SCR_LOAD_GAME,           /* Title_LoadGame.pcx */
    SCR_PRO_SELECT,          /* Title_Pickapro.pcx */
    SCR_THEME_PACKS,         /* Title_ThemePacks.pcx */
    SCR_TOP10,               /* Top10_Trophies.pcx */
    SCR_CREDITS,             /* creditsbckgrd.pcx */
    SCR_WORLD,               /* WorldBase.pcx — jeu principal */
    SCR_INFO,                /* FINANCEreport / coursereport */
    SCR_PAUSE,               /* PopUpIcons */
    SCR_TOURNAMENT_RESULT,   /* tournament result.pcx */
    SCR_END_OF_YEAR,         /* ENDoYEAR.pcx */
    SCR_HIRE,                /* hire.pcx */
    SCR_MEMBER_ROSTER,       /* memberRoster.pcx */
    SCR_BUY_LAND,            /* buy_land.pcx */
    SCR_HOLE_STATS,          /* HoleSTAT.pcx */
    SCR_SETTINGS,            /* shortcuts.pcx */
} Screen;

/* ================================================================
 * Toolbar types (5 barres d'outils dans le monde)
 * ================================================================ */

#define TOOLBAR_TERRAIN      0   /* outils de terrain */
#define TOOLBAR_BUILDING     1   /* construction */
#define TOOLBAR_ELEVATION    2   /* élévation */
#define TOOLBAR_AMENITIES    3   /* commodités */
#define TOOLBAR_EMPLOYEES    4   /* employés */

/* ================================================================
 * Transitions d'écran (machine d'état)
 * ================================================================ */

static Screen screen_transition(Screen current, int action) {
    switch (current) {
    case SCR_SPLASH:
        if (action == 0) return SCR_LOADING;
        break;
    case SCR_LOADING:
        if (action == 0) return SCR_TITLE;
        break;
    case SCR_TITLE:
        if (action == 1) return SCR_SCENARIO_SELECT;  /* New Game */
        if (action == 2) return SCR_LOAD_GAME;          /* Load */
        if (action == 3) return SCR_PRO_SELECT;         /* Pick Pro */
        if (action == 4) return SCR_TOP10;              /* Top 10 */
        if (action == 5) return SCR_CREDITS;            /* Credits */
        if (action == 6) return SCR_NONE;               /* Quit → EXIT */
        break;
    case SCR_WORLD:
        if (action == 0) return SCR_PAUSE;              /* Escape */
        if (action == 1) return SCR_INFO;               /* Info button */
        if (action == 2) return SCR_HIRE;               /* Hire */
        if (action == 3) return SCR_MEMBER_ROSTER;      /* Members */
        if (action == 4) return SCR_BUY_LAND;           /* Buy land */
        if (action == 5) return SCR_HOLE_STATS;         /* Hole stats */
        break;
    case SCR_PAUSE:
        if (action == 0) return SCR_WORLD;              /* Resume */
        if (action == 1) return SCR_TITLE;              /* Quit to menu */
        if (action == 2) return SCR_NONE;               /* Quit to desktop */
        break;
    case SCR_INFO:
    case SCR_HIRE:
    case SCR_MEMBER_ROSTER:
    case SCR_BUY_LAND:
    case SCR_HOLE_STATS:
        if (action == 0) return SCR_WORLD;              /* Close */
        break;
    default:
        break;
    }
    return current;  /* pas de changement */
}

/* ================================================================
 * ui_update — Fonction principale de mise à jour de l'UI
 *
 * Appelée à chaque frame après le rendu du terrain.
 * Gère les transitions d'écran et l'affichage des overlays.
 *
 * @param gs    État du jeu
 * @param input Action utilisateur (0 = aucun)
 */
void ui_update(GameState *gs, int input) {
    Screen new_screen;

    if (gs == NULL) return;

    /* Transition d'écran si action utilisateur */
    /* Note: gs->active_screen est un int, on cast */
    new_screen = screen_transition((Screen)gs->active_screen, input);
    gs->active_screen = (int)new_screen;
}

/* ================================================================
 * ui_draw — Dessine l'UI overlay au-dessus du rendu 3D
 *
 * Les PCX sont chargés via jgld.dll (JGL/GDI).
 * L'overlay utilise BitBlt ou les fonctions sprite de JGL.
 *
 * @param screen    Écran actif
 * @param hdc       Contexte de périphérique
 */
void ui_draw(Screen screen, void *hdc) {
    (void)hdc;

    switch (screen) {
    case SCR_TITLE:
        /* TitleBASE.pcx en fond */
        /* Boutons: New Game, Load, Pick Pro, Top 10, Credits, Quit */
        break;
    case SCR_WORLD:
        /* WorldBase.pcx en fond */
        /* Toolbar selon active_toolbar (5 barres) */
        /* TransPopups.pcx pour les popups */
        break;
    case SCR_PAUSE:
        /* Overlay semi-transparent (black.pcx + alpha) */
        /* PopUpIcons.pcx */
        break;
    default:
        break;
    }
}

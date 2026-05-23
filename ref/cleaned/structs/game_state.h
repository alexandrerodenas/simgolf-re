/**
 * game_state.h — Structures principales du jeu (SimGolf 2002)
 * ===========================================================
 *
 * Sources :
 *   - ref/decompiled/game_data_types.h  (parseurs .dta/.pro)
 *   - ref/decompiled/game_economy.h     (système économique)
 *   - ref/decompiled/game_tick.c        (boucle simulation)
 *   - ref/decompiled/game_tick_v2.c     (variante optimisée)
 *   - ref/decompiled/game_ui_statemachine.h (25 états UI)
 *   - ref/decompiled/game_vtable_dispatch.h
 *
 * Ce fichier regroupe les structures de données transverses.
 * Les détails d'implémentation sont dans les fichiers .c séparés.
 */

#ifndef SIMGOLF_GAME_STATE_H
#define SIMGOLF_GAME_STATE_H

#include "structs/tile.h"
#include <stdint.h>
#include <stdbool.h>

/* ================================================================
 * Énumérations du jeu
 * ================================================================ */

typedef enum CourseTheme {
    THEME_PARKLAND = 0,
    THEME_LINKS    = 1,
    THEME_DESERT   = 2,
    THEME_TROPICAL = 3,
} CourseTheme;

typedef enum ClubLevel {
    CLUB_DAILY_FEE    = 0,   /* public */
    CLUB_COUNTRY      = 1,   /* country club */
    CLUB_CHAMPIONSHIP = 2,   /* championship */
} ClubLevel;

typedef enum TournamentLevel {
    TOUR_JR_EVENT            = 0,
    TOUR_JR_CHAMPIONSHIP     = 1,
    TOUR_SGA_AMATEUR         = 2,
    TOUR_SENIOR_EVENT        = 3,
    TOUR_SGA_EVENT           = 4,
    TOUR_SENIOR_CHAMPIONSHIP = 5,
    TOUR_SGA_PLAYERS         = 6,
    TOUR_SGA_CHAMPIONSHIP    = 7,
    TOUR_MINI_SLAM           = 8,
    TOUR_GRAND_SLAM          = 9,
} TournamentLevel;

typedef enum GameMode {
    MODE_SANDBOX      = 0,
    MODE_CHAMPIONSHIP = 1,
    MODE_SCENARIO     = 2,
} GameMode;

/* ================================================================
 * GolferSkills — Compétences d'un golfeur
 *
 * Valeurs typiques : 1-15 (hex: 0x1-0xF)
 * Les pros SGA ont 7-10+. Les hackers amateur ont 1-4.
 *
 * Source : parseurs .dta + ref/decompiled/game_data_types.h
 */
typedef struct GolferSkills {
    uint8_t length;         /* distance de frappe */
    uint8_t accuracy;       /* précision direction */
    uint8_t imagination;    /* courber la balle */
    uint8_t recovery;       /* sortir des rough/bunkers */
    uint8_t putting;        /* putting green */
    uint8_t chipping;       /* petit jeu (approches) */
    uint8_t power;          /* puissance pure */
    uint8_t consistency;    /* régularité */
} GolferSkills;

/* ================================================================
 * Golfer — Golfeur (pro, célébrité, ou créé par le joueur)
 *
 * Source : progolfers.dta / celebrities.dta
 * Taille par entrée : ~0x60 bytes (96 bytes)
 */
typedef struct Golfer {
    char          name[32];        /* nom complet */
    GolferSkills  skills;          /* 8 compétences */
    int           skin_color;      /* couleur de peau */
    int           hair_color;      /* couleur cheveux */
    int           body_type;       /* morphologie */
    int           celeb_type;      /* type célébrité (-1 si pro) */
    int           age;             /* âge */
    int           popularity;      /* popularité (attire les foules) */
    int           fee;             /* cachet par apparition */
    /* ... champs supplémentaires selon parseur */
} Golfer;

/* ================================================================
 * Tournoi — Définition d'un tournoi
 *
 * Source : ref/decompiled/game_tournaments.c
 * Tableau de 22 tournois (g_tournaments @ 0x0080d840)
 */
typedef struct Tournament {
    char              name[64];        /* nom du tournoi */
    int               level;           /* TournamentLevel */
    int               prize_pool;      /* dotation ($$$) */
    int               week;            /* semaine dans la saison */
    int               course_id;       /* index du parcours */
    Golfer           *participants[16];/* 16 golfeurs participants */
    int               participant_count;
    /* ... */
} Tournament;

/* ================================================================
 * CourseState — État du parcours
 *
 * Wrappe l'instance Terrain + métadonnées du parcours.
 */
typedef struct CourseState {
    Terrain     *terrain;           /* moteur de terrain */
    int          width;             /* largeur en tuiles */
    int          height;            /* hauteur en tuiles */
    CourseTheme  theme;             /* thème visuel */
    char         name[64];          /* nom du parcours */
    int          hole_count;        /* nombre de trous (9 ou 18) */
    int         *hole_positions;    /* positions des départs */
    /* métriques */
    int          total_fairways;
    int          total_greens;
    int          total_bunkers;
    int          total_water;
    int          total_trees;
} CourseState;

/* ================================================================
 * Economy — État économique du club
 *
 * Source : ref/decompiled/game_economy.h + game_economy.c
 * Le profit est stocké en fixed-point ×1024 (10 bits fraction).
 */
typedef struct Economy {
    int  profit;             /* fixed-point ×1024 @ 0x834170 */
    int  cash;               /* trésorerie */
    int  weekly_revenue;     /* revenus de la semaine */
    int  weekly_expenses;    /* dépenses de la semaine */
    int  members;            /* nombre de membres */
    int  membership_tier;    /* 0=daily, 1=country, 2=championship */
    int  greens_fees;        /* green fee par visiteur */
    int  employee_count;     /* employés actifs */
    int  current_week;       /* semaine dans la saison */
} Economy;

/* ================================================================
 * GameState — État global du jeu
 *
 * Structure principale pointée par g_pGameObject (0x008400b0).
 * Contient tous les sous-systèmes.
 *
 * Source : ref/decompiled/game_init_state.c
 */
typedef struct GameState {
    /* Configuration */
    GameMode        mode;               /* mode de jeu */
    int             difficulty;         /* niveau difficulté */
    char            club_name[64];      /* nom du club */
    ClubLevel       club_level;         /* type de club */
    int             start_year;         /* année de début */

    /* Parcours */
    CourseState    *course;             /* état du parcours */
    int             active_hole;        /* trou en cours (-1 si éditeur) */

    /* Golfeurs */
    Golfer         *player_golfer;      /* golfeur du joueur */
    Golfer         *opponents[3];       /* adversaires (0-3) */
    int             opponent_count;

    /* Tournois */
    Tournament      tournaments[22];    /* tableau de 22 tournois */
    int             active_tournament;  /* -1 si pas de tournoi */
    int             tournament_week;    /* semaine dans le tournoi */

    /* Économie */
    Economy         economy;

    /* UI */
    int             active_screen;      /* écran actif (25 états) */
    void           *ui_state;           /* machine d'état UI */

    /* Timer / Simulation */
    int             tick_count;         /* compteur de ticks */
    int             paused;             /* jeu en pause */
    float           time_scale;         /* échelle de temps */

    /* Audio */
    int             sound_volume;       /* volume SFX (0-100) */
    int             music_volume;       /* volume musique (0-100) */
} GameState;

/* ================================================================
 * BallState — État de la balle pendant un tir
 *
 * Source : ref/decompiled/game_physics.c
 * Structure utilisée par le moteur de trajectoire.
 */
typedef struct BallState {
    float position[3];      /* position 3D (x, y, z) */
    float velocity[3];      /* vélocité (vx, vy, vz) */
    float spin[3];          /* rotation (spin x, y, z) */
    float wind[3];          /* vent appliqué */
    int   flags;            /* flags d'état */
    float height_above_ground; /* hauteur au-dessus du sol */
    int   terrain_type;     /* type de terrain sous la balle */
    int   lie_quality;      /* qualité du lie */
    /* ... */
} BallState;

/* ========================================
 * Constantes globales (golf.exe .data)
 * ======================================== */

#define GAME_OBJ_PTR    0x008400b0  /* GameState* */
#define TOURNAMENT_ARR  0x0080d840  /* Tournament[22] */
#define BALL_DATA_PTR   0x0081ca10  /* BallState* */
#define PROFIT_VAL      0x00834170  /* fixed-point ×1024 */

#endif /* SIMGOLF_GAME_STATE_H */

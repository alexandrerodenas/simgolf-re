/**
 * cleaned_c/game_data_types.h
 * Structures de données du jeu SimGolf
 *
 * Généré depuis les parseurs Python (parse_game_data.py)
 * Compatible C → TypeScript (mêmes structures en interfaces)
 *
 * Données sources :
 *   progolfers.dta  — 96 golfeurs (80 pros + hackers/amateurs)
 *   celebrities.dta — 50 célébrités parodiques
 *   Lighting.txt    — 4 thèmes × paramètres RGB
 */

#ifndef SIMGOLF_DATA_TYPES_H
#define SIMGOLF_DATA_TYPES_H

#include <stdint.h>

// ================================================================
// ÉNUMÉRATIONS
// ================================================================

/** Types de corps de golfeur */
typedef enum GolferBodyType {
    BODY_UNKNOWN  = -1,
    BODY_DEFAULT  = 0,  // Taille standard
    BODY_KNICKERS = 1,  // Pantalon golf classique
    BODY_SHORT    = 2,  // Manches courtes
    BODY_LONG     = 3,  // Manches longues
    BODY_FEMALE_1 = 4,  // Femme type 1
    BODY_FEMALE_2 = 5,  // Femme type 2
    BODY_FEMALE_3 = 6,  // Femme type 3
    BODY_FEMALE_4 = 7,  // Femme type 4
} GolferBodyType;

/** Couleur de peau */
typedef enum SkinColor {
    SKIN_CAUCASIAN    = 0,
    SKIN_ASIAN_TANNED = 1,
    SKIN_LATINO_TAN   = 2,
    SKIN_AFRO_AMERICAN = 3,
} SkinColor;

/** Couleurs de cheveux */
typedef enum HairColor {
    HAIR_GREY   = 0,
    HAIR_BLONDE = 1,
    HAIR_RED    = 2,
    HAIR_BROWN  = 3,
    HAIR_BLACK  = 4,
} HairColor;

/** Types de célébrité */
typedef enum CelebrityType {
    CELEB_ACTION_STAR   = 'A',  // Action Movie Star
    CELEB_POP_STAR      = 'B',  // Female Pop Star
    CELEB_POLITICIAN    = 'C',  // Politician
    CELEB_COMEDIAN_M    = 'D',  // Male Comedian
    CELEB_SUPERMODEL    = 'E',  // Supermodel
    CELEB_FITNESS       = 'F',  // Fitness Female
    CELEB_COMEDIAN_F    = 'G',  // Female Comedian
    CELEB_LEADING_MAN   = 'H',  // Leading Man
    CELEB_MOVIE_STAR_F  = 'I',  // Female Movie Star
    CELEB_ROCK_STAR     = 'J',  // Rock and Roller
    CELEB_ATHLETE       = 'K',  // Athlete
} CelebrityType;

/** Thèmes de parcours */
typedef enum CourseTheme {
    THEME_PARKLAND = 0,  // Parc verdoyant classique
    THEME_LINKS    = 1,  // Links côtier
    THEME_DESERT   = 2,  // Désert
    THEME_TROPICAL = 3,  // Tropical
} CourseTheme;

/** Types de trous */
typedef enum HoleType {
    HOLE_PRECISE    = 0,  // Récompense la précision
    HOLE_FREEWAY    = 1,  // Récompense la longueur
    HOLE_CHALLENGE  = 2,  // Précision + longueur
    HOLE_CREATIVE   = 3,  // Imagination (shots courbes)
    HOLE_STRATEGIC  = 4,  // Précision + imagination
    HOLE_HEROIC     = 5,  // Longueur + imagination
    HOLE_CLASSIC    = 6,  // Les 3 compétences
} HoleType;

/** Niveaux de tournoi */
typedef enum TournamentLevel {
    TOUR_JR_EVENT           = 0,
    TOUR_JR_CHAMPIONSHIP    = 1,
    TOUR_SGA_AMATEUR        = 2,
    TOUR_SENIOR_EVENT       = 3,
    TOUR_SGA_EVENT          = 4,
    TOUR_SENIOR_CHAMPIONSHIP = 5,
    TOUR_SGA_PLAYERS        = 6,
    TOUR_SGA_CHAMPIONSHIP   = 7,
    TOUR_MINI_SLAM          = 8,
    TOUR_GRAND_SLAM         = 9,
} TournamentLevel;

/** Niveaux de club */
typedef enum ClubLevel {
    CLUB_DAILY_FEE      = 0,  // Public
    CLUB_COUNTRY        = 1,  // Country Club
    CLUB_CHAMPIONSHIP   = 2,  // Championship
} ClubLevel;

// ================================================================
// STRUCTURES PRINCIPALES
// ================================================================

/**
 * GolferSkills — Les 8 compétences d'un golfeur
 * Valeurs typiques : 1-15 (hex: 1-F), les pros ont 7-10+
 */
typedef struct GolferSkills {
    uint8_t length;          // Distance de frappe
    uint8_t accuracy;        // Précision de direction
    uint8_t imagination;     // Capacité à courber la balle
    uint8_t recovery;        // Sortir des situations difficiles
    uint8_t backspin;        // High backspin shot
    uint8_t putter;          // Accurate putter
    uint8_t driver_accuracy; // Accurate driver
    uint8_t driver_length;   // Long driver
} GolferSkills;

/**
 * ProGolfer — Golfeur professionnel
 * Source : progolfers.dta (96 entrées)
 */
typedef struct ProGolfer {
    char          name[32];     // Nom du golfeur
    int           bodyType;     // Type de corps (GolferBodyType)
    int           skinColor;    // Couleur de peau (SkinColor)
    int           hat;          // Index du chapeau
    int           shirtColor;   // Index couleur chemise
    int           pantsColor;   // Index couleur pantalon
    GolferSkills  skills;       // 8 compétences
} ProGolfer;

/**
 * Celebrity — Célébrité parodique
 * Source : celebrities.dta (50 entrées)
 */
typedef struct Celebrity {
    char  name[32];          // Nom parodique (ex: "Sylvester Stallion")
    char  type;              // Type (CelebrityType)
    int   skinColor;         // Couleur de peau (0-3)
    int   hairColor;         // Couleur cheveux (0-4)
    int   shirtColor;        // Couleur chemise (0-9)
    int   pantsColor;        // Couleur pantalon/dress (0-9)
} Celebrity;

/**
 * LightingParams — Paramètres d'éclairage d'un thème
 * Source : *Lighting.txt
 */
typedef struct LightingParams {
    int sunAmbient[3];       // Lumière ambiante du soleil RGB
    int sunDiffuse[3];       // Lumière diffuse du soleil RGB
    int sunSpecular[3];      // Lumière spéculaire du soleil RGB
    int fogColor[3];         // Couleur du brouillard RGB
    int skyColor[3];         // Couleur du ciel RGB
    int groundColor[3];      // Couleur du sol RGB
} LightingParams;

/**
 * Scenario — Scénario de campagne
 */
typedef struct Scenario {
    char  name[64];
    int   budget;            // Budget initial
    int   targetSGA;         // Score SGA cible
    int   difficulty;        // Difficulté (1-5)
    int   theme;             // CourseTheme
    char  description[256];
} Scenario;

// ================================================================
// TABLEAUX DE DONNÉES
// ================================================================

/** Nombre total de golfeurs pros */
#define PRO_GOLFER_COUNT 96

/** Nombre total de célébrités */
#define CELEBRITY_COUNT 50

/** Nombre de thèmes d'éclairage */
#define LIGHTING_THEME_COUNT 4

/** Nombre de niveaux de tournoi */
#define TOURNAMENT_LEVEL_COUNT 10

// ================================================================
// SCÉNARIOS (depuis gameplay_architecture.md)
// ================================================================

#define SCENARIO_COUNT 6

static const Scenario SCENARIOS[SCENARIO_COUNT] = {
    {"Tutorial",          5000,  20, 1, THEME_PARKLAND, "Apprendre les bases"},
    {"Pine Valley GC",   10000,  40, 2, THEME_PARKLAND, "Parcours en décomposition"},
    {"Carolina Links",   25000,  70, 3, THEME_LINKS,    "Parcours historique"},
    {"Paradise Tropical",50000,  90, 4, THEME_TROPICAL, "Destination touristique"},
    {"Desert Champ.",    30000,  80, 4, THEME_DESERT,   "Construction from scratch"},
    {"Grand Slam",      100000, 100, 5, THEME_PARKLAND, "Parcours de championnat"},
};

#endif /* SIMGOLF_DATA_TYPES_H */

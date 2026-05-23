/**
 * ai.c — IA des golfeurs (SimGolf 2002)
 * =======================================
 *
 * Sources : ref/decompiled/game_ai_logic.h (573 lignes)
 *   Analyse des chaînes extraites + logique de sélection club/tir
 *
 * ATTENTION : Ce fichier est une RECONSTRUCTION basée sur l'analyse
 * des chaînes et de la logique de jeu. À vérifier contre le C Ghidra
 * des fonctions AI_* (FUN_0049xxxx) non encore localisées.
 */

#include "structs/game_state.h"
#include <math.h>
#include <stdlib.h>

/* ================================================================
 * Constantes de sélection de club (depuis l'analyse des chaînes)
 * ================================================================ */

#define CLUB_DRIVER     0
#define CLUB_WOOD       1
#define CLUB_IRON       2
#define CLUB_WEDGE      3
#define CLUB_PUTTER     4
#define CLUB_CHIP       5
#define CLUB_SAND       6

#define SHOT_NORMAL     0
#define SHOT_DRAW       1
#define SHOT_FADE       2
#define SHOT_HIGH       3
#define SHOT_LOW        4

#define LIE_TEE     0
#define LIE_FAIRWAY 1
#define LIE_ROUGH   2
#define LIE_SAND    3
#define LIE_GREEN   4

/* Seuils de distance (yards) — standards de golf SimGolf */
#define DIST_DRIVER_MIN     200
#define DIST_WOOD_MIN       150
#define DIST_IRON_MIN       100
#define DIST_WEDGE_MIN      50
#define DIST_PUTT_MAX       30

/* ================================================================
 * Clubs connus (depuis les chaînes extraites du binaire)
 *   "setting up to hit a low shot"
 *   "setting up to hit a high shot"
 *   "setting up to hit a draw shot"
 *   "setting up to hit a fade shot"
 * ================================================================ */

static const char *SHOT_NAMES[] = {
    [SHOT_NORMAL] = "a standard shot",
    [SHOT_DRAW]   = "a draw shot",
    [SHOT_FADE]   = "a fade shot",
    [SHOT_HIGH]   = "a high shot",
    [SHOT_LOW]    = "a low shot",
};

/* ================================================================
 * ai_select_club — Sélectionne le club selon distance + lie
 *
 * @param distance  Distance restante au trou (yards)
 * @param lie       Type de sol
 * @param skills    Compétences du golfeur
 * @return          Index du club (0-6)
 *
 * LOGIQUE (reconstruite) :
 *   Sur le green + distance < 30 → Putter
 *   Distance > 200 → Driver (ou Long Driver si skill ≥ 10)
 *   Distance > 150 → Wood
 *   Distance > 100 → Iron
 *   Distance > 50  → Wedge (ou Sand Wedge si dans bunker)
 *   Sinon → Chip/Pitch (ou Putter si sur green)
 */
int ai_select_club(int distance, int lie, const GolferSkills *skills) {
    if (lie == LIE_GREEN && distance <= DIST_PUTT_MAX)
        return CLUB_PUTTER;

    if (distance >= DIST_DRIVER_MIN)
        return CLUB_DRIVER;

    if (distance >= DIST_WOOD_MIN)
        return CLUB_WOOD;

    if (distance >= DIST_IRON_MIN)
        return CLUB_IRON;

    if (distance >= DIST_WEDGE_MIN) {
        if (lie == LIE_SAND) return CLUB_SAND;
        return CLUB_WEDGE;
    }

    if (lie == LIE_GREEN) return CLUB_PUTTER;
    return CLUB_CHIP;
}

/* ================================================================
 * ai_select_shot_type — Choisit le type de tir
 *
 * @param distance  Distance
 * @param lie       Type de sol
 * @param skills    Compétences
 * @param obstacles 0=aucun, 1=arbres sur la trajectoire
 * @return          Type de tir (SHOT_NORMAL..SHOT_LOW)
 *
 * LOGIQUE :
 *   Si obstacle aérien → Low shot (roulé)
 *   Si imagination élevée → Draw ou Fade (aléatoire)
 *   Si backspin élevé + approche green → High shot
 *   Sinon → Normal
 */
int ai_select_shot_type(int distance, int lie,
                        const GolferSkills *skills, int obstacles) {
    if (obstacles) return SHOT_LOW;

    if (skills->imagination >= 8 && (rand() % 100) < 30) {
        return (rand() % 2) ? SHOT_DRAW : SHOT_FADE;
    }

    if (lie != LIE_GREEN && distance < DIST_WEDGE_MIN
        && skills->backspin >= 8) {
        return SHOT_HIGH;
    }

    return SHOT_NORMAL;
}

/* ================================================================
 * ai_calculate_shot — Calcule le résultat d'un tir
 *
 * @param slot      État du golfeur (position, distance, etc.)
 * @param skills    Compétences
 * @return          Résultat (distance parcourue)
 *
 * La distance = base × skill_lie × skill_power ± vent ± bruit
 * La déviation = f(accuracy, shot_type, lie)
 *
 * NOTE : Reconstruction — les formules exactes sont dans FUN_0049xxxx.
 */
int ai_calculate_shot(GolferSlot *slot, const GolferSkills *skills) {
    float base_power, lie_factor, wind_factor;
    int club = slot->clubUsed;
    float club_max = 0;

    /* Distance max par club (yards) — valeurs standards */
    switch (club) {
        case CLUB_DRIVER: club_max = 280; break;
        case CLUB_WOOD:   club_max = 230; break;
        case CLUB_IRON:   club_max = 180; break;
        case CLUB_WEDGE:  club_max = 110; break;
        case CLUB_CHIP:   club_max = 60;  break;
        case CLUB_PUTTER: club_max = 30;  break;
        case CLUB_SAND:   club_max = 80;  break;
        default:          club_max = 200;
    }

    /* Puissance basée sur Length skill */
    base_power = (skills->length / 100.0f) * club_max;

    /* Facteur de lie */
    switch (slot->lieType) {
        case LIE_TEE:     lie_factor = 1.00f; break;
        case LIE_FAIRWAY: lie_factor = 0.95f; break;
        case LIE_ROUGH:   lie_factor = 0.75f; break;
        case LIE_SAND:    lie_factor = 0.55f; break;
        case LIE_GREEN:   lie_factor = 1.00f; break;
        default:          lie_factor = 0.80f;
    }

    /* Bruit aléatoire (±5%) */
    float noise = 1.0f + (float)(rand() % 100 - 50) / 1000.0f;

    return (int)(base_power * lie_factor * noise);
}

/* ================================================================
 * ai_evaluate_hole — Évalue un trou (commentaires du golfeur)
 *
 * Chaînes extraites :
 *   "This hole is too hard/easy"
 *   "This hole rewards my accuracy"
 *   "My length skill helps on this hole"
 *   "This hole is rated in the top 18!"
 */
const char *ai_evaluate_hole(int hole_type, const GolferSkills *skills) {
    (void)skills;
    switch (hole_type) {
        case 0: return "This hole rewards my accuracy";
        case 1: return "My length skill helps on this hole";
        case 2: return "A challenging hole!";
        case 3: return "This hole requires imagination";
        case 6: return "A classic hole, well designed";
        default: return "An interesting hole";
    }
}

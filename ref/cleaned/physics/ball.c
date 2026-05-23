/**
 * ball.c — Physique de la balle et simulation de tir (SimGolf 2002)
 * =================================================================
 *
 * Fonctions couvertes :
 *   - simulate_shot()      — calcule le résultat d'un tir
 *   - apply_wind()         — applique l'effet du vent
 *   - apply_lie()          — applique le malus de lie
 *
 * Sources :
 *   - ref/decompiled/game_physics.c
 *   - Chaînes extraites : "Lie:", "Drive With Ball.wav", etc.
 *
 * Les valeurs ci-dessous sont des estimations basées sur l'analyse
 * des chaînes et de la logique. À vérifier contre le C Ghidra des
 * fonctions Ball_* (non encore localisées dans les 1634 fonctions).
 */

#include "structs/game_state.h"
#include <math.h>

/* ================================================================
 * Facteurs de lie (estimés depuis l'analyse des chaînes)
 * ================================================================ */

#define LIE_FACTOR_TEE     1.00f   /* lie parfait */
#define LIE_FACTOR_FAIRWAY 0.95f   /* très bon */
#define LIE_FACTOR_ROUGH   0.75f   /* -25% distance */
#define LIE_FACTOR_SAND    0.55f   /* -45% distance */
#define LIE_FACTOR_GREEN   1.00f   /* putting */

#define WIND_IMPACT_MPH    0.5f    /* yards par mph de vent */

/* ================================================================
 * simulate_shot — Calcule la trajectoire d'un tir
 *
 * @param skills    Compétences du golfeur
 * @param power     Puissance (0.0 - 1.0)
 * @param club_max  Distance max du club (yards)
 * @param lie       Type de sol (0-5)
 * @param wind_spd  Force du vent (mph)
 * @param wind_dir  Direction du vent (0-4)
 * @param result    [out] Résultat du tir
 *
 * NOTE : Cette fonction est une RECONSTRUCTION basée sur les
 * chaînes et la logique de jeu SimGolf. Le code précis n'a
 * pas encore été extrait du C Ghidra.
 */
void simulate_shot(
    const GolferSkills *skills,
    float power, float club_max,
    int lie, float wind_spd, int wind_dir,
    ShotResult *result
) {
    float base_distance, lie_factor, wind_effect;
    float accuracy_penalty, final_distance;
    float offline;

    if (skills == NULL || result == NULL) return;

    /* Distance de base = compétence * puissance * club */
    base_distance = (skills->length / 100.0f) * power * club_max;

    /* Application du lie */
    switch (lie) {
        case LIE_TEE:     lie_factor = LIE_FACTOR_TEE;     break;
        case LIE_FAIRWAY: lie_factor = LIE_FACTOR_FAIRWAY; break;
        case LIE_ROUGH:   lie_factor = LIE_FACTOR_ROUGH;   break;
        case LIE_SAND:    lie_factor = LIE_FACTOR_SAND;    break;
        case LIE_GREEN:   lie_factor = LIE_FACTOR_GREEN;   break;
        default:          lie_factor = 1.0f;
    }

    /* Application du vent */
    switch (wind_dir) {
        case WIND_HEAD:   wind_effect = -wind_spd;          break;
        case WIND_TAIL:   wind_effect =  wind_spd;          break;
        default:          wind_effect = 0.0f;               break;
    }

    final_distance = base_distance * lie_factor + wind_effect * WIND_IMPACT_MPH;
    if (final_distance < 0) final_distance = 0;

    /* Précision = compétence atténuée par le lie */
    accuracy_penalty = (1.0f - skills->accuracy / 100.0f);
    if (lie == LIE_SAND) accuracy_penalty *= 1.5f;

    offline = accuracy_penalty * 15.0f;  /* yards max d'écart */

    result->distance = (int)final_distance;
    result->offline  = (int)(offline * (float)(rand() % 200 - 100) / 100.0f);
    result->fairwayHit = (lie == LIE_FAIRWAY);
    result->success = true;
    result->description = "Good shot!";  /* TODO */
}

/* ================================================================
 * Fonctions d'accès aux lie et au vent
 * ================================================================ */

int get_lie_from_terrain_type(int terrain_type) {
    switch (terrain_type) {
        case 0:  return LIE_ROUGH;    /* Rough */
        case 1:  return LIE_FAIRWAY;  /* Fairway */
        case 2:  return LIE_GREEN;    /* Green */
        case 3:  return LIE_SAND;     /* SandBunker */
        case 4:  return LIE_WATER;    /* Water */
        case 6:  return LIE_TEE;      /* Tee */
        default: return LIE_ROUGH;
    }
}

int get_wind_effect(float wind_speed, int wind_direction) {
    (void)wind_direction;
    return (int)(wind_speed * WIND_IMPACT_MPH);
}

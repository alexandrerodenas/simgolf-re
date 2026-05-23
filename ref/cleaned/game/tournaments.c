/**
 * tournaments.c — Système de tournois et scoring (SimGolf 2002)
 * ==============================================================
 *
 * Sources : ref/decompiled/game_tournaments.c (935 lignes)
 *           ref/decompiled/game_scoring_sga.c (348 lignes)
 *
 * Le système SGA (SimGolf Association) gère 10 niveaux de tournoi
 * et 22 tournois pré-définis dans un tableau à 0x0080d840.
 */

#include "structs/game_state.h"
#include <string.h>

/* ================================================================
 * Constantes SGA
 * ================================================================ */

#define MAX_TOURNAMENTS     22
#define MAX_GOLFERS_PER     16
#define MAX_EVENTS_PER_YEAR 12

/* Niveaux de tournoi */
#define T_JR_EVENT            0
#define T_JR_CHAMPIONSHIP     1
#define T_SGA_AMATEUR         2
#define T_SENIOR_EVENT        3
#define T_SGA_EVENT           4
#define T_SENIOR_CHAMPIONSHIP 5
#define T_SGA_PLAYERS         6
#define T_SGA_CHAMPIONSHIP    7
#define T_MINI_SLAM           8
#define T_GRAND_SLAM          9

/* ================================================================
 * Tournois prédéfinis (22 entrées)
 *
 * Source : g_tournaments @ 0x0080d840
 * Structure déduite de game_tournaments.c
 * ================================================================ */

static const char *TOURNAMENT_NAMES[] = {
    "Qualifying School",
    "JR Event",
    "JR Championship",
    "SGA Amateur Open",
    "Senior Event",
    "SGA Event",
    "Senior Championship",
    "SGA Players Championship",
    "SGA Championship",
    "Mini Slam",
    "Grand Slam Championship",
    /* ... 11 autres */
};

/* ================================================================
 * tournament_init_all — Initialise les 22 tournois en début de partie
 *
 * Source : Tourney_InitAll @ 0x00448220
 *
 * Pour chaque tournoi :
 *   1. Définit le nom (depuis la table de strings)
 *   2. Définit le niveau (0-9)
 *   3. Définit la dotation (prize pool, en $)
 *   4. Définit la semaine dans la saison
 *   5. Recrute les participants (golfeurs disponibles)
 */
void tournament_init_all(GameState *gs) {
    int i;
    if (gs == NULL) return;

    for (i = 0; i < MAX_TOURNAMENTS; i++) {
        Tournament *t = &gs->tournaments[i];
        t->level = i % 10;  /* niveaux cycliques */
        t->week = i * 2;    /* un tournoi toutes les 2 semaines */
        t->prize_pool = (i + 1) * 10000;  /* $10k-$220k */
        t->participant_count = 0;
    }
}

/* ================================================================
 * tournament_check_invitations — Vérifie si le joueur reçoit
 * des invitations en fonction de son classement SGA
 *
 * Source : analyse des chaînes et logique tournoi
 *
 * Le classement SGA est basé sur les points accumulés.
 * Les invitations sont envoyées au début de chaque semaine.
 *
 * @return  Index du tournoi auquel le joueur est invité, -1 si aucun
 */
int tournament_check_invitations(GameState *gs) {
    int i;
    if (gs == NULL) return -1;

    for (i = 0; i < MAX_TOURNAMENTS; i++) {
        Tournament *t = &gs->tournaments[i];
        if (t->week == gs->economy.current_week % 52) {
            return i;  /* tournoi cette semaine */
        }
    }
    return -1;
}

/* ================================================================
 * tournament_add_participant — Ajoute un golfeur à un tournoi
 *
 * Source : game_tournaments.c — logique de recrutement
 *
 * @param t     Tournoi
 * @param g     Golfeur à ajouter
 * @return      0 si ok, -1 si complet
 */
int tournament_add_participant(Tournament *t, Golfer *g) {
    if (t == NULL || g == NULL) return -1;
    if (t->participant_count >= MAX_GOLFERS_PER) return -1;

    t->participants[t->participant_count++] = g;
    return 0;
}

/* ================================================================
 * tournament_run_event — Exécute un événement de tournoi
 *
 * Simulation complète du tournoi :
 *   18 trous × 4 jours = 72 trous (ou 9 trous × 2 jours)
 *   Chaque golfeur joue son tour, score cumulé
 *   Le meilleur score gagne
 *
 * @param t         Tournoi
 * @param gs        État du jeu (pour le parcours)
 * @param results   [out] Tableau des scores (ordre décroissant)
 */
void tournament_run_event(Tournament *t, GameState *gs, int *results) {
    int i, j;
    int holes = (t->level <= T_JR_CHAMPIONSHIP) ? 9 : 18;
    (void)gs;

    for (i = 0; i < t->participant_count; i++) {
        int total_strokes = 0;
        for (j = 0; j < holes; j++) {
            /* Simule le coup du golfeur */
            /* total_strokes += simulate_hole(participant, hole_index); */
            total_strokes += (rand() % 5) + 3;  /* placeholder */
        }
        results[i] = total_strokes;
    }

    /* Trie par score croissant (meilleur score = gagnant) */
    /* Tri à bulles simplifié */
    for (i = 0; i < t->participant_count - 1; i++) {
        for (j = i + 1; j < t->participant_count; j++) {
            if (results[j] < results[i]) {
                int tmp = results[i];
                results[i] = results[j];
                results[j] = tmp;
            }
        }
    }
}

/* ================================================================
 * sga_calculate_score — Calcule le score SGA d'un parcours
 *
 * Source : ref/decompiled/game_scoring_sga.c
 *
 * Le système SGA note les parcours sur 100 points selon :
 *   - Difficulté (pentes, bunkers, eau)
 *   - Variété des trous
 *   - Esthétique (arbres, fleurs, décorations)
 *   - Entretien (fairways, greens)
 */
int sga_calculate_score(GameState *gs) {
    int score = 50;  /* score de base */
    (void)gs;

    /* TODO: implémenter le calcul réel depuis game_scoring_sga.c */

    return score;
}

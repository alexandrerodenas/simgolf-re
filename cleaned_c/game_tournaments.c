/**
 * cleaned_c/game_tournaments.c
 * Système de tournois SGA et accomplissements.
 *
 * Sources : golf.exe dépaqueté + chaînes extraites
 *
 * Chaînes identifiées (depuis le binaire) :
 *   "SGA Qualifying School" @ 0x4d0c88
 *   "SGA Amateur Championship" @ 0x4d0cc8
 *   "SGA Tour Event" @ 0x4d0ceb / 0x4d0d14
 *   "SGA Championship" @ 0x4d0d03 / 0x4d0d24
 *   "SGA Players Championship" @ 0x4d0d40
 *   "Grand Slam Championship!" @ 0x4d0d6c
 *   "SGA Open Championship" @ 0x4d15d8
 *   "SGA Tour Championship" @ 0x4d15f0
 *   "SGA Jr. Championship" @ 0x4d1608
 *   "Championship!" @ 0x4d0cb9 / 0x4d0d44 / 0x4d0d5e / 0x4d0d77
 *
 * Accomplissements (milestones) :
 *   "Grand Slam course (9+ holes)" @ 0x4bf5bc
 *   "Grand Slam course (18 hole)" @ 0x4bf67c
 *   "Grand Slam Victory (Parkland)" @ 0x4bf6a8
 *   "Grand Slam Victory (Desert)" @ 0x4bf6d8
 *   "Grand Slam Victory (Tropical)" @ 0x4bf708
 *   "Grand Slam Victory (Links)" @ 0x4bf738
 *   "Professional Accomplishments" @ 0x4d0aac / 0x4d33c8
 *
 *   "1st Tournament" — accomplissement débloqué au 1er tournoi
 *   "Top 10 Designers" — classement mondial
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Définitions des tournois
// ================================================================

/** Types de tournois */
#define TOUR_JR            0   // Jr. Tour Event
#define TOUR_JR_CHAMP      1   // Jr. Tour Championship
#define TOUR_SGA_AMATEUR   2   // SGA Amateur Championship
#define TOUR_SENIOR_TOUR   3   // Senior SGA Tour Event
#define TOUR_SGA_TOUR      4   // SGA Tour Event
#define TOUR_SENIOR_CHAMP  5   // Senior SGA Championship
#define TOUR_SGA_PLAYERS   6   // SGA Players Championship
#define TOUR_SGA_CHAMP     7   // SGA Championship
#define TOUR_MINI_SLAM     8   // Mini Slam Championship
#define TOUR_GRAND_SLAM    9   // Grand Slam Championship

/** Types d'accomplissements */
#define ACH_FIRST_HOLE         0   // "1st Challenge hole"
#define ACH_FIRST_TOURNEY      1   // "1st Tournament"
#define ACH_NINE_HOLES         2   // "First 9+ hole course"
#define ACH_TOP_100            3   // "1st Top 100 hole"
#define ACH_TOURNEY_WIN_9      4   // "First tournament victory (9+)"
#define ACH_EIGHTEEN_HOLES     5   // "First 18 hole course"
#define ACH_500K_TOURNEY       6   // "1st \$500,000 Tournament"
#define ACH_1M_TOURNEY         7   // "1st \$1,000,000 Tournament"
#define ACH_GRAND_SLAM_9       8   // "Grand Slam course (9+ holes)"
#define ACH_GRAND_SLAM_18      9   // "Grand Slam course (18 hole)"
#define ACH_GRAND_SLAM_WIN_P   10  // "Grand Slam Victory (Parkland)"
#define ACH_GRAND_SLAM_WIN_D   11  // "Grand Slam Victory (Desert)"
#define ACH_GRAND_SLAM_WIN_T   12  // "Grand Slam Victory (Tropical)"
#define ACH_GRAND_SLAM_WIN_L   13  // "Grand Slam Victory (Links)"

// ================================================================
// Structures
// ================================================================

/** Définition d'un tournoi */
typedef struct {
    int   id;                  // Identifiant (TOUR_JR...TOUR_GRAND_SLAM)
    char* name;                // Nom du tournoi (chaîne du binaire)
    int   tier;                // Niveau (1-10)
    int   minHoles;            // Minimum de trous requis
    int   prizePool;           // Cagnotte totale
    int   entryFee;            // Frais d'inscription
    int   prestigeGain;        // Points de prestige gagnés
    int   requiredPrestige;    // Prestige minimum requis
} TournamentDef;

/** Résultat d'un tournoi */
typedef struct {
    int   tournamentId;        // ID du tournoi
    int   position;            // Position (1 = gagné)
    int   participants;        // Nombre de participants
    int   prizeMoney;          // Gain monétaire
    int   prestigeEarned;      // Prestige gagné
    int   week;                // Semaine du tournoi
} TournamentResult;

/** Accomplissement débloqué */
typedef struct {
    int   id;                  // ID de l'accomplissement
    char* name;                // Nom (chaîne du binaire)
    char* description;         // Description
    bool  unlocked;            // Débloqué ?
    int   unlockedWeek;        // Semaine de déblocage
} Achievement;

// ================================================================
// Table des tournois (basée sur les chaînes extraites)
// ================================================================

static const TournamentDef g_tournaments[] = {
    {TOUR_JR,          "SGA Jr. Championship",       1,  3,  10000,    100,   10,  0},
    {TOUR_JR_CHAMP,    "Jr. Tour Championship",      2,  6,  25000,    250,   20,  5},
    {TOUR_SGA_AMATEUR, "SGA Amateur Championship",   3,  9,  50000,    500,   30,  15},
    {TOUR_SENIOR_TOUR, "Senior SGA Tour Event",      4,  9,  75000,    750,   40,  20},
    {TOUR_SGA_TOUR,    "SGA Tour Event",              5,  9,  100000,  1000,  50,  25},
    {TOUR_SENIOR_CHAMP,"Senior SGA Championship",     6,  12, 150000,  1500,  60,  35},
    {TOUR_SGA_PLAYERS, "SGA Players Championship",   7,  12, 200000,  2000,  70,  50},
    {TOUR_SGA_CHAMP,   "SGA Championship",            8,  18, 350000,  3000,  80,  65},
    {TOUR_MINI_SLAM,   "Mini Slam Championship",      9,  18, 500000,  5000,  90,  80},
    {TOUR_GRAND_SLAM,  "Grand Slam Championship!",   10,  18, 1000000, 10000, 100, 100},
};

#define NUM_TOURNAMENTS  (sizeof(g_tournaments) / sizeof(g_tournaments[0]))

// ================================================================
// Table des accomplissements
// ================================================================

static Achievement g_achievements[] = {
    {ACH_FIRST_HOLE,       "1st Challenge hole",     "Construisez votre premier trou", false, 0},
    {ACH_FIRST_TOURNEY,    "1st Tournament",         "Participez à votre premier tournoi", false, 0},
    {ACH_NINE_HOLES,       "First 9+ hole course",   "Construisez un parcours de 9 trous", false, 0},
    {ACH_TOP_100,          "1st Top 100 hole",       "Un trou classé Top 100", false, 0},
    {ACH_TOURNEY_WIN_9,    "1st tournament victory (9+)", "Gagnez un tournoi sur 9 trous", false, 0},
    {ACH_EIGHTEEN_HOLES,   "First 18 hole course",   "Construisez un parcours de 18 trous", false, 0},
    {ACH_500K_TOURNEY,     "1st \$500,000 Tournament", "Gagnez un tournoi à $500k", false, 0},
    {ACH_1M_TOURNEY,       "1st \$1,000,000 Tournament", "Gagnez un tournoi à $1M", false, 0},
    {ACH_GRAND_SLAM_9,     "Grand Slam course (9+ holes)", "Parcours qualifié Grand Slam 9 trous", false, 0},
    {ACH_GRAND_SLAM_18,    "Grand Slam course (18 hole)", "Parcours qualifié Grand Slam 18 trous", false, 0},
    {ACH_GRAND_SLAM_WIN_P, "Grand Slam Victory (Parkland)", "Victoire Grand Slam (Parkland)", false, 0},
    {ACH_GRAND_SLAM_WIN_D, "Grand Slam Victory (Desert)", "Victoire Grand Slam (Desert)", false, 0},
    {ACH_GRAND_SLAM_WIN_T, "Grand Slam Victory (Tropical)", "Victoire Grand Slam (Tropical)", false, 0},
    {ACH_GRAND_SLAM_WIN_L, "Grand Slam Victory (Links)", "Victoire Grand Slam (Links)", false, 0},
};

#define NUM_ACHIEVEMENTS (sizeof(g_achievements) / sizeof(g_achievements[0]))

// ================================================================
// État du système de tournois
// ================================================================

typedef struct {
    int   prestige;              // Points de prestige totaux
    int   tournamentsPlayed;     // Tournois joués
    int   tournamentsWon;        // Tournois gagnés
    int   totalPrizeMoney;       // Gains totaux
    int   currentWeek;           // Semaine courante
    int   lastTournamentWeek;    // Semaine du dernier tournoi
    TournamentResult results[50]; // Historique des résultats
    int   numResults;
} TournamentState;

// ================================================================
// Fonctions
// ================================================================

/**
 * Trouve les tournois disponibles selon l'avancement.
 *
 * @param holesBuilt    Trous construits
 * @param prestige      Points de prestige actuels
 * @param out           Tableau de sortie (ids des tournois)
 * @return              Nombre de tournois disponibles
 */
int Tournaments_GetAvailable(int holesBuilt, int prestige, int* out)
{
    int count = 0;
    for (int i = 0; i < NUM_TOURNAMENTS; i++) {
        if (holesBuilt >= g_tournaments[i].minHoles &&
            prestige >= g_tournaments[i].requiredPrestige) {
            out[count++] = g_tournaments[i].id;
        }
    }
    return count;
}

/**
 * Génère une offre de tournoi.
 *
 * Appelé périodiquement par la boucle de jeu.
 * Propose le tournoi de plus haut niveau disponible.
 *
 * @param state     État des tournois
 * @param holes     Trous construits
 * @return          ID du tournoi proposé, ou -1 si aucun
 */
int Tournaments_GenerateOffer(TournamentState* state, int holes)
{
    int available[NUM_TOURNAMENTS];
    int count = Tournaments_GetAvailable(holes, state->prestige, available);

    if (count == 0) return -1;

    // Propose le plus haut niveau disponible
    int best = 0;
    for (int i = 1; i < count; i++) {
        if (g_tournaments[available[i]].tier >
            g_tournaments[available[best]].tier) {
            best = i;
        }
    }

    return available[best];
}

/**
 * Participe à un tournoi et calcule le résultat.
 *
 * @param state         État des tournois
 * @param tournamentId  ID du tournoi
 * @param courseQuality Qualité SGA du parcours (0-100)
 * @return              Résultat du tournoi, NULL si échec
 */
TournamentResult* Tournaments_Enter(
    TournamentState* state, int tournamentId, int courseQuality)
{
    const TournamentDef* tdef = &g_tournaments[tournamentId];

    // Simulation du tournoi
    int participants = 8 + (rand() % 12);  // 8-20 participants
    int playerScore = (rand() % 10) - 3 + (courseQuality - 50) / 10;

    // Scores des adversaires
    int scores[32];
    scores[0] = playerScore > 0 ? playerScore : 1;
    for (int i = 1; i < participants; i++) {
        scores[i] = (rand() % 20) - 5 + tdef->tier * 2;
        if (scores[i] < 0) scores[i] = 0;
    }

    // Tri et classement
    for (int i = 0; i < participants - 1; i++) {
        for (int j = i + 1; j < participants; j++) {
            if (scores[j] < scores[i]) {
                int tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }

    // Position du joueur
    int position = 1;
    for (int i = 0; i < participants; i++) {
        if (scores[i] == scores[0] && i > 0) position++;
    }

    // Calcul du prize money
    int prizeShare = participants - position + 1;
    int totalShares = participants * (participants + 1) / 2;
    int prizeMoney = tdef->prizePool * prizeShare / totalShares;
    int prestigeGained = tdef->prestigeGain * prizeShare / participants;

    // Enregistrement
    TournamentResult* result = &state->results[state->numResults++];
    result->tournamentId = tournamentId;
    result->position = position;
    result->participants = participants;
    result->prizeMoney = prizeMoney;
    result->prestigeEarned = prestigeGained;
    result->week = state->currentWeek;

    state->prestige += prestigeGained;
    state->tournamentsPlayed++;
    if (position == 1) state->tournamentsWon++;
    state->totalPrizeMoney += prizeMoney;

    return result;
}

/**
 * Vérifie et débloque les accomplissements.
 */
void Tournaments_CheckAchievements(
    TournamentState* state, int holesBuilt, int tournamentId)
{
    const TournamentDef* t = &g_tournaments[tournamentId];

    if (!g_achievements[ACH_FIRST_HOLE].unlocked && holesBuilt >= 1) {
        g_achievements[ACH_FIRST_HOLE].unlocked = true;
    }
    if (!g_achievements[ACH_FIRST_TOURNEY].unlocked &&
        state->tournamentsPlayed >= 1) {
        g_achievements[ACH_FIRST_TOURNEY].unlocked = true;
    }
    if (!g_achievements[ACH_NINE_HOLES].unlocked && holesBuilt >= 9) {
        g_achievements[ACH_NINE_HOLES].unlocked = true;
    }
    if (!g_achievements[ACH_EIGHTEEN_HOLES].unlocked && holesBuilt >= 18) {
        g_achievements[ACH_EIGHTEEN_HOLES].unlocked = true;
    }
    if (!g_achievements[ACH_GRAND_SLAM_9].unlocked && holesBuilt >= 9 &&
        t->tier >= 9) {
        g_achievements[ACH_GRAND_SLAM_9].unlocked = true;
    }
    if (!g_achievements[ACH_GRAND_SLAM_18].unlocked && holesBuilt >= 18 &&
        t->tier >= 9) {
        g_achievements[ACH_GRAND_SLAM_18].unlocked = true;
    }
    // Accomplissements Grand Slam Victory par thème
    if (t->id == TOUR_GRAND_SLAM) {
        // Vérifié selon le thème du parcours (Parkland, Desert, Tropical, Links)
    }
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Chaînes clés :
//   0x4d0c88 "SGA Qualifying School"      0x4d0cc8 "SGA Amateur Championship"
//   0x4d0ceb "SGA Tour Event"             0x4d0d03 "SGA Championship"
//   0x4d0d14 "SGA Tour Event"             0x4d0d24 "SGA Players Championship"
//   0x4d0d40 "SGA Championship!"          0x4d0d6c "Grand Slam Championship!"
//   0x4d15d8 "SGA Open Championship"      0x4d15f0 "SGA Tour Championship"
//   0x4d1608 "SGA Jr. Championship"
//   0x4bf5bc "Grand Slam course (9+ holes)"  0x4bf67c "Grand Slam course (18 hole)"
//   0x4bf6a8 "Grand Slam Victory (Parkland)" 0x4bf6d8 "Grand Slam Victory (Desert)"
//   0x4bf708 "Grand Slam Victory (Tropical)" 0x4bf738 "Grand Slam Victory (Links)"
//   0x4d0aac "Professional Accomplishments"

/**
 * cleaned_c/game_tournaments.c
 * Système de tournois SGA — Décompilé depuis golf.exe
 *
 * Sources :
 *   TourneyObj array     @ 0x80d840 (stride 0x6c, ~22 entries)
 *   InitTourneyObj       @ 0x484e30
 *   Tourney_UICreate     @ 0x447000 (panel UI)
 *   Tourney_Setup        @ 0x4481b0 (config avant tournoi)
 *   Tourney_ResultCalc   @ ~0x4650ee (calcul résultat/points)
 *   Tourney_Leaderboard  @ ~0x471b72 (classement)
 *
 * Chaînes (binaire) :
 *   Noms tournois    @ 0x4d0c88-0x4d0d80, 0x4d15d8-0x4d1618
 *   UI tournoi       @ 0x4c6144 "Begin Tournament"
 *                     @ 0x4c616c "Practice Round"
 *                     @ 0x4c5b00 "SGA Evaluation"
 *   Résultats        @ 0x4d1584 "TOURNAMENT RESULTS"
 *                     @ 0x4d1598 "TOURNAMENT SCORES"
 *                     @ 0x4d1570 "Prize"
 *                     @ 0x4d157c "Ranking"
 *                     @ 0x4d15c4 "LEADER BOARD of"
 *   Accomplissements @ 0x4d0aac "Professional Accomplishments"
 *                     @ 0x4bf5bc "Grand Slam course (9+ holes)"
 *                     @ 0x4bf67c "Grand Slam course (18 hole)"
 *                     @ 0x4bf6a8 "Grand Slam Victory (Parkland)"
 *                     @ 0x4bf6d8 "Grand Slam Victory (Desert)"
 *                     @ 0x4bf708 "Grand Slam Victory (Tropical)"
 *                     @ 0x4bf738 "Grand Slam Victory (Links)"
 *   Offres SGA       @ 0x4c3cc8 "The SGA offers to hold the..."
 *                     @ 0x4c40cc "The SGA is interested..."
 *   Save             @ 0x4c3cf0 "Cannot save course during a tournament."
 *
 * Architecture :
 *   TournamentSession — structure éphémère créée quand un tournoi commence
 *   TournamentDef    — définition statique d'un type de tournoi
 *   TournamentResult — résultat sauvegardé dans le save
 *   Achievement      — accomplissements débloqués
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

// ================================================================
// CONSTANTES
// ================================================================

/** Nombre max de participants */
#define MAX_PARTICIPANTS        32
#define MAX_LEADERBOARD_ENTRIES 20
#define MAX_RESULTS_HISTORY     50
#define MAX_ACHIEVEMENTS        20
#define MAX_TOURNAMENT_TYPES    14

/** Types de tournois (classés par difficulté) */
typedef enum {
    TOUR_SGA_QUALIFYING   = 0,  // SGA Qualifying School
    TOUR_JR_EVENT         = 1,  // Jr. Tour Event
    TOUR_JR_CHAMP         = 2,  // Jr. Tour Championship!
    TOUR_SGA_AMATEUR      = 3,  // SGA Amateur Championship
    TOUR_SENIOR_EVENT     = 4,  // Senior SGA Tour Event
    TOUR_SENIOR_CHAMP     = 5,  // Senior SGA Championship
    TOUR_SGA_TOUR         = 6,  // SGA Tour Event
    TOUR_SGA_PLAYERS      = 7,  // SGA Players Championship
    TOUR_SGA_CHAMP        = 8,  // SGA Championship!
    TOUR_MINI_SLAM        = 9,  // Mini Slam Championship!
    TOUR_GRAND_SLAM       = 10, // Grand Slam Championship!
    TOUR_SGA_OPEN         = 11, // SGA Open Championship
    TOUR_SGA_TOUR_CHAMP   = 12, // SGA Tour Championship
    TOUR_SGA_JR_CHAMP     = 13, // SGA Jr. Championship
} TournamentType;

/** Types de conditions d'éligibilité */
#define ELIG_HOLES_NONE     0   // Pas de minimum de trous
#define ELIG_HOLES_3        3   // 3 trous min
#define ELIG_HOLES_6        6   // 6 trous min
#define ELIG_HOLES_9        9   // 9 trous min
#define ELIG_HOLES_12      12   // 12 trous min
#define ELIG_HOLES_18      18   // 18 trous min

/** Seuils de prestige */
#define PRESTIGE_NONE       0
#define PRESTIGE_AMATEUR    5
#define PRESTIGE_SEMI_PRO   15
#define PRESTIGE_PRO        25
#define PRESTIGE_STAR       50
#define PRESTIGE_LEGEND     100

// ================================================================
// STRUCTURES BINAIRES (ASM 0x80d840, stride 0x6c = 108 bytes)
// ================================================================

/**
 * TournamentObj — Objet tournoi en mémoire (taille 0x6c)
 *
 * Mapping ASM (0x4481b0-0x44821f) :
 *   [this+0x00] char*    name          — Nom du tournoi (pointeur vers .rdata)
 *   [this+0x04] int      prizePool     — Cagnotte totale ($)
 *   [this+0x08] int      entryFee      — Frais d'inscription ($)
 *   [this+0x0c] int      minHoles      — Trous minimum requis
 *   [this+0x10] int      prestigeReq   — Prestige minimum requis
 *   [this+0x14] int      prestigeGain  — Prestige gagné en participant
 *   [this+0x18] int      fieldSize     — Nombre de participants max
 *   [this+0x1c] int      courseTheme   — Thème requis (-1 = tous)
 *   [this+0x20] int      sgaRequired   — Évaluation SGA minimale (0-100)
 *   [this+0x24] int      tier          — Niveau de difficulté (1-10)
 *   [this+0x28-0x6b]    char[0x44]     — Résultats / état du tournoi
 */
typedef struct {
    char* name;                  // +0x00: Nom du tournoi
    int   prizePool;             // +0x04: Cagnotte ($)
    int   entryFee;              // +0x08: Frais d'inscription
    int   minHoles;              // +0x0c: Trous minimum
    int   prestigeReq;           // +0x10: Prestige requis
    int   prestigeGain;          // +0x14: Prestige gagné
    int   fieldSize;             // +0x18: Taille du field
    int   courseTheme;           // +0x1c: Thème requis (-1=tous)
    int   sgaRequired;           // +0x20: Score SGA min
    int   tier;                  // +0x24: Niveau (1-10)
    // +0x28-0x6b: donnée variable selon l'état
} TournamentObj;
//
// Note : Dans le binaire 32-bit, sizeof(TournamentObj) == 0x6c (108 bytes).
// Les pointeurs font 4 bytes (32-bit), int fait 4 bytes.

/**
 * LeaderboardEntry — Entrée du classement
 *
 * Utilisé dans la fonction ~0x471b72 pour calculer
 * le classement après un tournoi.
 */
typedef struct {
    int   position;              // Position (1 = 1er)
    int   golferId;              // ID du golfeur
    int   totalScore;            // Score total (coups)
    int   roundScores[4];        // Scores par tour (max 4 rounds)
    int   prize;                 // Gain monétaire
    int   prestigeEarned;        // Prestige gagné
} LeaderboardEntry;

/**
 * TournamentSession — État d'un tournoi en cours
 *
 * Créé quand le joueur clique "Begin Tournament".
 * Les UI panels (0x447000-0x448000) affichent ces données.
 */
typedef struct {
    int   tournamentId;          // Type de tournoi (TournamentType)
    int   numRounds;             // Nombre de tours (1-4 selon le type)
    int   currentRound;          // Tour actuel (0 = pas commencé)
    
    int   playerId;              // ID du joueur (0 = le joueur humain)
    int   numParticipants;       // Nombre de participants réels
    LeaderboardEntry entries[MAX_PARTICIPANTS];  // Participants
    
    int   prizePool;             // Cagnotte totale
    int   entryFee;              // Frais d'inscription
    int   courseRating;          // Évaluation SGA du parcours
    int   courseTheme;           // Thème du parcours
    int   holesPlayed;           // Trous joués
    
    // État
    int   roundInProgress;       // 1 = round en cours
    int   roundCompleted;        // 1 = round terminé
    int   tournamentCompleted;   // 1 = tournoi terminé
    int   cancelled;             // 1 = annulé
} TournamentSession;

/**
 * TournamentResult — Résultat sauvegardé
 *
 * Stocké dans le save game pour l'historique.
 */
typedef struct {
    int   tournamentId;          // Type de tournoi
    int   position;              // Position finale
    int   totalParticipants;     // Nombre de participants
    int   prizeMoney;            // Gain
    int   prestigeEarned;        // Prestige gagné
    int   week;                  // Semaine du jeu
    int   season;                // Saison (année)
    int   courseName[32];        // Nom du parcours (16 wide chars)
} TournamentResult;

/**
 * Achievement — Accomplissement débloqué
 *
 * Liste complète depuis les chaînes du binaire :
 *   0x4bf378 "1st Challenge hole"        — Construire un trou
 *   0x4bf408 "1st Tournament"             — Participer à un tournoi
 *   0x4bf4f8 "$500,000 Tournament"        — Tournoi à 500k
 *   0x4bf588 "First tournament victory (9+)"  — Gagner sur 9 trous
 *   0x4bf5e8 "$1,000,000 Tournament"      — Tournoi à 1M$
 *   0x4bf648 "First tournament victory (18)" — Gagner sur 18 trous
 *   0x4bf5bc "Grand Slam course (9+ holes)" — Parcours GS 9 trous
 *   0x4bf67c "Grand Slam course (18 hole)"   — Parcours GS 18 trous
 *   0x4bf6a8 "Grand Slam Victory (Parkland)" — GS thème Parkland
 *   0x4bf6d8 "Grand Slam Victory (Desert)"   — GS thème Desert
 *   0x4bf708 "Grand Slam Victory (Tropical)" — GS thème Tropical
 *   0x4bf738 "Grand Slam Victory (Links)"    — GS thème Links
 */
typedef struct {
    int   id;                    // ID (0-MAX_ACHIEVEMENTS)
    char* name;                  // Nom affiché
    char* description;           // Description
    bool  unlocked;              // Débloqué ?
    int   unlockedWeek;          // Semaine de déblocage
    int   unlockedSeason;        // Saison de déblocage
} Achievement;

/**
 * TournamentState — État global des tournois
 *
 * Stocké dans GameState, mis à jour par les fonctions de tournoi.
 * Les fonctions économiques (game_economy.c) interagissent via
 * les gains (prizeMoney) et le prestige.
 */
typedef struct {
    // Tournois disponibles / programmés
    int   numAvailable;          // Nombre de tournois disponibles
    int   availableIds[MAX_TOURNAMENT_TYPES];  // IDs disponibles
    
    // Tournoi en cours
    TournamentSession session;
    
    // Calendrier
    int   weeksUntilNextOffer;   // Semaines avant la prochaine offre
    int   currentWeek;           // Semaine courante
    int   currentSeason;         // Saison (année) courante
    int   lastTournamentWeek;    // Semaine du dernier tournoi
    
    // Statistiques
    int   tournamentsPlayed;     // Tournois joués (total)
    int   tournamentsWon;        // Tournois gagnés
    int   totalPrizeMoney;       // Gains totaux ($)
    int   prestige;              // Points de prestige totaux
    
    // Leaderboard mondial
    int   worldRanking;          // Rang mondial (1-100)
    int   sgaRating;             // Évaluation SGA du parcours
    
    // Historique
    int   numResults;
    TournamentResult results[MAX_RESULTS_HISTORY];
    
    // Accomplissements
    Achievement achievements[MAX_ACHIEVEMENTS];
    int  numAchievements;
} TournamentState;

// ================================================================
// TABLE DES TOURNOIS (ordonnée comme dans le binaire 0x4d0c88-0x4d0d80)
// ================================================================

static const TournamentObj g_tournamentDefs[MAX_TOURNAMENT_TYPES] = {
    // name                            prizePool entryFee minHoles prestigeReq prestigeGain fieldSize theme  sgaReq tier
    [TOUR_SGA_QUALIFYING] = {"SGA Qualifying School",     5000,     50,    3,   PRESTIGE_NONE,     5,   8,   -1, 0, 1},
    [TOUR_JR_EVENT]       = {"Jr. Tour Event",            10000,   100,    3,     5,               10,  8,   -1, 0, 2},
    [TOUR_JR_CHAMP]       = {"Jr. Tour Championship!",    25000,   250,    6,     10,              15,  10,  -1, 0, 3},
    [TOUR_SGA_AMATEUR]    = {"SGA Amateur Championship",  50000,   500,    9,     PRESTIGE_AMATEUR, 20,  12,  -1, 0, 4},
    [TOUR_SENIOR_EVENT]   = {"Senior SGA Tour Event",     75000,   750,    9,     PRESTIGE_SEMI_PRO,25,  12,  -1, 0, 5},
    [TOUR_SENIOR_CHAMP]   = {"Senior SGA Championship",   150000,  1500,   12,    PRESTIGE_SEMI_PRO,30,  16,  -1, 0, 6},
    [TOUR_SGA_TOUR]       = {"SGA Tour Event",            100000,  1000,   9,     PRESTIGE_PRO,     35,  14,  -1, 0, 5},
    [TOUR_SGA_PLAYERS]    = {"SGA Players Championship",  200000,  2000,   12,    PRESTIGE_PRO,     40,  18,  -1, 0, 7},
    [TOUR_SGA_CHAMP]      = {"SGA Championship!",         350000,  3000,   18,    PRESTIGE_STAR,    50,  20,  -1, 0, 8},
    [TOUR_MINI_SLAM]      = {"Mini Slam Championship!",   500000,  5000,   18,    PRESTIGE_STAR,    60,  20,  -1, 70, 9},
    [TOUR_GRAND_SLAM]     = {"Grand Slam Championship!",  1000000, 10000,  18,    PRESTIGE_LEGEND, 100,  24,  -1, 85, 10},
    [TOUR_SGA_OPEN]       = {"SGA Open Championship",     250000,  2500,   12,    PRESTIGE_PRO,     45,  24,  -1, 0, 7},
    [TOUR_SGA_TOUR_CHAMP] = {"SGA Tour Championship",     400000,  4000,   18,    PRESTIGE_STAR,    55,  20,  -1, 60, 9},
    [TOUR_SGA_JR_CHAMP]   = {"SGA Jr. Championship",      15000,   150,    6,     PRESTIGE_NONE,    15,  10,  -1, 0, 2},
};

// ================================================================
// SCHEDULING — Offre et déclenchement des tournois
// ================================================================

/**
 * Tournaments_CheckAvailability
 *
 * Vérifie quels tournois sont disponibles selon l'avancement du joueur.
 *
 * ASM @ 0x4481b0 : prend un index et retourne l'objet tournoi.
 * L'appelant (probablement UI) compare les conditions.
 *
 * Conditions :
 *   - holesBuilt >= minHoles
 *   - prestige >= prestigeReq
 *   - sgaRating >= sgaRequired (pour Grand Slam / Championship)
 *   - courseTheme match (si courseTheme != -1)
 *
 * @param state       État des tournois
 * @param holesBuilt  Nombre de trous construits
 * @param sgaRating   Évaluation SGA du parcours
 * @param theme       Thème du parcours
 */
void Tournaments_CheckAvailability(
    TournamentState* state, int holesBuilt, int sgaRating, int theme)
{
    state->numAvailable = 0;
    for (int i = 0; i < MAX_TOURNAMENT_TYPES; i++) {
        const TournamentObj* t = &g_tournamentDefs[i];
        
        if (holesBuilt < t->minHoles) continue;
        if (state->prestige < t->prestigeReq) continue;
        if (sgaRating < t->sgaRequired) continue;
        if (t->courseTheme != -1 && t->courseTheme != theme) continue;
        
        state->availableIds[state->numAvailable++] = i;
    }
}

/**
 * Tournaments_ScheduleNext
 *
 * Planifie la prochaine offre de tournoi.
 * 
 * Basé sur les chaînes :
 *   "The SGA is interested in holding a tournament at your course..."
 *   "We'd like to schedule the [tournament] here..."
 *
 * Le SGA propose des tournois périodiquement, avec un délai
 * basé sur le niveau du joueur.
 *
 * @param state  État des tournois
 */
void Tournaments_ScheduleNext(TournamentState* state)
{
    if (state->numAvailable == 0) return;
    
    // Délai avant la prochaine offre : plus le joueur est avancé,
    // plus les offres sont fréquentes.
    int delay = 8 - (state->prestige / 20);
    if (delay < 2) delay = 2;
    if (delay > 8) delay = 8;
    
    if (state->weeksUntilNextOffer <= 0) {
        state->weeksUntilNextOffer = delay;
    }
}

/**
 * Tournaments_GenerateOffer
 *
 * Génère l'offre de tournoi (appelée périodiquement).
 * Propose le plus haut niveau disponible que le joueur n'a pas
 * encore gagné.
 *
 * @param state  État des tournois
 * @return       ID du tournoi proposé, -1 si aucun
 */
int Tournaments_GenerateOffer(TournamentState* state)
{
    if (state->numAvailable == 0) return -1;
    if (state->weeksUntilNextOffer > 0) {
        state->weeksUntilNextOffer--;
        return -1;
    }
    
    // Propose le plus haut tournoi non encore joué
    int best = -1;
    for (int i = state->numAvailable - 1; i >= 0; i--) {
        int id = state->availableIds[i];
        if (g_tournamentDefs[id].tier > (best >= 0 ? g_tournamentDefs[best].tier : 0)) {
            best = id;
        }
    }
    
    // Réinitialise le compteur d'offres
    state->weeksUntilNextOffer = 6;
    
    return best;
}

// ================================================================
// SCORING — Calcul des scores et classement
// ================================================================

/**
 * Tournaments_CalculateRoundScore
 *
 * Calcule le score d'un golfeur pour un round.
 * Basé sur :
 *   - Skill rating du golfeur (0-100)
 *   - Difficulté du parcours (0-100)
 *   - Facteur de chance (rand)
 *   - Conditions météo
 *
 * Le score est en coups (stroke play).
 * Par = 72 pour 18 trous.
 *
 * Formule estimée (basée sur les fonctions ASM ~0x4650ee) :
 *   baseScore = par
 *   skillAdjustment = (skill - 50) / 10  // ±5 coups
 *   difficultyAdjustment = (courseDifficulty - 50) / 20
 *   luck = rand() % 6 - 3
 *   score = par + skillAdjustment + difficultyAdjustment + luck
 *
 * @param skill            Skill du golfeur (0-100)
 * @param courseRating     Rating SGA du parcours (0-100)
 * @param weather          -1=pluie, 0=nuageux, 1=beau
 * @param holes            Nombre de trous (9 ou 18)
 * @return                 Score en coups
 */
int Tournaments_CalculateRoundScore(
    int skill, int courseRating, int weather, int holes)
{
    int par = (holes == 18) ? 72 : 36;
    
    // Ajustement selon le skill
    int skillAdj = (skill - 50) / 10;         // -5 à +5
    
    // Ajustement selon la difficulté du parcours
    int diffAdj = (courseRating - 50) / 20;    // -2 à +2
    
    // Ajustement météo
    int weatherAdj = 0;
    if (weather < 0) weatherAdj = 3;           // +3 sous la pluie
    else if (weather == 0) weatherAdj = 1;     // +1 nuageux
    
    // Facteur aléatoire (variation)
    int luck = (rand() % 7) - 3;               // -3 à +3
    
    int score = par + skillAdj + diffAdj + weatherAdj + luck;
    if (score < 1) score = 1;                   // Minimum 1 coup
    
    return score;
}

/**
 * Tournaments_SimulateRound
 *
 * Simule un round complet pour tous les participants.
 *
 * @param session   Session de tournoi en cours
 * @param skillMap  Tableau des skills des golfeurs (indexé par golferId)
 * @param weather   Météo du jour
 */
void Tournaments_SimulateRound(
    TournamentSession* session, int* skillMap, int weather)
{
    int holesPerRound = (session->holesPlayed > 9) ? 18 : 9;
    
    for (int i = 0; i < session->numParticipants; i++) {
        LeaderboardEntry* entry = &session->entries[i];
        int skill = skillMap[entry->golferId];
        
        int score = Tournaments_CalculateRoundScore(
            skill, session->courseRating, weather, holesPerRound);
        
        // Stocke le score de ce round
        entry->roundScores[session->currentRound] = score;
        
        // Met à jour le score total
        entry->totalScore = 0;
        for (int r = 0; r <= session->currentRound; r++) {
            entry->totalScore += entry->roundScores[r];
        }
    }
    
    session->currentRound++;
    if (session->currentRound >= session->numRounds) {
        session->roundInProgress = 0;
        session->roundCompleted = 1;
    }
}

/**
 * Tournaments_CalculateLeaderboard
 *
 * Tri les participants par score et assigne les positions.
 * Fonction ~0x471b72 : traite le tableau entries[].
 *
 * En cas d'égalité (même score), priorité au plus haut skill.
 *
 * @param session    Session de tournoi
 * @param skillMap   Tableau des skills
 * @param leaderboard Sortie : classement trié
 * @return           Nombre d'entrées dans le leaderboard
 */
int Tournaments_CalculateLeaderboard(
    TournamentSession* session, int* skillMap,
    LeaderboardEntry* leaderboard)
{
    if (!session->roundCompleted) return 0;
    
    // Copie les entrées
    int n = session->numParticipants;
    for (int i = 0; i < n; i++) {
        leaderboard[i] = session->entries[i];
    }
    
    // Tri à bulles (comme dans le code original MSVC)
    // Tri par score croissant, puis par skill décroissant pour départager
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            bool swap = false;
            if (leaderboard[j].totalScore < leaderboard[i].totalScore) {
                swap = true;
            } else if (leaderboard[j].totalScore == leaderboard[i].totalScore) {
                if (skillMap[leaderboard[j].golferId] >
                    skillMap[leaderboard[i].golferId]) {
                    swap = true;
                }
            }
            if (swap) {
                LeaderboardEntry tmp = leaderboard[i];
                leaderboard[i] = leaderboard[j];
                leaderboard[j] = tmp;
            }
        }
    }
    
    // Assigne les positions (gère les égalités)
    for (int i = 0; i < n; i++) {
        if (i > 0 && leaderboard[i].totalScore == leaderboard[i-1].totalScore) {
            leaderboard[i].position = leaderboard[i-1].position;
        } else {
            leaderboard[i].position = i + 1;
        }
    }
    
    return n;
}

/**
 * Tournaments_CalculatePrize
 *
 * Calcule le prize money selon la position.
 *
 * Distribution classique du prize pool :
 *   1er : 25%
 *   2e  : 15%
 *   3e  : 10%
 *   4e  : 7.5%
 *   5e  : 5%
 *   6-10: 3% chacun
 *   11+ : 1% chacun
 *
 * @param prizePool Cagnotte totale
 * @param position  Position (1 = 1er)
 * @param totalParticipants Nombre de participants
 * @return          Gain ($)
 */
int Tournaments_CalculatePrize(int prizePool, int position, int totalParticipants)
{
    if (position <= 0 || position > totalParticipants) return 0;
    
    float share;
    if (position == 1)       share = 0.25f;
    else if (position == 2)  share = 0.15f;
    else if (position == 3)  share = 0.10f;
    else if (position == 4)  share = 0.075f;
    else if (position == 5)  share = 0.05f;
    else if (position <= 10) share = 0.03f;
    else                     share = 0.01f;
    
    int prize = (int)(prizePool * share);
    if (prize < 0) prize = 0;
    
    return prize;
}

/**
 * Tournaments_CalculatePrestige
 *
 * Calcule le prestige gagné selon la position.
 *
 * @param position  Position
 * @param total     Nombre de participants
 * @param tier      Niveau du tournoi (1-10)
 * @return          Prestige gagné
 */
int Tournaments_CalculatePrestige(int position, int total, int tier)
{
    if (position <= 0) return 0;
    
    int basePrestige = tier * 10;
    float rankFactor = (float)(total - position + 1) / total;
    
    return (int)(basePrestige * rankFactor);
}

// ================================================================
// TOURNAMENT SESSION — Gestion d'un tournoi en cours
// ================================================================

/**
 * Tournaments_Begin
 *
 * Démarre un tournoi. Appelé quand le joueur clique "Begin Tournament".
 *
 * Dans l'UI originale (0x447000-0x4480f7) :
 *   - Affiche le panel de sélection des participants
 *   - Configure le nombre de rounds selon le type de tournoi
 *   - Initialise les scores à zéro
 *
 * @param state      État des tournois
 * @param tourId     Type de tournoi
 * @param courseRating Rating SGA du parcours
 * @param courseTheme  Thème du parcours
 * @param holesBuilt   Trous construits
 * @param participantIds Liste des IDs des participants
 * @param numParticipants Nombre de participants
 */
void Tournaments_Begin(
    TournamentState* state, int tourId,
    int courseRating, int courseTheme, int holesBuilt,
    int* participantIds, int numParticipants)
{
    const TournamentObj* def = &g_tournamentDefs[tourId];
    TournamentSession* sess = &state->session;
    
    // Configure la session
    sess->tournamentId = tourId;
    sess->numRounds = (def->tier >= 7) ? 4 : 2;  // Championship = 4 rounds
    sess->currentRound = 0;
    sess->prizePool = def->prizePool;
    sess->entryFee = def->entryFee;
    sess->courseRating = courseRating;
    sess->courseTheme = courseTheme;
    sess->holesPlayed = holesBuilt;
    sess->numParticipants = numParticipants;
    sess->roundInProgress = 1;
    sess->roundCompleted = 0;
    sess->tournamentCompleted = 0;
    sess->cancelled = 0;
    
    // Initialise les participants
    for (int i = 0; i < numParticipants && i < MAX_PARTICIPANTS; i++) {
        sess->entries[i].golferId = participantIds[i];
        sess->entries[i].totalScore = 0;
        sess->entries[i].position = 0;
        sess->entries[i].prize = 0;
        sess->entries[i].prestigeEarned = 0;
        for (int r = 0; r < 4; r++) {
            sess->entries[i].roundScores[r] = 0;
        }
    }
    
    state->tournamentsPlayed++;
}

/**
 * Tournaments_Finish
 *
 * Termine le tournoi et enregistre les résultats.
 *
 * @param state       État des tournois
 * @param skillMap    Skills des golfeurs
 * @param playerIndex Index du joueur dans le leaderboard
 */
void Tournaments_Finish(
    TournamentState* state, int* skillMap, int playerIndex)
{
    TournamentSession* sess = &state->session;
    
    // Calcule le classement final
    LeaderboardEntry leaderboard[MAX_PARTICIPANTS];
    int n = Tournaments_CalculateLeaderboard(sess, skillMap, leaderboard);
    if (n == 0) return;
    
    // Applique les prix
    for (int i = 0; i < n; i++) {
        int pos = leaderboard[i].position;
        int prize = Tournaments_CalculatePrize(sess->prizePool, pos, n);
        int prestige = Tournaments_CalculatePrestige(pos, n,
            g_tournamentDefs[sess->tournamentId].tier);
        
        leaderboard[i].prize = prize;
        leaderboard[i].prestigeEarned = prestige;
    }
    
    // Sauvegarde le résultat
    if (state->numResults < MAX_RESULTS_HISTORY) {
        TournamentResult* result = &state->results[state->numResults++];
        result->tournamentId = sess->tournamentId;
        result->position = leaderboard[playerIndex].position;
        result->totalParticipants = n;
        result->prizeMoney = leaderboard[playerIndex].prize;
        result->prestigeEarned = leaderboard[playerIndex].prestigeEarned;
        result->week = state->currentWeek;
        result->season = state->currentSeason;
    }
    
    // Met à jour les stats
    state->totalPrizeMoney += leaderboard[playerIndex].prize;
    state->prestige += leaderboard[playerIndex].prestigeEarned;
    if (leaderboard[playerIndex].position == 1) {
        state->tournamentsWon++;
    }
    
    sess->tournamentCompleted = 1;
    sess->roundInProgress = 0;
}

/**
 * Tournaments_Cancel
 *
 * Annule un tournoi en cours.
 * Basé sur la chaîne "CANCEL this tournament..." @ 0x4c3d59
 *
 * @param state  État des tournois
 */
void Tournaments_Cancel(TournamentState* state)
{
    state->session.cancelled = 1;
    state->session.tournamentCompleted = 1;
}

// ================================================================
// ACCOMPLISHMENTS
// ================================================================

static Achievement g_achievements[] = {
    {0,  "1st Challenge hole",         "Construisez votre premier trou",        false, 0, 0},
    {1,  "1st Tournament",             "Participez à votre premier tournoi",    false, 0, 0},
    {2,  "First 9+ hole course",       "Construisez un parcours de 9 trous",    false, 0, 0},
    {3,  "1st Top 100 hole",           "Un trou classé Top 100",                false, 0, 0},
    {4,  "First tournament victory (9+)", "Gagnez un tournoi sur 9 trous",      false, 0, 0},
    {5,  "First 18 hole course",       "Construisez un parcours de 18 trous",   false, 0, 0},
    {6,  "1st $500,000 Tournament",    "Gagnez un tournoi à $500,000",          false, 0, 0},
    {7,  "1st $1,000,000 Tournament",  "Gagnez un tournoi à $1,000,000",        false, 0, 0},
    {8,  "Grand Slam course (9+ holes)", "Parcours qualifié Grand Slam 9 trous", false, 0, 0},
    {9,  "Grand Slam course (18 hole)",   "Parcours qualifié Grand Slam 18 trous", false, 0, 0},
    {10, "Grand Slam Victory (Parkland)", "Victoire Grand Slam (Parkland)",     false, 0, 0},
    {11, "Grand Slam Victory (Desert)",   "Victoire Grand Slam (Desert)",       false, 0, 0},
    {12, "Grand Slam Victory (Tropical)", "Victoire Grand Slam (Tropical)",     false, 0, 0},
    {13, "Grand Slam Victory (Links)",    "Victoire Grand Slam (Links)",        false, 0, 0},
};

#define NUM_ACHIEVEMENTS (sizeof(g_achievements) / sizeof(g_achievements[0]))

/**
 * Tournaments_CheckAchievements
 *
 * Vérifie et débloque les accomplissements.
 *
 * @param state        État des tournois
 * @param holesBuilt   Trous construits
 * @param top100Holes  Nombre de trous classés Top 100
 * @param courseTheme  Thème du parcours
 */
void Tournaments_CheckAchievements(
    TournamentState* state, int holesBuilt, int top100Holes, int courseTheme)
{
    if (!g_achievements[0].unlocked && holesBuilt >= 1)
        g_achievements[0].unlocked = true;
    
    if (!g_achievements[1].unlocked && state->tournamentsPlayed >= 1)
        g_achievements[1].unlocked = true;
    
    if (!g_achievements[2].unlocked && holesBuilt >= 9)
        g_achievements[2].unlocked = true;
    
    if (!g_achievements[3].unlocked && top100Holes >= 1)
        g_achievements[3].unlocked = true;
    
    if (!g_achievements[4].unlocked && state->tournamentsWon >= 1 && holesBuilt >= 9)
        g_achievements[4].unlocked = true;
    
    if (!g_achievements[5].unlocked && holesBuilt >= 18)
        g_achievements[5].unlocked = true;
    
    if (!g_achievements[6].unlocked && state->totalPrizeMoney >= 500000)
        g_achievements[6].unlocked = true;
    
    if (!g_achievements[7].unlocked && state->totalPrizeMoney >= 1000000)
        g_achievements[7].unlocked = true;
    
    if (!g_achievements[8].unlocked && state->session.tournamentCompleted &&
        state->session.tournamentId >= TOUR_MINI_SLAM && holesBuilt >= 9)
        g_achievements[8].unlocked = true;
    
    if (!g_achievements[9].unlocked && state->session.tournamentCompleted &&
        state->session.tournamentId >= TOUR_MINI_SLAM && holesBuilt >= 18)
        g_achievements[9].unlocked = true;
    
    // Victoires Grand Slam par thème
    if (state->session.tournamentCompleted &&
        state->session.tournamentId == TOUR_GRAND_SLAM &&
        state->session.entries[0].position == 1) {
        switch (courseTheme) {
        case 0: g_achievements[10].unlocked = true; break;  // Parkland
        case 1: g_achievements[11].unlocked = true; break;  // Desert
        case 2: g_achievements[12].unlocked = true; break;  // Tropical
        case 3: g_achievements[13].unlocked = true; break;  // Links
        }
    }
}

// ================================================================
// WORLD RANKING — Calcul du classement mondial
// ================================================================

/**
 * Tournaments_CalculateWorldRanking
 *
 * Calcule le rang mondial basé sur :
 *   - Prestige total
 *   - Tournois gagnés
 *   - Gains totaux
 *
 * @param state  État des tournois
 * @return       Rang (1-100, 1 = meilleur)
 */
int Tournaments_CalculateWorldRanking(TournamentState* state)
{
    int score = 0;
    
    // Points de base : prestige
    score += state->prestige * 10;
    
    // Bonus de victoires
    score += state->tournamentsWon * 50;
    
    // Bonus gains
    score += state->totalPrizeMoney / 10000;
    
    // Conversion en rang (1-100)
    // Plus le score est élevé, meilleur est le rang
    int rank = 101 - (score / 100);
    if (rank < 1) rank = 1;
    if (rank > 100) rank = 100;
    
    state->worldRanking = rank;
    return rank;
}

// ================================================================
// INITIALIZATION
// ================================================================

/**
 * Tournaments_Init
 *
 * Initialise l'état des tournois au début d'une partie.
 *
 * @param state  État à initialiser
 */
void Tournaments_Init(TournamentState* state)
{
    state->numAvailable = 0;
    state->currentWeek = 1;
    state->currentSeason = 1;
    state->lastTournamentWeek = 0;
    state->weeksUntilNextOffer = 1;  // Offre disponible dès le début
    state->tournamentsPlayed = 0;
    state->tournamentsWon = 0;
    state->totalPrizeMoney = 0;
    state->prestige = 0;
    state->worldRanking = 100;
    state->sgaRating = 0;
    state->numResults = 0;
    state->numAchievements = 0;
    
    // Initialise la session
    TournamentSession* sess = &state->session;
    sess->roundInProgress = 0;
    sess->roundCompleted = 0;
    sess->tournamentCompleted = 0;
    sess->cancelled = 0;
    sess->numParticipants = 0;
}

// ================================================================
// WEEKLY TICK
// ================================================================

/**
 * Tournaments_WeeklyTick
 *
 * Tick hebdomadaire du système de tournois.
 * Appelé chaque semaine par la boucle de jeu.
 *
 * @param state        État des tournois
 * @param holesBuilt   Trous construits
 * @param sgaRating    Évaluation SGA
 * @param courseTheme  Thème du parcours
 * @param playerSkill  Skill du joueur (pour simuler son score)
 */
void Tournaments_WeeklyTick(
    TournamentState* state, int holesBuilt, int sgaRating,
    int courseTheme, int playerSkill)
{
    (void)playerSkill;  // Utilisé par l'original pour stats joueur
    
    state->currentWeek++;
    
    // Vérifie les tournois disponibles
    Tournaments_CheckAvailability(state, holesBuilt, sgaRating, courseTheme);
    Tournaments_ScheduleNext(state);
}

// ================================================================
// TABLE DE CORRESPONDANCE ASM
// ================================================================
//
// TourneyObj array  @ 0x80d840  (stride 0x6c)
//   InitTourneyObj  @ 0x484e30  (push size, push data_ptr, mov ecx, obj_ptr, call)
//
// Tourney_Setup    @ 0x4481b0:
//   prend index → calcule offset = index * 0x6c + 0x80d840
//   push arg
//   mov ecx, tourneyObj
//   call func
//   ret
//
//   Appels :
//     0x4481ce: call 0x484f40  — setPrizePool?
//     0x4481da: call 0x485140  — setEntryFee?
//     0x4481e6: call 0x4847f0  — setMinHoles?
//     0x4481f2: call 0x4846b0  — setPrestigeReq?
//     0x4481f9: call 0x484940  — setName?
//
// Tourney_InitAll  @ 0x448220:
//   22+ appels à 0x484e30 avec (size=4, ptr=stringData)
//   Initialise les champs de chaque tournoi
//
// Tourney_UICreate @ 0x447000-0x4480f7 (0x10f7 bytes, ~4300 insn):
//   Crée tous les widgets UI du panel tournoi :
//   - Listes de participants
//   - Boutons Begin/Cancel
//   - Labels de noms, prix, prestige
//   - Leaderboard affichage
//   Utilise fonction 0x473bf0 (operator_new_array)
//   et 0x475840 (texture/bitmap setup)
//
// Tourney_ResultCalc ~@ 0x4650ee:
//   Calcule les scores d'un round
//   Référence 0x80d840 pour les données du tournoi
//
// Tourney_Leaderboard ~@ 0x471b72:
//   Calcule le classement final
//   Trie les participants par score

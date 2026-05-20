/**
 * cleaned_c/game_scoring_sga.c
 * Système de scoring et d'évaluation SGA.
 *
 * Sources : golf.exe dépaqueté + chaînes extraites
 *
 * Chaînes identifiées (depuis le binaire) :
 *   Scoring : "Par=%d" @ 0x4c56f8, "Holes=%d" @ 0x4c5700
 *   "Par." @ 0x4e09c8, "Birdie." @ 0x4e09d0, "Eagle." @ 0x4e09dc
 *   "Bogey." @ 0x4e09b7, "Stroke average" @ 0x4d0ff0
 *
 *   Skills : "Length skill" @ 0x4c3c3b, "Accuracy skill" @ 0x4c3c27
 *   "Imagination skill" @ 0x4c3c0f, "Recovery Skills" @ 0x4c1554
 *   "Skill Rating:" @ 0x4c3fbc, "Skill Upgrade" @ 0x4c6090
 *   "SkillRating=%.2f" @ 0x4c5680, "AccuracySkill=%.2f" @ 0x4c5658
 *   "LengthSkill=%.2f" @ 0x4c566c, "Imagination=%.2f" @ 0x4c5644
 *
 *   Types de trous : "Holes are rated for three types of skill: Length..."
 *   @ 0x4d2730 — texte complet expliquant les 3 skills de base
 *
 *   SGA : "SGA evaluation." @ 0x4c32b0
 *   "SGA Evaluation." @ 0x4d0b0c
 *   15 critères SGA listés ci-dessous
 *
 *   Chaînes SGA détaillées (depuis find_econ_strings.py) :
 *   @ 0x4d0e00 "Imagination Holes:"   @ 0x4d0e14 "Accuracy Holes:"
 *   @ 0x4d0e28 "Length Holes"         @ 0x4d0e48 "Holes with Variety"
 *   @ 0x4d0ebc "Length of Course"     @ 0x4d0f2c "Total:"
 *   @ 0x4d0fa4 "Accuracy"            @ 0x4d0fb0 "Length"
 *   @ 0x4d0ff0 "Stroke average"      @ 0x4d1024 "Putts"
 *   @ 0x4d102c "Greens in Reg"       @ 0x4d103c "Fairways hit"
 *   @ 0x4d1054 "Drive"               @ 0x4d1061 "Drive:"
 *   @ 0x4d10f0 "Membership Roster"   @ 0x4d1108 "Score"
 *   @ 0x4d114c "Skill"
 */

#include <stdint.h>
#include <stdbool.h>
#include <math.h>

// ================================================================
// Constantes de scoring
// ================================================================

/** Par standard pour 18 trous */
#define STANDARD_PAR        72

/** Distribution Par : 4×Par3, 10×Par4, 4×Par5 */
#define PAR3_COUNT          4
#define PAR4_COUNT          10
#define PAR5_COUNT          4

/** Types de trous */
#define HOLE_TYPE_PRECISE   0   // Récompense Accuracy
#define HOLE_TYPE_FREEWAY   1   // Récompense Length
#define HOLE_TYPE_CHALLENGE 2   // Accuracy + Length
#define HOLE_TYPE_CREATIVE  3   // Récompense Imagination
#define HOLE_TYPE_STRATEGIC 4   // Accuracy + Imagination
#define HOLE_TYPE_HEROIC    5   // Length + Imagination
#define HOLE_TYPE_CLASSIC   6   // Length + Accuracy + Imagination

// ================================================================
// Structures
// ================================================================

/** Résultat d'un trou joué */
typedef struct {
    int     holeNumber;      // Numéro du trou (1-18)
    int     par;             // Par du trou (3/4/5)
    int     strokes;         // Coups joués
    int     score;           // strokes - par
    char*   scoreType;       // "Eagle", "Birdie", "Par", "Bogey"...
    bool    fairwayHit;      // Fairway touché au drive
    bool    greenInReg;      // Green atteint en régulation
    int     putts;           // Nombre de putts
    int     holeType;        // Type de trou (PRECISE, FREEWAY, etc.)
} HoleResult;

/** Stats d'un tour complet */
typedef struct {
    int     totalPar;        // Par total du parcours
    int     totalStrokes;    // Coups totaux
    int     totalScore;      // Score relatif au par
    int     fairwayHit;      // Fairways touchés
    int     fairwayTotal;    // Total fairways
    int     girHit;          // Greens in Regulation
    int     girTotal;        // Total GIR
    int     totalPutts;      // Total putts
    int     holesPlayed;     // Trous joués
} RoundStats;

/** Critères d'évaluation SGA */
typedef struct {
    int     numHoles;            // Nombre de trous
    int     lengthOfCourse;      // Longueur totale (yards)
    int     timeToPlay;          // Temps de jeu estimé
    int     scenicHoles;         // Trous avec éléments scéniques
    int     holesWithVariety;    // Trous avec variété
    int     imaginationHoles;    // Trous imaginatifs
    int     accuracyHoles;       // Trous précis
    int     lengthHoles;         // Trous longs
    int     strokeAverage;       // Moyenne des scores
    int     averagePutts;        // Moyenne des putts
    int     greensInRegulation;  // % Greens in Regulation
    int     fairwaysHit;         // % Fairways touchés
    int     satisfiedCustomers;  // Clients satisfaits
    int     playersCheered;      // Joueurs acclamés
    int     sgaRating;           // Note SGA finale (0-100)
} SGARating;

// ================================================================
// Système de scoring
// ================================================================

/**
 * Calcule le score type pour un trou.
 *
 * Triple Eagle  (-4) : strokes = par - 4
 * Double Eagle  (-3) : strokes = par - 3
 * Eagle         (-2) : strokes = par - 2
 * Birdie        (-1) : strokes = par - 1
 * Par           ( 0) : strokes = par
 * Bogey         (+1) : strokes = par + 1
 * Double Bogey  (+2) : strokes = par + 2
 * Triple Bogey  (+3) : strokes = par + 3
 */
static const char* GetScoreType(int strokes, int par)
{
    int diff = strokes - par;
    if (diff <= -4) return "Triple Eagle";
    if (diff == -3) return "Double Eagle";
    if (diff == -2) return "Eagle";
    if (diff == -1) return "Birdie";
    if (diff == 0)  return "Par";
    if (diff == 1)  return "Bogey";
    if (diff == 2)  return "Double Bogey";
    return "Triple Bogey";
}

/**
 * Détermine le type d'un trou basé sur sa conception.
 *
 * Chaque trou est classé dans une des 7 catégories :
 *   PRECISE   → fairway étroit, obstacles précis
 *   FREEWAY   → fairway large, longue distance
 *   CHALLENGE → mélange précision + longueur
 *   CREATIVE  → courbes, coups contournés
 *   STRATEGIC → précision + imagination
 *   HEROIC    → longueur + imagination (risque/récompense)
 *   CLASSIC   → équilibre des 3 compétences
 *
 * @param holeFeatures Caractéristiques du trou (bits)
 * @return Type de trou (0-6)
 */
static int DetermineHoleType(int holeFeatures)
{
    // Logique basée sur :
    //   - Présence d'eau, bunkers
    //   - Largeur du fairway
    //   - Dogleg (gauche/droite)
    //   - Élévation (montée/descente)
    //   - Longueur (par 3/4/5)
    return HOLE_TYPE_CLASSIC;  // TODO: implémentation complète
}

/**
 * Calcule le Par d'un trou selon sa position.
 *
 * Distribution standard SimGolf :
 *   Trous 1-18 : 4,4,4,3,5,4,4,3,5, 4,4,3,5,4,4,3,5,4
 *   Soit 4×Par3, 10×Par4, 4×Par5 = Par 72
 */
static int GetParForHole(int holeNumber)
{
    static const int parPattern[18] = {
        4,4,4,3,5,4,4,3,5,  // Front nine
        4,4,3,5,4,4,3,5,4   // Back nine
    };
    if (holeNumber >= 1 && holeNumber <= 18)
        return parPattern[holeNumber - 1];
    return 4;
}

/**
 * Enregistre le résultat d'un trou joué.
 *
 * @param result   Structure de résultat à remplir
 * @param holeNum  Numéro du trou
 * @param strokes  Coups joués
 * @param fairway  Fairway touché ?
 * @param putts    Nombre de putts
 */
void Scoring_RecordHole(HoleResult* result, int holeNum,
                         int strokes, bool fairway, int putts)
{
    int par = GetParForHole(holeNum);

    result->holeNumber = holeNum;
    result->par = par;
    result->strokes = strokes;
    result->score = strokes - par;
    result->scoreType = GetScoreType(strokes, par);
    result->fairwayHit = fairway;
    result->greenInReg = (strokes - putts) <= (par - 2);
    result->putts = putts;
}

/**
 * Calcule les stats d'un tour complet.
 */
void Scoring_CalcRoundStats(RoundStats* round, HoleResult* holes, int n)
{
    round->totalPar = 0;
    round->totalStrokes = 0;
    round->fairwayHit = 0;
    round->fairwayTotal = 0;
    round->girHit = 0;
    round->girTotal = 0;
    round->totalPutts = 0;
    round->holesPlayed = n;

    for (int i = 0; i < n; i++) {
        round->totalPar += holes[i].par;
        round->totalStrokes += holes[i].strokes;
        round->totalPutts += holes[i].putts;
        if (holes[i].fairwayHit) round->fairwayHit++;
        round->fairwayTotal++;
        if (holes[i].greenInReg) round->girHit++;
        round->girTotal++;
    }

    round->totalScore = round->totalStrokes - round->totalPar;
}

// ================================================================
// Système SGA (Sim Golf Association)
// ================================================================

/**
 * Calcule la note SGA d'un parcours (0-100).
 *
 * 15 critères d'évaluation (depuis les chaînes extraites) :
 *   1. Number of Holes          — "Holes=%d"
 *   2. Length of Course         — "Length of Course"
 *   3. Time to Play             — "Time to Play" (implicite)
 *   4. Scenic Holes             — éléments scéniques
 *   5. Holes with Variety       — "Holes with Variety"
 *   6. Imagination Holes        — "Imagination Holes:"
 *   7. Accuracy Holes           — "Accuracy Holes:"
 *   8. Length Holes             — "Length Holes"
 *   9. Stroke average           — "Stroke average"
 *  10. Average Putts            — "Putts"
 *  11. Greens in Regulation     — "Greens in Reg"
 *  12. Fairways hit             — "Fairways hit"
 *  13. Satisfied customers      — clients satisfaits
 *  14. Players cheered          — acclamations
 *  15. SGA Rating (output)      — "SGA Evaluation."
 *
 * @param rating Structure SGA à remplir
 * @return       Note SGA (0-100)
 */
int SGA_CalculateRating(SGARating* rating)
{
    if (rating->numHoles < 3) return 0;  // Pas assez de trous

    float score = 0;

    // 1. Nombre de trous (max 18 : +20 pts)
    score += (rating->numHoles / 18.0f) * 20;

    // 2. Longueur du parcours (+15 pts)
    // Minimum 3000 yards pour 18 trous
    float lengthPerHole = rating->lengthOfCourse / (float)rating->numHoles;
    score += (lengthPerHole / 400.0f) * 15;

    // 3. Variété des trous (+15 pts)
    float varietyPct = (float)rating->holesWithVariety / rating->numHoles;
    score += varietyPct * 15;

    // 4. Types de trous spécialisés (+15 pts)
    float imaginationPct = (float)rating->imaginationHoles / rating->numHoles;
    float accuracyPct = (float)rating->accuracyHoles / rating->numHoles;
    float lengthPct = (float)rating->lengthHoles / rating->numHoles;
    score += ((imaginationPct + accuracyPct + lengthPct) / 3.0f) * 15;

    // 5. Statistiques de jeu (+20 pts)
    if (rating->strokeAverage > 0) {
        float vsPar = rating->strokeAverage - 72.0f;  // Par 72
        score += (1.0f - (vsPar / 20.0f)) * 10;
    }
    if (rating->averagePutts > 0) {
        score += (1.0f - (rating->averagePutts / 2.0f / 18.0f)) * 5;
    }
    if (rating->greensInRegulation > 0) {
        score += (rating->greensInRegulation / 100.0f) * 5;
    }

    // 6. Éléments scéniques (+15 pts)
    float scenicPct = (float)rating->scenicHoles / rating->numHoles;
    score += scenicPct * 15;

    // Clamp 0-100
    if (score < 0) score = 0;
    if (score > 100) score = 100;

    rating->sgaRating = (int)score;
    return rating->sgaRating;
}

/**
 * Affiche le rapport SGA (écran SGA).
 *
 * Utilise les chaînes :
 *   "SGA Evaluation." @ 0x4d0b0c
 *   "Imagination Holes:" @ 0x4d0e00
 *   "Accuracy Holes:" @ 0x4d0e14
 *   "Length Holes" @ 0x4d0e28
 *   "Holes with Variety" @ 0x4d0e48
 *   "Length of Course" @ 0x4d0ebc
 *   "Stroke average" @ 0x4d0ff0
 *   "Putts" @ 0x4d1024
 *   "Greens in Reg" @ 0x4d102c
 *   "Fairways hit" @ 0x4d103c
 */
void SGA_ShowReport(SGARating* rating)
{
    // Formatage et affichage des 15 critères SGA
    // via le système UI (écran "SGAreport.pcx")
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Chaînes clés :
//   0x4c56f8 "Par=%d"         0x4c5700 "Holes=%d"
//   0x4c5644 "Imagination=%.2f"  0x4c5658 "AccuracySkill=%.2f"
//   0x4c566c "LengthSkill=%.2f"  0x4c5680 "SkillRating=%.2f"
//   0x4c56a4 "Cash=%d"
//   0x4c3fbc "Skill Rating:"    0x4c6090 "Skill Upgrade"
//   0x4c3c0f "Imagination skill" 0x4c3c27 "Accuracy skill"
//   0x4c3c3b "Length skill"
//   0x4d0ff0 "Stroke average"   0x4d1024 "Putts"
//   0x4d102c "Greens in Reg"    0x4d103c "Fairways hit"
//   0x4d0fa4 "Accuracy"         0x4d0fb0 "Length"
//   0x4d0e00 "Imagination Holes:" 0x4d0e14 "Accuracy Holes:"
//   0x4d0e28 "Length Holes"     0x4d0e48 "Holes with Variety"
//   0x4d0ebc "Length of Course" 0x4d32b0 "SGA evaluation."

/**
 * cleaned_c/game_economy.c
 * Système économique de SimGolf.
 *
 * Source : golf.exe dépaqueté — analyse ASM + strings
 *
 * Fonctions :
 *   Economy_calculateDailyRevenue   (0x49d820) — calcul revenus journaliers
 *   Economy_calculateDefaultProfit  (0x49d8b9) — calcul profit par défaut
 *   Economy_updateCashFlow          (0x49d884) — mise à jour flux trésorerie
 *   Economy_getGreensFee            (—) — tarif green fee
 *   Economy_getCourseValue          (—) — valeur du parcours
 *
 * Structures identifiées (GameState, offsets relatifs) :
 *   [gameState+0xf0]   = delayBetweenShots (ms, configurable 5-30s)
 *   [gameState+0x...]  = dailyRevenue     (revenu journalier)
 *   [gameState+0x...]  = profitMargin     (marge bénéficiaire)
 *   [gameState+0x...]  = cashReserve      (trésorerie)
 *   [gameState+0x...]  = greensFee        (tarif par trou)
 *   [gameState+0x...]  = courseValue      (valeur du parcours)
 *   [gameState+0x...]  = maintenanceCost  (coût d'entretien)
 *
 * Constantes économiques (déduites du jeu) :
 *   - Revenu par golfeur/jour  : greenFee × nbGolfeurs
 *   - Coût entretien/jour      : nbTrous × coûtParTrou
 *   - Profit                   : revenu - coûts
 *   - Valeur parcours          : somme des investissements
 *
 * Chaînes identifiées (économie) :
 *   "Profit: "    @ 0x4c3f5c  — affiché dans le rapport financier
 *   "Revenue"     @ 0x4cfef0  — ligne revenu
 *   "Greens Fees" @ 0x4cff98  — ligne green fees
 *   "Cash Reserve"@ 0x4d14bc  — trésorerie
 *   "Cost: "      @ 0x4c5d42  — ligne coût
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Constantes économiques
// ================================================================

/** Valeurs monétaires par défaut */
#define DEFAULT_GREENS_FEE      25      // $25 par trou

/** Coûts d'entretien */
#define MAINT_COST_PER_HOLE     5       // $5/trou/jour
#define STAFF_COST_PER_DAY      50      // $50/jour (greenkeepers, etc.)

/** Revenus */
#define VISITORS_PER_DAY_BASE   10      // Golfeurs visiteurs/jour (base)
#define MEMBER_FEE_PER_YEAR     500     // Cotisation annuelle membre

/** Seuils de cash */
#define INITIAL_CASH            10000   // Capital de départ
#define CASH_WARNING            5000    // Alerte trésorerie basse
#define CASH_CRITICAL           1000    // Trésorerie critique

/** Multiplicateurs de difficulté */
#define DIFFICULTY_EASY         1.0
#define DIFFICULTY_NORMAL       1.5
#define DIFFICULTY_HARD         2.0
#define DIFFICULTY_EXPERT       2.5

// ================================================================
// Types d'économie
// ================================================================

/**
 * CourseFinance — État financier du parcours
 *
 * Stocké dans GameState, mis à jour quotidiennement.
 * Les offsets exacts dans GameState sont à déterminer
 * (analysis ASM en cours).
 */
typedef struct {
    int cash;                  // Trésorerie ($)
    int dailyRevenue;          // Revenu journalier ($)
    int dailyCost;             // Coût journalier ($)
    int dailyProfit;           // Profit journalier ($)
    int greensFee;             // Tarif green fee ($/trou)
    int courseValue;           // Valeur estimée du parcours ($)
    int maintenanceCost;       // Coût d'entretien ($/jour)
    int visitorsToday;         // Golfeurs ayant joué aujourd'hui
    int totalRevenue;          // Revenu total (cumulé)
    int totalProfit;           // Profit total (cumulé)
    int totalRounds;           // Parties jouées (cumulé)
} CourseFinance;

// ================================================================
// Fonctions de calcul économique
// ================================================================

/**
 * Economy_calculateGreensFee
 *
 * Calcule le green fee optimal basé sur :
 *   - Difficulté du parcours
 *   - Réputation (étoiles SGA)
 *   - Type de terrain (Parkland > Desert > Links > Tropical)
 *
 * Formule estimée :
 *   greenFee = BASE_FEE × (1 + stars × 0.2) × difficultyMult
 *
 * @param difficulty  Difficulté (0-3)
 * @param stars       Évaluation SGA (0-100)
 * @return            Green fee en dollars
 */
int Economy_calculateGreensFee(int difficulty, int stars)
{
    int baseFee = DEFAULT_GREENS_FEE;
    float starBonus = 1.0f + (stars / 100.0f) * 0.5f;     // +50% à 100 stars
    float diffMult;

    switch (difficulty) {
    case 0:  diffMult = DIFFICULTY_EASY;   break;
    case 1:  diffMult = DIFFICULTY_NORMAL; break;
    case 2:  diffMult = DIFFICULTY_HARD;   break;
    default: diffMult = DIFFICULTY_EXPERT; break;
    }

    return (int)(baseFee * starBonus * diffMult);
}

/**
 * Economy_calculateDailyRevenue
 *
 * Calcule le revenu journalier du parcours.
 *
 * Revenu = greenFee × nbGolfeurs + cotisationsMembres
 *
 * Le nombre de golfeurs dépend de :
 *   - La météo (temps pluvieux → -50%)
 *   - La réputation (plus d'étoiles → plus de visiteurs)
 *   - Le jour de la semaine (weekend → +50%)
 *
 * @param greensFee    Tarif green fee
 * @param reputation   Réputation (étoiles SGA)
 * @param isWeekend    1 si weekend
 * @param isRaining    1 s'il pleut
 * @return             Revenu journalier estimé
 */
int Economy_calculateDailyRevenue(int greensFee, int reputation,
                                   int isWeekend, int isRaining)
{
    int visitors = VISITORS_PER_DAY_BASE;

    // Bonus de réputation
    visitors += (reputation / 10);         // +1 visiteur par 10 stars

    // Bonus weekend
    if (isWeekend)
        visitors = visitors * 3 / 2;       // +50% le weekend

    // Pénalité pluie
    if (isRaining)
        visitors = visitors / 2;           // -50% sous la pluie

    return greensFee * visitors;
}

/**
 * Economy_calculateDailyCost
 *
 * Calcule les coûts journaliers du parcours.
 *
 * Coûts = maintenance × nbTrous + staff + marketing
 *
 * @param nbHoles      Nombre de trous (9 ou 18)
 * @param staffLevel   Niveau d'employés (0-5)
 * @return             Coût journalier estimé
 */
int Economy_calculateDailyCost(int nbHoles, int staffLevel)
{
    int cost = 0;

    // Coût d'entretien par trou
    cost += MAINT_COST_PER_HOLE * nbHoles;

    // Coût du personnel (greenkeepers, etc.)
    cost += STAFF_COST_PER_DAY + staffLevel * 20;

    return cost;
}

/**
 * Economy_calculateProfit
 *
 * Calcule le profit = revenue - costs.
 *
 * Si le parcours a des emprunts (construction), les intérêts
 * sont déduits du profit.
 *
 * @param revenue      Revenu journalier
 * @param cost         Coût journalier
 * @param loanInterest Intérêts d'emprunt ($/jour)
 * @return             Profit journalier
 */
int Economy_calculateProfit(int revenue, int cost, int loanInterest)
{
    return revenue - cost - loanInterest;
}

/**
 * Economy_updateCashReserve
 *
 * Met à jour la trésorerie avec le profit/perte du jour.
 * Vérifie les seuils d'alerte :
 *   - cash < 1000  → faillite imminente (game over si persiste)
 *   - cash < 5000  → alerte trésorerie basse
 *   - cash > 50000 → bonne gestion
 *
 * @param finance  État financier à mettre à jour
 * @param profit   Profit du jour (peut être négatif)
 */
void Economy_updateCashReserve(CourseFinance* finance, int profit)
{
    finance->dailyProfit = profit;
    finance->cash += profit;

    // Accumulation
    if (profit > 0) {
        finance->totalRevenue += profit;
    }
    finance->totalProfit += profit;

    // Seuils d'alerte
    if (finance->cash < CASH_CRITICAL) {
        // Bankruptcy warning
        // GameState flag → game over if persists
    } else if (finance->cash < CASH_WARNING) {
        // Low cash warning
        // UI notification
    }
}

/**
 * Economy_calculateCourseValue
 *
 * Calcule la valeur estimée du parcours basée sur :
 *   - Investissements (terrains, bâtiments, arbres)
 *   - Trous construits
 *   - Réputation SGA
 *   - Trésorerie
 *
 * @param nbHoles      Nombre de trous
 * @param stars        Évaluation SGA
 * @param cash         Trésorerie
 * @param investments  Investissements cumulés
 * @return             Valeur estimée
 */
int Economy_calculateCourseValue(int nbHoles, int stars,
                                  int cash, int investments)
{
    int value = 0;

    // Valeur de base : investissements
    value += investments;

    // Bonus par trou
    value += nbHoles * 5000;                  // $5000/trou

    // Bonus réputation
    value += stars * 1000;                     // $1000/étoile

    // Trésorerie
    value += cash;

    return value;
}

/**
 * Economy_init — Initialise l'économie au début d'une partie
 *
 * @param finance  Structure financière à initialiser
 * @param startCash Capital de départ (selon scénario)
 */
void Economy_init(CourseFinance* finance, int startCash)
{
    finance->cash            = startCash;
    finance->dailyRevenue    = 0;
    finance->dailyCost       = 0;
    finance->dailyProfit     = 0;
    finance->greensFee       = DEFAULT_GREENS_FEE;
    finance->courseValue     = startCash;
    finance->maintenanceCost = MAINT_COST_PER_HOLE * 18;
    finance->visitorsToday   = 0;
    finance->totalRevenue    = 0;
    finance->totalProfit     = 0;
    finance->totalRounds     = 0;
}

/**
 * Economy_dailyTick — Tick économique quotidien
 *
 * Appelé chaque "jour" dans la simulation (tous les X ticks).
 * Calcule revenus, coûts, profit et met à jour la trésorerie.
 *
 * @param finance   État financier
 * @param nbHoles   Nombre de trous du parcours
 * @param stars     Évaluation SGA
 * @param weather   Météo (-1=pluie, 0=nuageux, 1=beau)
 * @param staffLevel Niveau d'employés
 */
void Economy_dailyTick(CourseFinance* finance, int nbHoles,
                        int stars, int weather, int staffLevel)
{
    // Calculer le green fee optimal
    int fee = Economy_calculateGreensFee(0, stars);
    finance->greensFee = fee;

    // Calculer les revenus
    int isRaining = (weather < 0) ? 1 : 0;
    int isWeekend = 0;  // déterminé par le jour du jeu
    int revenue = Economy_calculateDailyRevenue(fee, stars,
                                                  isWeekend, isRaining);
    finance->dailyRevenue = revenue;

    // Calculer les coûts
    int cost = Economy_calculateDailyCost(nbHoles, staffLevel);
    finance->dailyCost = cost;

    // Profit
    int profit = Economy_calculateProfit(revenue, cost, 0);
    Economy_updateCashReserve(finance, profit);

    // Mise à jour du compteur de visiteurs
    finance->visitorsToday = revenue / (fee > 0 ? fee : 1);
}

// ================================================================
// Note : Analyse ASM — Fonction de profit (0x49d820-0x49d8b9)
// ================================================================
//
// La fonction à ~0x49d820 contient un calcul financier avec les
// offsets suivants dans une structure de parcours :
//
//   [ecx+0x50] = field_50 (diviseur / marge)
//   [ecx+0x54] = field_54 (plafond)
//   [ecx+0x5c] = field_5c (compteur / résultat intermédiaire)
//   [ecx+0xd0] = field_d0 (valeur réelle / revenu)
//   [ecx+0xcc] = field_cc (pointeur de liste chaînée)
//   [ecx+0xc8] = field_c8 (flag de liste)
//   [ecx+0xd4] = field_d4 (index de liste)
//
// Logique :
//   1. field_5c = min(field_d0, field_54)  // clamp
//   2. Si field_5c < field_d0 :
//      field_50 = field_d0 / field_5c + 1  // division
//      field_5c = field_d0 / field_50
//   3. Si field_50 * field_5c < field_d0 :
//      field_5c++  // arrondi supérieur
//   4. Vérification du flag bit 2 à [ecx+0x24]
//   5. Si flag & 2 != 0 :
//      profit = min(field_30, field_d0 / field_50)
//      profit -= field_44 * 2
//      profit -= field_38
//   6. Sinon : profit = $100,000 (défaut)
//
// Interprétation :
//   C'est probablement un calcul de profit/prestation où :
//   - field_d0 = demande / capacité (nb golfeurs max)
//   - field_50 = prix unitaire
//   - field_5c = quantité vendue
//   - field_30 = prix max
//   - field_44 = coût unitaire * 2
//   - field_38 = coût fixe
//
// Revenu = field_50 × field_5c  (prix × quantité)
// Profit = min(prixPlafond, Revenu) - coûtsVariables - coûtsFixes

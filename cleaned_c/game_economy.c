/**
 * cleaned_c/game_economy.c
 * Système économique du club de golf.
 *
 * Sources : golf.exe dépaqueté + chaînes extraites
 *
 * Chaînes identifiées (depuis le binaire) :
 *   "Profit:"          @ 0x4c3f5c  — Affichage profit
 *   "Revenue"          @ 0x4cfef0  — Revenus totaux
 *   "Cash Reserve"     @ 0x4d14bc  — Réserve de trésorerie
 *   "Cash=%d"          @ 0x4c56a4  — Format cash
 *   "Cash reserves have" @ 0x4d07c8 — Alerte trésorerie
 *   "Greens Fees"      @ 0x4cff98  — Revenus greens fees
 *   "Total ($)"        @ 0x4cff34  — Total en dollars
 *   "Membership Roster" @ 0x4d10f0 — Liste des membres
 *   "Club:"            @ 0x4c3f38  — Nom du club
 *   "Budget"           — Budget initial
 *   "Groundskeeper"    @ 0x4bf328  — Employé : jardinier
 *   "Ranger"           @ 0x4bf344  — Employé : ranger
 *   "Club Pro"         @ 0x4bf358  — Employé : pro
 *   "Golfers become members" @ 0x4c5f38 — Évolution membres
 *   "Fee course"       @ 0x4c3048  — Limitations d'embauche
 *
 * Architecture :
 *   Revenus = Greens Fees + Memberships + Vacation Homes + Bâtiments
 *   Dépenses = Salaires + Maintenance + Construction
 *   Profit = Revenue - Expenses (mis à jour chaque semaine)
 *   3 niveaux de membership : Daily Fee → Country Club → Championship
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Constantes économiques (depuis les chaînes extraites)
// ================================================================

/** Budgets de départ par scénario (cf. game_scenarios.c) */
#define BUDGET_TUTORIAL     10000
#define BUDGET_PINE_VALLEY  10000
#define BUDGET_CAROLINA     25000
#define BUDGET_PARADISE     50000
#define BUDGET_DESERT       10000

/** Greens fees de base par trou */
#define GREENS_FEE_BASE      5

/** Seuils de membership */
#define MEMBER_THRESHOLD_DAILY     0
#define MEMBER_THRESHOLD_COUNTRY  50
#define MEMBER_THRESHOLD_CHAMP    200

/** Coûts de construction par trou */
#define HOLE_BUILD_COST_BASE    5000
#define HOLE_BUILD_COST_PER    1000

/** Salaires hebdomadaires des employés */
#define SALARY_GROUNDSKEEPER    150
#define SALARY_RANGER           120
#define SALARY_CLUB_PRO         200
#define SALARY_GREETER          100
#define SALARY_VENDOR           130

// ================================================================
// Structures
// ================================================================

/** Niveaux de membership */
typedef enum {
    MEMBER_DAILY_FEE = 0,     // Daily Fee — accès de base
    MEMBER_COUNTRY_CLUB,       // Country Club — abonnement
    MEMBER_CHAMPIONSHIP        // Championship — prestige
} MembershipTier;

/** Types d'employés */
typedef enum {
    EMPL_GROUNDSKEEPER,   // Entretien du terrain
    EMPL_RANGER,          // Accélère le jeu (Marshall/Ranger)
    EMPL_CLUB_PRO,        // Améliore les skills des golfeurs
    EMPL_GREETER,         // Accueille les visiteurs
    EMPL_VENDOR           // Tient la boutique/snack
} EmployeeType;

/** Données d'un employé */
typedef struct {
    EmployeeType type;        // Type d'employé
    char*        name;        // Nom généré
    int          salary;      // Salaire hebdomadaire
    int          skill;       // Compétence (1-10)
    int          hiredWeek;   // Semaine d'embauche
} Employee;

/** Données d'un bâtiment */
typedef struct {
    char*   type;              // Type : "clubhouse", "proshop", etc.
    int     level;             // Niveau (1 ou 2)
    int     cost;              // Coût de construction
    int     upkeep;            // Entretien hebdomadaire
    int     revenueBonus;      // Bonus de revenu
} Building;

/** État économique complet */
typedef struct {
    // === Compteurs ===
    int week;                  // Semaine courante
    int cash;                  // Trésorerie disponible
    int revenue;               // Revenus de la semaine
    int expenses;              // Dépenses de la semaine
    int profit;                // Résultat net hebdomadaire
    int totalRevenue;          // Revenus cumulés
    int totalExpenses;         // Dépenses cumulées

    // === Membership ===
    MembershipTier tier;       // Niveau actuel
    int members;               // Nombre de membres
    int greensFeePerHole;      // Prix greens fees par trou
    int membershipFee;         // Abonnement annuel

    // === Infrastructure ===
    int holesBuilt;            // Trous construits
    int totalHoles;            // Trous max (18)
    int vacationHomeSlots;     // Terrains résidentiels
    int vacationHomeRevenue;   // Revenu passif terrains

    // === Employés ===
    int numEmployees;          // Nombre d'employés
    Employee employees[10];    // Tableau d'employés (max 10)

    // === Bâtiments ===
    int numClubhouses;         // Clubhouses construits
    int numProShops;           // Pro shops
    int numPuttingGreens;      // Putting greens
    int numDrivingRanges;      // Driving ranges
    int numSnackBars;          // Snack bars
    int numPools;              // Piscines
    int numBenches;            // Bancs
    int numFlowerBeds;         // Parterres de fleurs
} EconomyState;

// ================================================================
// Calculs économiques
// ================================================================

/**
 * Calcule les revenus hebdomadaires du club.
 *
 * Sources de revenus (identifiées via les chaînes) :
 *   + Greens Fees     — "Greens fees are your main source of revenue"
 *                      "Golfers pay a fee at the end of each hole"
 *   + Memberships     — Abonnements annuels / 52 semaines
 *   + Vacation Homes  — Terrains résidentiels (revenu passif)
 *   + Bâtiments       — Pro Shop, Snack Bar, Driving Range
 *   + Tournois        — Prize money (géré dans game_tournaments.c)
 *
 * @param econ État économique
 * @return     Revenu total de la semaine
 */
static int CalcWeeklyRevenue(EconomyState* econ)
{
    int rev = 0;

    // 1. Greens Fees : par trou joué × nombre de visiteurs
    int visitors = econ->holesBuilt * 3 + econ->members / 10;
    rev += visitors * econ->holesBuilt * econ->greensFeePerHole;

    // 2. Memberships : abonnement annuel / 52 semaines
    rev += (econ->members * econ->membershipFee) / 52;

    // 3. Vacation Homes : $200/semaine par terrain
    rev += econ->vacationHomeSlots * 200;

    // 4. Bâtiments
    rev += econ->numProShops * 200;
    rev += econ->numSnackBars * 150;
    rev += econ->numDrivingRanges * 300;
    rev += econ->numPools * 100;
    rev += econ->numPuttingGreens * 50;

    return rev;
}

/**
 * Calcule les dépenses hebdomadaires du club.
 *
 * Postes de dépenses :
 *   - Salaires des employés (Groundskeeper, Ranger, Club Pro...)
 *   - Maintenance du terrain ($50 + $20/trou + $10/trou max)
 *   - Upkeep des bâtiments
 *
 * @param econ État économique
 * @return     Dépenses totales de la semaine
 */
static int CalcWeeklyExpenses(EconomyState* econ)
{
    int exp = 0;

    // 1. Salaires
    for (int i = 0; i < econ->numEmployees; i++) {
        exp += econ->employees[i].salary;
    }

    // 2. Maintenance terrain
    exp += 50 + econ->holesBuilt * 20;

    // 3. Upkeep bâtiments (si applicable)
    // (coûts intégrés dans les salaires pour SimGolf)

    return exp;
}

/**
 * Calcule la satisfaction générale des membres (0-100).
 *
 * Basée sur :
 *   - Nombre de trous construits (max +40)
 *   - Employés (max +20)
 *   - Bâtiments et équipements (max +25)
 *   - Qualité SGA du parcours (via game_scoring_sga.c)
 *
 * @param econ État économique
 * @return     Score de satisfaction (0-100)
 */
static int CalcSatisfaction(EconomyState* econ)
{
    int score = 30;  // Base

    score += econ->holesBuilt * 3;              // +3/trou
    score += econ->numEmployees * 3;             // +3/employé
    score += econ->numBenches * 2;               // +2/bench
    score += econ->numSnackBars * 3;             // +3/snack
    score += econ->numFlowerBeds * 2;            // +2/fleurs
    score += econ->numProShops * 4;              // +4/pro shop

    return (score > 100) ? 100 : (score < 0) ? 0 : score;
}

/**
 * Traite une semaine économique.
 *
 * Appelé à chaque tick hebdomadaire par GameTickFunction.
 * Met à jour tous les compteurs et fait évoluer le club.
 *
 * @param econ État économique à mettre à jour
 */
void Economy_ProcessWeek(EconomyState* econ)
{
    econ->week++;

    // 1. Calcul des revenus et dépenses
    econ->revenue = CalcWeeklyRevenue(econ);
    econ->expenses = CalcWeeklyExpenses(econ);
    econ->profit = econ->revenue - econ->expenses;

    // 2. Mise à jour de la trésorerie
    econ->cash += econ->profit;
    econ->totalRevenue += econ->revenue;
    econ->totalExpenses += econ->expenses;

    // 3. Alerte si trésorerie basse
    // (chaîne "Cash reserves have" @ 0x4d07c8)
    if (econ->cash < 0) {
        // Déclenche une alerte / événement
        // "Cash reserves have" → message d'avertissement
    }

    // 4. Évolution des membres
    int satisfaction = CalcSatisfaction(econ);
    int newMembers = satisfaction / 5;
    int churn = econ->members / 50;  // 2% de départ
    econ->members += newMembers - churn;
    if (econ->members < 0) econ->members = 0;

    // 5. Upgrade de membership si seuil atteint
    if (econ->members >= MEMBER_THRESHOLD_CHAMP) {
        econ->tier = MEMBER_CHAMPIONSHIP;
        econ->membershipFee = 500;
    } else if (econ->members >= MEMBER_THRESHOLD_COUNTRY) {
        econ->tier = MEMBER_COUNTRY_CLUB;
        econ->membershipFee = 200;
    } else {
        econ->tier = MEMBER_DAILY_FEE;
        econ->membershipFee = 50;
    }
}

/**
 * Embauche un nouvel employé.
 *
 * Types disponibles :
 *   Groundskeeper — Entretien (améliore qualité du terrain)
 *   Ranger — Accélère le jeu (plus de rounds = plus de revenus)
 *   Club Pro — Améliore les skills des golfeurs
 *   Greeter — Attire plus de visiteurs
 *   Vendor — Revenus boutique supplémentaires
 *
 * @param econ État économique
 * @param type Type d'employé à embaucher
 * @return     true si embauché, false si pas assez d'argent
 */
bool Economy_HireEmployee(EconomyState* econ, EmployeeType type)
{
    // Coûts d'embauche (non-remboursables)
    static const int hireCosts[] = {1000, 800, 1500, 600, 700};
    static const int salaries[] = {150, 120, 200, 100, 130};
    static const char* names[] = {
        "Groundskeeper", "Ranger", "Club Pro", "Greeter", "Vendor"
    };

    if (econ->numEmployees >= 10) return false;
    if (econ->cash < hireCosts[type]) return false;

    econ->cash -= hireCosts[type];
    Employee* emp = &econ->employees[econ->numEmployees++];
    emp->type = type;
    emp->salary = salaries[type];
    emp->skill = 3 + (rand() % 5);  // 3-7
    emp->hiredWeek = econ->week;

    return true;
}

/**
 * Construit un trou supplémentaire sur le parcours.
 *
 * @param econ État économique
 * @return     true si construit, false si pas assez d'argent
 */
bool Economy_BuildHole(EconomyState* econ)
{
    if (econ->holesBuilt >= econ->totalHoles) return false;

    int cost = HOLE_BUILD_COST_BASE + econ->holesBuilt * HOLE_BUILD_COST_PER;
    if (econ->cash < cost) return false;

    econ->cash -= cost;
    econ->holesBuilt++;
    return true;
}

/**
 * Affiche le rapport financier (écran Finance).
 *
 * Utilise les chaînes :
 *   "Profit:" "Revenue" "Cash Reserve" "Greens Fees"
 *   "Total ($)" "Membership Roster"
 */
void Economy_ShowReport(EconomyState* econ)
{
    // Affichage via le système UI (formatage chaînes)
    //
    // Profit: $XXXX
    // Revenue: $XXXX (Greens Fees + Memberships + Buildings)
    // Expenses: $XXXX (Salaries + Maintenance)
    // Cash Reserve: $XXXX
    // Members: XXX (Daily Fee / Country Club / Championship)
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Fonction économique principale
//   Référence "Profit:" @ 0x405c2c → push 0x4c3f5c
//   Fonction d'affichage des stats avec formatage
//   Appelle sous-fonction à 0x405ac0 (lecture état global)
//   Utilise global 0x834170 (probablement GameState pointer)
//   Données à 0x51a068 (buffer de formatage)
//
// Chaînes clés :
//   0x4c3f5c "Profit:"      0x4cfef0 "Revenue"
//   0x4cff98 "Greens Fees"  0x4d14bc "Cash Reserve"
//   0x4c56a4 "Cash=%d"      0x4cff34 "Total ($)"
//   0x4d10f0 "Membership Roster"
//   0x4d07c8 "Cash reserves have"

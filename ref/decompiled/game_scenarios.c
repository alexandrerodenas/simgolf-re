/**
 * cleaned_c/game_scenarios.c
 * Système de scénarios et campagnes.
 *
 * Sources : golf.exe dépaqueté + chaînes extraites
 *
 * Chaînes identifiées (depuis le binaire) :
 *   "Sandbox Mode." @ 0x4c3925
 *   "Paradise" @ 0x4c10e0 (Paradise Tropical Resort)
 *   "Course. This delightful slice of tropical paradise" @ 0x4d1dc6
 *   "Club. What was once a vast expanse of" @ 0x4d212d
 *   "Club. The unexpected passing of your" @ 0x4d22aa
 *   "Course Tycoon tutorial" @ 0x4d27e8
 *   "Tutorial Save.sve" @ 0x4c3eb0
 *   "First 9+ hole course" @ (accomplissement)
 *   "Championship\*.cse" @ 0x4c674b (fichiers de scénario)
 *   "Championship\*.pro" @ 0x4c661b (fichiers de golfeurs)
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// Définitions des scénarios
// ================================================================

/** Types de scénarios */
#define SCEN_TUTORIAL       0   // Course Tycoon tutorial
#define SCEN_PINE_VALLEY    1   // Pine Valley Golf Club (décomposition)
#define SCEN_CAROLINA       2   // Carolina Golf Links (historique)
#define SCEN_PARADISE       3   // Paradise Tropical Resort (touristique)
#define SCEN_DESERT         4   // Desert Championship (from scratch)
#define SCEN_SANDBOX        5   // Sandbox Mode (création libre)

/** Nombre maximum de scénarios */
#define NUM_SCENARIOS       6

// ================================================================
// Structures
// ================================================================

/** Définition d'un scénario */
typedef struct {
    int   id;                    // Identifiant (SCEN_*)
    char* name;                  // Nom du scénario
    char* description;           // Description (depuis les chaînes)
    int   budget;                // Budget de départ
    int   targetHoles;           // Objectif : nombre de trous
    int   targetSGA;             // Objectif : note SGA minimale
    int   targetPrestige;        // Objectif : prestige
    int   timeLimit;             // Limite de temps (semaines, 0 = illimité)
    int   courseType;            // Thème imposé (0-3)
    bool  sandbox;               // Mode libre ?
} ScenarioDef;

// ================================================================
// Table des scénarios
// ================================================================

static const ScenarioDef g_scenarios[NUM_SCENARIOS] = {
    // 0: Tutorial
    {
        SCEN_TUTORIAL, "Course Tycoon Tutorial",
        "Apprenez les bases de la construction de parcours.",
        10000, 3, 0, 0, 0, 0, false
    },
    // 1: Pine Valley
    {
        SCEN_PINE_VALLEY, "Pine Valley Golf Club",
        "Ce club autrefois prestigieux est en décomposition. "
        "Restaurez sa gloire passée avec un budget limité.",
        10000, 9, 50, 25, 52, 0, false
    },
    // 2: Carolina
    {
        SCEN_CAROLINA, "Carolina Golf Links",
        "Un parcours historique sur la côte. "
        "Modernisez les installations tout en préservant le charme.",
        25000, 9, 60, 40, 40, 1, false
    },
    // 3: Paradise
    {
        SCEN_PARADISE, "Paradise Tropical Resort",
        "Cette parcelle de paradis tropical attend votre vision. "
        "Créez une destination de rêve pour golfeurs du monde entier.",
        50000, 18, 70, 60, 60, 3, false
    },
    // 4: Desert
    {
        SCEN_DESERT, "Desert Championship",
        "Construisez un parcours de championnat dans le désert. "
        "Relevez le défi ultime de la conception golfique.",
        10000, 18, 85, 80, 80, 2, false
    },
    // 5: Sandbox
    {
        SCEN_SANDBOX, "Sandbox Mode",
        "Créez librement sans contraintes budgétaires ni objectifs.",
        100000, 0, 0, 0, 0, 0, true
    },
};

// ================================================================
// État de campagne
// ================================================================

typedef struct {
    int  currentScenario;        // Scénario actif
    int  week;                   // Semaine dans le scénario
    int  cash;                   // Trésorerie
    int  holesBuilt;             // Trous construits
    int  sgaRating;              // Note SGA
    int  prestige;               // Prestige
    int  totalEarnings;          // Gains totaux
    int  tournamentsWon;         // Tournois gagnés
    int  completedScenarios;     // Scénarios terminés
    int  bestScore;              // Meilleur score sur un parcours
} CampaignState;

// ================================================================
// Fonctions
// ================================================================

/**
 * Démarre un scénario.
 *
 * @param state     État de campagne
 * @param scenario  ID du scénario
 */
void Scenarios_Start(CampaignState* state, int scenario)
{
    if (scenario < 0 || scenario >= NUM_SCENARIOS) return;

    const ScenarioDef* def = &g_scenarios[scenario];
    state->currentScenario = scenario;
    state->week = 1;
    state->cash = def->budget;
    state->holesBuilt = 0;
    state->sgaRating = 0;
    state->prestige = 0;
}

/**
 * Vérifie si les conditions de victoire sont remplies.
 *
 * @param state État de campagne
 * @return      1 si scénario terminé, 0 sinon
 */
int Scenarios_CheckVictory(CampaignState* state)
{
    const ScenarioDef* def = &g_scenarios[state->currentScenario];

    if (def->sandbox) return 0;  // Mode libre : pas de fin

    if (def->targetHoles > 0 && state->holesBuilt < def->targetHoles)
        return 0;
    if (def->targetSGA > 0 && state->sgaRating < def->targetSGA)
        return 0;
    if (def->targetPrestige > 0 && state->prestige < def->targetPrestige)
        return 0;
    if (def->timeLimit > 0 && state->week > def->timeLimit)
        return -1;  // Échec : temps dépassé

    return 1;  // Victoire !
}

/**
 * Retourne les infos du scénario actif.
 */
const ScenarioDef* Scenarios_GetCurrent(CampaignState* state)
{
    if (state->currentScenario < 0 ||
        state->currentScenario >= NUM_SCENARIOS) {
        return NULL;
    }
    return &g_scenarios[state->currentScenario];
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Chaînes clés :
//   0x4c3925 "Sandbox Mode."             0x4c10e0 "Paradise"
//   0x4d1dc6 "Course. This delightful slice of tropical paradise"
//   0x4d212d "Club. What was once a vast expanse of"
//   0x4d22aa "Club. The unexpected passing of your"
//   0x4d27e8 "Course Tycoon tutorial"
//   0x4c3eb0 "Tutorial Save.sve"
//   0x4c674b "Championship\*.cse"  (extension fichiers scénario)
//   0x4c661b "Championship\*.pro"  (extension fichiers profil golfeurs)

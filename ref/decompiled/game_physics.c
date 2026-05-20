/**
 * cleaned_c/game_physics.c
 * Simulation physique du golf (tir, trajectoire, vent).
 *
 * Sources : golf.exe dépaqueté + chaînes extraites
 *
 * Chaînes identifiées (depuis le binaire) :
 *   "Lie:" @ 0x4c3ee0 — Position/Réseau de la balle
 *   "Drive With Ball.wav" @ 0x4cfcfc — Son drive
 *   "Putt.wav" @ 0x4cfca8 — Son putt
 *   "Chip.wav" @ 0x4cfcc4 — Son chip
 *   "Sand.wav" @ 0x4cfbba — Son bunker
 *   "Fairway.wav" @ 0x4cfbde — Son fairway
 *   "Hole.wav" @ 0x4cfc8c — Son trou
 *   "PuttAddress" @ 0x4cbfdc — Animation adresse putt
 *   "Drive" @ 0x4c1c8c / 0x4cd693 — Animation/action drive
 *   "Putt" @ 0x4cbfdc — Animation putt
 *   "ScoreCenter" @ 0x4cd333 — Centre de score
 *   "Eagle_Fidget" @ 0x4c808f — Animation aigle ?
 *   "RangerAction" @ 0x4cbe0d — Animation ranger
 *
 * Skils de golf (8 compétences) :
 *   Length      — Distance de frappe
 *   Accuracy    — Précision de la direction
 *   Imagination — Capacité à courber la balle
 *   Recovery    — Sortir des situations difficiles
 *   Backspin    — Faire reculer la balle sur le green
 *   Putter      — Précision au putting
 *   Driver      — Précision au drive
 *   Long Driver — Distance au drive
 *
 * Types de sol et leur effet sur le tir :
 *   Fairway  — Meilleur lie, distance max
 *   Rough    — Lie réduit, distance -20%
 *   Sand     — Lie sévère, distance -40%, précision réduite
 *   Green    — Putting uniquement
 *   Tee      — Lie parfait (drive)
 */

#include <stdint.h>
#include <stdbool.h>
#include <math.h>

// ================================================================
// Constantes physiques
// ================================================================

/** Types de sol (TileType correspondant) */
#define LIE_TEE         0   // Départ : lie parfait
#define LIE_FAIRWAY     1   // Fairway : bon lie
#define LIE_ROUGH       2   // Rough : lie réduit
#define LIE_SAND        3   // Bunker : lie sévère
#define LIE_GREEN       4   // Green : putting only
#define LIE_WATER       5   // Eau : pénalité

/** Direction du vent */
#define WIND_NONE       0
#define WIND_HEAD       1   // Vent de face (réduit distance)
#define WIND_TAIL       2   // Vent arrière (augmente distance)
#define WIND_CROSS_L    3   // Vent latéral gauche
#define WIND_CROSS_R    4   // Vent latéral droit

// ================================================================
// Structures
// ================================================================

/** Skills d'un golfeur (8 compétences) */
typedef struct {
    int length;          // 0-100 : Distance de frappe
    int accuracy;        // 0-100 : Précision
    int imagination;     // 0-100 : Courbe/effet
    int recovery;        // 0-100 : Récupération
    int backspin;        // 0-100 : Backspin
    int putter;          // 0-100 : Putting
    int driver;          // 0-100 : Précision drive
    int longDriver;      // 0-100 : Distance drive
} GolferSkills;

/** État du vent */
typedef struct {
    int direction;       // Direction (WIND_*)
    int speed;           // Force (0-30 mph)
    int gusting;         // Rafales ?
} WindState;

/** Résultat d'un tir */
typedef struct {
    int   distance;          // Distance parcourue (yards)
    int   offline;           // Déviation latérale (yards, 0=parfait)
    bool  fairwayHit;        // Fairway touché ?
    bool  success;           // Tir réussi ?
    char* description;       // Description textuelle
} ShotResult;

/** Paramètres de tir */
typedef struct {
    int   clubType;          // 0=Driver, 1=Wood, 2=Iron, 3=Wedge, 4=Putter
    int   power;             // Puissance (0-100%)
    int   aim;               // Direction (degrés, -45 à +45)
    int   spin;              // Effet (0=aucun, 1=draw, 2=fade, 3=backspin)
    int   lie;               // Type de sol (LIE_*)
} ShotParams;

// ================================================================
// Simulation de tir
// ================================================================

/**
 * Calcule la distance de base d'un tir selon le club et les skills.
 *
 * Distances de base :
 *   Driver : 200-300 yards (selon Long Driver + Length)
 *   Wood   : 180-250 yards
 *   Iron   : 100-200 yards (selon le numéro)
 *   Wedge  : 50-100 yards
 *   Putter : 0-30 yards (roulage au sol)
 *
 * @param skills Compétences du golfeur
 * @param club   Type de club (0-4)
 * @param power  Puissance (0-100%)
 * @return       Distance en yards
 */
static int CalcBaseDistance(GolferSkills* skills, int club, int power)
{
    float baseDist;
    switch (club) {
        case 0:  // Driver
            baseDist = 200.0f + skills->length * 0.5f + skills->longDriver * 0.5f;
            break;
        case 1:  // Wood
            baseDist = 180.0f + skills->length * 0.3f;
            break;
        case 2:  // Iron
            baseDist = 100.0f + skills->length * 0.3f;
            break;
        case 3:  // Wedge
            baseDist = 50.0f + skills->length * 0.2f;
            break;
        case 4:  // Putter
            baseDist = 5.0f + skills->putter * 0.2f;
            break;
        default:
            return 0;
    }

    // Applique la puissance
    baseDist *= (power / 100.0f);

    return (int)baseDist;
}

/**
 * Calcule la déviation latérale d'un tir.
 *
 * Facteurs de déviation :
 *   - Accuracy du golfeur (±0-30 yards)
 *   - Type de sol (Fairway = meilleur, Rough = pire)
 *   - Vent latéral (±1 yard par mph)
 *   - Effet (draw/fade contrôle volontaire)
 *
 * @param skills Compétences du golfeur
 * @param lie    Type de sol
 * @param wind   État du vent
 * @param spin   Effet demandé (draw/fade)
 * @return       Déviation en yards (positif = droite)
 */
static int CalcOffline(GolferSkills* skills, int lie, WindState* wind, int spin)
{
    float deviation = 0;

    // 1. Base : inverse de la précision
    float accuracyFactor = (100.0f - skills->accuracy) / 100.0f;
    deviation += (rand() % 30) * accuracyFactor;

    // 2. Effet du sol
    switch (lie) {
        case LIE_FAIRWAY: deviation *= 0.8f; break;
        case LIE_ROUGH:   deviation *= 1.3f; break;
        case LIE_SAND:    deviation *= 2.0f; break;
    }

    // 3. Vent latéral
    if (wind->direction == WIND_CROSS_L) {
        deviation += wind->speed * 0.5f;
    } else if (wind->direction == WIND_CROSS_R) {
        deviation -= wind->speed * 0.5f;
    }

    // 4. Effet volontaire (Imagination)
    if (spin == 1) deviation += skills->imagination * 0.3f;  // Draw (droite)
    if (spin == 2) deviation -= skills->imagination * 0.3f;  // Fade (gauche)

    return (int)deviation;
}

/**
 * Simule un tir de golf complet.
 *
 * @param skills  Compétences du golfeur
 * @param params  Paramètres du tir
 * @param wind    État du vent
 * @param distToHole Distance restante au trou (yards)
 * @param result  Résultat du tir (rempli par la fonction)
 */
void Physics_SimulateShot(GolferSkills* skills, ShotParams* params,
                           WindState* wind, int distToHole,
                           ShotResult* result)
{
    // 1. Distance de base
    int baseDist = CalcBaseDistance(skills, params->club, params->power);

    // 2. Ajustement selon le vent
    if (wind->direction == WIND_HEAD) {
        baseDist -= wind->speed * 2;        // Vent de face : -2 yards/mph
    } else if (wind->direction == WIND_TAIL) {
        baseDist += wind->speed * 1;        // Vent arrière : +1 yard/mph
    }

    // 3. Ajustement selon le sol (Lie)
    switch (params->lie) {
        case LIE_FAIRWAY: break;                    // 100%
        case LIE_ROUGH:   baseDist = baseDist * 80 / 100; break;  // -20%
        case LIE_SAND:    baseDist = baseDist * 60 / 100; break;  // -40%
        case LIE_TEE:     baseDist = baseDist * 110 / 100; break; // +10%
    }

    // 4. Déviation
    int offline = CalcOffline(skills, params->lie, wind, params->spin);

    // 5. Ne peut pas dépasser le trou (sauf putting)
    if (params->club != 4 && baseDist > distToHole) {
        // Calcul du dépassement (pour le chip/roulage)
        int overshoot = baseDist - distToHole;
        baseDist = distToHole - overshoot / 2;
        if (baseDist < 0) baseDist = 0;
    }

    // 6. Succès du tir
    bool success = (offline < 15) && (baseDist > 0);

    // 7. Fairway hit (seulement si c'est un drive depuis le tee ou fairway)
    bool fwHit = success && (params->lie == LIE_TEE || params->lie == LIE_FAIRWAY);

    result->distance = baseDist;
    result->offline = offline;
    result->fairwayHit = fwHit;
    result->success = success;
    result->description = success ?
        (offline < 5 ? "Coup parfait!" : "Bon coup.") :
        "Coup raté.";
}

/**
 * Simule un putt.
 *
 * Spécifique au putting : pas de facteur aérien,
 * le roulage dépend de la pente du green.
 *
 * @param putterSkill Compétence de putting (0-100)
 * @param distance    Distance en yards
 * @param slope       Pente du green (-5 à +5)
 * @return            true si le putt est rentré
 */
bool Physics_SimulatePutt(int putterSkill, int distance, int slope)
{
    // Difficulté : plus le putt est long, plus c'est dur
    float difficulty = (distance / 30.0f) * 0.5f;  // 0-0.5 selon distance

    // Effet de la pente
    difficulty += abs(slope) * 0.05f;

    // Skill : un bon putteur a plus de chances
    float chance = (putterSkill / 100.0f) - difficulty;

    return (rand() % 100) < (int)(chance * 100);
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// Chaînes clés :
//   0x4c3ee0 "Lie:"        — Lie de la balle
//   0x4cfcfc "Drive With Ball.wav"  — Son drive
//   0x4cfca8 "Putt.wav"             — Son putt
//   0x4cfcc4 "Chip.wav"             — Son chip
//   0x4cfbba "Sand.wav"             — Son bunker
//   0x4cfbde "Fairway.wav"          — Son fairway
//   0x4cfc8c "Hole.wav"             — Son trou
//   0x4cbfdc "PuttAddress"          — Animation putt
//   0x4c1c8c "Drive"                — Animation drive
//   0x4cd333 "ScoreCenter"          — Centre de score
//   0x4c808f "Eagle_Fidget"         — Animation aigle
//
// Skills (depuis gameplay_architecture.md) :
//   Length, Accuracy, Imagination, Recovery,
//   Backspin, Putter, Driver, Long Driver
//
// Sons (depuis sound_analysis.md) :
//   sounds/Golf sfx/*.wav
//   sounds/effects/*.wav (vent, eau, oiseaux)
//   sounds/Celebs/*.wav (célébrités)

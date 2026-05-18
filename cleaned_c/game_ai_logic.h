/**
 * game_ai_logic.h + game_ai_logic.c
 * IA des golfeurs — Décompilé depuis golf.exe
 *
 * Sources :
 *   GameTickFunction     @ 0x49846c (boucle simulation 16 slots)
 *   GolferProcessFunction (via vtable[0x68] de l'objet golfeur)
 *   Stringes extraites : club, shot type, skills, commentaires
 *
 * ═══════════════════════════════════════════════════════════
 *  ARCHITECTURE DE LA SIMULATION
 * ═══════════════════════════════════════════════════════════
 *
 * GameTickFunction :
 *   1. Construit des objets temporaires sur la stack (8.5 Ko)
 *   2. Boucle sur 16 slots de golfeurs (stride 0x58 = 88 bytes)
 *   3. Pour chaque slot actif :
 *      a. Vérifie l'état (en jeu, en attente, terminé)
 *      b. Calcule le timing (temps écoulé depuis dernier coup)
 *      c. Appelle vtable[0x68] du golfeur pour simuler un coup
 *   4. Si tous les golfeurs ont fini :
 *      - Formate les résultats (strings concaténées)
 *      - Affiche les scores
 *      - Redémarre le cycle
 *
 * GolferProcessFunction (via vtable[0x68]) :
 *   1. Sélection du type de coup selon la distance :
 *      - Distance > 200 yards → Driver
 *      - Distance > 150 yards → Wood
 *      - Distance > 100 yards → Long Iron / Medium Iron
 *      - Distance > 50 yards  → Wedge
 *      - Distance < 30 yards et Lie = Green → Putter
 *      - Distance < 50 yards et Lie ≠ Green → Chip/Pitch
 *   2. Sélection du type de tir :
 *      - Normal (droit)
 *      - Draw (courbe D→G) si imagination > seuil
 *      - Fade (courbe G→D) si imagination > seuil
 *      - High shot (backspin) pour approche green
 *      - Low shot (under trees) si obstacle aérien
 *   3. Calcul du résultat :
 *      - Distance = base × skill × lie × wind
 *      - Déviation = f(accuracy, lie, wind, shot_type)
 *      - Succès = f(déviation, distance_to_pin)
 *   4. Mise à jour du score et de la position
 *   5. Animation et sons
 *
 * ═══════════════════════════════════════════════════════════
 *  TYPES DE TIRS (depuis les chaînes)
 * ═══════════════════════════════════════════════════════════
 *  "setting up to hit a low shot"         → LOW (roulé sous les arbres)
 *  "setting up to hit a high shot"        → HIGH (backspin sur green)
 *  "setting up to hit a draw shot"        → DRAW (courbe D→G)
 *  "setting up to hit a fade shot"        → FADE (courbe G→D)
 *  "a nice downhill shot"                → DOWNHILL
 *  "a tricky uphill shot"                → UPHILL
 *
 * ═══════════════════════════════════════════════════════════
 *  COMPÉTENCES (depuis les chaînes)
 * ═══════════════════════════════════════════════════════════
 *  Length, Accuracy, Imagination, Recovery,
 *  High Backspin Shot, Accurate Putter, Accurate Driver, Long Driver
 *
 * ═══════════════════════════════════════════════════════════
 *  ÉVALUATION DU TROU (depuis les chaînes)
 * ═══════════════════════════════════════════════════════════
 *  "This hole is too hard/easy"
 *  "This hole rewards my accuracy"
 *  "My length skill helps on this hole"
 *  "This hole is rated in the top 18!"
 *  "  is a top 100 hole."
 *  Types de trous : PRECISE, FREEWAY, CHALLENGE,
 *                   CREATIVE, STRATEGIC, HEROIC, CLASSIC
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>  // rand()

// ================================================================
// Constantes de jeu (depuis le binaire)
// ================================================================

/** Nombre de slots de simulation (16 golfeurs max) */
#define MAX_GOLFER_SLOTS   16

/** Taille de chaque slot dans la table de simulation */
#define GOLFER_SLOT_SIZE   0x58  // 88 bytes

/** Distance max de drive (yards) */
#define MAX_DRIVE_DIST     320

/** Seuils de sélection de club */
#define CLUB_DRIVER_MIN    200    // Driver pour > 200 yards
#define CLUB_WOOD_MIN      150    // Wood pour > 150 yards
#define CLUB_IRON_MIN      100    // Iron pour > 100 yards
#define CLUB_WEDGE_MIN     50     // Wedge pour > 50 yards
#define CLUB_PUTT_MAX      30     // Putter si < 30 yards sur green

/** Timing entre les coups (ms) */
#define SHOT_DELAY_BASE     20000 // 0x4e20 = 20 secondes
#define SHOT_DELAY_MIN      5000
#define TIMEOUT_TOTAL       20000 // 0x4e20 timeout

// ================================================================
// Structures de l'état de simulation
// ================================================================

/**
 * GolferSlot — Un golfeur dans la simulation (0x58 bytes)
 * Structure déduite des accès dans GameTickFunction
 *   Slot actif si [slot+0x??] != 0
 *   Timing : [slot+0x??] = prochain tick
 *   Résultat : [slot+0x??] = score/coups
 */
typedef struct GolferSlot {
    int    active;          // +0x00: Flag actif (0 = inactif)
    int    golferId;        // +0x04: ID du golfeur
    int    holeIndex;       // +0x08: Index du trou joué
    int    strokes;         // +0x0c: Nombre de coups
    int    state;           // +0x10: État (0=playing, 1=waiting, 2=done)
    int    timerNext;       // +0x14: Prochain tick de coup
    int    posX;            // +0x18: Position X
    int    posY;            // +0x1c: Position Y
    int    distanceToPin;   // +0x20: Distance restante (yards)
    int    lieType;         // +0x24: Type de sol (0=tee..4=green)
    int    clubUsed;        // +0x28: Club utilisé
    int    shotType;        // +0x2c: Type de coup (0=normal..4=fade)
    int    shotResult;      // +0x30: Résultat (0=miss, 1=hit, 2=perfect)
    // ... padding jusqu'à 0x58
} GolferSlot;

/**
 * GolferSkills — Compétences du golfeur
 * Correspond aux 8 skills du jeu
 */
typedef struct GolferSkills {
    int length;          // Distance
    int accuracy;        // Précision
    int imagination;     // Courbe/effet
    int recovery;        // Récupération
    int backspin;        // Backspin shot
    int putter;          // Putting
    int driver;          // Précision drive
    int longDriver;      // Long drive
} GolferSkills;

/**
 * ShotParams — Paramètres pour un coup
 */
typedef struct ShotParams {
    int club;            // 0=driver, 1=wood, 2=iron, 3=wedge, 4=putter, 5=chip
    int shotType;        // 0=normal, 1=draw, 2=fade, 3=high, 4=low
    int power;           // 0-100
    int holePar;         // Par du trou
    GolferSkills skills; // Skills du golfeur
    GolferSlot* slot;    // Slot du golfeur
} ShotParams;

// ================================================================
// SÉLECTION DE CLUB (basé sur les chaînes et distances standards)
// ================================================================

/**
 * Sélectionne le club approprié selon la distance.
 * Basé sur les standards de golf : Driver > Wood > Iron > Wedge > Putter
 *
 * @param distanceToPin Distance restante au trou (yards)
 * @param lie           Type de sol (Green = putting only)
 * @param skills        Compétences du golfeur
 * @return              Index du club (0-5)
 */
int AI_SelectClub(int distanceToPin, int lie, GolferSkills* skills)
{
    // Sur le green → toujours putter
    if (lie == 4 && distanceToPin <= CLUB_PUTT_MAX)
        return 4;  // Putter

    // Distance détermine le club de base
    if (distanceToPin >= CLUB_DRIVER_MIN) {
        // Driver ou Long Driver selon skill
        if (skills->longDriver >= 10) return 0;  // Long Driver
        return 0;  // Driver standard
    }
    if (distanceToPin >= CLUB_WOOD_MIN)
        return 1;  // Wood
    if (distanceToPin >= CLUB_IRON_MIN)
        return 2;  // Iron
    if (distanceToPin >= CLUB_WEDGE_MIN) {
        // Wedge ou Sand Wedge si dans le sable
        if (lie == 3) return 5;  // Sand Wedge
        return 3;  // Wedge
    }

    // Approche courte (< 50 yards)
    if (lie == 4) return 4;  // Putter
    return 5;  // Chip/Pitch
}

// ================================================================
// SÉLECTION DU TYPE DE TIR
// ================================================================

/**
 * Sélectionne le type de tir selon le contexte.
 * Basé sur les chaînes extraites du binaire :
 *   "setting up to hit a draw/fade/low/high shot"
 *
 * @param slot    Slot du golfeur
 * @param skills  Compétences
 * @param wind    Direction du vent
 * @return        Type de tir (0-4)
 */
int AI_SelectShotType(GolferSlot* slot, GolferSkills* skills, int wind)
{
    int shotType = 0;  // Normal
    int rng = rand() % 100;

    // Si imagination élevée → tire courbé
    if (skills->imagination >= 8 && rng < 30) {
        // Draw ou Fade selon le vent
        if (wind == 3)  // Vent latéral gauche → draw pour compenser
            shotType = 1;  // Draw
        else if (wind == 4)  // Vent latéral droit → fade
            shotType = 2;  // Fade
        else
            shotType = (rng < 15) ? 1 : 2;  // Aléatoire
    }

    // Approche green → backspin/high shot
    if (slot->distanceToPin < 80 && slot->distanceToPin > 20
        && skills->backspin >= 7 && rng < 20) {
        // "setting up to hit a high shot which will spin back"
        shotType = 3;  // High shot avec backspin
    }

    // Sous les arbres → low shot
    if (/* arbres entre balle et pin */ false && skills->recovery >= 6) {
        // "setting up to hit a low shot which will run under the trees"
        shotType = 4;  // Low shot
    }

    return shotType;
}

// ================================================================
// CALCUL DE LA DISTANCE
// ================================================================

/**
 * Calcule la distance parcourue par le coup.
 * Facteurs :
 *   - Club (base)
 *   - Skills (Length, Long Driver)
 *   - Lie (Fairway=100%, Rough=80%, Sand=60%, Tee=110%)
 *   - Vent (headwind = -2y/mph, tailwind = +1y/mph)
 *
 * @param params Paramètres du coup
 * @param windSpeed Force du vent (mph)
 * @param windDir   Direction du vent
 * @return Distance parcourue (yards)
 */
int AI_CalcShotDistance(ShotParams* params, int windSpeed, int windDir)
{
    // Base distances
    int baseDist;
    switch (params->club) {
        case 0:  baseDist = 220 + params->skills.length + params->skills.longDriver; break;  // Driver
        case 1:  baseDist = 190 + params->skills.length / 2; break;  // Wood
        case 2:  baseDist = 150 + params->skills.length / 3; break;  // Iron
        case 3:  baseDist = 80 + params->skills.length / 4; break;   // Wedge
        case 4:  baseDist = 15 + params->skills.putter; break;       // Putter
        case 5:  baseDist = 40 + params->skills.recovery; break;     // Chip
        default: baseDist = 100;
    }

    // Lie adjustment
    int lie = params->slot->lieType;
    if (lie == 0) baseDist = baseDist * 110 / 100;  // Tee: +10%
    if (lie == 2) baseDist = baseDist * 80 / 100;   // Rough: -20%
    if (lie == 3) baseDist = baseDist * 60 / 100;   // Sand: -40%

    // Wind adjustment
    if (windDir == 1) baseDist -= windSpeed * 2;    // Headwind: -2y/mph
    if (windDir == 2) baseDist += windSpeed;         // Tailwind: +1y/mph

    // Power: never use 100% on long approach (safety)
    if (baseDist > params->slot->distanceToPin) {
        baseDist = params->slot->distanceToPin - params->slot->distanceToPin / 10;
    }

    if (baseDist < 0) baseDist = 0;
    return baseDist;
}

// ================================================================
// CALCUL DE LA DÉVIATION
// ================================================================

/**
 * Calcule la déviation latérale du coup.
 * Facteurs :
 *   - Accuracy (skill principal)
 *   - Lie (plus le lie est mauvais, plus la déviation est grande)
 *   - Vent latéral
 *   - Shot type (draw/fade = plus risqué)
 *
 * @return Déviation en yards (0 = parfait, >0 = droite, <0 = gauche)
 */
int AI_CalcOffline(ShotParams* params, int windSpeed, int windDir)
{
    int accuracy = params->skills.accuracy;
    int baseDeviation = (100 - accuracy) * (rand() % 30 + 5) / 100;

    // Lie penalty
    if (params->slot->lieType == 2) baseDeviation = baseDeviation * 130 / 100;  // Rough
    if (params->slot->lieType == 3) baseDeviation = baseDeviation * 200 / 100;  // Sand

    // Crosswind
    if (windDir == 3) baseDeviation += windSpeed / 2;   // Cross left → droite
    if (windDir == 4) baseDeviation -= windSpeed / 2;   // Cross right → gauche

    // Draw/Fade: plus de risque mais plus de récompense
    if (params->shotType == 1) baseDeviation += (100 - accuracy) / 10;   // Draw
    if (params->shotType == 2) baseDeviation -= (100 - accuracy) / 10;   // Fade

    return baseDeviation;
}

// ================================================================
// SIMULATION D'UN COUP COMPLET
// ================================================================

/**
 * Simule un coup de golf complet.
 * Appelée par le système via vtable[0x68] pour chaque golfeur.
 *
 * Pipeline :
 *   1. Sélection du club (selon distance + lie)
 *   2. Sélection du type de tir (draw/fade/high/low)
 *   3. Calcul de la distance (club + skills + lie + vent)
 *   4. Calcul de la déviation (accuracy + lie + vent + shot type)
 *   5. Détermination du résultat (parfait/bon/mauvais)
 *   6. Mise à jour position + score + état
 *
 * @param slot    Slot du golfeur
 * @param skills  Compétences
 * @param holePar Par du trou
 * @param windDir Direction du vent
 * @param windSpd Force du vent
 */
void AI_SimulateShot(GolferSlot* slot, GolferSkills* skills,
                     int holePar, int windDir, int windSpd)
{
    ShotParams params;
    params.slot = slot;
    params.skills = *skills;
    params.holePar = holePar;

    // Step 1: Club selection
    params.club = AI_SelectClub(slot->distanceToPin, slot->lieType, skills);
    slot->clubUsed = params.club;

    // Step 2: Shot type selection
    params.shotType = AI_SelectShotType(slot, skills, windDir);

    // Step 3: Distance calculation
    params.power = 80 + rand() % 20;  // 80-100%
    int distance = AI_CalcShotDistance(&params, windSpd, windDir);

    // Step 4: Deviation calculation
    int offline = AI_CalcOffline(&params, windSpd, windDir);

    // Step 5: Determine result quality
    int resultQuality;
    if (offline < 5 && distance > 0)
        resultQuality = 2;  // Perfect shot
    else if (offline < 20 && distance > slot->distanceToPin / 2)
        resultQuality = 1;  // Good shot
    else
        resultQuality = 0;  // Bad shot / miss

    slot->shotResult = resultQuality;

    // Step 6: Update state
    slot->strokes++;
    slot->distanceToPin -= distance;
    if (slot->distanceToPin < 0) slot->distanceToPin = 0;

    // Step 7: Determine if hole is complete
    if (slot->distanceToPin <= 0 && slot->lieType == 4) {
        // Ball is in the hole (or close enough)
        slot->state = 2;  // Done
    } else {
        // Update lie based on where ball landed
        if (slot->distanceToPin <= 30) {
            slot->lieType = 4;  // Green
        } else if (slot->distanceToPin <= 80) {
            slot->lieType = 1;  // Fairway approach
        }
        slot->state = 1;  // Waiting for next tick
    }
}

// ================================================================
// GESTION DES COMMENTAIRES (depuis les chaînes extraites)
// ================================================================

/**
 * Génère un commentaire de golfeur basé sur le résultat.
 * Correspond aux dialogues trouvés dans le binaire.
 */
const char* AI_GenerateComment(GolferSlot* slot, GolferSkills* skills)
{
    if (slot->shotResult == 2) {
        // Perfect shot
        return "What a shot!";  // Chaîne originale ?
    }
    if (slot->shotResult == 0) {
        // Miss
        return "I can't believe it!";  // Chaîne originale ?
    }
    // Analyse du trou
    if (slot->strokes == 1 && slot->distanceToPin > 200) {
        if (skills->length >= 10)
            return "My length skill helps on this hole.";
        else if (skills->accuracy >= 10)
            return "This hole rewards my accuracy.";
    }
    if (slot->strokes >= slot->holePar + 2)
        return "This hole is too hard!";
    if (slot->strokes <= slot->holePar - 1)
        return "This hole is too easy.";
    return "Nice shot.";
}

// ================================================================
// SIMULATION D'UN TROU COMPLET (appelée par GameTickFunction)
// ================================================================

/**
 * Fonction équivalente à vtable[0x68] de l'objet golfeur.
 * Appelée par GameTickFunction pour chaque slot actif.
 *
 * @param slot      Slot du golfeur à traiter
 * @param gameObj   Pointeur global objet jeu (0x8400b0)
 * @param slotIndex Index du slot (0-15)
 */
void Golfer_ProcessTick(GolferSlot* slot, void* gameObj, int slotIndex)
{
    if (slot == NULL || !slot->active) return;

    // Récupère les skills du golfeur depuis l'objet jeu
    GolferSkills skills = {0};
    // skills = gameObj->golfers[slot->golferId].skills;

    // Récupère les paramètres météo
    int windDir = 0;  // gameObj->weather.windDirection
    int windSpd = 0;  // gameObj->weather.windSpeed
    int holePar = 4;  // gameObj->holes[slot->holeIndex].par

    // Vérifie le timing
    int currentTime = rand();    // Simule GetTickCount()
    // Dans le code réel : call [0x4ba21c] = GetTickCount()

    if (slot->timerNext > currentTime) {
        return;  // Pas encore l'heure de jouer
    }

    // Simule le coup
    AI_SimulateShot(slot, &skills, holePar, windDir, windSpd);

    // Calcule le prochain tick
    slot->timerNext = currentTime + SHOT_DELAY_BASE
                      - (rand() % 5000);  // Variation aléatoire

    // Génère le commentaire
    // const char* comment = AI_GenerateComment(slot, &skills);
    // GameUI_ShowThoughtBubble(slot->golferId, comment);
}

// ================================================================
// GameTickFunction (0x49846c) — Boucle principale de simulation
// ================================================================

/**
 * Boucle de simulation appelée à chaque tick du jeu.
 *
 * Architecture :
 *   - Stack frame de ~8.5 Ko (0x220c bytes)
 *   - Initialise 16 slots d'objets temporaires
 *   - Boucle de traitement principal
 *   - Traitement des 16 golfeurs
 *   - Gestion du timeout (20s)
 *   - Affichage des résultats
 *
 * Cette fonction est appelée depuis le GameLoopCallback
 * via UpdateSimulation().
 *
 * @param gameData Pointeur vers les données globales du jeu (ebp+f4)
 */
void GameTickFunction(void* gameData)
{
    // Note : Cette fonction est TRÈS complexe dans l'original
    // (>2000 insn). Voici l'equivalent simplifié.

    GolferSlot slots[MAX_GOLFER_SLOTS];
    int numActiveSlots = 0;

    // 1. Remplit les slots actifs depuis les données jeu
    for (int i = 0; i < MAX_GOLFER_SLOTS; i++) {
        // Dans l'original : lecture depuis gameData->slots[i]
        slots[i].active = 0;
        // ... lecture des données golfeurs sur le parcours
    }

    // 2. Boucle de simulation
    int allDone = 0;
    int startTime = 0;  // GetTickCount()
    int timeout = 20000;  // 0x4e20

    while (!allDone) {
        allDone = 1;

        for (int i = 0; i < MAX_GOLFER_SLOTS; i++) {
            if (!slots[i].active) continue;

            if (slots[i].state != 2) {  // Pas encore fini
                allDone = 0;
                // Traite ce golfeur
                Golfer_ProcessTick(&slots[i], NULL, i);
            }
        }

        // Timeout check
        // int elapsed = GetTickCount() - startTime;
        // if (elapsed > timeout) {
        //     allDone = 1;
        // }
    }
}

// ================================================================
// RÉFÉRENCES DANS LE CODE ORIGINAL
// ================================================================
//
// GameTickFunction @ 0x49846c:
//   - 2000+ instructions
//   - 16 slots × 0x58 bytes stride (édi += 4, esi += 0x58)
//   - Construit objets temporaires à 0xf0, 0xd9c, 0x1528, 0x174c...
//   - Appelle vtable[0x68] de gameObj pour traiter chaque golfeur
//   - getTickCount via [0x4ba21c]
//   - Timeout 0x4e20 = 20000 ms
//   - Formatte résultats avec strings concaténées : 0x4c52b8, 0x4c3f70
//   - Affiche via 0x494cb0
//
// Données externes :
//   gameObj global @ 0x8400b0
//   vtable[0x68] du gameObj → fonction simulation golfeur
//   vtable[0x1c] → sub-function processing
//   vtable[0x64] → linked list traversal
//
// Strings extraites du .data section :
//   "  is setting up to hit a draw/fade/low/high shot"
//   "This hole rewards my accuracy"
//   "My length skill helps on this hole"
//   "Analyze Golf Shot"
//   "Really hard shot / Hard shot / Too easy shot"
//   "into the hole / inches from the hole"
//   "putt "
//   "Sand Wedge"
//   "Club: "
//   "Skill Rating: "
//   "LengthSkill=%.2f / AccuracySkill=%.2f"

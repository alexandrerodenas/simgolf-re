/**
 * cleaned_c/game_advance_sim.c
 * Avancement automatique de la simulation golfeur (timer-based).
 *
 * Source : golf.exe dépaqueté
 * Adresse : 0x0049ab40 → 0x0049acef
 *
 * Cette fonction est appelée périodiquement depuis la GameTickFunction
 * pour faire avancer la simulation quand le timer d'un golfeur expire.
 * Elle gère le passage au golfeur suivant dans la file d'attente.
 *
 * Principaux flux :
 *   1. Vérifier que le jeu est actif (gameState != NULL)
 *   2. Vérifier le délai minimum (timeGetTime() - 2000ms > lastAdvance)
 *   3. Vérifier qu'aucune autre avancée n'est en cours (flag 0x8400c0)
 *   4. Vérifier qu'aucune animation n'est en cours (flag 0x8400bc)
 *   5. Chercher le prochain golfeur à jouer dans les 16 slots
 *   6. Lancer l'action du golfeur via StartGolferAction(0x49acf0)
 *
 * Structures et globaux :
 *   0x8400b0 → gameState (pointeur)
 *   0x8400c0 → verrou d'avancement (1 = en cours)
 *   0x8400bc → verrou d'animation (1 = animation en cours)
 *   0x4ba21c → timeGetTime()
 *
 * Structure gameState (partielle, champs identifiés) :
 *   [gameState+0xec]  = lastAdvanceTime (timestamp dernière avance)
 *   [gameState+0xe8]  = flags généraux (bit 0x40000 = simulation active?)
 *   [gameState+0xf0]  = delayBetweenShots (temps entre tirs, ms)
 *   [gameState+0x77c] = currentGolferId (golfeur actif)
 *   [gameState+0x780] = previousGolferId (golfeur précédent)
 *   [gameState+0x1c8] = ?
 *   [gameState+0x180] = slotX timerStart (tableau de timestamps ?)
 *   [gameState+0x170] = slots[0] (début du tableau SimulationSlot[16])
 *   [gameState+0x1d8] = ?
 */

#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

// ================================================================
// Constantes
// ================================================================

#define NB_SLOTS         16
#define SLOT_STRIDE      0x58
#define MIN_DELAY_MS     0x7D0         // 2000 ms entre avancées
#define DELAY_BETWEEN_SHOTS_DEFAULT 0  // Pas de délai fixe

// Flags
#define FLAG_SIM_ACTIVE  0x40000

// Verrous globaux
#define LOCK_ADVANCE     (*(int*)0x8400c0)
#define LOCK_ANIMATION   (*(int*)0x8400bc)
#define GAME_STATE_PTR   (*(GameStateAdvance**)0x8400b0)

// ================================================================
// Structures
// ================================================================

/**
 * GameStateAdvance — Structure partielle de l'objet jeu
 * pour les opérations d'avancement de la simulation.
 */
typedef struct GameStateAdvance {
    void** vtable;               // +0x00
    // ... autres champs ...
    int    flags;                // +0xe8: Flags de simulation
    int    lastAdvanceTime;      // +0xec: Timestamp dernière avance
    int    delayBetweenShots;    // +0xf0: Délai inter-tirs (ms)
    // ... offset 0x170: slots[16]
    int    slot0;                // +0x170: slot 0 (SimulationSlot[0])
    // ... offset 0x180: timer start ?
    int    slotTimerStart;       // +0x180: Timer début pour slot courant
    // ... offset 0x1c8: ?
    int    field_0x1c8;
    // ... offset 0x1d8: ?
    int    slotLastAction;       // +0x1d8: Timestamp dernière action du slot
    int    currentGolferId;      // +0x77c: Golfeur actif
    int    previousGolferId;     // +0x780: Golfeur précédent
} GameStateAdvance;

// ================================================================
// Forward declarations
// ================================================================

/**
 * StartGolferAction (0x0049acf0) — Lance l'action d'un golfeur.
 *
 * Signature : int StartGolferAction(GameStateAdvance* this, int golferId, int param2)
 *   this    : GameState (pointeur)
 *   golferId : ID du golfeur à activer
 *   param2  : 0 normal, 1 forcé
 *
 * Retourne : 0 si succès, non-0 si échec/bloqué
 */
extern int StartGolferAction(GameStateAdvance* this, int golferId, int param2);

// ================================================================
// AdvanceSimulation (0x0049ab40)
// ================================================================

/**
 * AdvanceSimulation
 *
 * Avance la simulation d'un pas : vérifie les timers des 16 slots
 * et lance le prochain golfeur si son délai est écoulé.
 *
 * Appelée depuis GameTickFunction via call 0x497d10 (state transition)
 * et depuis d'autres points de la boucle de rendu.
 *
 * Comportement détaillé :
 *
 *   1. GARDE-FOUS
 *      - gameState == NULL → abandon
 *      - timeGetTime() - lastAdvanceTime < 2000ms → abandon
 *        (évite les avancées trop rapprochées)
 *      - LOCK_ADVANCE déjà actif → abandon
 *        (empêche la réentrance)
 *
 *   2. LOCK
 *      - LOCK_ADVANCE = 1 (prend le verrou)
 *      - timeGetTime() → lastAdvanceTime (sauvegarde)
 *
 *   3. VÉRIFICATION VERROU ANIMATION
 *      - Si LOCK_ANIMATION != 0 → déverrouiller, retour
 *        (une animation est en cours, on attend)
 *
 *   4. VERROU ANIMATION
 *      - LOCK_ANIMATION = 1
 *      - Vérifie flags & 0x40000 (simulation active ?)
 *
 *   5. BRANCHEMENT SELON COMPARAISON GOLFEURS
 *
 *      Cas A : currentGolferId == previousGolferId
 *        (même golfeur, tour suivant)
 *        - Itère sur les 16 slots
 *        - Cherche un slot dont le timer a expiré
 *          (timeGetTime() - slot->timerStart > delayBetweenShots)
 *        - Lance StartGolferAction(slot->golferId, 0)
 *        - Si échec, met à jour slot->timerStart
 *
 *      Cas B : currentGolferId == slot[0].golferId
 *        (c'est le premier golfeur de la liste)
 *        - Vérifie slot[0x180].timerStart (timer du slot 0)
 *        - Si timer expiré → lance StartGolferAction(slot[0], 0)
 *
 *      Cas C : AUTRE (recherche linéaire, 2 slots max)
 *        (c'est un golfeur parmi les slots 1-15)
 *        - Itère sur 2 slots supplémentaires
 *        - Vérifie le timer de chaque
 *        - Lance StartGolferAction pour le premier trouvé
 *
 *   6. DÉVERROUILLAGE
 *      - LOCK_ANIMATION = 0
 *      - LOCK_ADVANCE = 0
 *      - Retour
 */
int AdvanceSimulation(GameStateAdvance* this)
{
    GameStateAdvance* gameState;
    int (*timeGetTime)(void);
    int now;
    int slotIdx;
    int* pSlot;
    int delay;

    gameState = GAME_STATE_PTR;                         // [0x8400b0]
    if (gameState == NULL) return 0;                    // je 0x49acea

    timeGetTime = (int (*)(void))0x4ba21c;              // import timeGetTime

    // Vérification délai minimum
    now = timeGetTime();
    if ((now - 0x7D0) <= gameState->lastAdvanceTime)    // cmp 0x7D0 (2000ms)
        return 0;                                       // jbe 0x49acea

    // Vérification verrou avancement
    if (LOCK_ADVANCE != 0)                              // [0x8400c0]
        return 0;                                       // jne 0x49acea

    // Prendre verrou
    LOCK_ADVANCE = 1;                                   // [0x8400c0] = 1
    gameState->lastAdvanceTime = timeGetTime();          // maj timestamp

    // Vérification verrou animation
    if (LOCK_ANIMATION != 0) {                          // [0x8400bc]
        LOCK_ADVANCE = 0;                               // déverrouiller
        return 0;                                       // jne 0x49acea
    }

    // Verrou animation
    LOCK_ANIMATION = 1;                                 // [0x8400bc] = 1

    // Vérification flags simulation
    if ((gameState->flags & FLAG_SIM_ACTIVE) == 0)      // test 0x40000
        goto unlock;                                    // je 0x49ace0

    // ------------------------------------------------------------
    // Cas A : Même golfeur (current == previous)
    // ------------------------------------------------------------
    if (gameState->currentGolferId == gameState->previousGolferId) {
        // Ne pas confondre avec le saut jne 0x49ac42
        slotIdx = NB_SLOTS;                             // esp+0x10 = 16
        pSlot = &gameState->slot0;                      // esi+0x170

        // Boucle sur les 16 slots
        while (slotIdx > 0) {
            int golferId = *pSlot;                      // slot->golferId

            if (golferId != 0 && golferId != gameState->currentGolferId) {
                // Slot occupé par un autre golfeur
                int slotTimer = *(pSlot + 4);           // slot->timerStart (offset 0x10 depuis slot start)
                if (slotTimer != 0) {
                    now = timeGetTime();
                    delay = gameState->delayBetweenShots;
                    if ((now - slotTimer) > delay) {
                        // Timer expiré → lancer l'action
                        if (StartGolferAction(this, golferId, 0) == 0) {
                            goto unlock;                // succès → déverrouiller
                        }
                    }
                    // Si échec, mettre à jour le timer et continuer
                    *(pSlot + 4) = timeGetTime();
                }
            }

            pSlot += (SLOT_STRIDE / sizeof(int));       // avancer au slot suivant
            slotIdx--;
        }
        goto unlock;
    }

    // ------------------------------------------------------------
    // Cas B : Premier golfeur dans la liste
    // ------------------------------------------------------------
    if (gameState->currentGolferId == gameState->field_0x1c8) { // cmp [esi+0x1c8]
        int slotTimer2 = gameState->slotTimerStart;     // [esi+0x180]
        if (slotTimer2 == 0) goto unlock;               // je 0x49ace0

        now = timeGetTime();
        if ((now - slotTimer2) <= gameState->delayBetweenShots)
            goto unlock;                                // jbe 0x49ace0

        // Timer expiré → lancer l'action
        if (StartGolferAction(this, gameState->slot0, 0) == 0) { // slot[0].golferId
            gameState->slotTimerStart = timeGetTime();
            goto unlock;                                // (note: code suit)
        }

        // Mettre à jour le timer pour la prochaine tentative
        gameState->slotTimerStart = timeGetTime();
        goto unlock;
    }

    // ------------------------------------------------------------
    // Cas C : Autre golfeur (recherche linéaire)
    // ------------------------------------------------------------
    {
        int* pSearchSlot = &gameState->slotTimerStart;  // esi+0x180 = slot[0].timer
        int searchCount = 0;

        while (searchCount < 2) {                       // boucle sur 2 slots max
            int timer = *pSearchSlot;                   // champ timer
            if (timer == 0) goto unlock;                // je 0x49acea

            now = timeGetTime();
            if ((now - timer) < gameState->delayBetweenShots)
                goto unlock;                            // jb 0x49acea

            searchCount++;
            pSearchSlot += (SLOT_STRIDE / sizeof(int)); // +0x58 en bytes
        }

        // Les 2 slots ont leur timer expiré
        StartGolferAction(this, -1, 0);                 // -1 = n'importe quel golfeur?
        if (this == NULL) goto unlock;                  // test eax, jne unlock

        // Mettre à jour le timer
        gameState->slotLastAction = timeGetTime();      // [esi+0x1d8]
        *pSearchSlot = timeGetTime();                   // stocker dans le slot trouvé
    }

unlock:
    LOCK_ANIMATION = 0;                                 // [0x8400bc] = 0
    LOCK_ADVANCE = 0;                                   // [0x8400c0] = 0
    return 0;                                           // pop... ret
}

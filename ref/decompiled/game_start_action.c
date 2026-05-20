/**
 * cleaned_c/game_start_action.c
 * Lancement de l'action d'un golfeur (début de tour / sélection).
 *
 * Source : golf.exe dépaqueté
 * Adresse : 0x0049acf0 → 0x0049b66b
 *
 * Fonction appelée quand un golfeur doit jouer. Elle gère :
 *   - La recherche du slot correspondant
 *   - L'affichage du dialogue "Prêt à jouer" (si pas forcé)
 *   - La configuration de la vitesse de simulation
 *   - Le déclenchement de vtable[0x68] (simulation golfeur)
 *
 * Paramètres (__thiscall) :
 *   ecx = this (GameState*)
 *   [esp+4]  = golferId (ID du golfeur à activer)
 *   [esp+8]  = forceFlag (0 = dialogue, !=0 = action directe)
 *
 * Retour :
 *   0 = succès, action lancée
 *   non-0 = échec (slot introuvable ou bloqué)
 *
 * Vitesses de simulation disponibles :
 *   0x1388 = 5000ms  (très rapide)
 *   0x2710 = 10000ms (rapide)
 *   0x4E20 = 20000ms (normale, valeur par défaut)
 *   0x7530 = 30000ms (lente)
 */

#include <stdint.h>
#include <windows.h>

// ================================================================
// Constantes
// ================================================================

#define NB_SLOTS         16
#define SLOT_STRIDE      0x58
#define TIMEOUT_WAIT     0x4E20    // 20000ms timeout attente

// Vitesses de simulation
#define SPEED_FASTEST    0x1388    // 5000ms entre tirs
#define SPEED_FAST       0x2710    // 10000ms
#define SPEED_NORMAL     0x4E20    // 20000ms (défaut)
#define SPEED_SLOW       0x7530    // 30000ms

// Messages / dialogues
#define DIALOG_SIMPLE_MSG   0x4e47e8  // Chaîne dialogue standard
#define DIALOG_SPEED_MSG    0x4e484c  // Chaîne dialogue vitesse
#define DIALOG_FORMAT       0x4e4680  // Chaîne format dialogue
#define DIALOG_CLEANUP      0x4e4860  // Chaîne nettoyage

// Résultats du dialogue
#define DLG_CLOSE        0         // Fermer le jeu
#define DLG_SPEED        1         // Menu vitesse
#define DLG_IDLE         2         // Inactif
#define DLG_RESUME       3         // Reprendre

// ================================================================
// Globaux
// ================================================================

#define GAME_STATE    (*(void**)0x8400b0)
#define STATUS_BUF    ((char*)0x83c340)   // Buffer message status
#define CLOSE_FLAG    (*(int*)0x83afcc)

// ================================================================
// StartGolferAction (0x0049acf0)
// ================================================================

/**
 * StartGolferAction
 *
 * Lance l'action d'un golfeur : trouve son slot, affiche l'interface
 * si nécessaire, puis déclenche la simulation.
 *
 * La fonction utilise une stack frame de ~8.7 KB (0x221c) avec SEH.
 *
 * Flow :
 *   1. Cherche le golfeurId dans les 16 slots
 *   2. Si introuvable → nettoie et retourne (error cleanup)
 *   3. Si forceFlag != 0 → saute directement à l'action forcée
 *   4. Sinon :
 *      a. Compare currentGolfer avec previousGolfer
 *      b. Affiche les noms des golfeurs dans le buffer status
 *      c. Appelle le dialogue système (0x48e1c0 + 0x48e900)
 *      d. Selon le résultat :
 *         - 0 (DLG_CLOSE)  → fermeture (closeFlag = 1)
 *         - 1 (DLG_SPEED)  → menu vitesse : choix 5/10/20/30s
 *         - 2 (DLG_IDLE)   → nettoyage et attente
 *         - 3 (DLG_RESUME) → reprise normale
 *   5. [Après le dialogue] boucle de simulation des slots
 *      (comme GameTickFunction)
 *
 * La partie "action forcée" (0x49b527) déclenche directement
 * le dispatch vtable[0x68] et la boucle slots.
 */
int StartGolferAction(void* gameState, int golferId, int forceFlag)
{
    void* this = gameState;  // ecx → ebp
    int slotIndex;
    int* pSlot;
    
    // ============================================================
    // 1. RECHERCHE DU SLOT
    // ============================================================
    // Cherche golferId dans les 16 slots à [ebp+0x170], stride 0x58
    
    slotIndex = 0;
    pSlot = (int*)((char*)this + 0x170);  // ebp+0x170 = slots[0]
    
    while (slotIndex < NB_SLOTS) {
        if (*pSlot == golferId)            // slot->golferId == cherché ?
            break;
        slotIndex++;
        pSlot = (int*)((char*)pSlot + SLOT_STRIDE);
    }
    
    if (slotIndex >= NB_SLOTS) {
        // Slot introuvable → retour d'erreur (branche 0x49ad4a)
        // Nettoie et retourne 0
        goto cleanup_and_return;
    }
    
    // ============================================================
    // 2. VÉRIFICATION FORCE FLAG
    // ============================================================
    
    if (forceFlag) {
        // Action forcée — sauter le dialogue
        goto forced_action;
    }
    
    // ============================================================
    // 3. AFFICHAGE DIALOGUE "PRÊT À JOUER"
    // ============================================================
    
    int currentGolfer = *(int*)((char*)this + 0x77c);
    int previousGolfer = *(int*)((char*)this + 0x780);
    
    if (currentGolfer == previousGolfer ||
        currentGolfer == *(int*)((char*)this + 0x1c8)) {
        // Golfeur identique ou premier golfeur → pas de dialogue
        // (branche 0x49ae7e → 0x49b34a)
        goto simulation_loop;
    }
    
    // Afficher les noms
    int firstGolferId = *(int*)((char*)this + 0x170);  // slots[0].golferId
    
    // Mise à jour UI : nom du premier golfeur
    const char* name1 = GetGolferName(this, firstGolferId);   // 0x49aa30
    UpdateStatusBar(0, name1, -1, -1);                       // 0x494cb0
    
    // Mise à jour UI : nom du golfeur suivant
    int nextGolferId = *(int*)((char*)this + 0x1c8);
    const char* name2 = GetGolferName(this, nextGolferId);
    UpdateStatusBar(1, name2, -1, -1);
    
    // Appel du dialogue
    {
        int dialogResult;
        DialogBox(0x4e4860, DIALOG_SIMPLE_MSG, 0x4e4680, 1, 0, 0, &dialogResult);
        // (0x48e1c0 + 0x48e900)
        
        switch (dialogResult) {
        case 0:  // DLG_CLOSE
            CLOSE_FLAG = 1;
            // Nettoyage + retour (branche 0x49b238)
            goto cleanup_after_dialog;
            
        case 1:  // DLG_SPEED — menu vitesse
            {
                int speedResult;
                DialogBox(0x4e4680, 0x4e484c, -1, -1, -1, 0, &speedResult);
                // (0x48e1c0 avec la chaîne vitesse)
                
                // Résultat du sous-dialogue : jump table à 0x49b66c
                // 0 → 5000ms, 1 → 10000ms, 2 → 20000ms, 3 → 30000ms
                if (speedResult < 0 || speedResult > 3) {
                    // Défaut : pas de changement
                } else {
                    static const int speeds[] = {
                        SPEED_FASTEST, SPEED_FAST, SPEED_NORMAL, SPEED_SLOW
                    };
                    *(int*)((char*)this + 0xf0) = speeds[speedResult];
                }
                
                // Nettoyage après dialogue (branche 0x49b067)
            }
            goto cleanup_after_speed;
            
        case 2:  // DLG_IDLE
            goto cleanup_idle;
            
        case 3:  // DLG_RESUME — continuer
            goto simulation_loop;
        }
    }
    
cleanup_after_dialog:
    // (0x49b238) — nettoyage avec fermeture
    // Construction d'objets temporaires (tags 0x12-0x0a)
    // ...
    goto cleanup_end;
    
cleanup_after_speed:
    // (0x49b067) — nettoyage après menu vitesse
    // Construction d'objets temporaires (tags 0x24-0x1c)
    // ...
    goto cleanup_end;
    
cleanup_idle:
    // (0x49b150) — nettoyage inactif
    // Construction d'objets temporaires (tags 0x1b-0x13)
    // ...
    goto cleanup_end;
    
cleanup_end:
    // (0x49afda) — nettoyage final
    // Réinitialise les destructeurs
    // (0x474810, 0x4805a0)
    // return 0;
    
cleanup_and_return:
    // (0x49ae57) — sortie simple
    // return 0;
    
    // ============================================================
    // 4. SIMULATION LOOP (identique à GameTickFunction)
    // ============================================================
    
simulation_loop:
    // (0x49b34a) — sécurité
    if (GAME_STATE == NULL) goto cleanup_and_return;
    
    // Initialisation timestamps (comme GameTickFunction)
    int currentTime = timeGetTime();  // [0x4ba21c]
    // Copier dans 16 slots...
    
    // Appel vtable[0x68] — simuler le golfeur
    if (CallGolferSimulation(this, ...) != 0)
        goto error_path;
    
    // Boucle slots (identique à GameTickFunction 0x49869f-0x498750)
    // ...
    
    // Gestion timeout global 20000ms + affichage status
    
    // ============================================================
    // 5. ACTION FORCÉE (0x49b527)
    // ============================================================
    
forced_action:
    // Vérification rapide
    if (GAME_STATE != NULL) {
        // Marquer le slot comme actif
        // Appel vtable[0x68] directement
        // Boucle slots 0x58 stride × 16
        // ...
    }
    
    // Nettoyage final + retour
    // ...
    return 0;
}

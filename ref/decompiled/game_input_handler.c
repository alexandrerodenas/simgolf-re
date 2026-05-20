/**
 * cleaned_c/game_input_handler.c
 * Gestionnaire d'événements utilisateur (clavier, souris, tactile).
 *
 * Source : golf.exe dépaqueté
 * Adresse : 0x0049b7b0 → 0x0049b96a
 *
 * Cette fonction traite les événements utilisateur provenant du système
 * de fenêtrage et les convertit en actions de jeu.
 *
 * Elle est appelée depuis :
 *   - GameTickFunction (0x498686) quand WaitForMultipleObjects retourne 1
 *   - Boucle d'attente (0x499595)
 *   - Traitement des messages (0x499eaf)
 *
 * Format des événements :
 *   La structure à [esi] contient :
 *     [esi+0x00] = type d'événement (int32)
 *     [esi+0x04] = flags/modificateurs
 *     [esi+0x08] = paramètre (ID golfeur, coordonnée, etc.)
 *     [esi+0x0c] = sous-événements (pour multi-touch, stride 0x28)
 *
 * Types d'événements :
 *   0x03 (3)   = Activation golfeur (commencer le tour)
 *   0x05 (5)   = Clic/Tap sur le terrain (hit test)
 *   0x31 (49)  = Échap / Annuler / Menu
 *   0x102      = Sélection golfeur (trouver par ID)
 *   0x103      = Bouton d'action (interface)
 *
 * Flags d'événement :
 *   0x80 = Action immédiate (golfeur)
 *   0x10 = Multi-événements (sous-événements à traiter)
 */

#include <stdint.h>
#include <windows.h>

// ================================================================
// Forward declarations
// ================================================================

/** StartGolferAction (0x49acf0) */
extern int StartGolferAction(void* gameState, int golferId, int param2);

/** HitTest (0x49b690) — Test de collision coordonnées → tuile */
extern void HitTest(void* gameState, void* coord, int x, int y);

/** ValidateAndAdvance (0x497d10) — Transition d'état */
extern void ValidateAndAdvance(void* gameState);

/** GameState::vtable[0x10]() — Action terrain */
extern void vtable_TerrainAction(void* gameState, int x, int y, int z);

/** GameState::vtable[0x14]() — Annulation / Menu */
extern void vtable_Cancel(void* gameState);

/** GameState::vtable[0x54]() — Hit terrain avec retour */
extern int vtable_TerrainHit(void* gameState, int x, int y, void* result);

// ================================================================
// InputHandler (0x0049b7b0)
// ================================================================

/**
 * InputHandler
 *
 * Traite un événement utilisateur et le convertit en action de jeu.
 *
 * Signature : void InputHandler(void* this, InputEvent* event, int param)
 *   this  : pointeur GameState (dans ecx)
 *   event : pointeur structure d'événement (sur stack)
 *   param : 0 = événement normal, != 0 = événement forcé
 *
 * Traitement par type d'événement :
 *
 * ┌──────────┬────────────────┬──────────────────────────────┐
 * │ Type     │ Condition      │ Action                       │
 * ├──────────┼────────────────┼──────────────────────────────┤
 * │ 0x03 (3) │ flags != 0x80 │ Rien (ignoré)                │
 * │ 0x03 (3) │ flags == 0x80 │ StartGolferAction(param, 1)  │
 * │          │                │   (commencer le tour)         │
 * ├──────────┼────────────────┼──────────────────────────────┤
 * │ 0x05 (5) │ subEvents > 0 │ Pour chaque sous-événement : │
 * │          │                │   HitTest(coord, x, y)       │
 * │          │ flags ≠ 0x80  │ Clic terrain :               │
 * │          │ param==1      │   StartGolferAction(param, 1) │
 * │          │                │   (sélection golfeur)         │
 * │          │ param==1,     │   vtable_TerrainHit(param, 8) │
 * │          │ sub==1        │   + commentaire               │
 * ├──────────┼────────────────┼──────────────────────────────┤
 * │ 0x31 (49)│                │ vtable[0x14]() (annuler)     │
 * │          │                │ ValidateAndAdvance()          │
 * ├──────────┼────────────────┼──────────────────────────────┤
 * │ 0x102    │                │ Cherche slot par ID           │
 * │          │                │ Met à jour état du slot       │
 * ├──────────┼────────────────┼──────────────────────────────┤
 * │ 0x103    │                │ vtable[0x10](param, button)   │
 * │          │                │   (action interface)           │
 * └──────────┴────────────────┴──────────────────────────────┘
 *
 * Note : Les événements 0x102 et 0x103 sont dans la plage
 *        0x102-0x103 après soustraction de 0x100 depuis le type
 *        de base 0x02-0x03 (WM_USER + x).
 */
void InputHandler(void* this, void* event, int forceFlag)
{
    GameState* gameState;
    EventStruct* evt;
    int eventType;

    gameState = *(void**)0x8400b0;          // [0x8400b0]
    if (gameState == NULL) return;           // je dead

    evt = *(EventStruct**)(this + 4);        // [ebp+4] = event pointer
    if (evt == NULL) return;                 // je dead

    // Décoder l'événement via 0x4a4c70
    // InputEvent result;
    // if (0x4a4c70(this+0x148, evt, &result, 0, 0) == 0) return;
    {
        int result[2];                       // esp+0xc
        if (0 == DecodeInput(this + 0x148, evt, &result, 0, 0))
            return;
    }

    if (forceFlag) {
        // === TRAITEMENT ÉVÉNEMENT FORCÉ ===
        uint16_t flags = *(uint16_t*)evt;    // ax = word [esi]
        
        if (flags & 0x80) {
            // Action immédiate (démarrer tour golfeur)
            int golferId = *(int*)(evt + 8);  // [esi+8]
            StartGolferAction(this, golferId, 1);
            return;
        }
        
        if (flags & 0x10) {
            // Multi-événements (ex: mouvement tactile continu)
            uint8_t count = *(uint8_t*)(evt + 8);  // [esi+8] = nombre
            uint8_t* subEvt = evt + 0xc;            // [esi+0xc] = premier sous-événement
            
            for (int i = 0; i < count; i++) {
                int x = *(int*)(subEvt);            // [edi]
                int y = *(int*)(subEvt + 4);        // [edi+4]
                int z = *(int*)(subEvt + 0x24);     // [edi+0x24]
                HitTest(this, subEvt + 4, x, z);    // 0x49b690
                subEvt += 0x28;                      // stride 0x28
            }
        }
        return;
    }

    // === TRAITEMENT ÉVÉNEMENT NORMAL ===
    eventType = *(int*)evt;                    // [esi] = event type

    switch (eventType) {
    case 0x31:  // 49 = ESC / ANNULER
        vtable_Cancel(this);                   // vtable[0x14]
        ValidateAndAdvance(this);              // 0x497d10 (transition état)
        break;

    case 3:    // ACTIVATION GOLFEUR
        if (*(int*)(evt + 4) == 1) {           // [esi+4] == 1 ?
            int golferId = *(int*)(evt + 8);   // [esi+8]
            StartGolferAction(this, golferId, 1); // 0x49acf0
        }
        break;

    case 5:    // CLIC TERRAIN (HIT TEST)
        if (*(int*)(evt + 4) == 1) {           // [esi+4] == 1 ?
            // Vérifier quel golfeur est actif
            int currentGolfer = *(int*)(this + 0x77c);
            int prevGolfer = *(int*)(this + 0x780);
            
            if (currentGolfer == prevGolfer) {
                // Même golfeur : lancer hit test
                int result;
                int param = *(int*)(evt + 8);
                int code = vtable_TerrainHit(this, param, 0x83ff9c, &result);
                // (edx + 0x54)
                
                char* comment = *(char**)(evt + 0x10);
                int commentLen = (comment) ? strlen(comment) : 0;
                // 0x49b8b5-0x49b8e4 : appelle 0x49b690 avec les infos
                StartGolferAction(this, param, 1);
            }
            else if (currentGolfer == *(int*)(this + 0x1c8)) {
                // Autre golfeur : hit test direct
                int* slotTimer = (int*)(this + 0x180);
                if (*slotTimer != 0) {
                    int now = timeGetTime();
                    if ((now - *slotTimer) > *(int*)(this + 0xf0)) {
                        StartGolferAction(this, *(int*)(this + 0x170), 0);
                    }
                }
            }
            else {
                // Recherche dans 2 slots maximum
                int found = 0;
                int* pTimer = (int*)(this + 0x180);  // slot[0].timer
                
                while (found < 2) {
                    if (*pTimer == 0) break;
                    int now = timeGetTime();
                    if ((now - *pTimer) < *(int*)(this + 0xf0)) break;
                    found++;
                    pTimer += 0x58 / sizeof(int);
                }
                
                if (found == 2) {
                    // Les 2 slots sont prêts
                    StartGolferAction(this, -1, 0);
                    if (this != NULL) {
                        *(int*)(this + 0x1d8) = timeGetTime();
                        *pTimer = timeGetTime();
                    }
                }
            }
        }
        break;

    case 0x102:  // SÉLECTION GOLFEUR
        {
            int targetId = *(int*)(evt + 8);   // [esi+8]
            int slotIndex = 0;
            int* pGolfer = (int*)(this + 0x170); // slot[0].golferId
            
            // Chercher le slot qui correspond à targetId
            while (slotIndex < 16) {
                if (*pGolfer == targetId) break;
                slotIndex++;
                pGolfer += 0x58 / sizeof(int);
            }
            
            if (slotIndex < 16) {
                // Slot trouvé → mettre à jour l'état
                char* stateStr = *(char**)(evt + 0xc);  // [esi+0xc]
                if (stateStr != NULL) {
                    char state = *stateStr;               // premier byte
                    // Calcul offset dans la structure slot
                    int offset = (slotIndex * 5 + slotIndex * 2); // eax+eax*4 + eax*2
                    *(char*)(this + 0x184 + offset * 8) = state; // maj état
                }
            }
        }
        break;

    case 0x103:  // BOUTON INTERFACE
        {
            int param = *(int*)(evt + 8);
            int button = *(int*)(evt + 0x18);
            vtable_TerrainAction(this, param, button, 0); // vtable[0x10]
        }
        break;

    default:
        break;
    }
}

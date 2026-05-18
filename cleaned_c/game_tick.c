/**
 * game_tick.c
 * 
 * Source : golf.exe dépaqueté (DEViANCE) — FUN_0x49846c / 0x4985eb
 * 
 * Boucle principale de simulation du jeu.
 * Gère 16 slots de simulation (golfeurs/groups) avec synchronisation
 * multi-thread via WaitForMultipleObjects + ResetEvent/SetEvent.
 * 
 * Analyse Hermes-RE, Mai 2026
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================
// Structures
// ============================================================

/**
 * SlotDeSimulation — Un groupe de golfeurs jouant un trou
 * 
 * Structure de 0x58 bytes par slot, 16 slots max.
 * Contient l'état de progression du groupe : position sur le parcours,
 * score, timing, vtable de simulation.
 */
typedef struct SimulationSlot {
    // +0x00: Vtable de l'objet simulation
    void** vtable;

    // +0x04 - +0x0C: Handle d'événement (ResetEvent/SetEvent)
    void* event_handle;

    // +0x08: Handle du thread worker
    void* thread_handle;

    // ... (structure plus complète, 0x58 bytes au total)

} SimulationSlot;

/**
 * GameTickContext — Contexte de la boucle de tick
 * 
 * Structure placée sur la stack (0x220c bytes !).
 * Contient tous les états locaux de la frame courante.
 */
typedef struct GameTickContext {
    // +0x00: Base de la stack frame
    // +0xf0: Gestionnaire de ressources C++ (try/catch local)
    // +0x364: Gestionnaire de ressources secondaire
    // +0x694-0xd9c: Objets locaux (constructeurs/destructeurs)
    // +0x1490-0x1ff4: Objets de rendu/messages

    // +0x10: Slot counter / index courant
    int slot_index;

    // +0x14: Temps courant (timeGetTime)
    uint32_t current_time;

    // +0x18: Flag "quelque chose a été mis à jour"
    bool update_flag;

    // +0x1c: Paramètre pour les appels vtable
    int vtable_param;

    // +0x20: Timeout actuel
    int current_timeout;

    // +0x24: Timestamp de début de boucle
    uint32_t loop_start_time;

    // +0x30: Timestamp de début de frame
    uint32_t frame_start_time;

    // +0x34: Tableau de timestamps de début (16 slots)
    uint32_t slot_start_times[16];

    // +0x70: Tableau "slot actif" (16 slots × 4 bytes)
    int slot_active[16];  // 0 = inactive, 1 = active

    // +0xb0: Timeouts par slot (16 slots × 4 bytes)
    int slot_timeouts[16];

    // ... (beaucoup d'autres variables locales)

} GameTickContext;

// ============================================================
// Constantes
// ============================================================

#define MAX_SLOTS       16
#define SLOT_STRIDE     0x58    // Taille d'un slot en mémoire
#define TIMEOUT_DEFAULT 20000   // 20 secondes
#define LOOP_TIMEOUT    20000   // Timeout boucle principale

// ============================================================
// Fonction principale de tick
// ============================================================

/**
 * GameTickFunction
 * 
 * Boucle principale de mise à jour de la simulation.
 * Appelée depuis le timer Windows (SetTimer) ou depuis 
 * la boucle de rendu.
 * 
 * Entry point ASM : 0x49846c
 * Boucle principale : 0x4985eb
 * 
 * @param game_object Objet principal du jeu (contient les slots)
 * @param initial_param Paramètre initial (flags/mode)
 */
void GameTickFunction(void* game_object, int initial_param) {
    GameTickContext ctx;
    int slot_idx;
    int i;
    
    // Initialise les timestamps des slots
    for (i = 0; i < MAX_SLOTS; i++) {
        ctx.slot_start_times[i] = 0;
    }

    // Récupère le gestionnaire de jeu global
    SimulationSlot* slots = (SimulationSlot*)((char*)game_object + 0x178);
    int* game_flags = (int*)((char*)game_object + 0xe8);
    
    // Vérifie le flag "game running"
    if (*game_flags & 0x10000000) {
        goto cleanup;
    }

    // Initialise les 16 slots à 0
    memset(slots, 0, MAX_SLOTS * SLOT_STRIDE);

    // Enregistre le pointeur global vers les slots
    RegisterSlotPointer(slots);  // [0x83ff6c] = slots

    // Vérifie que l'objet de jeu global existe
    void** game_global = *(void***)0x8400b0;
    if (game_global == NULL) {
        // Erreur : pas d'objet de jeu → cleanup
        DestroyLocalObjects(&ctx);
        return;
    }

    // Initial setup : appel vtable+0x28 du gestionnaire de jeu
    game_global[0x28 >> 2](game_global, 0, 0, 0x497f60, 0, initial_param);

    // Timeout par défaut
    ctx.current_timeout = -1;

    // --- Boucle principale ---
    while (1) {
        // Cherche le premier slot inactif
        for (slot_idx = 0; slot_idx < MAX_SLOTS; slot_idx++) {
            if (slots[slot_idx].vtable == NULL) {
                break;  // Slot libre trouvé
            }
        }

        if (slot_idx >= MAX_SLOTS) {
            // Tous les slots sont occupés → fin de la fonction
            // (passe par le destructeur)
            goto startup_path;
        }

        // Marque le slot comme actif
        ctx.slot_active[slot_idx] = 1;
        
        // Calcule l'index dans le tableau des slots
        // slot_idx * 11 (eax + eax*4 + ecx*2 → ×11)
        // puis *8 = ×88 = ×0x58 stride
        int slot_offset = slot_idx * 11 * 8;  // = slot_idx * 0x58

        // Récupère le timeout par défaut depuis la structure du jeu
        int* slot_data = (int*)((char*)game_object + 0x17c + slot_offset);
        ctx.slot_timeouts[slot_idx] = *slot_data;
        
        if ((unsigned int)*slot_data < (unsigned int)0xFFFFFFFF) {
            // Timeout valide → enregistre comme timeout courant
            ctx.current_timeout = *slot_data;
        }

        // Vérifie si le jeu est toujours en cours
        game_global = *(void***)0x8400b0;
        if (game_global == NULL) {
            goto game_exit;
        }

        // === DÉBUT DE LA BOUCLE DE TICK ===
        // (étiquette ASM 0x4985eb — point de retour)
    tick_loop:
        game_global = *(void***)0x8400b0;
        if (game_global == NULL) {
            goto game_exit;
        }

        // --- Phase A : Enregistrement du timestamp ---
        ctx.frame_start_time = timeGetTime();
        
        // Copie le timestamp dans les 16 slots
        for (i = 0; i < MAX_SLOTS; i++) {
            ctx.slot_start_times[i] = ctx.frame_start_time;
        }

        // --- Phase B : Appel de simulation ---
        // Appelle game_global->vtable[0x68](game_global, params...)
        int result = game_global[0x68 >> 2](
            game_global,
            ctx.vtable_param,
            initial_param,
            0,
            *(int*)((char*)game_object + 0x77c),
            ctx.slot_index
        );

        if (result != 0) {
            // Erreur de simulation → affiche MessageBox error
            // et nettoie
            goto simulation_error;
        }

        // --- Phase C : Timing et synchronisation ---
        uint32_t t1 = timeGetTime();
        ctx.loop_start_time = t1;
        
        uint32_t t2 = timeGetTime();
        uint32_t elapsed = t2 - t1;

        if (elapsed >= LOOP_TIMEOUT) {
            // Timeout dépassé → reset global
            *(char*)0x83c340 = 0;
            ctx.update_flag = true;
            goto process_slots;
        }

        // --- Phase D : WaitForMultipleObjects (sync threads) ---
        // Attend les threads de simulation des slots actifs
        int wait_result;
        do {
            // ResetEvent + SetEvent pattern
            ResetEvent(*(void**)((char*)game_object + 0x18));
            SetEvent(*(void**)((char*)game_object + 0x14));
            
            // Prépare le tableau d'handles
            HANDLE handles[2];
            handles[0] = *(HANDLE*)((char*)game_object + 0x14);
            handles[1] = *(HANDLE*)((char*)game_object + 0x18);
            
            wait_result = WaitForMultipleObjects(
                2, handles, FALSE, ctx.current_timeout
            );
            
            if (wait_result == WAIT_OBJECT_0 + 1) {
                // Signal reçu → callback
                CallSimulationComplete(game_object);
            }

            // Vérifie le temps écoulé
            ctx.current_time = timeGetTime();
            ctx.update_flag = false;

            // Boucle interne sur les slots actifs
            for (i = 0; i < MAX_SLOTS; i++) {
                if (!ctx.slot_active[i]) continue;
                
                // Récupère les données du slot
                SimulationSlot* slot = &slots[i];
                int slot_timeout = ctx.slot_timeouts[i];
                uint32_t slot_start = ctx.slot_start_times[i];

                // Vérifie si le slot est encore en vie
                if (slot->vtable == NULL) {
                    ctx.slot_active[i] = 0;
                    continue;
                }

                // Si pas de timeout défini encore
                if (slot->status == 0) {
                    // Calcule un timeout basé sur le temps écoulé
                    uint32_t time_since_start = ctx.current_time - slot_start;
                    int new_timeout = time_since_start + (slot_timeout + 0x14) / 2;
                    slot_timeout = new_timeout;
                    ctx.slot_active[i] = 0;
                } else {
                    // Timeout déjà défini — vérifie le dépassement
                    uint32_t elapsed_in_slot = ctx.current_time - slot_start;
                    
                    if (elapsed_in_slot > (uint32_t)slot_timeout) {
                        // Timeout dépassé → relance
                        int new_timeout = (slot_timeout + slot_timeout * 2) / 2;
                        ctx.slot_timeouts[i] = new_timeout;
                        
                        if (game_global != NULL) {
                            // Rappelle la simulation
                            game_global[0x68 >> 2](
                                game_global,
                                ctx.vtable_param,
                                ctx.current_time,
                                0,
                                slot->event_handle,
                                game_object
                            );
                            
                            if (result != 0) {
                                // Erreur critique
                                ShowErrorMessage();
                                goto cleanup_objects;
                            }
                            
                            ctx.update_flag = true;
                        }
                    } else {
                        // Slot toujours en cours, rien à faire
                    }
                }
            }  // end for slots

            // Vérifie le timeout global
            uint32_t total_elapsed = timeGetTime() - ctx.loop_start_time;
            if (total_elapsed < LOOP_TIMEOUT) {
                // Continue à attendre
                continue;
            } else {
                // Timeout global dépassé
                *(char*)0x83c340 = 0;
                ctx.update_flag = true;
                break;
            }

        } while (wait_result != WAIT_TIMEOUT && ctx.update_flag);

    process_slots:
        // --- Phase E : Traitement post-simulation ---
        if (ctx.update_flag) {
            // Réinitialise les messages de statut
            char status_buf[256];
            
            // Copie le message "Playing..."
            strcpy(status_buf, GetString(0x4c52b8));  // "Playing..."
            
            // Construit le message complet
            char final_msg[512];
            snprintf(final_msg, sizeof(final_msg), "%s %s %s",
                     GetString(0x4c3f70),  // "Golfer"
                     status_buf,
                     GetString(0x4c4944)); // "..."
            
            // Affiche via la GUI
            ShowStatusMessage(final_msg, -1, -1);
            
            // Appelle le callback de rendu de tick
            RenderTick();
            
            // Reset le flag
            ctx.update_flag = false;
        }

    // Vérifie si on continue la boucle
    game_global = *(void***)0x8400b0;
    if (game_global != NULL) {
        goto tick_loop;  // Continue la boucle
    }

    // --- Fin de la boucle de tick ---
    goto game_exit;

    // --- Gestion d'erreur ---
    simulation_error:
        ShowErrorMessage("Simulation error", "An error occurred during simulation.");
        // Fall through to cleanup

    cleanup_objects:
        DestroyLocalObjects(&ctx);
        return;

    startup_path:
        // Chemin d'initialisation/démarrage
        // Nettoie et termine proprement
        goto cleanup;

    game_exit:
        // Sortie normale
        DestroyLocalObjects(&ctx);
        return;

    cleanup:
        DestroyLocalObjects(&ctx);
        return;
}

// ============================================================
// Fonctions helpers (stubs — à remplir)
// ============================================================

uint32_t timeGetTime(void) {
    // Stub : remplacer par performance.now() en JS
    return 0;
}

void RegisterSlotPointer(void* slots) {
    *((void**)0x83ff6c) = slots;
}

void CallSimulationComplete(void* game_object) {
    // Appelle le callback de fin de simulation
    // vtable+0x??
}

void ShowErrorMessage(const char* title, const char* msg) {
    // Stub : MessageBoxA
    MessageBoxA(NULL, msg, title, MB_OK);
}

void ShowStatusMessage(const char* msg, int param1, int param2) {
    // Stub : met à jour l'UI
}

void DestroyLocalObjects(GameTickContext* ctx) {
    // Appelle les destructeurs C++ des objets locaux
    // (ordre inverse des constructeurs)
}

const char* GetString(uint32_t string_id) {
    // Récupère une chaîne depuis la table de strings du jeu
    return (const char*)string_id;
}

void RenderTick(void) {
    // Force un rendu frame
}

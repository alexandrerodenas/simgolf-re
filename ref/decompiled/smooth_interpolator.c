/**
 * smooth_interpolator.c
 * 
 * Source : golf.exe dépaqueté (DEViANCE) — FUN_0x4969e0
 * 
 * Système d'interpolation fluide pour caméra, position, zoom.
 * Déplacé de l'ASM à ~0x4969e0 (fonction smooth update avec timing).
 * 
 * Analyse Hermes-RE, Mai 2026
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================
// Structures de données
// ============================================================

/**
 * SmoothInterpolator — Animateur fluide entre deux bornes
 * 
 * Fait bouger une valeur entre `min_pos` et `max_pos` avec
 * accélération/décélération.
 * 
 * Utilisé pour : zoom caméra, rotation, panoramique, 
 * transitions UI, animations balle.
 */
typedef struct SmoothInterpolator {
    // VTable (C++ virtuel) — pointeur vers la table des méthodes
    void** vtable;

    // === MEMBRES À OFFSET FIXE (depuis analyse golf.exe) ===
    
    // +0x578: Identifiant/cible de l'objet à mettre à jour
    //         (passé comme paramètre aux callbacks vtable+0xe4/e8)
    int target_id;

    // +0x580: Borne inférieure (minimum position)
    int min_pos;

    // +0x584: Borne supérieure (maximum position) 
    int max_pos;

    // +0x588: Direction inversée ?
    //         0 = forward (min→max), non-zero = backward (max→min)
    bool direction_inverted;

    // +0x58c: Position courante (interpolée)
    int current_pos;

    // +0x590: Durée totale de l'animation (en frames/ticks)
    int duration;

    // +0x594: (unknown — padding/autre usage)
    int unknown_594;

    // +0x598: Timestamp de la dernière mise à jour (timeGetTime)
    uint32_t last_timestamp;

    // +0x59c: État/statut de l'interpolation
    //         -1 = idle, 0 = en cours vers max, 1 = en cours vers min
    int status;

    // +0x5a0: Pas de déplacement par tick
    int step_size;

    // +0x5a4: Accélération directionnelle
    //         1 = se déplace vers max, -1 = vers min, 0 = arrêté
    int acceleration;

    // +0x5a8: (unknown)
    int unknown_5a8;

    // +0x5ac: Seuil haut pour déclencher la direction
    int upper_trigger;

    // +0x5b0: Seuil bas pour déclencher la direction  
    int lower_trigger;

    // +0x5b4: Cible haute
    int upper_target;

    // +0x5b8: Cible basse
    int lower_target;

    // +0x5bc: Limite haute ajustée
    int adjusted_upper;

    // +0x130: Objet cible pour les callbacks
    //         Contient vtable utilisée pour vtable+0xe4/e8
    void* target_object;

    // +0x278: Source de timing (objet avec vtable+0xd8=current, +0xdc=end)
    void* timing_source;

    // +0x13ac: Callback personnalisé (optionnel)
    //          Fonction appelée après mise à jour position
    void (*custom_callback)(int target_id, int new_position);

    // +0x13b0: Callback personnalisé (optionnel, v2)
    void (*custom_callback2)(int target_id, int new_position);

} SmoothInterpolator;

// ============================================================
// Méthodes (convention __thiscall : this dans ECX)
// ============================================================

/**
 * SmoothInterpolator_update
 * 
 * Met à jour la position avec interpolation temporelle.
 * 
 * Logique :
 * 1. Vérifie le delta depuis la dernière frame
 * 2. Si pas assez de temps passé, applique step vers target
 * 3. Clampe entre min_pos et max_pos
 * 4. Notifie l'objet cible via callback
 * 
 * @param this  L'interpolateur (this en __thiscall)
 * @param a     Premier paramètre (threshold/trigger)
 * @param b     Second paramètre (target)
 * 
 * Équivalent ASM : FUN_0x4969e0
 */
void SmoothInterpolator_update(SmoothInterpolator* this, 
                                int a, int b) {
    uint32_t now;
    int delta;
    int has_current, has_end;
    int temp_pos;

    // Récupère le timestamp actuel
    now = timeGetTime();  // [0x4ba21c]

    // Calcule le delta depuis la dernière mise à jour
    if (this->last_timestamp != 0) {
        delta = (int)(now - this->last_timestamp);
        int half_duration = this->duration * 2;  // shl 1

        // Si le delta a dépassé la moitié de la durée
        if (delta >= half_duration) {
            // Passe en mode idle et sort
            this->acceleration = 0;
            SmoothInterpolator_callInternal(this, &a, &b);
            return;
        }
    } else {
        // Première frame : initialise le timestamp
        this->last_timestamp = now;
    }

    // --- Phase 2 : Animation contrôlée ---
    // Récupère les valeurs de timing depuis l'objet source
    has_current = getTimingCurrent(this->timing_source);  // vtable+0xd8
    has_end     = getTimingEnd(this->timing_source);      // vtable+0xdc

    if (has_current > has_end) {
        // Cas LENGTH > ACCURACY (ou équivalent)
        if (a > this->upper_trigger) {
            // Au-dessus du seuil haut → accélération positive
            if (this->acceleration <= 0) {
                this->acceleration = -1;
                this->last_timestamp = 0;
                // Appelle le callback de déplacement
                this->vtable[0x6c >> 2](this, a, b);  // vtable+0x6c
                return;
            }
        } else if (a < this->lower_trigger) {
            // En dessous du seuil bas → accélération négative
            if (this->acceleration >= 0) {
                this->acceleration = 1;
                this->last_timestamp = 0;
                this->vtable[0x6c >> 2](this, a, b);
                return;
            }
        }

        // Aucun changement de direction → applique le step
        if (this->acceleration <= 0) {
            temp_pos = this->current_pos + this->step_size;
            if (temp_pos <= this->max_pos) {
                this->current_pos = temp_pos;
            } else {
                this->current_pos = this->max_pos;
            }
        } else {
            temp_pos = this->current_pos - this->step_size;
            if (temp_pos >= this->min_pos) {
                this->current_pos = temp_pos;
            } else {
                this->current_pos = this->min_pos;
            }
        }
    } else {
        // Cas ACCURACY >= LENGTH (inverse)
        if (a > this->upper_trigger) {
            if (this->acceleration <= 0) {
                this->acceleration = 1;
                this->last_timestamp = 0;
                this->vtable[0x6c >> 2](this, a, b);
                return;
            }
        } else if (a < this->lower_trigger) {
            if (this->acceleration >= 0) {
                this->acceleration = -1;
                this->last_timestamp = 0;
                this->vtable[0x6c >> 2](this, a, b);
                return;
            }
        }

        // Applique le step dans la direction appropriée
        if (this->acceleration <= 0) {
            temp_pos = this->current_pos + this->step_size;
            if (temp_pos <= this->max_pos) {
                this->current_pos = temp_pos;
            } else {
                this->current_pos = this->max_pos;
            }
        } else {
            temp_pos = this->current_pos - this->step_size;
            if (temp_pos >= this->min_pos) {
                this->current_pos = temp_pos;
            } else {
                this->current_pos = this->min_pos;
            }
        }
    }

    // --- Phase 3 : Finalisation et callback ---
    SmoothInterpolator_callInternal(this, &a, &b);
}

/**
 * SmoothInterpolator_callInternal
 * 
 * Notifie l'objet cible du changement de position.
 * Appelle vtable+0xe8 puis le callback optionnel.
 * 
 * @param this  L'interpolateur
 * @param a     Pointeur vers paramètre A (peut être modifié)
 * @param b     Pointeur vers paramètre B
 */
void SmoothInterpolator_callInternal(SmoothInterpolator* this,
                                      int* a, int* b) {
    // Met à jour le global "current interpolator" 
    // (utilisé par le système de rendu pour suivre l'animation)
    *((int*)0x83ab2c) = (int)this->target_object;

    // Vérifie si la position a changé
    if (*b != this->current_pos) {
        // Notifie l'objet cible
        void* target = this->target_object;
        void** target_vtable = *(void***)target;

        if (this->direction_inverted) {
            // Mode inversé : envoie (min - current + max)
            int inverted = (this->min_pos - this->current_pos) + this->max_pos;
            target_vtable[0xe8 >> 2](target, this->target_id, inverted);
        } else {
            // Mode normal : envoie la position courante
            target_vtable[0xe8 >> 2](target, this->target_id, this->current_pos);
        }

        // Callback personnalisé optionnel
        if (this->custom_callback2) {
            int callback_val;
            if (this->direction_inverted) {
                callback_val = (this->min_pos - this->current_pos) + this->max_pos;
            } else {
                callback_val = this->current_pos;
            }
            this->custom_callback2(this->target_id, callback_val);
        }
    }

    // Callback de fin d'animation (vtable+0x120)
    this->vtable[0x120 >> 2](this);

    // Met à jour le timestamp de la dernière frame
    this->last_timestamp = timeGetTime();
    this->status = -1;  // idle
}

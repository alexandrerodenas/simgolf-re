/**
 * SmoothInterpolator.ts
 * 
 * Portage TypeScript du système d'interpolation fluide de SimGolf.
 * 
 * Source ASM : golf.exe 0x4969e0, 0x496c30, 0x496d60, 0x496e30
 * 
 * Ce système animait la caméra, le zoom, les transitions UI et
 * potentiellement la trajectoire de balle.
 * 
 * Principe : une valeur numérique bouge entre min et max avec
 * accélération/décélération, notifiée via callback.
 * 
 * Utilisation :
 *   const anim = new SmoothInterpolator(0, 100, 10);
 *   anim.onUpdate = (pos) => camera.setZoom(pos);
 *   anim.target = 80;     // va bouger de 0 à 80 avec step 10
 *   anim.update(deltaMs); // appelé chaque frame
 * 
 * @package simgolf.core
 */

/** Callback de notification de changement de position */
export type PositionCallback = (position: number) => void;

/**
 * SmoothInterpolator
 * 
 * Animation fluide entre deux bornes (min → max).
 * Supporte l'accélération directionnelle et les seuils
 * de déclenchement.
 * 
 * Mode d'emploi :
 * 1. Créer l'interpolateur avec min, max
 * 2. Définir onUpdate (callback appelé à chaque changement)
 * 3. Définir les seuils (trigger points pour changement de direction)
 * 4. Appeler update(deltaMs) chaque frame
 */
export class SmoothInterpolator {
    // ============================================================
    // Membres (correspondent aux offsets de la structure C)
    // ============================================================

    /** Identifiant de la cible (ex: "camera-zoom" ou "golfer-3") */
    targetId: string = '';

    /** Borne inférieure */
    minPosition: number = 0;

    /** Borne supérieure */
    maxPosition: number = 100;

    /** Position courante (interpolée) */
    currentPosition: number = 0;

    /** Durée totale de l'animation en ms */
    duration: number = 1000;

    /** Timestamp de la dernière mise à jour (performance.now()) */
    private lastTimestamp: number = 0;

    /** Flag : inverser la direction de notification */
    directionInverted: boolean = false;

    /** Pas de déplacement par tick */
    stepSize: number = 1;

    /** 
     * Accélération directionnelle
     *  1 → se déplace vers max
     * -1 → se déplace vers min
     *  0 → arrêté
     */
    acceleration: number = 0;

    /** Valeur de déclenchement haute */
    upperTrigger: number = 80;

    /** Valeur de déclenchement basse */
    lowerTrigger: number = 20;

    /** Position cible haute */
    upperTarget: number = 100;

    /** Position cible basse */
    lowerTarget: number = 0;

    // ============================================================
    // Callbacks
    // ============================================================

    /** 
     * Callback principal — appelé quand la position change.
     * Reçoit la nouvelle position interpolée.
     */
    onUpdate: PositionCallback | null = null;

    /**
     * Callback secondaire — appelé après onUpdate.
     * Reçoit également la nouvelle position.
     */
    onUpdateSecondary: PositionCallback | null = null;

    /**
     * Callback de fin d'animation — appelé quand 
     * l'interpolation est terminée (position stable).
     */
    onComplete: (() => void) | null = null;

    /** Flag indiquant si l'animation est en cours */
    private _isAnimating: boolean = false;

    // ============================================================
    // Constructeur
    // ============================================================

    constructor(
        minPosition: number = 0,
        maxPosition: number = 100,
        stepSize: number = 1,
        duration: number = 1000
    ) {
        this.minPosition = minPosition;
        this.maxPosition = maxPosition;
        this.stepSize = stepSize;
        this.duration = duration;
        this.currentPosition = minPosition;
    }

    // ============================================================
    // Méthodes principales
    // ============================================================

    /**
     * Met à jour l'interpolation.
     * 
     * Logique originale (ASM 0x4969e0) :
     * 1. Calcule le delta depuis la dernière frame
     * 2. Si le delta dépasse la moitié de la durée → idle
     * 3. Sinon, applique le step dans la direction courante
     * 4. Vérifie les seuils pour décider du changement de direction
     * 5. Notifie via callback
     * 
     * @param deltaMs Temps écoulé depuis la dernière frame (ms)
     */
    update(deltaMs: number): void {
        // --- Phase 1 : Vérification du delta ---
        if (this.lastTimestamp > 0) {
            const halfDuration = this.duration * 2;

            if (deltaMs >= halfDuration) {
                // Trop de temps écoulé → arrêt et notification
                this.acceleration = 0;
                this.notifyCallbacks();
                return;
            }
        } else {
            // Première frame : initialise le timestamp
            this.lastTimestamp = performance.now();
        }

        // --- Phase 2 : Calcul de la nouvelle position ---
        // Détermine si on est dans une phase de dépassement 
        // (hasCurrent > hasEnd d'après l'ASM)
        const hasCurrent = this.acceleration;  // proxy pour timing_source
        const hasEnd = this.currentPosition >= this.upperTarget ? 1 : 0;

        if (this.currentPosition > this.upperTrigger) {
            // Au-dessus du seuil haut
            if (this.acceleration <= 0) {
                // Pas encore en mouvement vers le bas → déclenche
                this.acceleration = 1;      // vers max
                this.lastTimestamp = 0;
                this.applyStep(deltaMs);
                this.notifyCallbacks();
                return;
            }
        } else if (this.currentPosition < this.lowerTrigger) {
            // En dessous du seuil bas
            if (this.acceleration >= 0) {
                this.acceleration = -1;     // vers min
                this.lastTimestamp = 0;
                this.applyStep(deltaMs);
                this.notifyCallbacks();
                return;
            }
        }

        // Aucun changement de direction → applique le step normal
        this.applyStep(deltaMs);

        // --- Phase 3 : Notification ---
        this.notifyCallbacks();
    }

    /**
     * Applique le pas de déplacement dans la direction courante,
     * avec clamping aux bornes.
     */
    private applyStep(deltaMs: number): void {
        let newPosition: number;

        if (this.acceleration <= 0) {
            // Se déplace vers max
            newPosition = this.currentPosition + this.stepSize;
            newPosition = Math.min(newPosition, this.maxPosition);
        } else {
            // Se déplace vers min
            newPosition = this.currentPosition - this.stepSize;
            newPosition = Math.max(newPosition, this.minPosition);
        }

        this.currentPosition = newPosition;
    }

    /**
     * Notifie les callbacks du changement de position.
     * 
     * Logique originale (ASM 0x496c06-0x496c25) :
     * - Appelle vtable+0xe8 (onUpdate principal)
     * - Appelle le callback personnalisé si présent
     * - Appelle vtable+0x120 (onComplete)
     * - Met à jour le timestamp
     */
    private notifyCallbacks(): void {
        // Position à notifier (dépend du mode inverted)
        const notifyPosition = this.directionInverted
            ? (this.minPosition - this.currentPosition) + this.maxPosition
            : this.currentPosition;

        // Callback principal
        if (this.onUpdate) {
            this.onUpdate(notifyPosition);
        }

        // Callback secondaire
        if (this.onUpdateSecondary) {
            this.onUpdateSecondary(notifyPosition);
        }

        // Vérifie si la position a changé
        const positionChanged = this.currentPosition !== 
            (this._lastNotifiedPosition ?? this.currentPosition);
        
        if (!positionChanged && this.acceleration === 0) {
            // Animation terminée
            if (this.onComplete) {
                this.onComplete();
            }
            this._isAnimating = false;
        }

        // Met à jour le timestamp
        this.lastTimestamp = performance.now();
        this._lastNotifiedPosition = this.currentPosition;
    }

    private _lastNotifiedPosition: number | null = null;

    // ============================================================
    // Méthodes de contrôle
    // ============================================================

    /**
     * Définit une cible et démarre l'animation.
     * 
     * Équivalent ASM : FUN_0x496c30
     * 
     * @param current Valeur actuelle (point de départ)
     * @param target Valeur cible
     */
    setTarget(current: number, target: number): void {
        if (target > this.upperTarget) {
            // Cible au-dessus → accélération vers max
            this.acceleration = 1;
            this.lastTimestamp = 0;
        } else if (target < this.lowerTarget) {
            // Cible en dessous → accélération vers min
            this.acceleration = -1;
            this.lastTimestamp = 0;
        } else {
            // Cible dans la zone → accélération selon direction
            this.acceleration = current < this.upperTrigger ? -1 : 1;
            this.lastTimestamp = 0;
        }

        this._isAnimating = true;
        this.applyStep(0);  // Applique immédiatement un step
        this.notifyCallbacks();
    }

    /**
     * Déplace directement à une position spécifique.
     * 
     * Équivalent ASM : FUN_0x496e30
     * Modes : 
     *   'max'     → position = maxPosition
     *   'min'     → position = minPosition  
     *   'step-up' → currentPosition += stepSize (clamp max)
     *   'step-dn' → currentPosition -= stepSize (clamp min)
     * 
     * @param mode Mode de déplacement
     */
    setPositionDirect(mode: 'max' | 'min' | 'step-up' | 'step-dn'): void {
        switch (mode) {
            case 'max':
                this.currentPosition = this.maxPosition;
                break;
            case 'min':
                this.currentPosition = this.minPosition;
                break;
            case 'step-up': {
                const newPos = this.currentPosition + this.stepSize;
                this.currentPosition = Math.min(newPos, this.maxPosition);
                break;
            }
            case 'step-dn': {
                const newPos = this.currentPosition - this.stepSize;
                this.currentPosition = Math.max(newPos, this.minPosition);
                break;
            }
        }

        this._isAnimating = false;
        this.acceleration = 0;
        this.notifyCallbacks();
    }

    /**
     * Réinitialise l'interpolateur.
     */
    reset(): void {
        this.currentPosition = this.minPosition;
        this.acceleration = 0;
        this.lastTimestamp = 0;
        this._isAnimating = false;
        this._lastNotifiedPosition = null;
    }

    /**
     * Vrai si une animation est en cours.
     */
    get isAnimating(): boolean {
        return this._isAnimating;
    }

    /**
     * Retourne la progression normalisée (0.0 - 1.0).
     */
    get progress(): number {
        const range = this.maxPosition - this.minPosition;
        if (range === 0) return 1;
        return (this.currentPosition - this.minPosition) / range;
    }

    /**
     * Chaîne de debug.
     */
    toString(): string {
        return `SmoothInterpolator(${this.targetId}) ` +
            `[${this.currentPosition}/${this.maxPosition}] ` +
            `accel=${this.acceleration} step=${this.stepSize} ` +
            `triggers=[${this.lowerTrigger},${this.upperTrigger}]`;
    }
}

// ============================================================
// Tests unitaires (node.js)
// ============================================================

if (require && require.main === module) {
    // Test basique : animation de zoom caméra
    const zoom = new SmoothInterpolator(0, 100, 5, 500);
    zoom.targetId = 'camera-zoom';
    zoom.upperTrigger = 70;
    zoom.lowerTrigger = 30;

    let lastPos = 0;
    zoom.onUpdate = (pos) => {
        lastPos = pos;
        console.log(`  Zoom: ${pos} (accel=${zoom.acceleration})`);
    };

    console.log('=== Test : Animation zoom caméra ===');
    console.log(`État initial: ${zoom}`);

    // Simule 20 frames d'animation
    for (let frame = 0; frame < 20; frame++) {
        zoom.update(50);  // 50ms par frame
    }

    console.log(`\nÉtat final: ${zoom}`);

    // Test : déplacement direct
    console.log('\n=== Test : Déplacement direct ===');
    zoom.reset();
    zoom.setPositionDirect('max');
    console.log(`Position directe max: ${zoom}`);

    // Test : mode inversé
    console.log('\n=== Test : Mode inversé ===');
    const inverted = new SmoothInterpolator(0, 360, 10, 1000);
    inverted.targetId = 'camera-rotation';
    inverted.directionInverted = true;
    inverted.onUpdate = (pos) => {
        console.log(`  Rotation (inverted): ${pos.toFixed(1)}°`);
    };
    inverted.setTarget(45, 270);
    for (let frame = 0; frame < 15; frame++) {
        inverted.update(50);
    }
}

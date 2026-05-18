/**
 * GameTickEngine.ts
 * 
 * Portage TypeScript de la boucle principale de simulation.
 * 
 * Source ASM : golf.exe 0x49846c / 0x4985eb
 * 
 * Système multi-slots qui gère la simulation de 16 groupes
 * de golfeurs simultanément. Chaque groupe parcourt le terrain,
 * joue ses coups, met à jour son score.
 * 
 * Contrairement au C original (procédural, stack frame 8Ko+),
 * cette version utilise une architecture événementielle moderne
 * avec requestAnimationFrame pour le timing.
 * 
 * @package simgolf.core
 */

// ============================================================
// Interfaces
// ============================================================

/**
 * SlotSimulation
 * 
 * Un slot représente un groupe de golfeurs jouant un trou.
 * 16 slots max, 0x58 bytes dans le C original.
 */
export interface SlotSimulation {
    /** Identifiant unique du slot */
    id: number;

    /** Vtable d'interface (dispatch virtuel) */
    update: ((slot: SlotSimulation, deltaMs: number) => SimulationResult) | null;

    /** Handle d'événement pour sync (équivalent Win32 Event) */
    eventHandle: string;

    /** Thread ID simulé */
    threadId: number;

    /** État actuel de la simulation */
    state: SlotState;

    /** Timestamp de début de slot */
    startTime: number;

    /** Timeout du slot (ms) */
    timeout: number;

    /** Données spécifiques au groupe de golfeurs */
    golferGroup: GolferGroupData;

    /** Données brutes (mapped depuis la structure C 0x58 bytes) */
    raw: Uint8Array;
}

/**
 * État d'un slot
 */
export enum SlotState {
    INACTIVE = 0,
    ACTIVE = 1,
    RUNNING = 2,
    COMPLETED = 3,
    TIMEOUT = 4,
    ERROR = 5,
}

/**
 * Résultat d'une frame de simulation
 */
export interface SimulationResult {
    /** Vrai si la simulation a progressé */
    updated: boolean;

    /** Delta effectif de progression */
    progressDelta: number;

    /** Message de statut (optionnel) */
    statusMessage?: string;

    /** Nouvel état du slot */
    newState?: SlotState;
}

/**
 * Données d'un groupe de golfeurs
 */
export interface GolferGroupData {
    /** Position sur le parcours (trou actuel) */
    currentHole: number;

    /** Score cumulé */
    totalScore: number;

    /** Golfeurs dans le groupe */
    golfers: GolferState[];

    /** Nombre de coups joués sur le trou actuel */
    strokes: number;

    /** Position sur le green (0-100 : approach→putting) */
    greenProgress: number;
}

/**
 * État d'un golfeur individuel
 */
export interface GolferState {
    /** Nom du golfeur */
    name: string;

    /** Compétences */
    skills: GolferSkills;

    /** Humeur actuelle */
    mood: number; // 0-100

    /** Fatigue */
    energy: number; // 0-100

    /** Score du trou actuel */
    holeScore: number;

    /** Ball position (x, y, z) */
    ballX: number;
    ballY: number;
    ballZ: number;
}

/**
 * Compétences d'un golfeur
 */
export interface GolferSkills {
    length: number;      // Puissance de frappe
    accuracy: number;    // Précision
    imagination: number; // Créativité (effet courbe)
    recovery: number;    // Récupération
    putting: number;     // Putting précis
    driving: number;     // Précision au drive
    longDrive: number;   // Distance au drive
}

// ============================================================
// Événements du moteur
// ============================================================

export interface GameTickEvents {
    /** Appelé au début de chaque tick */
    onTickStart?: (tickNumber: number) => void;

    /** Appelé à la fin de chaque tick */
    onTickEnd?: (tickNumber: number, elapsed: number) => void;

    /** Appelé quand un slot commence */
    onSlotStart?: (slotId: number) => void;

    /** Appelé quand un slot se termine */
    onSlotComplete?: (slotId: number, result: SimulationResult) => void;

    /** Appelé quand un slot est en timeout */
    onSlotTimeout?: (slotId: number) => void;

    /** Appelé quand un message de statut doit être affiché */
    onStatusMessage?: (message: string) => void;

    /** Appelé pour le rendu */
    onRender?: () => void;
}

// ============================================================
// Moteur de tick principal
// ============================================================

/**
 * GameTickEngine
 * 
 * Moteur de simulation temporelle.
 * 
 * Architecture :
 * - Remplace WaitForMultipleObjects par Promise.all + setTimeout
 * - Utilise requestAnimationFrame pour le timing
 * - 16 slots de simulation parallélisables
 * - Timeout configurable par slot (défaut 20000ms)
 * - Callback de rendu déclenché après chaque tick
 */
export class GameTickEngine {
    // ============================================================
    // Constantes
    // ============================================================

    static readonly MAX_SLOTS = 16;
    static readonly TIMEOUT_DEFAULT = 20000; // 20s
    static readonly SLOT_STRIDE = 0x58;      // Équivalent C

    // ============================================================
    // État interne
    // ============================================================

    /** Slots de simulation */
    private slots: SlotSimulation[] = [];

    /** Nombre de tick écoulés */
    private tickCount: number = 0;

    /** Flag "jeu en cours" */
    private isRunning: boolean = false;

    /** Timestamp de début de la boucle */
    private loopStartTime: number = 0;

    /** Timestamp de début de frame */
    private frameStartTime: number = 0;

    /** Timeout courant */
    private currentTimeout: number = GameTickEngine.TIMEOUT_DEFAULT;

    /** Flag "mise à jour faite" */
    private updateFlag: boolean = false;

    /** Événements */
    private events: GameTickEvents = {};

    /** Animation frame handle */
    private animFrameId: number | null = null;

    // ============================================================
    // Événements globaux (correspondent aux variables globales C)
    // ============================================================

    /** 
     * Objet global du jeu (équivalent 0x8400b0)
     * Si null, le jeu est arrêté.
     */
    private gameObject: any | null = null;

    /** 
     * Pointeur vers les slots (équivalent 0x83ff6c)
     */
    private slotsPointer: SlotSimulation[] | null = null;

    /** Message de statut courant (équivalent 0x83c340) */
    private statusMessage: string = '';

    // ============================================================
    // Constructeur
    // ============================================================

    constructor(events?: GameTickEvents) {
        this.events = events || {};

        // Initialise les 16 slots vides
        for (let i = 0; i < GameTickEngine.MAX_SLOTS; i++) {
            this.slots.push(this.createEmptySlot(i));
        }
    }

    // ============================================================
    // Initialisation
    // ============================================================

    private createEmptySlot(id: number): SlotSimulation {
        return {
            id,
            update: null,
            eventHandle: `slot-event-${id}`,
            threadId: 0,
            state: SlotState.INACTIVE,
            startTime: 0,
            timeout: GameTickEngine.TIMEOUT_DEFAULT,
            golferGroup: {
                currentHole: 0,
                totalScore: 0,
                golfers: [],
                strokes: 0,
                greenProgress: 0,
            },
            raw: new Uint8Array(GameTickEngine.SLOT_STRIDE),
        };
    }

    /**
     * Démarre la boucle de jeu.
     * 
     * Équivalent C : l'initialisation faite par la fonction 
     * entre 0x49846c et 0x4985eb (memset des slots, setup).
     */
    start(): void {
        if (this.isRunning) return;

        this.isRunning = true;
        this.tickCount = 0;

        // Reset de tous les slots
        for (let i = 0; i < GameTickEngine.MAX_SLOTS; i++) {
            this.slots[i] = this.createEmptySlot(i);
        }

        // Enregistre le pointeur global
        this.slotsPointer = this.slots;

        // Vérifie que l'objet de jeu existe
        if (!this.gameObject) {
            console.warn('[GameTickEngine] No game object set — creating default');
            this.gameObject = {};
        }

        this.loopStartTime = performance.now();

        // Démarre la boucle
        this.events.onTickStart?.(this.tickCount);
        this.tickLoop();
    }

    /**
     * Arrête la boucle de jeu.
     */
    stop(): void {
        this.isRunning = false;
        this.gameObject = null;

        if (this.animFrameId !== null) {
            cancelAnimationFrame(this.animFrameId);
            this.animFrameId = null;
        }
    }

    // ============================================================
    // Boucle de tick principale
    // ============================================================

    /**
     * Boucle principale de simulation.
     * 
     * Équivalent ASM : l'étiquette 0x4985eb et la boucle while(1)
     * avec goto tick_loop.
     * 
     * Au lieu d'une bouche while(1) synchrone (C), on utilise
     * setTimeout asynchrone avec requestAnimationFrame pour le rendu.
     */
    private tickLoop(): void {
        if (!this.isRunning || !this.gameObject) {
            this.handleGameExit();
            return;
        }

        // --- Phase A : Timestamp de frame ---
        this.frameStartTime = performance.now();

        // --- Phase B : Trouver et démarrer les slots inactifs ---
        for (let i = 0; i < GameTickEngine.MAX_SLOTS; i++) {
            const slot = this.slots[i];

            if (slot.state === SlotState.INACTIVE && slot.update) {
                // Slot disponible → démarre
                slot.state = SlotState.ACTIVE;
                slot.startTime = this.frameStartTime;
                this.events.onSlotStart?.(i);
            }

            // Met à jour les timeouts
            if (slot.state === SlotState.ACTIVE || slot.state === SlotState.RUNNING) {
                const elapsed = this.frameStartTime - slot.startTime;

                if (elapsed > slot.timeout) {
                    // Timeout → recalcule
                    const newTimeout = (slot.timeout + slot.timeout * 2) / 2;
                    slot.timeout = Math.floor(newTimeout);
                    slot.state = SlotState.TIMEOUT;
                    this.events.onSlotTimeout?.(i);
                }
            }
        }

        // --- Phase C : Exécution de la simulation ---
        let anyUpdated = false;

        for (let i = 0; i < GameTickEngine.MAX_SLOTS; i++) {
            const slot = this.slots[i];
            if (slot.state !== SlotState.ACTIVE && slot.state !== SlotState.RUNNING) continue;
            if (!slot.update) continue;

            const deltaMs = this.frameStartTime - slot.startTime;
            const result = slot.update(slot, deltaMs);

            if (result.updated) {
                anyUpdated = true;
                this.updateFlag = true;

                if (result.newState !== undefined) {
                    slot.state = result.newState;

                    if (slot.state === SlotState.COMPLETED) {
                        this.events.onSlotComplete?.(i, result);
                    }
                }

                if (result.statusMessage) {
                    this.statusMessage = result.statusMessage;
                    this.updateStatusDisplay();
                }
            }
        }

        // --- Phase D : Post-traitement ---
        if (this.updateFlag) {
            this.tickCount++;

            // Message de statut générique si la simulation tourne
            if (!this.statusMessage) {
                this.statusMessage = `Playing... (tick ${this.tickCount})`;
                this.events.onStatusMessage?.(this.statusMessage);
            }

            // Appelle le rendu
            this.events.onRender?.();

            // Reset flags
            this.updateFlag = false;
        }

        // Vérifie le timeout global de la boucle
        const totalElapsed = performance.now() - this.loopStartTime;
        if (totalElapsed > GameTickEngine.TIMEOUT_DEFAULT) {
            console.warn('[GameTickEngine] Loop timeout exceeded — resetting');
            this.statusMessage = '';
            this.events.onStatusMessage?.('');
        }

        // --- Phase E : Prochain tick ---
        // Utilise setTimeout pour émuler le comportement 
        // WaitForMultipleObjects de Windows
        this.events.onTickEnd?.(this.tickCount, totalElapsed);
        this.animFrameId = requestAnimationFrame(() => this.tickLoop());
    }

    // ============================================================
    // Gestion des slots
    // ============================================================

    /**
     * Ajoute un groupe de golfeurs à la simulation.
     * Trouve le prochain slot libre.
     * 
     * @param update Fonction de mise à jour du slot
     * @param timeout Timeout personnalisé (ms)
     * @returns L'ID du slot assigné, ou -1 si tous sont occupés
     */
    addSlot(
        update: (slot: SlotSimulation, deltaMs: number) => SimulationResult,
        timeout: number = GameTickEngine.TIMEOUT_DEFAULT,
    ): number {
        for (let i = 0; i < GameTickEngine.MAX_SLOTS; i++) {
            if (this.slots[i].state === SlotState.INACTIVE) {
                const slot = this.slots[i];
                slot.update = update;
                slot.timeout = timeout;
                slot.state = SlotState.ACTIVE;
                slot.startTime = performance.now();
                return i;
            }
        }
        return -1; // Tous occupés
    }

    /**
     * Retire un slot de la simulation.
     * 
     * @param slotId ID du slot
     */
    removeSlot(slotId: number): void {
        if (slotId < 0 || slotId >= GameTickEngine.MAX_SLOTS) return;
        
        const slot = this.slots[slotId];
        slot.state = SlotState.INACTIVE;
        slot.update = null;
        slot.golferGroup = {
            currentHole: 0,
            totalScore: 0,
            golfers: [],
            strokes: 0,
            greenProgress: 0,
        };
    }

    // ============================================================
    // Affichage
    // ============================================================

    private updateStatusDisplay(): void {
        // Équivalent de la manipulation de chaîne dans l'ASM :
        // status_buf = GetString(0x4c52b8) → "...playing..."
        // final_msg = GetString(0x4c3f70) + status_buf + GetString(0x4c4944)
        // ShowStatusMessage(final_msg, -1, -1)
        this.events.onStatusMessage?.(this.statusMessage);
    }

    // ============================================================
    // Gestion de fin
    // ============================================================

    private handleGameExit(): void {
        this.isRunning = false;
        this.statusMessage = '';
        this.slotsPointer = null;
        
        console.log('[GameTickEngine] Simulation stopped');
    }

    // ============================================================
    // Propriétés
    // ============================================================

    get activeSlotCount(): number {
        return this.slots.filter(s => s.state !== SlotState.INACTIVE).length;
    }

    get currentTick(): number {
        return this.tickCount;
    }

    setGameObject(obj: any): void {
        this.gameObject = obj;
    }
}

// ============================================================
// Exemple d'utilisation
// ============================================================

if (require && require.main === module) {
    const engine = new GameTickEngine({
        onTickStart: (tick) => console.log(`\n=== Tick #${tick} ===`),
        onSlotStart: (id) => console.log(`  Slot ${id}: started`),
        onSlotComplete: (id, result) => console.log(`  Slot ${id}: done (${result.statusMessage})`),
        onStatusMessage: (msg) => console.log(`  Status: ${msg}`),
        onRender: () => {}, // no-op pour test
    });

    engine.setGameObject({ name: 'TestCourse' });

    // Ajoute 3 groupes de golfeurs simulés
    for (let group = 0; group < 3; group++) {
        const slotId = engine.addSlot((slot, delta) => {
            // Simulation basique : avance trou par trou
            const group = slot.golferGroup;
            
            if (group.strokes < 4) {
                group.strokes++;
                const score = ['Fairway', 'Approach', 'Green', 'Putt'][group.strokes - 1];
                return { 
                    updated: true, 
                    progressDelta: 0.25,
                    statusMessage: `Group ${slot.id}: ${score}` 
                };
            } else {
                // Trou terminé
                group.currentHole++;
                group.strokes = 0;
                return { 
                    updated: true, 
                    progressDelta: 1.0,
                    newState: SlotState.COMPLETED,
                    statusMessage: `Group ${slot.id}: Hole ${group.currentHole} done!` 
                };
            }
        });

        console.log(`Group ${group} → slot ${slotId}`);
    }

    // Simule 5 ticks
    for (let tick = 0; tick < 5; tick++) {
        engine.start(); // démarre
    }
}

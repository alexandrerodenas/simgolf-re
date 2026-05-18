/**
 * GameManager.ts
 *
 * Orchestrateur principal du jeu.
 * Connecte tous les systèmes de simulation entre eux
 * et les fait tourner en cycle hebdomadaire.
 *
 * Architecture (équivalent du GameTickFunction C++ 0x49846c) :
 * - Chaque tick = 1 semaine dans le jeu
 * - Les golfeurs jouent des trous via PersonaSystem
 * - L'économie évolue via EconomySystem
 * - Les scores sont trackés via ScoringSystem
 * - Les tournois sont proposés via TournamentSystem
 *
 * @package simgolf.core
 */

import { TerrainEngine, TileType } from './TerrainTileSystem';
import { EconomySystem } from './EconomySystem';
import { ScoringSystem } from './ScoringSystem';
import { PersonaSystem, GolferPersona } from './PersonaSystem';
import { TournamentSystem, TournamentDef, TournamentResult } from './TournamentSystem';
import { SmoothInterpolator } from './SmoothInterpolator';

export interface GameState {
    week: number;
    phase: 'menu' | 'building' | 'playing' | 'tournament';
    courseName: string;
    courseTheme: string;

    // Stats cumulées
    totalRoundsPlayed: number;
    bestScore: number;
    totalEarnings: number;
    holesBuilt: number;

    // Golfeurs actifs sur le parcours
    activeGolfers: GolferPersona[];
}

export interface GameEvent {
    type: string;
    message: string;
    data?: any;
}

export class GameManager {
    // Systèmes
    terrain: TerrainEngine;
    economy: EconomySystem;
    scoring: ScoringSystem;
    personas: PersonaSystem;
    tournaments: TournamentSystem;

    // État global
    state: GameState;
    events: GameEvent[] = [];

    // Animations / transitions
    private animators: SmoothInterpolator[] = [];

    // Callbacks
    onStateChange?: (state: GameState) => void;
    onEvent?: (event: GameEvent) => void;
    onHoleComplete?: (holeResult: any) => void;
    onWeekComplete?: (summary: string) => void;

    constructor(terrain: TerrainEngine) {
        this.terrain = terrain;
        this.economy = new EconomySystem(50000);
        this.scoring = new ScoringSystem();
        this.personas = new PersonaSystem();
        this.tournaments = new TournamentSystem();

        this.state = {
            week: 1,
            phase: 'building',
            courseName: 'Nouveau Parcours',
            courseTheme: 'Parkland',
            totalRoundsPlayed: 0,
            bestScore: 0,
            totalEarnings: 0,
            holesBuilt: 0,
            activeGolfers: [],
        };
    }

    // ============================================================
    // Construction
    // ============================================================

    /** Place un type de terrain sur une tuile */
    paintTile(x: number, y: number, type: TileType): boolean {
        if (!this.terrain.inBounds(x, y)) return false;
        this.terrain.setTileType(x, y, type);

        // Vérifie si un nouveau trou est complété
        const holeCount = this.countHoles();
        if (holeCount > this.state.holesBuilt) {
            this.state.holesBuilt = holeCount;
            this.addEvent('construction', `Nouveau trou ! (${this.state.holesBuilt}/18)`);
        }

        return true;
    }

    /** Construit un bâtiment (coûte de l'argent) */
    buildStructure(type: string, cost: number, tx: number, ty: number): boolean {
        if (!this.terrain.inBounds(tx, ty)) return false;
        if (!this.economy.buildBuilding(type, cost)) {
            this.addEvent('economy', `💰 Pas assez d'argent pour ${type} ($${cost})`);
            return false;
        }
        this.terrain.setTileType(tx, ty, TileType.Building);
        this.animateTile(tx, ty);
        this.addEvent('construction', `🏗️ ${type} construit !`);
        this.events.push({ type: 'build', message: `${type} construit`, data: { tx, ty, cost } });
        return true;
    }

    /** Achète un terrain résidentiel */
    buyLand(tx: number, ty: number): boolean {
        if (!this.economy.addVacationHomeSlot()) {
            this.addEvent('economy', `💰 Pas assez d'argent pour le terrain`);
            return false;
        }
        this.terrain.setTileType(tx, ty, TileType.Path);
        this.addEvent('economy', `🏠 Terrain à bâtir vendu ! ($200/semaine)`);
        return true;
    }

    // ============================================================
    // Cycle de simulation
    // ============================================================

    /** Avance d'une semaine dans la simulation */
    tickWeek(): void {
        const s = this.state;
        s.week++;

        // 1. L'économie évolue
        this.economy.processWeek();

        // 2. Les golfeurs jouent
        this.simulateGolfers();

        // 3. Vérification des tournois
        this.checkTournamentOffers();

        // 4. Événements aléatoires
        this.generateRandomEvents();

        // 5. Mise à jour de l'état
        this.updateState();

        // Callback
        this.onWeekComplete?.(this.economy.getSummary());
    }

    /** Simule une partie des golfeurs sur le parcours */
    private simulateGolfers(): void {
        const golfers = this.personas.getAllGolfers();
        const holesAvailable = Math.max(1, this.countHoles());
        const activeCount = Math.min(golfers.length, 3 + Math.floor(this.state.week / 10));

        this.state.activeGolfers = [];

        for (let i = 0; i < activeCount; i++) {
            const golfer = golfers[i];
            if (this.personas.shouldQuit(golfer.id)) continue;

            // Joue 1 à 3 trous
            const holesToPlay = Math.min(holesAvailable, 1 + Math.floor(Math.random() * 3));

            for (let h = 0; h < holesToPlay; h++) {
                const holeNumber = h + 1;
                const par = ScoringSystem.getParForHole(holeNumber, holesAvailable);
                const strokes = this.personas.playHole(golfer.id, par);

                // Track scoring
                if (this.scoring.currentRound) {
                    this.scoring.recordHole(par, strokes, Math.random() > 0.3, Math.max(1, strokes - 2));
                }
            }

            this.state.totalRoundsPlayed++;
            this.state.activeGolfers.push(golfer);
        }

        // Événements sociaux des golfeurs
        for (const golfer of this.state.activeGolfers) {
            const comment = this.personas.getComment(golfer.id);
            if (Math.random() > 0.7) {
                this.addEvent('golfer', `💬 ${golfer.firstName}: "${comment}"`, golfer);
            }
        }
    }

    /** Vérifie si un tournoi SGA peut être organisé */
    private checkTournamentOffers(): void {
        const holes = this.countHoles();
        const offer = this.tournaments.generateOffer(holes);
        if (offer && Math.random() > 0.6) {
            this.addEvent('tournament', `🏆 Le ${offer.name} est disponible ! (Cagnotte: $${offer.prizePool.toLocaleString()})`, offer);
        }
    }

    /** Événements aléatoires (basés sur les strings du jeu original) */
    private generateRandomEvents(): void {
        const rand = Math.random();
        const s = this.state;

        if (rand < 0.05) {
            this.addEvent('weather', '🌧️ Une tempête a endommagé le parcours. Coûts de maintenance doublés cette semaine.');
            this.economy.state.cash -= 2000;
        } else if (rand < 0.10) {
            this.addEvent('social', `🎉 Super Bowl parties au club ! Les membres sont ravis.`);
            this.economy.state.members += 2;
        } else if (rand < 0.15) {
            this.addEvent('social', `💘 La Saint-Valentin attire des couples au club. Revenus +20%.`);
            this.economy.state.cash += 1500;
        } else if (rand < 0.18 && s.week > 10) {
            this.addEvent('golfer', `⭐ Un golfeur célèbre visite le parcours !`);
            this.economy.state.cash += 5000;
        }
    }

    /** Met à jour l'état global */
    private updateState(): void {
        const s = this.state;

        // Meilleur score
        const round = this.scoring.getBestRound();
        if (round && (s.bestScore === 0 || round.totalScore < s.bestScore)) {
            s.bestScore = round.totalScore;
        }

        // Revenus totaux
        s.totalEarnings = this.economy.state.totalRevenue;

        // Passe automatiquement en mode jeu si assez de trous
        if (s.holesBuilt >= 3 && s.phase === 'building') {
            s.phase = 'playing';
            this.scoring.startRound(s.courseName);
            this.addEvent('game', `⛳ Le parcours est ouvert ! Premier groupe de golfeurs arrive.`);
        }

        this.onStateChange?.(s);
    }

    // ============================================================
    // Tournois
    // ============================================================

    /** Participe à un tournoi */
    enterTournament(tournamentId: string): TournamentResult | null {
        const courseQuality = this.calcCourseQuality();
        const result = this.tournaments.enterTournament(tournamentId, courseQuality);

        if (result) {
            this.economy.state.cash += result.prizeMoney;
            this.state.totalEarnings += result.prizeMoney;

            const t = this.tournaments.getAllTournaments().find(t => t.id === tournamentId);
            const positionSuffix = result.position === 1 ? '🥇 Gagné !' :
                                   result.position <= 3 ? `🥉 Top 3` :
                                   `#${result.position}e`;

            this.addEvent('tournament', `🏆 ${t?.name}: ${positionSuffix} ($${result.prizeMoney.toLocaleString()})`, result);

            // Vérifie les accomplissements
            const achievements = this.tournaments.getUnlockedAchievements();
            for (const a of achievements) {
                if (a.unlockedAt) {
                    this.addEvent('achievement', `${a.icon} Accomplissement débloqué : ${a.name} !`);
                }
            }
        }

        return result;
    }

    // ============================================================
    // Utilitaires
    // ============================================================

    /** Compte le nombre de trous sur le terrain */
    countHoles(): number {
        let tees = 0;
        let greens = 0;

        for (let x = 0; x < this.terrain.width; x++) {
            for (let y = 0; y < this.terrain.height; y++) {
                const tile = this.terrain.tileAt(x, y);
                if (tile) {
                    if (tile.type === TileType.Tee) tees++;
                    if (tile.type === TileType.Green) greens++;
                }
            }
        }

        return Math.min(tees, greens, 18);
    }

    /** Calcule la qualité générale du parcours (0-100) */
    calcCourseQuality(): number {
        let score = 30;

        // Bonus par trou
        score += this.countHoles() * 3;

        // Bonus par bâtiment
        for (const [type, count] of Object.entries(this.economy.state.buildings)) {
            if (type === 'bench') score += count * 2;
            if (type === 'snack') score += count * 3;
            if (type === 'proshop') score += count * 4;
            if (type === 'flower') score += count * 2;
        }

        // Bonus employés
        score += this.economy.state.employees.length * 2;

        return Math.min(100, score);
    }

    /** Animation simple (pulse) sur une tuile */
    private animateTile(x: number, y: number): void {
        const anim = new SmoothInterpolator(0, 10, 2, 200);
        anim.onUpdate = (pos) => {
            // Le rendu pourrait utiliser cette valeur pour un effet visuel
        };
        anim.setTarget(0, 10);
        this.animators.push(anim);
    }

    /** Ajoute un événement de jeu */
    private addEvent(type: string, message: string, data?: any): void {
        const event: GameEvent = { type, message, data };
        this.events.push(event);
        this.onEvent?.(event);
    }

    /** Vide les événements lus */
    clearEvents(): void {
        this.events = [];
    }

    /** Statut complet */
    getStatus(): string {
        const e = this.economy.state;
        const t = this.tournaments;
        return [
            `Semaine ${this.state.week}`,
            `💰 $${e.cash.toLocaleString()}`,
            `⛳ ${this.countHoles()}/18 trous`,
            `🏢 ${e.members} membres`,
            `👥 ${e.employees.length} employés`,
            `⭐ Prestige: ${t.getPrestige()}`,
            `🏆 ${t.getUnlockedAchievements().length}/${t.getAchievements().length} accomplissements`,
        ].join(' · ');
    }
}

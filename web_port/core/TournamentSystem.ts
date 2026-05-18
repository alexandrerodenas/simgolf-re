/**
 * TournamentSystem.ts
 *
 * Système de tournois SGA (Sim Golf Association).
 *
 * Niveaux de tournois (basé sur les strings extraites) :
 * 1. Jr. Tour Event
 * 2. Jr. Tour Championship
 * 3. SGA Amateur Championship
 * 4. Senior SGA Tour Event
 * 5. SGA Tour Event
 * 6. Senior SGA Championship
 * 7. SGA Players Championship
 * 8. SGA Championship
 * 9. Mini Slam Championship
 * 10. Grand Slam Championship
 *
 * Accomplissements (débloquages progressifs) :
 * - 1st Challenge hole
 * - 1st Tournament
 * - First 9+ hole course
 * - 1st Top 100 hole
 * - 1st $500,000 Tournament
 * - Grand Slam Victory
 *
 * @package simgolf.core
 */

export interface TournamentDef {
    id: string;
    name: string;
    tier: number;           // 1-10
    minHoles: number;       // Trous minimum requis
    prizePool: number;
    entryFee: number;
    prestigeGain: number;   // Points de prestige gagnés
}

export interface TournamentResult {
    tournamentId: string;
    position: number;
    participants: number;
    prizeMoney: number;
    prestigeGained: number;
    scores: number[];       // Scores des participants
}

export interface Achievement {
    id: string;
    name: string;
    description: string;
    icon: string;
    unlocked: boolean;
    unlockedAt?: string;
}

const TOURNAMENTS: TournamentDef[] = [
    { id: 'jr_tour',    name: 'Jr. Tour Event',        tier: 1, minHoles: 3,  prizePool: 10000,  entryFee: 100,   prestigeGain: 10 },
    { id: 'jr_champ',   name: 'Jr. Tour Championship', tier: 2, minHoles: 6,  prizePool: 25000,  entryFee: 250,   prestigeGain: 20 },
    { id: 'sga_amateur',name: 'SGA Amateur Champ.',    tier: 3, minHoles: 9,  prizePool: 50000,  entryFee: 500,   prestigeGain: 30 },
    { id: 'senior_tour',name: 'Senior SGA Tour Event', tier: 4, minHoles: 9,  prizePool: 75000,  entryFee: 750,   prestigeGain: 40 },
    { id: 'sga_tour',   name: 'SGA Tour Event',        tier: 5, minHoles: 9,  prizePool: 100000, entryFee: 1000,  prestigeGain: 50 },
    { id: 'senior_champ',name: 'Senior SGA Champ.',    tier: 6, minHoles: 12, prizePool: 150000, entryFee: 1500,  prestigeGain: 60 },
    { id: 'sga_players',name: 'SGA Players Champ.',    tier: 7, minHoles: 12, prizePool: 200000, entryFee: 2000,  prestigeGain: 70 },
    { id: 'sga_champ',  name: 'SGA Championship',      tier: 8, minHoles: 18, prizePool: 350000, entryFee: 3000,  prestigeGain: 80 },
    { id: 'mini_slam',  name: 'Mini Slam Champ.',      tier: 9, minHoles: 18, prizePool: 500000, entryFee: 5000,  prestigeGain: 90 },
    { id: 'grand_slam', name: 'Grand Slam Champ.',     tier: 10,minHoles: 18, prizePool: 1000000,entryFee: 10000, prestigeGain: 100 },
];

const ACHIEVEMENT_DEFS: Achievement[] = [
    { id: 'first_hole',     name: '1st Challenge hole',     description: 'Construisez votre premier trou', icon: '⛳', unlocked: false },
    { id: 'first_tourney',  name: '1st Tournament',         description: 'Participez à votre premier tournoi', icon: '🏆', unlocked: false },
    { id: 'nine_holes',     name: 'First 9+ hole course',   description: 'Construisez 9 trous', icon: '9️⃣', unlocked: false },
    { id: 'top_100',        name: '1st Top 100 hole',       description: 'Un trou classé Top 100', icon: '💯', unlocked: false },
    { id: 'fivehundred_k',  name: '1st $500,000 Tournament',description: 'Gagnez un tournoi à $500k', icon: '💰', unlocked: false },
    { id: 'top_18',         name: '1st Top 18 hole',        description: 'Un trou classé Top 18', icon: '🔝', unlocked: false },
    { id: 'tourney_win_9',  name: 'First tourney win (9+)', description: 'Gagnez un tournoi sur 9+ trous', icon: '🏅', unlocked: false },
    { id: 'eighteen_holes', name: 'First 18 hole course',   description: 'Construisez 18 trous', icon: '🔢', unlocked: false },
    { id: 'million_k',      name: '1st $1,000,000 Tourney', description: 'Gagnez un tournoi à $1M', icon: '💎', unlocked: false },
    { id: 'grand_slam_win', name: 'Grand Slam Victory',     description: 'Gagnez le Grand Slam', icon: '👑', unlocked: false },
];

export class TournamentSystem {
    private tournaments: TournamentDef[] = TOURNAMENTS;
    private achievements: Achievement[] = ACHIEVEMENT_DEFS.map(a => ({ ...a }));
    private results: TournamentResult[] = [];
    private prestige: number = 0;

    /** Tournois disponibles selon le nombre de trous */
    getAvailableTournaments(holesCompleted: number): TournamentDef[] {
        return this.tournaments.filter(t => t.minHoles <= holesCompleted && this.prestige >= t.tier * 5);
    }

    /** Participe à un tournoi */
    enterTournament(tournamentId: string, courseQuality: number): TournamentResult | null {
        const t = this.tournaments.find(t => t.id === tournamentId);
        if (!t) return null;

        // Simulation du tournoi
        const participants = 8 + Math.floor(Math.random() * 12);

        // Score du joueur basé sur la qualité du parcours
        const playerScore = this.simulatePlayerRound(courseQuality);
        const scores = [playerScore];

        // Scores des adversaires
        for (let i = 1; i < participants; i++) {
            const baseScore = Math.floor(Math.random() * 20) - 5; // -5 to +15
            const adjustedScore = baseScore + (t.tier * 2);      // Plus dur en haut niveau
            scores.push(Math.max(0, adjustedScore));
        }

        scores.sort((a, b) => a - b);
        const position = scores.indexOf(playerScore) + 1;

        // Prize money
        const prizeShare = participants - position + 1;
        const prizeMoney = Math.floor(t.prizePool * prizeShare / (participants * (participants + 1) / 2));
        const prestigeGained = Math.floor(t.prestigeGain * (participants - position + 1) / participants);

        const result: TournamentResult = {
            tournamentId,
            position,
            participants,
            prizeMoney,
            prestigeGained,
            scores,
        };

        this.results.push(result);
        this.prestige += prestigeGained;

        // Vérification des accomplissements
        this.checkAchievements(t, position);

        return result;
    }

    /** Simule le score du joueur sur un tour */
    private simulatePlayerRound(courseQuality: number): number {
        const baseScore = Math.floor(Math.random() * 10) - 3; // -3 to +7
        const qualityBonus = Math.floor((courseQuality - 50) / 10);
        return Math.max(1, baseScore + qualityBonus);
    }

    /** Vérifie les accomplissements débloqués */
    private checkAchievements(tournament: TournamentDef, position: number): void {
        this.unlockIf('first_hole', true);
        this.unlockIf('first_tourney', this.results.length >= 1);
        this.unlockIf('nine_holes', true); // Simulé
        this.unlockIf('fivehundred_k', tournament.prizePool >= 500000 && position <= 3);
        this.unlockIf('million_k', tournament.prizePool >= 1000000 && position <= 3);
        this.unlockIf('tourney_win_9', tournament.minHoles >= 9 && position === 1);
        this.unlockIf('grand_slam_win', tournament.id === 'grand_slam' && position === 1);

        // Top positions
        this.unlockIf('top_100', this.results.filter(r => r.position <= 10).length >= 3);
    }

    private unlockIf(achievementId: string, condition: boolean): void {
        const a = this.achievements.find(a => a.id === achievementId);
        if (a && !a.unlocked && condition) {
            a.unlocked = true;
            a.unlockedAt = new Date().toISOString();
        }
    }

    /** Entraîne un tournoi SGA (proposition automatique) */
    generateOffer(holesCompleted: number): TournamentDef | null {
        const avail = this.getAvailableTournaments(holesCompleted);
        if (avail.length === 0) return null;

        // Les tournois de plus haut niveau disponibles sont proposés
        const maxTier = Math.max(...avail.map(t => t.tier));
        const candidates = avail.filter(t => t.tier === maxTier);
        return candidates[Math.floor(Math.random() * candidates.length)];
    }

    getAchievements(): Achievement[] {
        return this.achievements;
    }

    getUnlockedAchievements(): Achievement[] {
        return this.achievements.filter(a => a.unlocked);
    }

    getPrestige(): number {
        return this.prestige;
    }

    getResults(): TournamentResult[] {
        return this.results;
    }

    getAllTournaments(): TournamentDef[] {
        return this.tournaments;
    }
}

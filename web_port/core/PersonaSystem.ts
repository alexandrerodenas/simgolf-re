/**
 * PersonaSystem.ts
 *
 * IA et personnalité des golfeurs Sim.
 * Skills, humeur, décisions, commentaires.
 *
 * @package simgolf.core
 */

export interface GolferSkills {
    length: number;       // 0-100 : distance de frappe
    accuracy: number;     // 0-100 : précision
    imagination: number;  // 0-100 : créativité (effets)
    recovery: number;     // 0-100 : récupération
    putting: number;      // 0-100 : putting
    driving: number;      // 0-100 : précision drive
    longDrive: number;    // 0-100 : distance drive
}

export type Mood = 'ecstatic' | 'happy' | 'neutral' | 'unhappy' | 'angry';

export interface GolferPersona {
    id: string;
    firstName: string;
    lastName: string;
    nickname?: string;
    archetype: string;    // "Rock Star", "CEO", "Artist", etc.

    skills: GolferSkills;
    mood: Mood;
    moodValue: number;    // 0-100
    energy: number;       // 0-100

    // Historique sur ce parcours
    roundsPlayed: number;
    roundsQuit: number;
    totalDonations: number;
}

export interface ShotResult {
    success: boolean;
    distance: number;     // yards
    accuracy: number;     // 0=perfect, >0=offline
    description: string;
}

export class PersonaSystem {
    private golfers: Map<string, GolferPersona> = new Map();
    private namePool: { first: string[]; last: string[] } = {
        first: ['Bruce', 'Tree', 'Gary', 'Bob', 'Mortimer', 'Percy', 'Sammy', 'Gwen', 'Ivana', 'Clint', 'Dennis', 'Mike', 'Mark', 'John', 'Gus', 'Javier', 'Kelley', 'Lindsay', 'Marc', 'Buck', 'Gibby', 'Gack', 'Bonus'],
        last: ['Springstone', 'Levino', 'Golf', 'Newbie', 'Goth', 'Picky', 'Pro', 'Richman', 'Bigdome', 'Eastwood', 'Moellers', 'Hudgins', 'Foertsch', 'Solomon', 'Sobrado', 'Chao', 'Murray', 'Haire', 'Atherholt', 'Inscore'],
    };

    constructor() {
        this.generateDefaultGolfers();
    }

    /** Génère la liste initiale de golfeurs */
    private generateDefaultGolfers(): void {
        const archetypes = ['Rock Star', 'CEO', 'Pro Golfer', 'Artist', 'New Guy', 'Neighbor',
                          'Commissioner', 'Heiress', 'Taskmaster', 'PR Queen', 'Musician',
                          'Space Cowboy', 'Big Wig', 'Tester', 'Artist At Large', 'Marketeer',
                          'Computar Mastar', 'Rock Star', 'Simian', 'Golf Pro'];

        for (let i = 0; i < 20; i++) {
            const first = this.namePool.first[i % this.namePool.first.length];
            const last = this.namePool.last[i % this.namePool.last.length];
            const archetype = archetypes[i % archetypes.length];

            this.golfers.set(`golfer_${i}`, {
                id: `golfer_${i}`,
                firstName: first,
                lastName: last,
                archetype,
                skills: this.generateRandomSkills(),
                mood: 'neutral',
                moodValue: 50 + Math.floor(Math.random() * 20),
                energy: 80 + Math.floor(Math.random() * 20),
                roundsPlayed: 0,
                roundsQuit: 0,
                totalDonations: 0,
            });
        }
    }

    private generateRandomSkills(): GolferSkills {
        return {
            length: Math.floor(Math.random() * 100),
            accuracy: Math.floor(Math.random() * 100),
            imagination: Math.floor(Math.random() * 100),
            recovery: 30 + Math.floor(Math.random() * 70),
            putting: 30 + Math.floor(Math.random() * 70),
            driving: 30 + Math.floor(Math.random() * 70),
            longDrive: 20 + Math.floor(Math.random() * 80),
        };
    }

    /** Simule un coup de golf */
    simulateShot(golferId: string, holePar: number, distanceToHole: number): ShotResult {
        const golfer = this.golfers.get(golferId);
        if (!golfer) return { success: false, distance: 0, accuracy: 99, description: 'Golfer not found' };

        const skills = golfer.skills;
        const moodFactor = (golfer.moodValue - 50) / 50;  // -1 to +1
        const energyFactor = golfer.energy / 100;

        // Distance basée sur Length + LongDrive
        const baseDistance = 150 + (skills.length * 0.5) + (skills.longDrive * 0.3);
        const distanceMod = 1 + (moodFactor * 0.2) + ((energyFactor - 0.5) * 0.3);
        const distance = Math.max(20, baseDistance * distanceMod);

        // Précision basée sur Accuracy + Driving
        const baseAccuracy = Math.max(0, skills.accuracy - (100 - skills.driving) * 0.3);
        const accuracyRoll = Math.random() * 100;
        const accuracy = accuracyRoll > baseAccuracy ? (accuracyRoll - baseAccuracy) * 0.5 : 0;

        // Succès
        const success = accuracy < 15 && distance > 0;

        // Description
        let desc: string;
        if (success) {
            const quality = accuracy < 5 ? 'parfait' : 'bon';
            desc = `${golfer.firstName} place un ${quality} coup à ${Math.round(distance)}m`;
        } else if (accuracy < 30) {
            desc = `${golfer.firstName} frappe, la balle est jouable (${Math.round(distance)}m)`;
        } else {
            desc = `${golfer.firstName} rate son coup — la balle dévie !`;
        }

        // Fatigue
        golfer.energy = Math.max(0, golfer.energy - 2 - Math.floor(Math.random() * 5));

        return { success, distance, accuracy, description: desc };
    }

    /** Met à jour l'humeur basée sur la qualité du parcours */
    updateMood(golferId: string, courseQuality: number): void {
        const golfer = this.golfers.get(golferId);
        if (!golfer) return;

        const delta = (courseQuality - 50) * 0.3 + Math.floor(Math.random() * 10) - 5;
        golfer.moodValue = Math.max(0, Math.min(100, golfer.moodValue + delta));

        if (golfer.moodValue > 75) golfer.mood = 'ecstatic';
        else if (golfer.moodValue > 60) golfer.mood = 'happy';
        else if (golfer.moodValue > 40) golfer.mood = 'neutral';
        else if (golfer.moodValue > 20) golfer.mood = 'unhappy';
        else golfer.mood = 'angry';
    }

    /** Génère un commentaire basé sur l'humeur */
    getComment(golferId: string): string {
        const golfer = this.golfers.get(golferId);
        if (!golfer) return '...';

        const comments: Record<Mood, string[]> = {
            ecstatic: ["C'est le meilleur parcours !", "Quelle journée magnifique !", "Je reviendrai demain !"],
            happy: ["Joli parcours !", "Je me régale.", "Très bon trou."],
            neutral: ["Pas mal.", "Le parcours est correct.", "Un café serait le bienvenu."],
            unhappy: ["Ce trou est trop dur.", "Y a trop d'attente.", "L'herbe est mal tondue."],
            angry: ["Je déteste ce parcours !", "QUI a dessiné ce trou ?!", "Je me casse d'ici !"],
        };

        const pool = comments[golfer.mood];
        return pool[Math.floor(Math.random() * pool.length)];
    }

    /** Décide si le golfeur quitte (basé sur humeur + énergie) */
    shouldQuit(golferId: string): boolean {
        const golfer = this.golfers.get(golferId);
        if (!golfer) return false;
        return golfer.moodValue < 15 || golfer.energy < 10;
    }

    getGolfer(id: string): GolferPersona | undefined {
        return this.golfers.get(id);
    }

    getAllGolfers(): GolferPersona[] {
        return Array.from(this.golfers.values());
    }

    getGolfersOnCourse(): GolferPersona[] {
        return this.getAllGolfers().filter(g => g.roundsPlayed > 0);
    }

    /** Fait jouer un tour complet à un golfeur */
    playHole(golferId: string, par: number): number {
        const golfer = this.golfers.get(golferId);
        if (!golfer) return 0;

        let strokes = 0;
        let distanceToHole = 400; // Distance initiale au trou

        while (distanceToHole > 0 && strokes < 15) {
            const shot = this.simulateShot(golferId, par, distanceToHole);
            strokes++;

            if (shot.success) {
                distanceToHole = Math.max(0, distanceToHole - shot.distance);
            } else {
                distanceToHole += shot.accuracy * 2; // Penalty pour raté
            }

            // Sur le green : putting
            if (distanceToHole < 30) {
                const puttingSkill = golfer.skills.putting / 100;
                if (Math.random() < puttingSkill * 0.6) {
                    distanceToHole = 0; // Rentré
                } else {
                    strokes++; // Coup de putting supplémentaire
                    if (Math.random() < 0.3) distanceToHole = 0; // Second putt
                }
                break;
            }
        }

        golfer.roundsPlayed++;
        if (golfer.energy < 10) golfer.roundsQuit++;

        this.updateMood(golferId, 50);
        return strokes;
    }
}

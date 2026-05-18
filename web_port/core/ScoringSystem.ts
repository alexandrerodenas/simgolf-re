/**
 * ScoringSystem.ts
 *
 * Système de scoring du golf.
 * Gère le par, les coups, et le score relatif.
 *
 * @package simgolf.core
 */

export type ScoreType = 'triple_eagle' | 'double_eagle' | 'eagle' | 'birdie' | 'par' | 'bogey' | 'double_bogey' | 'triple_bogey';

export interface HoleResult {
    holeNumber: number;
    par: number;
    strokes: number;
    score: number;        // strokes - par
    scoreType: ScoreType;
    fairwayHit: boolean;
    greenInReg: boolean;
    putts: number;
}

export interface RoundScore {
    courseName: string;
    date: string;
    holes: HoleResult[];
    totalPar: number;
    totalStrokes: number;
    totalScore: number;   // totalStrokes - totalPar
    fairwayHit: number;
    fairwayTotal: number;
    girHit: number;
    girTotal: number;
    totalPutts: number;
}

export function getScoreType(strokes: number, par: number): ScoreType {
    const diff = strokes - par;
    if (diff <= -4) return 'triple_eagle';
    if (diff === -3) return 'double_eagle';
    if (diff === -2) return 'eagle';
    if (diff === -1) return 'birdie';
    if (diff === 0) return 'par';
    if (diff === 1) return 'bogey';
    if (diff === 2) return 'double_bogey';
    return 'triple_bogey';
}

export function getScoreLabel(scoreType: ScoreType): string {
    const labels: Record<ScoreType, string> = {
        triple_eagle: 'Triple Eagle',
        double_eagle: 'Double Eagle',
        eagle: 'Eagle',
        birdie: 'Birdie',
        par: 'Par',
        bogey: 'Bogey',
        double_bogey: 'Double Bogey',
        triple_bogey: 'Triple Bogey',
    };
    return labels[scoreType];
}

export function formatScore(score: number): string {
    if (score === 0) return 'E';
    return score > 0 ? `+${score}` : `${score}`;
}

export class ScoringSystem {
    currentRound: RoundScore | null = null;
    private allRounds: RoundScore[] = [];

    startRound(courseName: string): void {
        this.currentRound = {
            courseName,
            date: new Date().toISOString(),
            holes: [],
            totalPar: 0,
            totalStrokes: 0,
            totalScore: 0,
            fairwayHit: 0,
            fairwayTotal: 0,
            girHit: 0,
            girTotal: 0,
            totalPutts: 0,
        };
    }

    recordHole(par: number, strokes: number, fairwayHit: boolean, putts: number): HoleResult {
        if (!this.currentRound) throw new Error('No round in progress');

        const holeNumber = this.currentRound.holes.length + 1;
        const score = strokes - par;
        const greenInReg = strokes - putts <= par - 2;  // GIR = atteint le green en -2

        const result: HoleResult = {
            holeNumber,
            par,
            strokes,
            score,
            scoreType: getScoreType(strokes, par),
            fairwayHit,
            greenInReg,
            putts,
        };

        this.currentRound.holes.push(result);
        this.currentRound.totalPar += par;
        this.currentRound.totalStrokes += strokes;
        this.currentRound.totalScore = this.currentRound.totalStrokes - this.currentRound.totalPar;
        if (fairwayHit) this.currentRound.fairwayHit++;
        this.currentRound.fairwayTotal++;
        if (greenInReg) this.currentRound.girHit++;
        this.currentRound.girTotal++;
        this.currentRound.totalPutts += putts;

        return result;
    }

    endRound(): RoundScore {
        if (!this.currentRound) throw new Error('No round in progress');
        const round = this.currentRound;
        this.allRounds.push(round);
        this.currentRound = null;
        return round;
    }

    getTotalScore(): number {
        if (!this.currentRound) return 0;
        return this.currentRound.totalScore;
    }

    getCurrentHoleStrokes(): number {
        if (!this.currentRound || this.currentRound.holes.length === 0) return 0;
        const last = this.currentRound.holes[this.currentRound.holes.length - 1];
        return last.strokes;
    }

    getHistory(): RoundScore[] {
        return this.allRounds;
    }

    getBestRound(): RoundScore | null {
        if (this.allRounds.length === 0) return null;
        return this.allRounds.reduce((best, r) => r.totalScore < best.totalScore ? r : best);
    }

    static getParForHole(holeNumber: number, totalHoles: number): number {
        // Distribution standard : 4 par 3, 10 par 4, 4 par 5 = par 72
        const pattern = [4,4,4,3,5,4,4,3,5, 4,4,3,5,4,4,3,5,4]; // 18 trous
        if (holeNumber <= pattern.length) return pattern[holeNumber - 1];
        return 4; // Default
    }
}

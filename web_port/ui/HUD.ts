/**
 * HUD.ts
 *
 * Heads-Up Display mobile pour SimGolf.
 *
 * Affiche :
 * - Trou actuel + Par
 * - Score du joueur (par rapport au par)
 * - Argent / Budget
 * - Bouton menu
 *
 * Mise à jour temps réel via update().
 *
 * @package simgolf.ui
 */

export interface HUDState {
    /** Numéro du trou actuel (1-indexé) */
    hole: number;
    /** Par du trou */
    par: number;
    /** Score total (coups - par, 0 = even) */
    score: number;
    /** Argent disponible */
    money: number;
}

/**
 * HUD — Contrôle les éléments du bandeau supérieur.
 */
export class HUD {
    private holeEl: HTMLElement;
    private parEl: HTMLElement;
    private scoreEl: HTMLElement;
    private moneyEl: HTMLElement;

    private state: HUDState = { hole: 1, par: 4, score: 0, money: 50000 };
    private menuCallback: (() => void) | null = null;

    constructor() {
        this.holeEl = document.getElementById('hud-hole')!;
        this.parEl = document.getElementById('hud-par')!;
        this.scoreEl = document.getElementById('hud-score')!;
        this.moneyEl = document.getElementById('hud-money')!;

        const menuBtn = document.getElementById('btn-menu')!;
        menuBtn.addEventListener('pointerdown', () => this.menuCallback?.());
    }

    set onMenu(fn: (() => void) | null) {
        this.menuCallback = fn;
    }

    /** Met à jour l'affichage */
    update(state: Partial<HUDState>): void {
        Object.assign(this.state, state);
        this.render();
    }

    /** Définit un état complet */
    setState(state: HUDState): void {
        this.state = { ...state };
        this.render();
    }

    private render(): void {
        const s = this.state;

        this.holeEl.textContent = `Trou ${s.hole}`;
        this.parEl.textContent = `Par ${s.par}`;

        // Score
        if (s.score === 0) {
            this.scoreEl.textContent = 'E';
            this.scoreEl.style.color = '#aaa';
        } else if (s.score < 0) {
            this.scoreEl.textContent = `${s.score}`;
            this.scoreEl.style.color = '#7bc96f'; // Vert (sous le par)
        } else {
            this.scoreEl.textContent = `+${s.score}`;
            this.scoreEl.style.color = '#ef4444'; // Rouge (au-dessus du par)
        }

        // Argent
        this.moneyEl.textContent = `💰 $${this.formatMoney(s.money)}`;
    }

    private formatMoney(n: number): string {
        if (n >= 1000000) return `${(n / 1000000).toFixed(1)}M`;
        if (n >= 1000) return `${(n / 1000).toFixed(0)}k`;
        return n.toLocaleString();
    }

    /** Affiche un message temporaire */
    showToast(msg: string, durationMs: number = 2000): void {
        const existing = document.getElementById('hud-toast');
        if (existing) existing.remove();

        const toast = document.createElement('div');
        toast.id = 'hud-toast';
        toast.style.cssText = `
            position: absolute; top: 60px; left: 50%; transform: translateX(-50%);
            background: rgba(0,0,0,0.8); color: white; padding: 8px 20px;
            border-radius: 20px; font-size: 14px; z-index: 20;
            animation: fadeInOut ${durationMs}ms ease;
        `;
        toast.textContent = msg;
        document.getElementById('game-shell')!.appendChild(toast);

        setTimeout(() => toast.remove(), durationMs);
    }
}

/**
 * MainMenu.ts
 *
 * Écran d'accueil mobile pour SimGolf.
 *
 * Fonctions :
 * - Nouvelle Partie → lance le jeu avec un thème choisi
 * - Continuer → charge une sauvegarde
 * - Tutoriel → lance le mode tutorial
 * - Sélection du thème : Parkland, Desert, Links, Tropical
 *
 * @package simgolf.ui
 */

import { CourseTheme } from '../view/TextureManager';

export interface MainMenuCallbacks {
    onNewGame?: (theme: CourseTheme) => void;
    onLoadGame?: () => void;
    onTutorial?: () => void;
}

/**
 * MainMenu — Contrôle l'écran d'accueil.
 */
export class MainMenu {
    private menuEl: HTMLElement;
    private shellEl: HTMLElement;
    private currentTheme: CourseTheme = CourseTheme.PARKLAND;
    private callbacks: MainMenuCallbacks = {};

    constructor() {
        this.menuEl = document.getElementById('main-menu')!;
        this.shellEl = document.getElementById('game-shell')!;

        this.bindEvents();
    }

    set onNewGame(fn: ((theme: CourseTheme) => void) | undefined) {
        this.callbacks.onNewGame = fn;
    }
    set onLoadGame(fn: (() => void) | undefined) {
        this.callbacks.onLoadGame = fn;
    }
    set onTutorial(fn: (() => void) | undefined) {
        this.callbacks.onTutorial = fn;
    }

    private bindEvents(): void {
        // Boutons — pointerdown pour compatibilité tactile + souris
        document.getElementById('btn-new-game')!.addEventListener('pointerdown', (e) => {
            e.preventDefault();
            this.callbacks.onNewGame?.(this.currentTheme);
        });
        document.getElementById('btn-load-game')!.addEventListener('pointerdown', () => {
            this.callbacks.onLoadGame?.();
        });
        document.getElementById('btn-tutorial')!.addEventListener('pointerdown', () => {
            this.callbacks.onTutorial?.();
        });

        // Sélecteurs de thème
        document.querySelectorAll('.theme-chip').forEach(chip => {
            chip.addEventListener('pointerdown', (e) => {
                e.preventDefault();
                document.querySelectorAll('.theme-chip').forEach(c => c.classList.remove('active'));
                chip.classList.add('active');
                this.currentTheme = (chip as HTMLElement).dataset.theme as CourseTheme;
            });
        });
    }

    /** Montre le menu */
    show(): void {
        this.menuEl.style.display = 'flex';
        this.shellEl.style.display = 'none';
    }

    /** Cache le menu et montre le jeu */
    hide(): void {
        this.menuEl.style.display = 'none';
        this.shellEl.style.display = 'flex';
    }

    /** Thème sélectionné */
    get theme(): CourseTheme {
        return this.currentTheme;
    }
}

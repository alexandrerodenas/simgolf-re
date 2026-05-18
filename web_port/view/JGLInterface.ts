/**
 * web_port/view/JGLInterface.ts
 *
 * Interface JGL (Jackal Graphics Library) — portage Web.
 *
 * jgld.dll est un renderer logiciel 2D pur qui utilise GDI32.
 * Cette interface reproduit les 6 fonctions JGL utilisées par Terrain.dll,
 * en les mappant sur l'API Canvas 2D.
 *
 * Principe : remplacer le pipeline JGL (push/pop matrice, translate, ortho,
 * bindTexture) par des opérations Canvas 2D équivalentes.
 */

/**
 * Contexte de rendu JGL.
 * Maintient une pile de matrices de transformation et l'état de rendu courant.
 */
export class JGLContext {
    private ctx: CanvasRenderingContext2D;

    /** Pile de matrices (sauvegardes) */
    private matrixStack: number = 0;

    /** Texture actuellement bindée */
    private currentTexture: HTMLImageElement | null = null;

    /** Cache des textures (ID → HTMLImageElement) */
    private textures: Map<number, HTMLImageElement> = new Map();

    constructor(ctx: CanvasRenderingContext2D) {
        this.ctx = ctx;
    }

    // ============================================================
    // Gestion des matrices
    // ============================================================

    /**
     * PushMatrix — Sauvegarde l'état de transformation courant.
     * Équivalent JGL : PushMatrix()
     * Équivalent Canvas : ctx.save()
     */
    pushMatrix(): void {
        this.ctx.save();
        this.matrixStack++;
    }

    /**
     * PopMatrix — Restaure l'état de transformation précédent.
     * Équivalent JGL : PopMatrix()
     * Équivalent Canvas : ctx.restore()
     */
    popMatrix(): void {
        if (this.matrixStack > 0) {
            this.ctx.restore();
            this.matrixStack--;
        }
    }

    /**
     * LoadIdentity — Réinitialise la matrice courante à l'identité.
     * Équivalent JGL : LoadIdentity()
     * Équivalent Canvas : setTransform(1, 0, 0, 1, 0, 0)
     */
    loadIdentity(): void {
        this.ctx.setTransform(1, 0, 0, 1, 0, 0);
    }

    /**
     * Translate — Applique une translation.
     * Note : JGL utilise des coordonnées 3D (x, y, z).
     * Le z est ignoré (projection orthographique) ou mappé à l'échelle.
     *
     * Équivalent JGL : Translate(x, y, z)
     * Équivalent Canvas : ctx.translate(x, y)
     */
    translate(x: number, y: number, z: number = 0): void {
        // Dans le renderer isométrique, z est ignoré
        // (projection orthographique)
        this.ctx.translate(x, y);
    }

    /**
     * Ortho — Définit une projection orthographique.
     * Dans le jeu original, utilisé avec des paramètres (0,0,0,0)
     * ce qui suggère qu'il s'agit d'un appel par défaut.
     *
     * Équivalent JGL : Ortho(left, right, bottom, top)
     * Équivalent Canvas : pas d'équivalent direct (ignoré)
     */
    ortho(left: number = 0, right: number = 0, bottom: number = 0, top: number = 0): void {
        // Ignoré — Canvas 2D gère automatiquement la projection
    }

    // ============================================================
    // Gestion des textures
    // ============================================================

    /**
     * BindTexture — Sélectionne une texture pour le rendu.
     *
     * Équivalent JGL : BindTexture(target, textureID)
     *   target = 0x0DE1 (GL_TEXTURE_2D)
     *   textureID = handle OpenGL (réutilisé comme clé)
     *
     * Équivalent Canvas : sélectionne une Image pour drawImage()
     */
    bindTexture(target: number, textureID: number): void {
        if (target !== 0x0DE1) return; // Seulement GL_TEXTURE_2D
        
        this.currentTexture = this.textures.get(textureID) ?? null;
    }

    /**
     * Enregistre une texture dans le cache.
     */
    registerTexture(id: number, image: HTMLImageElement): void {
        this.textures.set(id, image);
    }

    // ============================================================
    // Primitives de dessin
    // ============================================================

    /**
     * Dessine un sprite à la position courante.
     * Utilise la texture bindée si disponible.
     */
    drawSprite(x: number, y: number, width: number, height: number): void {
        if (this.currentTexture) {
            this.ctx.drawImage(this.currentTexture, x, y, width, height);
        } else {
            // Fallback : rectangle coloré si pas de texture
            this.ctx.fillStyle = '#888';
            this.ctx.fillRect(x, y, width, height);
        }
    }

    /**
     * Efface l'écran.
     */
    clear(x: number, y: number, width: number, height: number, color: string = '#000'): void {
        this.ctx.fillStyle = color;
        this.ctx.fillRect(x, y, width, height);
    }

    // ============================================================
    // Utilitaires
    // ============================================================

    /**
     * Nombre de matrices sur la pile.
     */
    get stackDepth(): number {
        return this.matrixStack;
    }

    /**
     * Texture actuellement bindée.
     */
    get boundTexture(): HTMLImageElement | null {
        return this.currentTexture;
    }

    /**
     * Réinitialise complètement le contexte JGL.
     */
    reset(): void {
        while (this.matrixStack > 0) {
            this.ctx.restore();
            this.matrixStack--;
        }
        this.loadIdentity();
        this.currentTexture = null;
    }
}

/**
 * Interface simplifiée pour l'intégration avec IsometricRenderer.
 * Fournit un accès direct aux fonctions JGL sans passer par le contexte.
 */
export interface JGLFunctions {
    pushMatrix(): void;
    popMatrix(): void;
    loadIdentity(): void;
    translate(x: number, y: number, z?: number): void;
    ortho(l?: number, r?: number, b?: number, t?: number): void;
    bindTexture(target: number, id: number): void;
}

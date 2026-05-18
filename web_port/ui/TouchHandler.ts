/**
 * TouchHandler.ts
 *
 * Gestion des interactions tactiles pour SimGolf Mobile.
 *
 * Supporte :
 * - 1 doigt : déplacement (pan) / tap / long-press
 * - 2 doigts : pinch zoom
 * - Équivalent du clavier/souris du jeu original
 *
 * Mapping des gestes :
 * - Tap → clic gauche (sélection/placement)
 * - Long-press (500ms) → clic droit (menu contextuel)
 * - Pan → déplacement de la vue
 * - Pinch → zoom avant/arrière
 *
 * @package simgolf.ui
 */

export interface TouchHandlerEvents {
    /** Déplacement de la vue (deltaX, deltaY en pixels écran) */
    onPan?: (dx: number, dy: number) => void;
    /** Zoom (facteur multiplicatif, >1 = zoom out) */
    onZoom?: (scale: number) => void;
    /** Tap à une position (x, y en coordonnées canvas) */
    onTap?: (x: number, y: number) => void;
    /** Appui long à une position */
    onLongPress?: (x: number, y: number) => void;
    /** Double tap */
    onDoubleTap?: (x: number, y: number) => void;
}

/**
 * TouchHandler — Gestionnaire tactile unifié.
 *
 * Convertit les événements tactiles bruts en actions de jeu
 * (pan, zoom, tap, long-press).
 *
 * Usage :
 *   const th = new TouchHandler(canvas);
 *   th.onPan = (dx, dy) => camera.move(dx, dy);
 *   th.onZoom = (s) => camera.zoom *= s;
 */
export class TouchHandler {
    private el: HTMLElement;
    private events: TouchHandlerEvents = {};

    // État tactile
    private touches: Map<number, { x: number; y: number; t: number }> = new Map();
    private lastTapTime: number = 0;
    private lastTapX: number = 0;
    private lastTapY: number = 0;
    private longPressTimer: ReturnType<typeof setTimeout> | null = null;
    private isLongPressed: boolean = false;
    private isPanning: boolean = false;

    // Pinch
    private lastPinchDist: number = 0;

    // Configuration
    private readonly LONG_PRESS_MS = 500;
    private readonly DOUBLE_TAP_MS = 300;
    private readonly PAN_THRESHOLD = 8; // pixels avant de considérer comme pan

    constructor(el: HTMLElement) {
        this.el = el;
        this.bindEvents();
    }

    set onPan(fn: ((dx: number, dy: number) => void) | undefined) {
        this.events.onPan = fn;
    }
    set onZoom(fn: ((scale: number) => void) | undefined) {
        this.events.onZoom = fn;
    }
    set onTap(fn: ((x: number, y: number) => void) | undefined) {
        this.events.onTap = fn;
    }
    set onLongPress(fn: ((x: number, y: number) => void) | undefined) {
        this.events.onLongPress = fn;
    }
    set onDoubleTap(fn: ((x: number, y: number) => void) | undefined) {
        this.events.onDoubleTap = fn;
    }

    private bindEvents(): void {
        // Touch events (mobile)
        this.el.addEventListener('touchstart', this.onTouchStart, { passive: false });
        this.el.addEventListener('touchmove', this.onTouchMove, { passive: false });
        this.el.addEventListener('touchend', this.onTouchEnd, { passive: false });
        this.el.addEventListener('touchcancel', this.onTouchEnd, { passive: false });

        // Mouse events (desktop — pour le debug)
        this.el.addEventListener('mousedown', this.onMouseDown);
        this.el.addEventListener('mousemove', this.onMouseMove);
        this.el.addEventListener('mouseup', this.onMouseUp);
        this.el.addEventListener('wheel', this.onWheel, { passive: true });

        // Empêche le context menu natif
        this.el.addEventListener('contextmenu', (e) => e.preventDefault());
    }

    // ============================================================
    // Touch handlers
    // ============================================================

    private onTouchStart = (e: TouchEvent): void => {
        e.preventDefault();
        this.isPanning = false;
        this.isLongPressed = false;

        for (let i = 0; i < e.changedTouches.length; i++) {
            const t = e.changedTouches[i];
            this.touches.set(t.identifier, {
                x: t.clientX,
                y: t.clientY,
                t: Date.now(),
            });
        }

        // 1 doigt : démarre le timer long-press
        if (e.touches.length === 1) {
            this.longPressTimer = setTimeout(() => {
                this.isLongPressed = true;
                const t = e.touches[0];
                this.events.onLongPress?.(t.clientX, t.clientY);
                // Vibration feedback (Android)
                if (navigator.vibrate) navigator.vibrate(20);
            }, this.LONG_PRESS_MS);
        }

        // 2 doigts : prépare le pinch
        if (e.touches.length === 2) {
            this.clearLongPress();
            this.lastPinchDist = this.pinchDist(e.touches);
        }
    };

    private onTouchMove = (e: TouchEvent): void => {
        e.preventDefault();

        // Pinch (2 doigts)
        if (e.touches.length === 2) {
            const dist = this.pinchDist(e.touches);
            if (this.lastPinchDist > 0) {
                const scale = this.lastPinchDist / dist;
                this.events.onZoom?.(scale);
            }
            this.lastPinchDist = dist;
            this.clearLongPress();
            return;
        }

        // Pan (1 doigt)
        if (e.touches.length === 1) {
            const t = e.touches[0];
            const prev = this.touches.get(t.identifier);

            if (prev) {
                const dx = t.clientX - prev.x;
                const dy = t.clientY - prev.y;

                // Seuil de détection du pan
                const dist = Math.sqrt(dx * dx + dy * dy);
                if (dist > this.PAN_THRESHOLD) {
                    this.isPanning = true;
                    this.clearLongPress();
                    this.events.onPan?.(dx, dy);
                }

                this.touches.set(t.identifier, {
                    x: t.clientX,
                    y: t.clientY,
                    t: Date.now(),
                });
            }
        }
    };

    private onTouchEnd = (e: TouchEvent): void => {
        this.clearLongPress();

        for (let i = 0; i < e.changedTouches.length; i++) {
            this.touches.delete(e.changedTouches[i].identifier);
        }

        // Si c'était un tap (pas de pan, pas de long-press)
        if (!this.isPanning && !this.isLongPressed && e.changedTouches.length === 1) {
            const t = e.changedTouches[0];
            const now = Date.now();

            // Double-tap ?
            if (
                now - this.lastTapTime < this.DOUBLE_TAP_MS &&
                Math.abs(t.clientX - this.lastTapX) < 30 &&
                Math.abs(t.clientY - this.lastTapY) < 30
            ) {
                this.events.onDoubleTap?.(t.clientX, t.clientY);
                this.lastTapTime = 0;
            } else {
                // Tap simple
                this.events.onTap?.(t.clientX, t.clientY);
                this.lastTapTime = now;
                this.lastTapX = t.clientX;
                this.lastTapY = t.clientY;
            }
        }

        this.isPanning = false;
        this.lastPinchDist = 0;
    };

    // ============================================================
    // Mouse handlers (desktop fallback)
    // ============================================================

    private mouseDown: { x: number; y: number; t: number } | null = null;
    private mouseMoved = false;

    private onMouseDown = (e: MouseEvent): void => {
        this.mouseDown = { x: e.clientX, y: e.clientY, t: Date.now() };
        this.mouseMoved = false;

        if (e.button === 2) {
            // Clic droit → long-press
            this.events.onLongPress?.(e.clientX, e.clientY);
        }
    };

    private onMouseMove = (e: MouseEvent): void => {
        if (!this.mouseDown) return;

        const dx = e.clientX - this.mouseDown.x;
        const dy = e.clientY - this.mouseDown.y;
        const dist = Math.sqrt(dx * dx + dy * dy);

        if (dist > this.PAN_THRESHOLD) {
            this.mouseMoved = true;
            this.events.onPan?.(dx, dy);
            this.mouseDown = { x: e.clientX, y: e.clientY, t: Date.now() };
        }
    };

    private onMouseUp = (e: MouseEvent): void => {
        if (!this.mouseDown) return;

        if (!this.mouseMoved && e.button === 0) {
            const now = Date.now();

            // Double-click ?
            if (
                now - this.lastTapTime < this.DOUBLE_TAP_MS &&
                Math.abs(e.clientX - this.lastTapX) < 30 &&
                Math.abs(e.clientY - this.lastTapY) < 30
            ) {
                this.events.onDoubleTap?.(e.clientX, e.clientY);
                this.lastTapTime = 0;
            } else {
                this.events.onTap?.(e.clientX, e.clientY);
                this.lastTapTime = now;
                this.lastTapX = e.clientX;
                this.lastTapY = e.clientY;
            }
        }

        this.mouseDown = null;
    };

    private onWheel = (e: WheelEvent): void => {
        const scale = e.deltaY > 0 ? 1.1 : 0.9;
        this.events.onZoom?.(scale);
    };

    // ============================================================
    // Utilitaires
    // ============================================================

    private pinchDist(touches: TouchList): number {
        if (touches.length < 2) return 0;
        const dx = touches[0].clientX - touches[1].clientX;
        const dy = touches[0].clientY - touches[1].clientY;
        return Math.sqrt(dx * dx + dy * dy);
    }

    private clearLongPress(): void {
        if (this.longPressTimer) {
            clearTimeout(this.longPressTimer);
            this.longPressTimer = null;
        }
    }

    /** Déconvertit la position écran → coordonnées canvas */
    screenToCanvas(clientX: number, clientY: number, canvas: HTMLCanvasElement): { x: number; y: number } {
        const rect = canvas.getBoundingClientRect();
        return {
            x: (clientX - rect.left) * (canvas.width / rect.width),
            y: (clientY - rect.top) * (canvas.height / rect.height),
        };
    }

    /** Nettoie les écouteurs */
    destroy(): void {
        this.el.removeEventListener('touchstart', this.onTouchStart);
        this.el.removeEventListener('touchmove', this.onTouchMove);
        this.el.removeEventListener('touchend', this.onTouchEnd);
        this.el.removeEventListener('touchcancel', this.onTouchEnd);
        this.el.removeEventListener('mousedown', this.onMouseDown);
        this.el.removeEventListener('mousemove', this.onMouseMove);
        this.el.removeEventListener('mouseup', this.onMouseUp);
        this.el.removeEventListener('wheel', this.onWheel);
    }
}

// ============================================================
// Caméra mobile — liée au TouchHandler
// ============================================================

/** État de la caméra pour la vue isométrique */
export class CameraController {
    /** Décalage horizontal (pixels isométriques) */
    offsetX: number = 0;
    /** Décalage vertical (pixels isométriques) */
    offsetY: number = 0;
    /** Niveau de zoom (1.0 = normal) */
    zoom: number = 1.0;

    private readonly MIN_ZOOM = 0.3;
    private readonly MAX_ZOOM = 3.0;

    /** Lie le TouchHandler à la caméra */
    connect(touch: TouchHandler): void {
        touch.onPan = (dx, dy) => {
            this.offsetX += dx / this.zoom;
            this.offsetY += dy / this.zoom;
        };
        touch.onZoom = (scale) => {
            this.zoom = Math.max(this.MIN_ZOOM, Math.min(this.MAX_ZOOM, this.zoom * scale));
        };
    }

    /** RàZ */
    reset(): void {
        this.offsetX = 0;
        this.offsetY = 0;
        this.zoom = 1.0;
    }
}

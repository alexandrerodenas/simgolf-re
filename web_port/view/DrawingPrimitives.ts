/**
 * DrawingPrimitives.ts
 *
 * Portage des primitives de dessin de Terrain.dll :
 * drawLine, drawCircle, drawBezierSpline, drawCardinalSpline.
 *
 * Ces fonctions étaient utilisées dans le jeu original pour :
 * - Prévisualisation des chemins (drawLine)
 * - Rayon de placement/indicateurs de zone (drawCircle)
 * - Traçage de fairway / courbes de terrain (drawBezierSpline)
 * - Chemins sinueux entre bâtiments (drawCardinalSpline)
 *
 * @package simgolf.view
 */

export interface Point {
    x: number;
    y: number;
}

/**
 * Dessine une ligne sur le canvas isométrique.
 *
 * Signature originale C++ :
 *   Terrain::drawLine(int x1, int y1, int x2, int y2, int color, int width, int style)
 *
 * @param ctx   Contexte Canvas 2D
 * @param x1    Point de départ X (monde)
 * @param y1    Point de départ Y (monde)
 * @param x2    Point d'arrivée X
 * @param y2    Point d'arrivée Y
 * @param color Couleur (chaîne CSS ou hex)
 * @param width Épaisseur du trait en pixels
 * @param style 0 = solide, 1 = pointillé, 2 = traitillé
 */
export function drawLine(
    ctx: CanvasRenderingContext2D,
    x1: number, y1: number,
    x2: number, y2: number,
    color: string = 'rgba(255,255,255,0.8)',
    width: number = 2,
    style: number = 0
): void {
    ctx.save();

    ctx.strokeStyle = color;
    ctx.lineWidth = width;

    // Style de ligne
    switch (style) {
        case 1: // Pointillé
            ctx.setLineDash([4, 4]);
            break;
        case 2: // Traitillé
            ctx.setLineDash([8, 6]);
            break;
        default: // Solide
            ctx.setLineDash([]);
    }

    ctx.beginPath();
    ctx.moveTo(x1, y1);
    ctx.lineTo(x2, y2);
    ctx.stroke();

    ctx.restore();
}

/**
 * Dessine un cercle sur le canvas (projection isométrique).
 *
 * Signature originale C++ :
 *   Terrain::drawCircle(Tile* center, float radius)
 *
 * Le cercle est dessiné en perspective isométrique (ellipse).
 *
 * @param ctx    Contexte Canvas 2D
 * @param cx     Centre X (monde)
 * @param cy     Centre Y (monde)
 * @param radius Rayon en pixels (projeté)
 * @param color  Couleur de la bordure
 * @param fill   Couleur de remplissage (optionnel)
 * @param dashed Si true, trait pointillé
 */
export function drawCircle(
    ctx: CanvasRenderingContext2D,
    cx: number, cy: number,
    radius: number,
    color: string = 'rgba(255,255,255,0.6)',
    fill?: string,
    dashed: boolean = false
): void {
    ctx.save();

    // Projection isométrique : le cercle devient une ellipse
    // ratio hauteur/largeur = 0.5 pour l'isométrique
    const rx = radius;
    const ry = radius * 0.5;

    ctx.strokeStyle = color;
    ctx.lineWidth = 1.5;

    if (dashed) {
        ctx.setLineDash([4, 4]);
    }

    ctx.beginPath();
    ctx.ellipse(cx, cy, rx, ry, 0, 0, Math.PI * 2);

    if (fill) {
        ctx.fillStyle = fill;
        ctx.fill();
    }

    ctx.stroke();
    ctx.restore();
}

/**
 * Calcule un point sur une courbe de Bézier cubique.
 *
 * B(t) = (1-t)³P0 + 3(1-t)²tP1 + 3(1-t)t²P2 + t³P3
 */
function bezierPoint(t: number, p0: Point, p1: Point, p2: Point, p3: Point): Point {
    const u = 1 - t;
    const u2 = u * u;
    const u3 = u2 * u;
    const t2 = t * t;
    const t3 = t2 * t;

    return {
        x: u3 * p0.x + 3 * u2 * t * p1.x + 3 * u * t2 * p2.x + t3 * p3.x,
        y: u3 * p0.y + 3 * u2 * t * p1.y + 3 * u * t2 * p2.y + t3 * p3.y,
    };
}

/**
 * Dessine une courbe de Bézier cubique.
 *
 * Signature originale C++ :
 *   Terrain::drawBezierSpline(int x1, int y1, int x2, int y2,
 *                              int x3, int y3, int x4, int y4,
 *                              int color)
 *
 * 4 points de contrôle → courbe de Bézier cubique.
 *
 * @param ctx   Contexte Canvas 2D
 * @param p0    Point de départ
 * @param p1    Point de contrôle 1
 * @param p2    Point de contrôle 2
 * @param p3    Point d'arrivée
 * @param color Couleur du trait
 * @param width Épaisseur
 * @param segments Nombre de segments (défaut: 32)
 */
export function drawBezierSpline(
    ctx: CanvasRenderingContext2D,
    p0: Point, p1: Point, p2: Point, p3: Point,
    color: string = 'rgba(123, 201, 111, 0.8)',
    width: number = 2,
    segments: number = 32
): void {
    ctx.save();

    ctx.strokeStyle = color;
    ctx.lineWidth = width;
    ctx.setLineDash([]);

    ctx.beginPath();
    ctx.moveTo(p0.x, p0.y);

    for (let i = 1; i <= segments; i++) {
        const t = i / segments;
        const pt = bezierPoint(t, p0, p1, p2, p3);
        ctx.lineTo(pt.x, pt.y);
    }

    ctx.stroke();

    // Points de contrôle (optionnel, pour debug)
    if (false) {
        ctx.fillStyle = 'rgba(255,0,0,0.5)';
        [p0, p1, p2, p3].forEach(p => {
            ctx.beginPath();
            ctx.arc(p.x, p.y, 3, 0, Math.PI * 2);
            ctx.fill();
        });
    }

    ctx.restore();
}

/**
 * Calcule une spline cardinale (Catmull-Rom).
 *
 * P(t) = 0.5 * ((2*P1) + (-P0 + P2)*t + (2*P0 - 5*P1 + 4*P2 - P3)*t² + (-P0 + 3*P1 - 3*P2 + P3)*t³)
 *
 * @param points   Liste des points de contrôle
 * @param tension  Tension de la courbe (0 = linéaire, 0.5 = défaut, 1 = serré)
 * @param segments Segments entre chaque paire de points
 * @returns        Points de la courbe lissée
 */
export function computeCardinalSpline(
    points: Point[],
    tension: number = 0.5,
    segments: number = 16
): Point[] {
    if (points.length < 2) return points;

    const result: Point[] = [];
    const p = points;

    for (let i = 0; i < p.length - 1; i++) {
        const p0 = i > 0 ? p[i - 1] : p[i];
        const p1 = p[i];
        const p2 = p[i + 1];
        const p3 = i < p.length - 2 ? p[i + 2] : p[i + 1];

        for (let s = 0; s < segments; s++) {
            const t = s / segments;
            const t2 = t * t;
            const t3 = t2 * t;

            const x = 0.5 * (
                (2 * p1.x) +
                (-p0.x + p2.x) * t +
                (2 * p0.x - 5 * p1.x + 4 * p2.x - p3.x) * t2 +
                (-p0.x + 3 * p1.x - 3 * p2.x + p3.x) * t3
            );
            const y = 0.5 * (
                (2 * p1.y) +
                (-p0.y + p2.y) * t +
                (2 * p0.y - 5 * p1.y + 4 * p2.y - p3.y) * t2 +
                (-p0.y + 3 * p1.y - 3 * p2.y + p3.y) * t3
            );

            result.push({ x, y });
        }
    }

    // Ajoute le dernier point
    result.push(p[points.length - 1]);
    return result;
}

/**
 * Dessine une spline cardinale (courbe passant par tous les points).
 *
 * Signature originale C++ :
 *   Terrain::drawCardinalSpline(int x1, int y1, ..., int x11, int y11)
 *
 * 11 paramètres → jusqu'à 5 points de contrôle + couleur.
 * Utilisé pour les chemins sinueux entre bâtiments.
 *
 * @param ctx      Contexte Canvas 2D
 * @param points   Points de contrôle (2-5)
 * @param color    Couleur du trait
 * @param width    Épaisseur
 * @param tension  Tension (0=linéaire, 0.5=medium, 1=court)
 * @param fill     Couleur de remplissage (optionnel, pour surfaces)
 */
export function drawCardinalSpline(
    ctx: CanvasRenderingContext2D,
    points: Point[],
    color: string = 'rgba(139, 115, 85, 0.8)',
    width: number = 3,
    tension: number = 0.5,
    fill?: string
): void {
    if (points.length < 2) return;

    ctx.save();

    const curvePoints = computeCardinalSpline(points, tension);

    ctx.beginPath();
    ctx.moveTo(curvePoints[0].x, curvePoints[0].y);

    for (let i = 1; i < curvePoints.length; i++) {
        ctx.lineTo(curvePoints[i].x, curvePoints[i].y);
    }

    if (fill) {
        ctx.fillStyle = fill;
        ctx.fill();
    }

    ctx.strokeStyle = color;
    ctx.lineWidth = width;
    ctx.lineCap = 'round';
    ctx.lineJoin = 'round';
    ctx.setLineDash([]);
    ctx.stroke();

    ctx.restore();
}

/**
 * Exemple : tracer un chemin sinueux entre deux bâtiments.
 * Utilise une spline cardinale avec 3 points de contrôle.
 *
 * @param ctx  Contexte Canvas
 * @param from Point de départ (bâtiment A)
 * @param to   Point d'arrivée (bâtiment B)
 * @param mid  Point de passage intermédiaire (optionnel)
 */
export function drawPathBetween(
    ctx: CanvasRenderingContext2D,
    from: Point,
    to: Point,
    mid?: Point
): void {
    const points: Point[] = [from];

    if (mid) {
        // Ajoute un point de contrôle intermédiaire pour courber le chemin
        const midX = (from.x + to.x) / 2 + (mid.x || 0);
        const midY = (from.y + to.y) / 2 + (mid.y || 0);
        points.push({ x: midX, y: midY });
    }

    points.push(to);

    drawCardinalSpline(
        ctx, points,
        '#8b7355',  // Marron chemin
        4,           // Largeur
        0.3,         // Tension (courbe douce)
        undefined    // Pas de remplissage
    );
}

/**
 * Exemple : dessiner le rayon d'effet d'un bâtiment.
 * Utilise drawCircle avec remplissage semi-transparent.
 */
export function drawBuildingRadius(
    ctx: CanvasRenderingContext2D,
    cx: number, cy: number,
    radius: number,
    color: string = 'rgba(123, 201, 111, 0.15)'
): void {
    drawCircle(ctx, cx, cy, radius, 'rgba(123, 201, 111, 0.5)', color, true);
}

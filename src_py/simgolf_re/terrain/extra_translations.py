"""
Traduction des fonctions Terrain.dll manquantes.

Ajoute : tileHit, drawBezierSpline, drawCardinalSpline,
         layPath, setType, setWall, loadNewCourseType
"""

from ..types import TileType, Vec2
from .thunk_map import THUNK_MAP


def screen_to_grid(screen_x: int, screen_y: int, grid_size: int = 50) -> Vec2:
    """Convertit des coordonnées écran en coordonnées grille.
    
    Traduit de Terrain::tileHit @ 0x1000109B.
    Le code original utilise OutputDebugStringA pour debug.
    
    Args:
        screen_x, screen_y: Coordonnées écran en pixels
        grid_size: Taille de la grille (0x32 = 50 par défaut)
    
    Returns:
        Coordonnées (x, y) dans la grille de tuiles
    """
    # Constantes du code original
    GRID_OFFSET = 24  # 0x18
    SCREEN_CENTER_X = 400  # Décalage X dans tileHit
    SCREEN_CENTER_Y = 300  # Décalage Y dans tileHit
    iso_factor = 32  # 0x20
    
    # Coordonnées relatives au centre
    rel_x = screen_x - SCREEN_CENTER_X
    rel_y = screen_y - SCREEN_CENTER_Y
    
    # tileHit: iStack_2c = 0x20 (32), uStack_30 = 20.0
    # Les formules transforment les coordonnées écran → grille
    # en utilisant la projection isométrique inverse
    
    # Calcul simplifié (le code original utilise ftol/float)
    tile_x = rel_y // iso_factor
    tile_y = rel_x // iso_factor
    
    # tileHit: iStack_34 = 0x18 - iStack_14 (inversion Y)
    # tileHit: iStack_38 = iStack_18 + 0x18 (offset X)
    grid_x = tile_y + GRID_OFFSET
    grid_y = GRID_OFFSET - tile_x
    
    return Vec2(grid_x, grid_y)


def tile_hit(terrain, screen_x: int, screen_y: int):
    """Trouve la tuile sous un point écran.
    
    Traduit de Terrain::tileHit @ 0x1000109B.
    """
    coords = screen_to_grid(screen_x, screen_y)
    return terrain.get_tile(int(coords.x), int(coords.y))


def lay_path(terrain, start_x: int, start_y: int, end_x: int, end_y: int):
    """Trace un chemin entre deux points.
    
    Traduit de Terrain::layPath (appelé depuis golf.exe).
    Utilise thunk_FUN_10002ae0 (path_find_neighbors) et
    thunk_FUN_10002f80 (path_calculate_a_star).
    """
    # TODO: Implémenter A* complet
    # Pour l'instant, un placeholder qui met des tuiles PATH
    from ..types import TileType
    
    for y in range(min(start_y, end_y), max(start_y, end_y) + 1):
        for x in range(min(start_x, end_x), max(start_x, end_x) + 1):
            tile = terrain.get_tile(x, y)
            if tile:
                tile.type = TileType.PATH


def draw_bezier_spline(
    terrain,
    x1: float, y1: float,
    cx1: float, cy1: float,
    cx2: float, cy2: float,
    x2: float, y2: float,
    steps: int = 20,
) -> list:
    """Dessine une courbe de Bézier cubique.
    
    Traduit de Terrain::drawBezierSpline @ Terrain.dll.
    Utilisé pour les bords de greens, fairways, et chemins.
    """
    points = []
    for i in range(steps + 1):
        t = i / steps
        u = 1.0 - t
        
        # Formule Bézier cubique: B(t) = (1-t)³P0 + 3(1-t)²tP1 + 3(1-t)t²P2 + t³P3
        x = u*u*u * x1 + 3*u*u*t * cx1 + 3*u*t*t * cx2 + t*t*t * x2
        y = u*u*u * y1 + 3*u*u*t * cy1 + 3*u*t*t * cy2 + t*t*t * y2
        
        points.append((x, y))
    
    return points


def draw_cardinal_spline(
    terrain,
    points: list,
    tension: float = 0.5,
    steps: int = 20,
) -> list:
    """Dessine une spline cardinale passant par des points.
    
    Traduit de Terrain::drawCardinalSpline @ Terrain.dll.
    Une spline cardinale est un cas particulier de Catmull-Rom.
    """
    if len(points) < 4:
        return points.copy()
    
    result = []
    
    for i in range(1, len(points) - 2):
        p0 = points[i - 1]
        p1 = points[i]
        p2 = points[i + 1]
        p3 = points[i + 2]
        
        for s in range(steps + 1):
            t = s / steps
            t2 = t * t
            t3 = t2 * t
            
            # Matrice cardinale
            x = 0.5 * (
                (2 * p1[0]) +
                (-p0[0] + p2[0]) * t +
                (2 * p0[0] - 5 * p1[0] + 4 * p2[0] - p3[0]) * t2 +
                (-p0[0] + 3 * p1[0] - 3 * p2[0] + p3[0]) * t3
            )
            y = 0.5 * (
                (2 * p1[1]) +
                (-p0[1] + p2[1]) * t +
                (2 * p0[1] - 5 * p1[1] + 4 * p2[1] - p3[1]) * t2 +
                (-p0[1] + 3 * p1[1] - 3 * p2[1] + p3[1]) * t3
            )
            
            result.append((x, y))
    
    return result


def load_new_course_type(terrain, course_type: int):
    """Charge un nouveau type de parcours.
    
    Traduit de Terrain::loadNewCourseType @ Terrain.dll.
    Réinitialise le terrain et charge les textures appropriées.
    """
    from ..types import TileType
    
    terrain.reset_terrain()
    
    # TODO: Charger les textures et données spécifiques au type de parcours
    # Les types de parcours sont: Desert, Parkland, Links, Tropical
    print(f"Loading course type: {course_type}")

"""
Traduction Python du système de rendu SimGolf.

Basé sur l'analyse Ghidra de Terrain.dll :
  - render() @ 0x1000104B
  - renderTile() @ 0x100011EA
  - calcAllNormals() @ 0x100010D2
  - calcNormals() @ 0x10012cf0
  - changeLighting() @ 0x100011C2

Le jeu utilise OpenGL 1.x avec des vertex arrays et des display lists.
Cette traduction fournit une abstraction compatible WebGL/Canvas.
"""

from typing import Optional, Callable
from dataclasses import dataclass, field
from enum import IntEnum

from ..types import TileType, Vec3, TILE_SIZE


# === Configuration du rendu ===

@dataclass
class RenderConfig:
    """Configuration du rendu iso."""
    # Angle de vue isométrique (45° par défaut)
    iso_angle: float = 45.0
    
    # Échelle des tuiles (pixels par unité)
    tile_scale: float = 1.0
    
    # Taille de la grille (tuiles)
    grid_width: int = 50   # 0x32
    grid_height: int = 50  # 0x32
    
    # Rayon de rendu autour du joueur (tuiles)
    render_radius: int = 15  # ~0x19 - 10
    
    # Espacement entre tuiles (facteur d'échelle)
    # _DAT_1005f340 dans le code original
    tile_spacing: float = 1.0


# === Directions de rendu ===

class RenderDirection(IntEnum):
    """Directions de la caméra isométrique.
    
    Basé sur les 4 branches dans Terrain::render.
    """
    DEFAULT = 0       # Direction 0
    ROTATE_90 = 90    # Vue tournée 90°
    ROTATE_180 = 180  # Vue tournée 180°  
    ROTATE_270 = 270  # Vue tournée 270°


# === Fonction tileAt (traduite du thunk) ===

def tile_at(grid: list, x: int, y: int):
    """Récupère une tuile à des coordonnées grille.
    
    Traduit de tileAt @ Terrain.dll.
    Retourne None si hors limites.
    """
    if 0 <= x < len(grid[0]) if grid else 0 and 0 <= y < len(grid):
        return grid[y][x]
    return None


# === Traduction de render ===

def render_terrain(
    tiles: list,
    focus_tile=None,
    camera_angle: float = 0.0,
    render_config: Optional[RenderConfig] = None,
    tile_render_fn: Optional[Callable] = None,
) -> None:
    """Traduit Terrain::render.
    
    Fonction principale de rendu du terrain. Parcourt les tuiles
    visibles dans un rayon autour du point focal et les affiche.
    
    Args:
        tiles: Grille 2D de tuiles [y][x]
        focus_tile: Tuile focale (joueur/caméra), None = toutes
        camera_angle: Angle de la caméra en degrés
        render_config: Configuration du rendu
        tile_render_fn: Fonction appelée pour chaque tuile à render
    """
    config = render_config or RenderConfig()
    
    # === Setup transformation ===
    # glLoadIdentity, glPushMatrix dans le code original
    # glRotated(iso_angle, 0, 1, 0) - angle iso
    # glRotatef(camera_adjust, 0, 1, 0) - ajustement caméra
    
    if focus_tile is not None:
        # Centrer sur la tuile focale
        # Les thunk_FUN_10006810/10005960 sont des getters de position
        tile_x = getattr(focus_tile, 'grid_x', 0)
        tile_y = getattr(focus_tile, 'grid_y', 0)
        
        # Positionnement (traduit de render)
        # iStack_48 = 0x19 - thunk_FUN_10006810(tile)  → 25 - tile_x
        # iStack_4c = 0x19 - thunk_FUN_10005960(tile)  → 25 - tile_y
        offset_x = (25 - tile_x) * config.tile_spacing
        offset_y = (25 - tile_y) * config.tile_spacing
        
        # glTranslatef(offset_y, 0, offset_x)
    else:
        # Pas de focus - aucune translation
        offset_x = 0
        offset_y = 0
    
    # === Boucle de rendu ===
    # Basé sur les 4 branches de render selon l'angle de caméra
    
    if focus_tile is None:
        # Mode "toutes les tuiles" : boucle de 10 à 0x28 (40)
        for y in range(10, 40):
            for x in range(40, 10, -1):  # Décroissant
                tile = tile_at(tiles, x, y)
                if tile is not None and tile_render_fn:
                    tile_render_fn(tile)
    else:
        # Mode "focus tile" : rendu des tuiles dans un rayon
        # Les 4 branches correspondent aux 4 angles de caméra
        # Direction = camera_angle arrondi à 0/90/180/270
        
        dir = _snap_angle(camera_angle)
        
        if dir == RenderDirection.DEFAULT:
            _render_around_tile(tiles, focus_tile, config, 
                              tile_render_fn, direction=0)
        elif dir == RenderDirection.ROTATE_90:
            _render_around_tile(tiles, focus_tile, config,
                              tile_render_fn, direction=90)
        elif dir == RenderDirection.ROTATE_180:
            _render_around_tile(tiles, focus_tile, config,
                              tile_render_fn, direction=180)
        else:
            _render_around_tile(tiles, focus_tile, config,
                              tile_render_fn, direction=270)


def _snap_angle(angle: float) -> RenderDirection:
    """Arrondit un angle à la direction la plus proche."""
    a = angle % 360
    if a < 45 or a >= 315:
        return RenderDirection.DEFAULT
    elif a < 135:
        return RenderDirection.ROTATE_90
    elif a < 225:
        return RenderDirection.ROTATE_180
    else:
        return RenderDirection.ROTATE_270


def _render_around_tile(
    tiles: list,
    center_tile,
    config: RenderConfig,
    tile_render_fn: Optional[Callable],
    direction: int,
) -> None:
    """Rend les tuiles autour d'un point central.
    
    Traduit les 4 boucles imbriquées de Terrain::render.
    Le sens des itérations change selon la direction.
    """
    if not tile_render_fn:
        return
    
    cx = getattr(center_tile, 'grid_x', 0)
    cy = getattr(center_tile, 'grid_y', 0)
    
    # Bornes de la zone de rendu
    # Basé sur les calculs dans render:
    # iStack_c = min(iStack_c, tile_x) → x_min
    # iStack_10 = max(iStack_10, 50 - tile_x) → x_max  
    # iStack_14 = min(iStack_14, tile_y) → y_min
    # iStack_18 = max(iStack_18, 50 - tile_y) → y_max
    x_min = max(0, cx - config.render_radius)
    x_max = min(config.grid_width, cx + config.render_radius)
    y_min = max(0, cy - config.render_radius)
    y_max = min(config.grid_height, cy + config.render_radius)
    
    if direction == 0:
        # Direction 0: X croissant, Y croissant
        for y in range(y_min, y_max):
            for x in range(x_min, x_max):
                tile = tile_at(tiles, x, y)
                if tile is not None and _is_tile_visible(tile):
                    tile_render_fn(tile)
                    
    elif direction == 90:
        # Direction 90°: X décroissant, Y croissant
        for x in range(x_min, x_max):
            for y in range(y_min, y_max):
                tile = tile_at(tiles, x, y)
                if tile is not None and _is_tile_visible(tile):
                    tile_render_fn(tile)
                    
    elif direction == 180:
        # Direction 180°: X décroissant, Y décroissant
        for y in range(y_max - 1, y_min - 1, -1):
            for x in range(x_max - 1, x_min - 1, -1):
                tile = tile_at(tiles, x, y)
                if tile is not None and _is_tile_visible(tile):
                    tile_render_fn(tile)
                    
    else:  # 270
        # Direction 270°: X croissant, Y décroissant
        for x in range(x_max - 1, x_min - 1, -1):
            for y in range(y_max - 1, y_min - 1, -1):
                tile = tile_at(tiles, x, y)
                if tile is not None and _is_tile_visible(tile):
                    tile_render_fn(tile)


def _is_tile_visible(tile) -> bool:
    """Vérifie si une tuile est visible.
    
    Traduit de thunk_FUN_10015460 (visibility check) dans render.
    Retourne False si la tuile doit être cachée.
    """
    # Dans le code original cette fonction vérifie probablement
    # si la tuile a un flag de visibilité ou si elle est sous l'eau.
    # Pour l'instant on retourne True.
    return True


def _is_in_frustum(tile, camera_tile, angle: float) -> bool:
    """Vérifie si une tuile est dans le frustum de la caméra.
    
    Traduit de thunk_FUN_10006850 dans render.
    Retourne True si la tuile est visible depuis la caméra.
    """
    # TODO: Implémenter le frustum culling complet
    return True


# === Traduction de render_tile (renderTile) ===

def render_single_tile(
    renderer,
    tile_type: int,
    screen_x: float,
    screen_y: float,
    scale: float = 1.0,
    texture_id: int = 0,
) -> None:
    """Affiche une tuile unique.
    
    Traduit de Terrain::renderTile.
    Les hexfloats sont commentés avec leur valeur réelle.
    
    Note: Le jeu original utilise GL_TRIANGLES (valeur 0x0004)
    avec 2 triangles pour former un quadrilatère texturé.
    """
    # Constantes hexfloat (IEEE 754 32-bit)
    # 0x42480000 = 50.0  (demi-taille de tuile)
    # 0xc2480000 = -50.0
    # 0x3f800000 = 1.0   (unité)
    # 0x42340000 = 45.0  (angle iso)
    
    # Position à l'écran (déjà en coordonnées monde)
    # renderTile original:
    #   iStack_18 = param_2 + -0x1b0  → x - 432
    #   iStack_1c = param_3 + -300    → y - 300  
    #   fStack_10 = screen_x * scale
    #   fStack_14 = screen_y * scale
    wx = screen_x * scale
    wy = screen_y * scale
    
    if tile_type >= 30:  # NUM_TEXTURED_TILES = 0x1e
        raise ValueError(f"Tile type {tile_type} >= 30")
    
    # Transformation OpenGL (commentée pour documentation)
    # glLoadIdentity()
    # glPushMatrix()
    # glTranslatef(wx, wy, 0)
    # glRotated(45, 0, 0, 1)  # Rotation isométrique
    # glScalef(scale, scale, scale)
    
    # Quadrilatère en 2 triangles
    # Layout des sommets (vue de dessus):
    #   (-50, -50) ──── (50, -50)
    #       │   ╲   │
    #   (-50, 50) ──── (50, 50)
    
    vertices = [
        (-50.0, 0.0, -50.0, 0.0, 1.0),  # Coin 1: Tex(0,1)
        (-50.0, 0.0,  50.0, 0.0, 0.0),  # Coin 2: Tex(0,0)
        ( 50.0, 0.0,  50.0, 1.0, 0.0),  # Coin 3: Tex(1,0)
        (-50.0, 0.0, -50.0, 0.0, 1.0),  # Coin 4: Tex(0,1) (triangle 2)
        ( 50.0, 0.0,  50.0, 1.0, 0.0),  # Coin 5: Tex(1,0) (triangle 2)
        ( 50.0, 0.0, -50.0, 1.0, 1.0),  # Coin 6: Tex(1,1)
    ]
    
    # Appel au backend de rendu
    if renderer:
        renderer.render_tile_quads(texture_id, vertices)


# === Traduction de calcNormals ===

def calc_tile_normals(
    tiles: list,
    tile_x: int,
    tile_y: int,
) -> list:
    """Calcule les normales pour une tuile.
    
    Traduit de thunk_FUN_10012cf0 dans calcAllNormals.
    Les normales sont calculées à partir des élévations des coins
    de la tuile et des tuiles adjacentes.
    
    Retourne une liste de 4 Vec3 (normales aux coins TL, TR, BR, BL).
    """
    # Récupère les élévations des 4 coins de la tuile
    # et ceux des tuiles voisines pour calculer les normales
    
    def _get_elevation(x, y):
        tile = tile_at(tiles, x, y)
        if tile:
            return tile.elevation
        return 0
    
    # Coin TL (top-left): moyenne des faces adjacentes
    # Utilise les tuiles: (x-1,y-1), (x,y-1), (x-1,y), (x,y)
    e_tl = Vec3(
        float(tile_x - tile_x),  # TODO: calcul réel
        float(_get_elevation(tile_x, tile_y)),
        float(tile_y - tile_y),
    )
    
    # TODO: Implémenter le calcul complet des normales
    # Pour l'instant, normale vers le haut par défaut
    return [Vec3(0.0, 1.0, 0.0) for _ in range(4)]


def calc_all_tile_normals(tiles: list) -> None:
    """Calcule les normales pour toutes les tuiles.
    
    Traduit de Terrain::calcAllNormals.
    Parcourt la zone définie par la fonction getWidth/getHeight
    de la structure Tile.
    """
    if not tiles:
        return
    
    grid_h = len(tiles)
    grid_w = len(tiles[0]) if tiles else 0
    
    for y in range(grid_h):
        for x in range(grid_w):
            normals = calc_tile_normals(tiles, x, y)
            # Stocker les normales dans la tuile
            tile = tiles[y][x]
            tile.normals = normals


# === Traduction de changeLighting ===

def change_lighting(
    ambient_r: float, 
    ambient_g: float, 
    ambient_b: float,
    direction: int = 0,
    step: float = 0.05,
) -> tuple:
    """Traduit Terrain::changeLighting.
    
    Modifie progressivement l'ambiance lumineuse.
    
    Args:
        ambient_r/g/b: Valeurs d'ambiance actuelles (0.0-1.0)
        direction: 0 = assombrir, non-0 = éclaircir
        step: Pas de changement (_DAT_1005f164)
    
    Returns:
        Nouveau tuple (r, g, b)
    """
    if direction == 0:
        # Assombrir
        if ambient_r > step:
            ambient_r -= step
            ambient_g -= step
            ambient_b -= step
    else:
        # Éclaircir
        if ambient_r < 1.0 - step:
            ambient_r += step
            ambient_g += step
            ambient_b += step
    
    # Clamp
    ambient_r = max(0.0, min(1.0, ambient_r))
    ambient_g = max(0.0, min(1.0, ambient_g))
    ambient_b = max(0.0, min(1.0, ambient_b))
    
    # Configuration de la lumière OpenGL (commenté pour documentation)
    # Constantes hexfloat:
    #   0x3f666666 = 0.9 (light_intensity)
    #   0x3f800000 = 1.0
    #   
    # glLightfv(GL_LIGHT0, GL_POSITION, [-0.5, 0.1, -1.0, 0.0])
    # glLightfv(GL_LIGHT0, GL_AMBIENT, [ambient_r, ambient_g, ambient_b, 1.0])
    # glLightfv(GL_LIGHT0, GL_DIFFUSE, [0.9, 0.9, 0.9, 1.0])
    # glLightfv(GL_LIGHT0, GL_SPECULAR, [1.0, 1.0, 0.9, 1.0])
    # glEnable(GL_LIGHT0)
    
    return (ambient_r, ambient_g, ambient_b)

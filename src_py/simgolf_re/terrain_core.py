"""
Traduction Python des méthodes de Terrain.dll (FUN_10001000-1000FFFF).

Basée sur le code décompilé par Ghidra, fichier par fichier.
Les thunks (FUN_100*) restent en attente de traduction dans les modules spécialisés.
"""

import math
from typing import Optional

from ._terrain_types import (
    TileStruct, Terrain, SurfaceType,
    TILE_STRIDE, TILE_ARRAY_OFFSET,
    RENDER_MIN, RENDER_MAX,
    DEFAULT_GRID_W, DEFAULT_GRID_H,
)


# ==============================================================================
# tileAt @ 0x1000108C
# ==============================================================================
def tile_at(terrain: Terrain, x: int, y: int) -> Optional[TileStruct]:
    """
    Terrain::tileAt(x, y) → Tile*

    Vérifie les bornes [0, grid_w) × [0, grid_h).
    Retourne un pointeur simulé vers la Tile au stride 0x248.
    """
    if x < 0 or x >= terrain.grid_w:
        return None
    if y < 0 or y >= terrain.grid_h:
        return None
    idx = y * terrain.grid_w + x
    if idx < 0 or idx >= len(terrain.tiles):
        return None
    return terrain.tiles[idx]


# ==============================================================================
# calcAllNormals @ 0x100010D2
# ==============================================================================
def calc_all_normals(terrain: Terrain, tile: TileStruct) -> None:
    """
    Terrain::calcAllNormals(Tile*)

    Boucle sur toutes les tiles depuis la position de `tile` et appelle
    le calcul de normales (thunk_FUN_10012cf0) sur chaque tile trouvée.

    Le rayon de la boucle est déterminé par:
      ray = 0xd << (field_1c & 0x1f)
    Comme field_1c = 0 par défaut, ray = 0xd = 13.
    """
    # thunk_FUN_10006810 = get tile X
    # thunk_FUN_10005960 = get tile Y
    tile_x = tile.grid_x
    tile_y = tile.grid_y

    ray = 0x0D << (terrain.field_1c & 0x1F)  # par défaut: 13

    min_x = tile_x
    max_x = tile_x
    min_y = tile_y - ray
    max_y = tile_y

    # Boucle originale:
    #   iStack_20 = thunk_FUN_10006810(param_1) - ray   # start_y = tile_y - 13
    #   while thunk_FUN_10006810(param_1) + ray > iStack_20:
    #     iStack_24 = thunk_FUN_10005960(param_1) + ray  # start_x = tile_x + 13
    #     while iStack_24 > thunk_FUN_10005960(param_1) - ray:
    #       pTStack_c = tileAt(pTStack_8, iStack_24, iStack_20)
    #       if pTStack_c != 0: thunk_FUN_10012cf0(pTStack_c)  # calc_normals
    #       iStack_24 -= 1
    #     iStack_20 += 1

    for cur_y in range(min_y, tile_y + ray + 1):
        for cur_x in range(tile_x - ray, tile_x + ray + 1):
            t = tile_at(terrain, cur_x, cur_y)
            if t is not None:
                _calc_tile_normals(t)


def _calc_tile_normals(tile: TileStruct) -> None:
    """
    thunk_FUN_10012cf0 — calcul des normales pour une Tile.

    Version simplifiée : dans le vrai code, ceci calcule les vecteurs
    normaux à partir des 4 coins de la tile.
    """
    # Note: la vraie implémentation (FUN_10012cf0.c) reste à traduire
    pass


# ==============================================================================
# getInstance @ 0x10001136
# ==============================================================================
_instance: Optional[Terrain] = None

def get_instance() -> Terrain:
    """
    Terrain::getInstance() — singleton statique.

    Crée un objet Terrain de 0x164AD0 bytes avec une grille 50×50.
    """
    global _instance
    if _instance is None:
        _instance = Terrain(DEFAULT_GRID_W, DEFAULT_GRID_H)
    return _instance


# ==============================================================================
# initSystem @ 0x100012E4
# ==============================================================================
def init_system(terrain: Terrain,
                width: int,
                height: int,
                hdc: Optional[int] = None,
                flip_y: bool = False) -> None:
    """
    Terrain::initSystem(width, height, HDC*, flip_y)

    Initialise le contexte OpenGL (ChoosePixelFormat, SetPixelFormat,
    wglCreateContext, wglMakeCurrent) puis appelle resize().

    Stocke width/height dans viewport_w/viewport_h.
    """
    if terrain._hglrc == 0:
        pass  # Les appels WGL sont pour le contexte Windows
    terrain.flip_y = flip_y
    # thunk_FUN_100033e0() — init des données de textures ?
    # thunk_FUN_100037e0() — init des données d'éclairage ?
    # thunk_FUN_100076e0(this) — init des listes d'affichage ?
    resize(terrain, width, height)
    terrain.viewport_w = width
    terrain.viewport_h = height

    # Initialisation de DAT_10070a10 selon la résolution
    if width == 800 and height == 600:
        pass  # DAT_10070a10 = 0x421aba8f (= 42.682...)
    elif width == 1024 and height == 768:
        pass  # DAT_10070a10 = 0x42222a9a (= 40.5417...)
    elif width == 1280 and height == 1024:
        pass  # DAT_10070a10 = 0x42235431 (= 40.8328...)


# ==============================================================================
# resize @ 0x100012F8
# ==============================================================================
def resize(terrain: Terrain, width: int, height: int) -> None:
    """
    Terrain::resize(width, height)

    Configure le viewport OpenGL et la matrice de projection orthographique.
    """
    if height == 0:
        height = 1
    if width == 0:
        width = 1

    # glViewport(0, 0, width, height)
    # glMatrixMode(GL_PROJECTION)
    # glLoadIdentity()

    # Correction des dimensions pour la projection
    if width == 800 and height == 600:
        w, h = 0x6E7, 0x52D  # 1767, 1325
    elif width == 1024 and height == 768:
        w, h = 0x712, 0x517  # 1810, 1303
    elif width == 1280 and height == 1024:
        w, h = 0x6CC, 0x570  # 1740, 1392
    else:
        w, h = width, height

    half_w = w >> 1
    half_h = h >> 1

    if not terrain.flip_y:
        # glOrtho(-half_w, half_w, -half_h, half_h, 0, 576.0, 0, -576.0)
        pass
    else:
        # glOrtho(-half_w, half_w, half_h, -half_h, 0, 576.0, 0, -576.0)
        pass

    # glMatrixMode(GL_MODELVIEW)
    # glLoadIdentity()


# ==============================================================================
# setWall @ 0x10001014
# ==============================================================================
def set_wall(terrain: Terrain, tile: TileStruct, param2: int,
             param3: int, param4: bool) -> None:
    """
    Terrain::setWall(Tile*, int, int, bool)

    Délègue à thunk_FUN_10015400(param_1, param_2, param_3, param_4).
    """
    _thunk_set_wall(tile, param2, param3, param4)


def _thunk_set_wall(tile: TileStruct, p2: int, p3: int, p4: bool) -> None:
    """thunk_FUN_10015400 — à traduire depuis FUN_10015400.c"""
    pass


# ==============================================================================
# getWall @ 0x10001670
# ==============================================================================
def get_wall(terrain: Terrain, tile: TileStruct, param2: int) -> bool:
    """
    Terrain::getWall(Tile*, int) → bool

    Délègue à thunk_FUN_10015610.
    """
    return _thunk_get_wall(tile, param2)


def _thunk_get_wall(tile: TileStruct, p2: int) -> bool:
    """thunk_FUN_10015610 — à traduire depuis FUN_10015610.c"""
    return False


# ==============================================================================
# hasConnectedPath @ 0x10001570
# ==============================================================================
def has_connected_path(terrain: Terrain, x: int, y: int) -> bool:
    """
    Terrain::hasConnectedPath(int, int) → bool
    Vérifie si la tile (x, y) a un chemin connecté.
    """
    tile = tile_at(terrain, x, y)
    if tile is None:
        return False
    # thunk_FUN_100158e0 — true si la tile a un chemin
    return _thunk_has_path(tile)


def _thunk_has_path(tile: TileStruct) -> bool:
    """thunk_FUN_100158e0 — à traduire"""
    return False


# ==============================================================================
# hasPath @ 0x10001610
# ==============================================================================
def has_path(terrain: Terrain, tile: TileStruct) -> bool:
    """
    Terrain::hasPath(Tile*) → bool
    """
    return _thunk_has_path(tile)


# ==============================================================================
# getType @ 0x10001730
# ==============================================================================
def get_type(terrain: Terrain, tile: TileStruct) -> int:
    """
    Terrain::getType(Tile*) → int

    Retourne le type de surface de la tile.
    Délègue à thunk_FUN_1000d820.
    """
    return _thunk_get_type(tile)


def _thunk_get_type(tile: TileStruct) -> int:
    """thunk_FUN_1000d820 — à traduire"""
    return 0


# ==============================================================================
# setType @ 0x10001750
# ==============================================================================
def set_type(terrain: Terrain, tile: TileStruct, type_id: int,
             variation: int) -> None:
    """
    Terrain::setType(Tile*, int type, int variation)
    """
    _thunk_set_type(tile, type_id, variation)


def _thunk_set_type(tile: TileStruct, type_id: int, var: int) -> None:
    """thunk_FUN_1000dac0 — à traduire"""
    tile.tex_sel_0 = type_id
    tile.tex_sel_1 = var


# ==============================================================================
# getVariation @ 0x100015C0
# ==============================================================================
def get_variation(terrain: Terrain, tile: TileStruct) -> int:
    """Terrain::getVariation(Tile*) → int"""
    return _thunk_get_variation(tile)


def _thunk_get_variation(tile: TileStruct) -> int:
    """thunk_FUN_1000db20 — à traduire"""
    return 0


# ==============================================================================
# getElevation @ 0x100011B8
# ==============================================================================
def get_elevation(terrain: Terrain, tile: TileStruct, corner: int) -> int:
    """
    Terrain::getElevation(Tile*, int corner) → int

    Retourne l'élévation d'un coin spécifique de la tile.
    """
    # thunk_FUN_1000c360(tile, corner) — à traduire
    return 0


# ==============================================================================
# render @ 0x1000104B
# ==============================================================================
def render(terrain: Terrain,
           center_tile: Optional[TileStruct] = None,
           angle: float = 0.0) -> None:
    """
    Terrain::render(Tile* center_tile, float angle)

    Fonction principale de rendu.
    Configure la matrice de vue (rotation + translation) puis itère
    sur les tiles visibles dans l'ordre Z (4 directions de caméra).

    angle:  0° (DEFAULT), 90° (SOUTH), 180° (WEST), 270° (NORTH)

    Sans center_tile: rend toutes les tiles de (10..39)×(10..39).
    Avec center_tile: rend uniquement le voisinage visible.
    """
    # Étape 1: Configuration de la vue
    # glLoadIdentity()
    # glPushMatrix()
    # glRotated(DAT_10070a10, 0, 1, 0)  # rotation Y
    # glRotatef(DAT_1005f344 + angle, 0, 1, 0)  # rotation Y additionnelle

    if center_tile is not None:
        # Translation vers le centre
        # thunk_FUN_10006810 = get_x(center_tile)
        # thunk_FUN_10005960 = get_y(center_tile)
        cx = center_tile.grid_x
        cy = center_tile.grid_y

        # glTranslatef((0x19 - cx) * DAT_1005f340, 0, (0x19 - cy) * DAT_1005f340)
        pass

    # Étape 2: Pré-rendu (thunk_FUN_1000adc0)
    _pre_render(angle)

    # Étape 3: Itération sur les tiles
    if center_tile is None:
        # Rendu plein : toutes les tiles visibles
        for y in range(RENDER_MIN, RENDER_MAX + 1):
            for x in range(RENDER_MIN, RENDER_MAX + 1):
                t = tile_at(terrain, x, y)
                if t is not None:
                    _render_single_tile(t)
    else:
        # Rendu centré : 4 directions
        ray = 0x10 << (terrain.field_1c & 0x1F)  # par défaut: 16

        if angle == 0.0:
            _render_dir_0(terrain, center_tile, ray, angle)
        elif angle == 90.0:
            _render_dir_90(terrain, center_tile, ray, angle)
        elif angle == 180.0:
            _render_dir_180(terrain, center_tile, ray, angle)
        else:
            _render_dir_270(terrain, center_tile, ray, angle)

    # glPopMatrix()
    # glFlush()


def _pre_render(angle: float) -> None:
    """
    thunk_FUN_1000adc0(angle) — pré-rendu (ciel, brouillard, etc.)
    À traduire depuis FUN_1000adc0.c
    """
    pass


def _render_dir_0(terrain: Terrain, center: TileStruct, ray: int,
                  angle: float) -> None:
    """Direction 0° : balayage Ouest→Est, Sud→Nord (Z-order)."""
    start_y = center.grid_y - ray
    end_y = center.grid_y + ray
    start_x = center.grid_x + ray
    end_x = center.grid_x - ray

    for y in range(start_y, end_y + 1):
        for x in range(start_x, end_x - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, angle):
                    _render_single_tile(t)


def _render_dir_90(terrain: Terrain, center: TileStruct, ray: int,
                   angle: float) -> None:
    """Direction 90° : rendu depuis le Sud."""
    start_x = center.grid_x + ray
    end_x = center.grid_x - ray
    start_y = center.grid_y + ray
    end_y = center.grid_y - ray

    for x in range(start_x, end_x - 1, -1):
        for y in range(start_y, end_y - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, 90.0):
                    _render_single_tile(t)


def _render_dir_180(terrain: Terrain, center: TileStruct, ray: int,
                    angle: float) -> None:
    """Direction 180° : rendu depuis l'Ouest."""
    start_y = center.grid_y + ray
    end_y = center.grid_y - ray
    start_x = center.grid_x + ray
    end_x = center.grid_x - ray

    for y in range(start_y, end_y - 1, -1):
        for x in range(start_x, end_x - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, 180.0):
                    _render_single_tile(t)


def _render_dir_270(terrain: Terrain, center: TileStruct, ray: int,
                    angle: float) -> None:
    """Direction 270° (angle par défaut) : rendu depuis le Nord."""
    start_x = center.grid_x - ray
    end_x = center.grid_x + ray
    start_y = center.grid_y - ray
    end_y = center.grid_y + ray

    for x in range(start_x, end_x + 1):
        for y in range(start_y, end_y + 1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, angle):
                    _render_single_tile(t)


def _is_culled(tile: TileStruct) -> bool:
    """
    thunk_FUN_10015460(Tile*) → bool

    Vérifie si la tile est cachée (cullée) — e.g. sous l'eau,
    ou pas visible.
    """
    return bool(tile.cull_flag)


def _visibility_test(terrain: Terrain, tile: TileStruct,
                     center: TileStruct, angle: float) -> bool:
    """
    thunk_FUN_10006850(Terrain*, Tile*, Tile*, float) → bool

    Test de visibilité / occlusion.
    Retourne True si la tile ne doit PAS être rendue.
    """
    return False


def _render_single_tile(tile: TileStruct) -> None:
    """
    thunk_FUN_1000e6c0(Tile*) — rend une tile.

    Appelle renderTile() ou stripRender() selon la tile.
    À traduire depuis FUN_1000e6c0.c
    """
    # tile.render(terrain, angle)
    pass


# ==============================================================================
# renderTile @ 0x100011EA
# ==============================================================================
def render_tile(terrain: Terrain,
                param1: int, param2: int, param3: int,
                param4: int, param5: int) -> None:
    """
    Terrain::renderTile(int, int, int, int, int)

    Configure une tile pour le rendu OpenGL.
    Calcule la position écran à partir des coordonnées de la tile.

    fStack_c = param4 / param5  (ratio d'affichage)
    iStack_18 = param2 - 0x1b0  (décalage X)
    iStack_1c = param3 - 300    (décalage Y)
    fStack_10 = iStack_18 * DAT_1005f02c  (position X en unités monde)
    fStack_14 = iStack_1c * DAT_1005f02c  (position Y en unités monde)

    Puis:
      glLoadIdentity()
      glPushMatrix()
      glTranslatef(fStack_10, fStack_14, 0)
    """
    ratio = param4 / param5 if param5 != 0 else 1.0
    offset_x = param2 - 0x1B0
    offset_y = param3 - 300
    world_x = offset_x * 0.0  # DAT_1005f02c = constante d'échelle
    world_y = offset_y * 0.0
    # glTranslatef(world_x, world_y, 0)
    pass


# ==============================================================================
# changeLighting @ 0x10001390
# ==============================================================================
def change_lighting(terrain: Terrain, mode: int) -> None:
    """
    Terrain::changeLighting(int mode)

    Change le mode d'éclairage ambiant.
    mode 0 = jour, mode 1 = nuit, etc.
    """
    # Lit DAT_10070a14 (mode d'éclairage courant)
    # Met à jour les couleurs ambiantes
    pass


# ==============================================================================
# initTerrain @ 0x100013F4
# ==============================================================================
def init_terrain(terrain: Terrain) -> None:
    """
    Terrain::initTerrain()

    Initialise/réinitialise le terrain.
    Appelle thunk_FUN_10009c80() et thunk_FUN_1000c7c0().
    """
    # thunk_FUN_10009c80() — reset de la mémoire ?
    # thunk_FUN_1000c7c0() — init des tiles ?
    pass


# ==============================================================================
# resetTerrain @ 0x10001429
# ==============================================================================
def reset_terrain(terrain: Terrain) -> None:
    """
    Terrain::resetTerrain()

    Réinitialise complètement le terrain.
    """
    # thunk_FUN_1000ba80() — reset ?
    pass


# ==============================================================================
# closeSystem @ 0x1000145C
# ==============================================================================
def close_system(terrain: Terrain) -> None:
    """
    Terrain::closeSystem()

    Nettoie les ressources OpenGL.
    """
    if terrain._hglrc != 0:
        # wglMakeCurrent(NULL, NULL)
        # wglDeleteContext(terrain._hglrc)
        terrain._hglrc = 0


# ==============================================================================
# tileHit @ 0x10001194
# ==============================================================================
def tile_hit(terrain: Terrain, screen_x: int, screen_y: int) -> Optional[TileStruct]:
    """
    Terrain::tileHit(int screen_x, int screen_y) → Tile*

    Convertit des coordonnées écran en tile (raycasting inverse).
    """
    # thunk_FUN_1000eb10(screen_x, screen_y) — à traduire
    return None


# ==============================================================================
# loadNewCourseType @ 0x10001530
# ==============================================================================
def load_new_course_type(terrain: Terrain, course_type: int) -> None:
    """
    Terrain::loadNewCourseType(int course_type)

    Charge un nouveau type de parcours (désert, alpin, etc.).
    """
    pass


# ==============================================================================
# lowerCorner @ 0x1000116B
# ==============================================================================
def lower_corner(terrain: Terrain, tile: TileStruct, corner: int) -> None:
    """
    Terrain::lowerCorner(Tile*, int corner)

    Abaisse l'élévation d'un coin de la tile.
    """
    _thunk_lower_corner(tile, corner)


def _thunk_lower_corner(tile: TileStruct, corner: int) -> None:
    """thunk_FUN_1000cba0 — à traduire"""
    pass


# ==============================================================================
# lowerEdgeCorner @ 0x100011EA
# ==============================================================================
def lower_edge_corner(terrain: Terrain, tile_a: TileStruct, corner: int,
                      tile_b: TileStruct, amount: float) -> None:
    """
    Terrain::lowerEdgeCorner(Tile*, int, Tile*, float)
    """
    pass


# ==============================================================================
# calcNormals (single tile) @ 0x10001362
# ==============================================================================
def calc_normals(terrain: Terrain, tile: TileStruct) -> None:
    """
    Terrain::calcNormals(Tile*)

    Calcule les normales pour une seule tile.
    """
    _calc_tile_normals(tile)


# ==============================================================================
# drawBezierSpline @ 0x10001496
# ==============================================================================
def draw_bezier_spline(terrain: Terrain,
                        x1: int, y1: int, x2: int, y2: int,
                        x3: int, y3: int, x4: int, y4: int,
                        segments: int) -> None:
    """
    Terrain::drawBezierSpline(...)

    Dessine une courbe de Bézier cubique entre 4 points de contrôle.
    Utilise SPLINE_SUBDIVISIONS = 9 subdivisions.
    """
    for i in range(segments + 1):
        t = i / segments
        # Évaluation cubique de Bézier pour chaque segment
        inv_t = 1.0 - t
        bx = (inv_t ** 3) * x1 + 3 * (inv_t ** 2) * t * x2 + 3 * inv_t * (t ** 2) * x3 + (t ** 3) * x4
        by = (inv_t ** 3) * y1 + 3 * (inv_t ** 2) * t * y2 + 3 * inv_t * (t ** 2) * y3 + (t ** 3) * y4
        _draw_spline_point(terrain, int(bx), int(by))


# ==============================================================================
# drawCardinalSpline @ 0x10001510
# ==============================================================================
def draw_cardinal_spline(terrain: Terrain,
                          x1: int, y1: int, x2: int, y2: int,
                          x3: int, y3: int, x4: int, y4: int,
                          segments: int, tension: int, num_points: int) -> None:
    """
    Terrain::drawCardinalSpline(...)

    Dessine une spline cardinale (Catmull-Rom) entre x2/y2 et x3/y3.
    """
    for i in range(segments + 1):
        t = i / segments
        # Calcul Catmull-Rom
        t2 = t * t
        t3 = t2 * t
        h1 = -t3 + 2 * t2 - t
        h2 = 3 * t3 - 5 * t2 + 2
        h3 = -3 * t3 + 4 * t2 + t
        h4 = t3 - t2
        cx = (h1 * x1 + h2 * x2 + h3 * x3 + h4 * x4) / 2
        cy = (h1 * y1 + h2 * y2 + h3 * y3 + h4 * y4) / 2
        _draw_spline_point(terrain, int(cx), int(cy))


def _draw_spline_point(terrain: Terrain, x: int, y: int) -> None:
    """
    Dessine un point de spline sur le terrain (thunk interne).
    """
    t = tile_at(terrain, x, y)
    if t is not None:
        _render_single_tile(t)


# ==============================================================================
# drawCircle @ 0x10001590
# ==============================================================================
def draw_circle(terrain: Terrain, center: TileStruct, radius: float) -> None:
    """
    Terrain::drawCircle(Tile* center, float radius)
    """
    pass


# ==============================================================================
# drawLine @ 0x100015B0
# ==============================================================================
def draw_line(terrain: Terrain,
              x1: int, y1: int, x2: int, y2: int,
              width: int, color: int, flags: int) -> None:
    """
    Terrain::drawLine(...)
    """
    pass


# ==============================================================================
# pathUpdateRender @ 0x100014EB
# ==============================================================================
def path_update_render(terrain: Terrain, tile: TileStruct, angle: float) -> None:
    """
    Terrain::pathUpdateRender(Tile*, float)
    """
    pass


# ==============================================================================
# stripRender @ 0x10001D50
# ==============================================================================
def strip_render(terrain: Terrain, tile: TileStruct,
                 param2: int, param3: float) -> None:
    """
    Terrain::stripRender(Tile*, int, float)
    """
    pass


# ==============================================================================
# localRender @ 0x1000134B
# ==============================================================================
def local_render(terrain: Terrain, tile_a: TileStruct,
                 tile_b: TileStruct, param3: float) -> None:
    """
    Terrain::localRender(Tile*, Tile*, float)
    """
    pass


# ==============================================================================
# passCollarInfo @ 0x100014D0
# ==============================================================================
def pass_collar_info(terrain: Terrain, data: list, count: int) -> None:
    """
    Terrain::passCollarInfo(int* const, int)
    """
    pass


# ==============================================================================
# setZoomLevel @ 0x100015E0
# ==============================================================================
def set_zoom_level(terrain: Terrain, level: int) -> None:
    """
    Terrain::setZoomLevel(int)
    """
    pass


# ==============================================================================
# updatePath @ 0x100015F0
# ==============================================================================
def update_path(terrain: Terrain, x: int, y: int, flags: int) -> None:
    """
    Terrain::updatePath(int, int, int)
    """
    pass


# ==============================================================================
# layPath @ 0x10001690
# ==============================================================================
def lay_path(terrain: Terrain, tile: TileStruct,
             path_type: int, width: int) -> None:
    """
    Terrain::layPath(Tile*, int, int)
    """
    pass


# ==============================================================================
# setSplineHeight @ 0x100016C0
# ==============================================================================
def set_spline_height(terrain: Terrain, height: float) -> None:
    """
    Terrain::setSplineHeight(float)
    """
    pass


# ==============================================================================
# elevateCorner @ 0x100016E0
# ==============================================================================
def elevate_corner(terrain: Terrain, tile: TileStruct, corner: int) -> None:
    """
    Terrain::elevateCorner(Tile*, int corner)

    Augmente l'élévation d'un coin de la tile.
    """
    _thunk_elevate_corner(tile, corner)


def _thunk_elevate_corner(tile: TileStruct, corner: int) -> None:
    """thunk_FUN_1000cd30 — à traduire"""
    pass

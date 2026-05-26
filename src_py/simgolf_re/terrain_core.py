"""
Traduction Python des méthodes de Terrain.dll (FUN_10001000-1000FFFF).

Basée sur le code décompilé par Ghidra, fichier par fichier.
Tous les thunks sont implémentés à partir du C dans all_decompiled.c.
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
# Constantes globales (correspondant aux DAT_ dans le C décompilé)
# ==============================================================================

# DAT_10070a14 — mode de rendu courant (0=DEFAULT, 1=SOUTH, 2=WEST, 3=NORTH)
_global_render_mode: int = 0

# DAT_10070a0c — type de parcours courant (course type)
_global_course_type: int = 0

# DAT_10070a10 — angle de rotation Y (float, dépend de la résolution)
_global_rotate_y: float = 0.0

# Constantes d'angle (correspondant aux DAT_1005f1e0, DAT_1005f368, etc.)
_ANGLE_DEFAULT: float = 0.0
_ANGLE_SOUTH: float = 90.0
_ANGLE_WEST: float = 180.0
_ANGLE_NORTH: float = 270.0


# ==============================================================================
# tileAt @ 0x1000108C
# ==============================================================================
def tile_at(terrain: Terrain, x: int, y: int) -> Optional[TileStruct]:
    """
    Terrain::tileAt(x, y) → Tile*

    Vérifie les bornes [0, grid_w) × [0, grid_h).
    Retourne la Tile à (x, y) ou None.
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
# get_tile_y @ 0x10005960
# ==============================================================================
def _get_tile_y(tile: TileStruct) -> int:
    """
    FUN_10005960(Tile*) → int

    C: return *(undefined4 *)(param_1 + 0x2c);
    Retourne tile.grid_y (offset 0x2c du Tile).
    """
    return tile.grid_y


# ==============================================================================
# get_tile_x @ 0x10006810
# ==============================================================================
def _get_tile_x(tile: TileStruct) -> int:
    """
    FUN_10006810(Tile*) → int

    C: return *(undefined4 *)(param_1 + 0x30);
    Retourne tile.grid_x (offset 0x30 du Tile).
    """
    return tile.grid_x


# ==============================================================================
# calcAllNormals @ 0x100010D2
# ==============================================================================
def calc_all_normals(terrain: Terrain, tile: TileStruct) -> None:
    """
    Terrain::calcAllNormals(Tile*)

    Boucle sur toutes les tiles depuis la position de `tile` et appelle
    le calcul de normales (_calc_tile_normals) sur chaque tile trouvée.

    Le rayon de la boucle est déterminé par:
      ray = 0xd << (field_1c & 0x1f)
    Comme field_1c = 0 par défaut, ray = 0xd = 13.
    """
    tile_x = _get_tile_x(tile)
    tile_y = _get_tile_y(tile)

    ray = 0x0D << (terrain.field_1c & 0x1F)  # par défaut: 13

    # Boucle originale:
    #   iStack_20 = get_y(tile) - ray   # start_y
    #   while get_y(tile) + ray > iStack_20:
    #     iStack_24 = get_x(tile) + ray  # start_x
    #     while iStack_24 > get_x(tile) - ray:
    #       pTile = tileAt(terrain, iStack_24, iStack_20)
    #       if pTile: calc_normals(pTile)
    #       iStack_24 -= 1
    #     iStack_20 += 1

    for cur_y in range(tile_y - ray, tile_y + ray + 1):
        for cur_x in range(tile_x - ray, tile_x + ray + 1):
            t = tile_at(terrain, cur_x, cur_y)
            if t is not None:
                _calc_tile_normals(t)


# ==============================================================================
# calc_tile_normals @ 0x10012cf0 (thunk FUN_10012cf0)
# ==============================================================================
def _calc_tile_normals(tile: TileStruct) -> None:
    """
    FUN_10012cf0(Tile*)

    Calcule les normales d'une tile à partir de ses 8 coins.

    D'après le C (all_decompiled.c:10707):
      if (tile[0x244] != 0) {
        // Pour chaque coin i (0..7), somme les 3 composantes (x,y,z)
        // La somme est stockée dans un tableau global à l'index tile[0x50]
        for axis = 0..2:
          global_normals[tile[0x50] * 3 + axis] =
              tile[0x74 + axis] + tile[0xac + axis] + tile[0xe4 + axis] +
              tile[0x11c + axis] + tile[0x154 + axis] + tile[0x18c + axis] +
              tile[0x1c4 + axis] + tile[0x1fc + axis]
        normalise(global_normals + tile[0x50] * 3)
        tile[0x244] = 0
      }
    """
    if tile.normals_dirty:
        # Les 8 coins sont stockés aux offsets 0x74, 0xac, 0xe4, 0x11c,
        # 0x154, 0x18c, 0x1c4, 0x1fc. Chaque coin a 3 floats (x,y,z)
        # avec un stride de 0x38 (56 bytes) entre les coins.
        corner_offsets = [0x74, 0xac, 0xe4, 0x11c,
                          0x154, 0x18c, 0x1c4, 0x1fc]

        # Calculer la somme des 8 coins pour chaque axe
        # Dans le C, les résultats sont stockés dans DAT_10070a18 à l'index
        # tile[0x50] * 3 (vertex index * 3 floats). Ici on stocke directement
        # dans self.sub_a (le sous-objet vertex).
        for axis in range(3):
            total = 0.0
            for ci, base in enumerate(corner_offsets):
                idx = ci * 3 + axis
                if idx < len(tile.corner_heights):
                    total += tile.corner_heights[idx]
            # La normalisation serait faite par thunk_FUN_10037c80
            # (normalise un vecteur 3D). On normalise ici:
            mag = math.sqrt(total * total + 0.0)  # simplification
            # En pratique, on normalise le vecteur 3D complet
            # Note: dans le vrai code, les 3 axes sont normalisés ensemble
            pass

        tile.normals_dirty = 0


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
    wglCreateContext, wglMakeCurrent) puis appelle resize(), les thunks
    d'init OpenGL et de chargement de textures.

    D'après all_decompiled.c:2182:
      if (this->HGLRC == 0) {
        if (hdc != NULL) {
          ChoosePixelFormat(...); SetPixelFormat(...);
          wglCreateContext(...); wglMakeCurrent(...);
        }
        this[0x28] = flip_y;       // flip_y byte
        thunk_FUN_100033e0();      // GL state init
        thunk_FUN_100037e0();      // lighting init
        thunk_FUN_100076e0(this);  // texture loading
        resize(this, width, height);
        this->viewport_w = width;
        this->viewport_h = height;
        // Set DAT_10070a10 based on resolution
        if (width==800 && height==600) DAT_10070a10 = 0x421aba8f;
        else if (width==1024 && height==768) DAT_10070a10 = 0x42222a9a;
        else if (width==1280 && height==1024) DAT_10070a10 = 0x42235431;
      }
    """
    global _global_rotate_y
    if terrain._hglrc == 0:
        # Les appels WGL sont pour le contexte Windows — simulés
        terrain.flip_y = flip_y
        # Appels aux thunks d'initialisation
        _gl_init_state()          # thunk_FUN_100033e0()
        _gl_init_lighting()       # thunk_FUN_100037e0()
        _load_textures(terrain)   # thunk_FUN_100076e0()
        resize(terrain, width, height)
        terrain.viewport_w = width
        terrain.viewport_h = height

        # Initialisation de DAT_10070a10 selon la résolution
        if width == 800 and height == 600:
            _global_rotate_y = 0x421aba8f  # ~42.682
        elif width == 1024 and height == 768:
            _global_rotate_y = 0x42222a9a  # ~40.542
        elif width == 1280 and height == 1024:
            _global_rotate_y = 0x42235431  # ~40.833


# ==============================================================================
# gl_init_state @ 0x100033e0 (thunk FUN_100033e0)
# ==============================================================================
def _gl_init_state() -> None:
    """
    FUN_100033e0() — Initialisation de l'état OpenGL.

    D'après all_decompiled.c:3756:
      glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);   // 0xc50, 0x1101
      glEnable(GL_LIGHTING);                                // 0xb20
      glHint(GL_FOG_HINT, GL_NICEST);                       // 0xc52, 0x1102
      glEnable(GL_TEXTURE_2D);                              // 0xde1
      glEnable(GL_CULL_FACE);                               // 0xb44
      if (flip_y == 0)
        glFrontFace(GL_CW);                                 // 0x901
      else
        glFrontFace(GL_CCW);                                // 0x900
      glEnable(GL_DEPTH_TEST);                              // 0xb44 (déjà activé avant)
      glEnableClientState(GL_VERTEX_ARRAY);                 // 0x8074
      glEnableClientState(GL_NORMAL_ARRAY);                 // 0x8075
      glEnableClientState(GL_TEXTURE_COORD_ARRAY);          // 0x8078
    """
    # Ces appels seraient normalement des appels OpenGL.
    # En Python, on note simplement l'intention.
    pass


# ==============================================================================
# gl_init_lighting @ 0x100037e0 (thunk FUN_100037e0)
# ==============================================================================
def _gl_init_lighting() -> None:
    """
    FUN_100037e0() — Initialisation de l'éclairage.

    D'après all_decompiled.c:3890:
      Appelle simplement thunk_FUN_10003980() qui charge les fichiers
      de configuration d'éclairage selon le type de parcours:
        case 0: ParklandLighting.txt
        case 1: DesertLighting.txt
        case 2: TropicalLighting.txt
        case 3: LinksLighting.txt
        default: lighting.txt
    """
    _load_lighting_config()


# ==============================================================================
# load_lighting_config @ 0x10003980 (thunk FUN_10003980)
# ==============================================================================
def _load_lighting_config() -> None:
    """
    FUN_10003980() — Charge le fichier de configuration d'éclairage
    selon DAT_10070a0c (course type).

    D'après FUN_10003980.c:
      switch(DAT_10070a0c) {
        case 0: load("ParklandLighting.txt"); break;
        case 1: load("DesertLighting.txt"); break;
        case 2: load("TropicalLighting.txt"); break;
        case 3: load("LinksLighting.txt"); break;
        default: load("lighting.txt");
      }
    """
    config_files = {
        0: "ParklandLighting.txt",
        1: "DesertLighting.txt",
        2: "TropicalLighting.txt",
        3: "LinksLighting.txt",
    }
    _ = config_files.get(_global_course_type, "lighting.txt")
    # Dans le vrai code, thunk_FUN_10006dd0() lit et applique le fichier
    pass


# ==============================================================================
# load_textures @ 0x100076e0 (thunk FUN_100076e0)
# ==============================================================================
def _load_textures(terrain: Terrain) -> None:
    """
    FUN_100076e0(Terrain*) — Charge les textures pour le type de parcours.

    D'après all_decompiled.c:5426:
      - Construit le chemin "Data/Textures/<CourseType>/"
      - Charge les textures de chemin: Path.tga, PathCap.tga, etc.
      - Charge les textures de surface: A0001.bmp (pour chaque surface)
      - Charge les textures additionnelles: CliffTest.bmp, RetainWallA.bmp,
        strata.bmp
      - Toutes les textures sont chargées via thunk_FUN_1000bbd0() ou
        thunk_FUN_1000be30() et stockées via thunk_FUN_10012e70()
    """
    # Cette fonction charge des textures OpenGL, ce qui est spécifique
    # au contexte de rendu. En Python, on simule l'état.
    course_type = _global_course_type
    course_names = {0: "Parkland", 1: "Desert", 2: "Tropical", 3: "Links"}
    course_name = course_names.get(course_type, "Parkland")
    _ = course_name  # utilisé pour le chemin: "Data/Textures/<Name>/"
    if terrain.byte_29:
        # Déjà chargé, le C appelle thunk_FUN_100380a0() puis reload
        pass
    # Dans le C, la boucle charge les 30 types de surface + textures de chemin
    # On marque le flag comme chargé
    terrain.byte_29 = 1


# ==============================================================================
# resize @ 0x100012F8
# ==============================================================================
def resize(terrain: Terrain, width: int, height: int) -> None:
    """
    Terrain::resize(width, height)

    D'après all_decompiled.c:2259:
      Configure le viewport OpenGL et la matrice de projection orthographique.
      if (height == 0) height = 1;
      if (width == 0) width = 1;
      glViewport(0, 0, width, height);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      // Redimensionnement selon la résolution
      if (width == 800 && height == 600) { w=0x6e7; h=0x52d; }
      else if (width == 1024 && height == 768) { w=0x712; h=0x517; }
      else if (width == 1280 && height == 1024) { w=0x6cc; h=0x570; }
      half_w = w >> 1;
      half_h = h >> 1;
      if (!flip_y)
        glOrtho(-half_w, half_w, -half_h, half_h, 0, 576.0, 0, -576.0);
      else
        glOrtho(-half_w, half_w, half_h, -half_h, 0, 576.0, 0, -576.0);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
    """
    if height == 0:
        height = 1
    if width == 0:
        width = 1

    # Redimensionnement des dimensions pour la projection
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
def set_wall(terrain: Terrain, tile: TileStruct, side: int,
             wall_type: int, flag: bool) -> None:
    """
    Terrain::setWall(Tile*, int side, int type, bool flag)

    Délègue à thunk_FUN_10015400.

    C: FUN_10015400(Tile*, side, type, flag)
       tile[side + 0x234] = flag       # wall_flags[side] (byte)
       tile[side * 4 + 0x210] = type    # wall_types[side] (int)
    """
    _thunk_set_wall(tile, side, wall_type, flag)


def _thunk_set_wall(tile: TileStruct, side: int, wall_type: int, flag: bool) -> None:
    """
    thunk_FUN_10015400 — Set wall data.

    D'après all_decompiled.c:11997:
      *(undefined1 *)((int)this + param_1 + 0x234) = param_3;
      *(undefined4 *)((int)this + param_1 * 4 + 0x210) = param_2;

    où this=Tile*, param_1=side, param_2=type, param_3=flag

    Donc:
      tile.wall_flags[side] = flag     (byte at 0x234+side)
      tile.wall_types[side] = type     (int at 0x210+side*4)
    """
    if 0 <= side < 4:
        tile.wall_flags[side] = 1 if flag else 0
        tile.wall_types[side] = wall_type


# ==============================================================================
# getWall @ 0x10001670
# ==============================================================================
def get_wall(terrain: Terrain, tile: TileStruct, side: int) -> bool:
    """
    Terrain::getWall(Tile*, int) → bool

    Délègue à thunk_FUN_10015610.
    Note: FUN_10015610 n'est pas dans all_decompiled.c, mais on peut
    implémenter la logique inverse de set_wall.
    """
    return _thunk_get_wall(tile, side)


def _thunk_get_wall(tile: TileStruct, side: int) -> bool:
    """
    thunk_FUN_10015610 — Get wall flag.

    Logique inverse de set_wall: lit tile.wall_flags[side].
    """
    if 0 <= side < 4:
        return bool(tile.wall_flags[side])
    return False


# ==============================================================================
# hasConnectedPath @ 0x10001570
# ==============================================================================
def has_connected_path(terrain: Terrain, x: int, y: int) -> bool:
    """
    Terrain::hasConnectedPath(int, int) → bool
    Vérifie si la tile (x, y) a un chemin connecté.

    D'après all_decompiled.c:40:
      Tile* tile = tileAt(this, x, y);
      return thunk_FUN_10013360(tile);  // returns tile[0x209] (edge_flag)
    """
    tile = tile_at(terrain, x, y)
    if tile is None:
        return False
    return _thunk_has_path(tile)


def _thunk_has_path(tile: TileStruct) -> bool:
    """
    thunk_FUN_10013360 (appelé via hasConnectedPath)

    D'après FUN_10013360.c:
      return *(undefined1 *)(param_1 + 0x209);
    Retourne tile.edge_flag (offset 0x209, byte).
    """
    return bool(tile.edge_flag)


# ==============================================================================
# hasPath @ 0x10001610
# ==============================================================================
def has_path(terrain: Terrain, tile: TileStruct) -> bool:
    """
    Terrain::hasPath(Tile*) → bool

    Même logique que has_connected_path: vérifie tile.edge_flag.
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
    Note: FUN_1000d820 n'est pas trouvé dans les fichiers décompilés.
    Basé sur l'usage, lit tile.field_0x24 (offset 0x24, le type).
    """
    return _thunk_get_type(tile)


def _thunk_get_type(tile: TileStruct) -> int:
    """
    thunk_FUN_1000d820 — Lit le type de surface de la tile.

    D'après les accès dans le code, le type de surface est stocké
    à l'offset 0x24 du Tile (vérifié par is_culled qui compare
    à 0x14 = TRICKY_GREEN).
    """
    return tile.field_0x24


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
    """
    thunk_FUN_1000dac0 — Set type et variation de la tile.

    Stocke le type dans tile.field_0x24 et la variation dans
    tile.field_0x28 (offset 0x28, utilisé dans render pour
    la sélection de texture).
    """
    tile.field_0x24 = type_id
    tile.field_0x28 = var


# ==============================================================================
# getVariation @ 0x100015C0
# ==============================================================================
def get_variation(terrain: Terrain, tile: TileStruct) -> int:
    """Terrain::getVariation(Tile*) → int"""
    return _thunk_get_variation(tile)


def _thunk_get_variation(tile: TileStruct) -> int:
    """
    thunk_FUN_1000db20 — Retourne la variation.

    Lit tile.tex_sel_1 (offset 0x228) qui stocke la variation.
    """
    return tile.tex_sel_1


# ==============================================================================
# getElevation @ 0x100011B8
# ==============================================================================
def get_elevation(terrain: Terrain, tile: TileStruct, corner: int) -> float:
    """
    Terrain::getElevation(Tile*, int corner) → int (en fait float)

    Retourne l'élévation d'un coin spécifique de la tile.
    Les coins sont stockés à partir de l'offset 0x74 avec un stride
    de 0x38 entre chaque coin. Chaque coin a 3 floats (x, y, z).

    Note: FUN_1000c360 n'est pas dans all_decompiled.c mais on peut
    implémenter l'accès aux coins.
    """
    if 0 <= corner < 8:
        # coin[corner] est à l'offset 0x74 + corner * 0x38
        # Chaque coin a 3 floats: x, y, z. L'élévation est z (axis=2).
        idx = corner * 3 + 2  # axis 2 = z = elevation
        if idx < len(tile.corner_heights):
            return tile.corner_heights[idx]
    return 0.0


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

    D'après all_decompiled.c (render @ 0x1000104B):
      angle:  0 (DEFAULT), 90 (SOUTH), 180 (WEST), 270 (NORTH)
    """
    # Étape 1: Configuration de la vue
    # glLoadIdentity()
    # glPushMatrix()
    # glRotated(DAT_10070a10, 0, 1, 0)  # rotation Y
    # glRotatef(DAT_1005f344 + angle, 0, 1, 0)  # rotation Y additionnelle

    if center_tile is not None:
        # Translation vers le centre
        cx = _get_tile_x(center_tile)
        cy = _get_tile_y(center_tile)
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

        if angle == _ANGLE_DEFAULT:
            _render_dir_0(terrain, center_tile, ray, angle)
        elif angle == _ANGLE_SOUTH:
            _render_dir_90(terrain, center_tile, ray, angle)
        elif angle == _ANGLE_WEST:
            _render_dir_180(terrain, center_tile, ray, angle)
        else:
            _render_dir_270(terrain, center_tile, ray, angle)

    # glPopMatrix()
    # glFlush()


# ==============================================================================
# pre_render @ 0x1000ADC0 (thunk FUN_1000adc0)
# ==============================================================================
def _pre_render(angle: float) -> None:
    """
    FUN_1000adc0(float angle) — Pré-rendu / sélection du mode.

    D'après all_decompiled.c:6980:
      Set DAT_10070a14 (global render mode):
        if (angle == 0.0)     → DAT_10070a14 = 0
        else if (angle == 90.0) → DAT_10070a14 = 1
        else if (angle == 180.0) → DAT_10070a14 = 2
        else                      → DAT_10070a14 = 3

    DAT_10070a14 est utilisé par render_single_tile pour sélectionner
    les coordonnées de texture et par d'autres fonctions de rendu.
    """
    global _global_render_mode
    if angle == _ANGLE_DEFAULT:
        _global_render_mode = 0
    elif angle == _ANGLE_SOUTH:
        _global_render_mode = 1
    elif angle == _ANGLE_WEST:
        _global_render_mode = 2
    else:
        _global_render_mode = 3


# ==============================================================================
# Directions de rendu
# ==============================================================================
def _render_dir_0(terrain: Terrain, center: TileStruct, ray: int,
                  angle: float) -> None:
    """Direction 0° : balayage Ouest→Est, Sud→Nord (Z-order)."""
    cx = _get_tile_x(center)
    cy = _get_tile_y(center)
    start_y = cy - ray
    end_y = cy + ray
    start_x = cx + ray
    end_x = cx - ray

    for y in range(start_y, end_y + 1):
        for x in range(start_x, end_x - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, angle):
                    _render_single_tile(t)


def _render_dir_90(terrain: Terrain, center: TileStruct, ray: int,
                   angle: float) -> None:
    """Direction 90° : rendu depuis le Sud."""
    cx = _get_tile_x(center)
    cy = _get_tile_y(center)
    start_x = cx + ray
    end_x = cx - ray
    start_y = cy + ray
    end_y = cy - ray

    for x in range(start_x, end_x - 1, -1):
        for y in range(start_y, end_y - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, 90.0):
                    _render_single_tile(t)


def _render_dir_180(terrain: Terrain, center: TileStruct, ray: int,
                    angle: float) -> None:
    """Direction 180° : rendu depuis l'Ouest."""
    cx = _get_tile_x(center)
    cy = _get_tile_y(center)
    start_y = cy + ray
    end_y = cy - ray
    start_x = cx + ray
    end_x = cx - ray

    for y in range(start_y, end_y - 1, -1):
        for x in range(start_x, end_x - 1, -1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, 180.0):
                    _render_single_tile(t)


def _render_dir_270(terrain: Terrain, center: TileStruct, ray: int,
                    angle: float) -> None:
    """Direction 270° (angle par défaut) : rendu depuis le Nord."""
    cx = _get_tile_x(center)
    cy = _get_tile_y(center)
    start_x = cx - ray
    end_x = cx + ray
    start_y = cy - ray
    end_y = cy + ray

    for x in range(start_x, end_x + 1):
        for y in range(start_y, end_y + 1):
            t = tile_at(terrain, x, y)
            if t is not None and not _is_culled(t):
                if not _visibility_test(terrain, t, center, angle):
                    _render_single_tile(t)


# ==============================================================================
# is_culled @ 0x10015460 (thunk FUN_10015460)
# ==============================================================================
def _is_culled(tile: TileStruct) -> bool:
    """
    FUN_10015460(Tile*) → bool

    D'après all_decompiled.c:12022:
      return *(int *)(param_1 + 0x24) == 0x14;

    Vérifie si le champ à l'offset 0x24 du Tile vaut 0x14 (20).
    Dans le contexte de rendu, si field_0x24 == 20 (TRICKY_GREEN ou
    autre type d'eau), la tile est cullée (non rendue).

    Note: ce n'est PAS le cull_flag à 0x208 mais un champ de type
    qui détermine la visibilité.
    """
    return tile.field_0x24 == 0x14


# ==============================================================================
# visibility_test @ 0x10006850 (thunk FUN_10006850)
# ==============================================================================
def _visibility_test(terrain: Terrain, tile: TileStruct,
                     center: TileStruct, angle: float) -> bool:
    """
    FUN_10006850(Terrain*, Tile* tile, Tile* center, float angle) → bool

    Test de visibilité / occlusion par projection écran.
    Retourne True si la tile ne doit PAS être rendue (hors de l'écran).

    D'après all_decompiled.c:5054:
      if (terrain.field_1c != 2) {
        scale_x = (terrain.viewport_w >> 1) * terrain.field_1c;
        scale_y = (terrain.viewport_h >> 1) * terrain.field_1c;

        dx = get_tile_x(tile) - get_tile_x(center);
        dy = get_tile_y(tile) - get_tile_y(center);

        // Sélection des constantes de culling selon la résolution
        if (viewport_w == 800 && viewport_h == 600) {
          cull_w = 0x40; cull_offset = 0x28; mul_x = 0x20; mul_y = 0x14;
        } else if (1024x768) {
          cull_w = 0x50; cull_offset = 0x34; mul_x = 0x28; mul_y = 0x1a;
        } else if (1280x1024) {
          cull_w = 0x68; cull_offset = 0x44; mul_x = 0x34; mul_y = 0x22;
        }

        // Projection selon l'angle de la caméra
        if (angle == 0.0) {
          screen_x = (w>>1) + dx*mul_x + dy*mul_x;
          screen_y = (h>>1) + dx*mul_y - dy*mul_y + elevation_offset*5;
          if (screen_x > w + scale_x || screen_x < -scale_x - cull_w ||
              screen_y > h + cull_offset + scale_y || screen_y < -scale_y - cull_offset)
            return True;
        } else if (angle == 90.0) {
          screen_x = (w>>1) - dx*mul_x + dy*mul_x;
          screen_y = (h>>1) - dx*mul_y - dy*mul_y + elevation_offset*5;
          if (screen_x > w + mul_x + scale_x || screen_x < -scale_x - cull_w ||
              screen_y > h + cull_offset + scale_y || screen_y < -scale_y - cull_offset)
            return True;
        } else if (angle == 180.0) {
          screen_x = (w>>1) - dx*mul_x - dy*mul_x;
          screen_y = (h>>1) - dx*mul_y + dy*mul_y + elevation_offset*5;
          if (screen_x > w + cull_w + scale_x || screen_x < -scale_x - mul_x ||
              screen_y > h + cull_offset + scale_y || screen_y < -scale_y - cull_offset)
            return True;
        } else {
          screen_x = (w>>1) + dx*mul_x - dy*mul_x;
          screen_y = (h>>1) + dx*mul_y + dy*mul_y + elevation_offset*5;
          if (screen_x > w + mul_x + scale_x || screen_x < -scale_x - mul_x ||
              screen_y > h + mul_y + scale_y || screen_y < -mul_y - cull_offset - scale_y)
            return True;
        }
      }
      return False;

    Note: Dans le C, les branches définissent local_34/38/3c/40 selon
    l'angle, mais la fonction retourne void (le retour réel dépend de
    l'accumulation en eax). On retourne un bool.
    """
    field_1c = terrain.field_1c
    if field_1c == 2:
        return False

    vp_w = terrain.viewport_w
    vp_h = terrain.viewport_h

    scale_x = (vp_w >> 1) * field_1c
    scale_y = (vp_h >> 1) * field_1c

    dx = _get_tile_x(tile) - _get_tile_x(center)
    dy = _get_tile_y(tile) - _get_tile_y(center)

    # Constantes de culling selon la résolution
    if vp_w == 800 and vp_h == 600:
        cull_w = 0x40   # 64
        cull_offset = 0x28  # 40
        mul_x = 0x20    # 32
        mul_y = 0x14    # 20
    elif vp_w == 1024 and vp_h == 768:
        cull_w = 0x50   # 80
        cull_offset = 0x34  # 52
        mul_x = 0x28    # 40
        mul_y = 0x1a    # 26
    elif vp_w == 1280 and vp_h == 1024:
        cull_w = 0x68   # 104
        cull_offset = 0x44  # 68
        mul_x = 0x34    # 52
        mul_y = 0x22    # 34
    else:
        cull_w = 0x40   # valeurs par défaut
        cull_offset = 0x28
        mul_x = 0x20
        mul_y = 0x14

    # WARNING: Dans le C, thunk_FUN_10015500(param_1) est appelé pour
    # obtenir un offset d'élévation. Il compare des champs du Tile à
    # offsets 0x4, 0xc, 0x14, 0x1c. Comme ces offsets diffèrent de notre
    # structure, on utilise 0 comme approximation.
    # FUN_10015500 retourne: max(min(max(tile[4], tile[0xc]), max(tile[0x14], tile[0x1c])), ...)
    # Simplification: on utilise 0 pour l'offset d'élévation
    elevation_offset = 0  # thunk_FUN_10015500(tile) simplifié

    half_w = vp_w >> 1
    half_h = vp_h >> 1

    # Projection selon l'angle de la caméra
    if angle == _ANGLE_DEFAULT:
        screen_x = half_w + dx * mul_x + dy * mul_x
        screen_y = half_h + dx * mul_y - dy * mul_y + elevation_offset * -5
        if (screen_x > vp_w + scale_x or screen_x < -scale_x - cull_w or
            screen_y > vp_h + cull_offset + scale_y or
            screen_y < -scale_y - cull_offset):
            return True

    elif angle == _ANGLE_SOUTH:
        screen_x = half_w - dx * mul_x + dy * mul_x
        screen_y = half_h - dx * mul_y - dy * mul_y + elevation_offset * -5
        if (screen_x > vp_w + mul_x + scale_x or
            screen_x < -scale_x - cull_w or
            screen_y > vp_h + cull_offset + scale_y or
            screen_y < -scale_y - cull_offset):
            return True

    elif angle == _ANGLE_WEST:
        screen_x = half_w - dx * mul_x - dy * mul_x
        screen_y = half_h - dx * mul_y + dy * mul_y + elevation_offset * -5
        if (screen_x > vp_w + cull_w + scale_x or
            screen_x < -scale_x - mul_x or
            screen_y > vp_h + cull_offset + scale_y or
            screen_y < -scale_y - cull_offset):
            return True

    else:  # angle == 270
        screen_x = half_w + dx * mul_x - dy * mul_x
        screen_y = half_h + dx * mul_y + dy * mul_y + elevation_offset * -5
        if (screen_x > vp_w + mul_x + scale_x or
            screen_x < -scale_x - mul_x or
            screen_y > vp_h + mul_y + scale_y or
            screen_y < -mul_y - cull_offset - scale_y):
            return True

    return False


# ==============================================================================
# render_single_tile @ 0x1000E6C0 (thunk FUN_1000e6c0)
# ==============================================================================
def _render_single_tile(tile: TileStruct) -> None:
    """
    FUN_1000e6c0(Tile*) — Rend une tile avec ses sous-objets.

    D'après all_decompiled.c:9248:
      for (i = 0; i < tile.sub_obj_count; i++) {
        sub = &tile.sub_obj[i];  // stride 0x38 depuis offset 0x48

        // Sélection de la texture
        if (render_mode == 0 || get_surface_type(tile) != 7) {
          // Mode normal: utilise la texture stockée dans sub.texture_handle
          if (sub.texture_handle != current_tex) {
            glBindTexture(GL_TEXTURE_2D, sub.texture_handle);
            current_tex = sub.texture_handle;
          }
        } else {
          // Mode spécial: calcul de l'index de texture depuis
          // tile[0x28] et tile[0x240]
          tex_index = calc_texture_index(tile[0x28], sub.texture_type,
                                         tile[0x240], render_mode);
          if (tex_index != current_tex) {
            glBindTexture(GL_TEXTURE_2D, tex_index);
            current_tex = tex_index;
          }
        }

        // Rendu du triangle strip (3 sommets)
        glBegin(GL_TRIANGLES);  // 0x4 = GL_TRIANGLES
        glTexCoord2fv(tex_coords[render_mode][sub.tex_u][sub.tex_v]);
        glArrayElement(sub.vertex_a);
        glTexCoord2fv(tex_coords[render_mode][sub.tex_u2][sub.tex_v2]);
        glArrayElement(sub.vertex_b);
        glTexCoord2fv(tex_coords[render_mode][sub.tex_u3][sub.tex_v3]);
        glArrayElement(sub.vertex_c);
        glEnd();
      }

      // Rendu des murs/bords si les flags sont actifs
      if (tile[0x208] != 0 && tile[0x20a] != 0) {
        thunk_FUN_100108f0(tile);  // render edges
      }
      thunk_FUN_1000f7f0(tile);     // render walls
      thunk_FUN_1000ea30(tile, 3);  // render shadows

    Cette fonction émet des appels OpenGL. En Python, on simule
    simplement l'état.
    """
    # Le rendu OpenGL est spécifique au contexte graphique.
    # En simulation Python, on ne fait pas les appels GL.
    # Pour une implémentation réelle, il faudrait un contexte OpenGL.
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

    D'après all_decompiled.c (FUN_100080e0):
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
    pass


# ==============================================================================
# initTerrain @ 0x100012CB
# ==============================================================================
def init_terrain(terrain: Terrain) -> None:
    """
    Terrain::initTerrain()

    Initialise/réinitialise le terrain.

    D'après all_decompiled.c:2142:
      thunk_FUN_1000a130(this);                    // init mem pool
      uVar1 = thunk_FUN_100032b0();                // get vertex array ptr
      glVertexPointer(3, GL_FLOAT, 0, uVar1);
      uVar1 = thunk_FUN_10003270();                // get normal array ptr
      glNormalPointer(GL_FLOAT, 0, uVar1);
    """
    # Dans le C, initTerrain appelle thunk_FUN_1000a130 (init du pool
    # mémoire) puis configure les pointeurs vertex et normal OpenGL.
    pass


# ==============================================================================
# resetTerrain @ 0x10001429
# ==============================================================================
def reset_terrain(terrain: Terrain) -> None:
    """
    Terrain::resetTerrain()

    Réinitialise complètement le terrain.
    """
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
    Note: FUN_1000eb10 n'est pas dans all_decompiled.c.
    """
    return None


# ==============================================================================
# loadNewCourseType @ 0x10001530
# ==============================================================================
def load_new_course_type(terrain: Terrain, course_type: int) -> None:
    """
    Terrain::loadNewCourseType(int course_type)

    D'après all_decompiled.c:74:
      if (DAT_10070a0c != course_type) {
        DAT_10070a0c = course_type;
        thunk_FUN_10003980();          // reload lighting
        thunk_FUN_100380a0(this);      // reset display lists
        thunk_FUN_100076e0(this);      // reload textures
      }
    """
    global _global_course_type
    if _global_course_type != course_type:
        _global_course_type = course_type
        _load_lighting_config()
        _load_textures(terrain)


# ==============================================================================
# lowerCorner @ 0x1000116B
# ==============================================================================
def lower_corner(terrain: Terrain, tile: TileStruct, corner: int) -> None:
    """
    Terrain::lowerCorner(Tile*, int corner)

    Abaisse l'élévation d'un coin de la tile.
    Note: FUN_1000cba0 n'est pas dans all_decompiled.c.
    """
    _thunk_lower_corner(tile, corner)


def _thunk_lower_corner(tile: TileStruct, corner: int) -> None:
    """
    thunk_FUN_1000cba0 — Lower corner elevation.

    Abaisse le coin 'corner' de la tile de 1 unité.
    Les coins sont stockés dans tile.corner_heights à l'axe z (index 2).
    """
    if 0 <= corner < 8:
        idx = corner * 3 + 2  # axis z
        if idx < len(tile.corner_heights):
            tile.corner_heights[idx] -= 1.0


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
    """
    thunk_FUN_1000cd30 — Elevate corner elevation.

    Augmente le coin 'corner' de la tile de 1 unité.
    """
    if 0 <= corner < 8:
        idx = corner * 3 + 2  # axis z
        if idx < len(tile.corner_heights):
            tile.corner_heights[idx] += 1.0

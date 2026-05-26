"""
Types extraits de la décompilation Ghidra de Terrain.dll (0x10001000-0x1005F000).

Champs aux offsets exacts de la mémoire C++, vérifiés dans le code décompilé.
"""

from enum import IntEnum
from typing import Optional


# === Constantes ===

# Taille d'une Tile en mémoire (d'après tileAt: stride = 0x248)
TILE_STRIDE = 0x248  # 584 bytes

# Grille par défaut (getInstance appelle le constructeur avec 0x32, 0x32)
DEFAULT_GRID_W = 50
DEFAULT_GRID_H = 50

# Nombre max de tuiles
MAX_TILES = 2500

# Taille de l'objet Terrain (operator_new(0x164ad0))
TERRAIN_OBJECT_SIZE = 0x164AD0  # 1,459,920 bytes

# Offset des tiles dans l'objet Terrain (d'après tileAt)
TILE_ARRAY_OFFSET = 0x3A4

# Visibilité (d'après render: loop 10..0x27)
RENDER_MIN = 10
RENDER_MAX = 0x27  # 39

# Nombre de types de surface
SURFACE_TYPE_COUNT = 0x25  # 37

# Sous-échantillons de spline (d'après drawBezierSpline et drawCardinalSpline)
SPLINE_SUBDIVISIONS = 9


# === Énumérations ===

class SurfaceType(IntEnum):
    """Types de surface — noms extraits du constructeur FUN_10002ae0."""
    PUTTING_GREEN = 0
    FAIRWAY = 1
    FIRM_FAIRWAY = 2
    ROUGH = 3
    DEEP_ROUGH = 4
    GRASSY_SAND = 5
    POT_SAND_BUNKER = 6
    OVERGROWTH = 7
    BRUSH = 8
    # 9-10 = types supplémentaires
    WOODS = 11
    WATER_SHALLOW = 12
    MARSH = 13
    # 14-15 = plus de types
    BUILDING = 16
    WATER_DEEP = 17
    WATER_MIDDLE = 18
    WATER_SHALLOW_DESERT = 19
    TRICKY_GREEN = 20
    SAND_BUNKER_1 = 21
    SAND_BUNKER_2 = 22
    SAND_BUNKER_3 = 23
    # 24+ = types supplémentaires

    def __repr__(self) -> str:
        return f"SurfaceType.{self.name}"


class RenderAngle(IntEnum):
    """Angles de rendu (d'après render(): param_2)."""
    DEFAULT = 0     # angle normal (DAT_1005f1e0)
    SOUTH = 90      # vu du sud
    WEST = 180      # vu de l'ouest
    NORTH = 270     # vu du nord


# === Structures mémoire ===

class TileStruct:
    """
    Structure mémoire d'une Tile (0x248 bytes).

    D'après tileAt et les accès dans FUN_1000f7f0, render, etc.

    Champs identifiés aux offsets :
      0x00-0x33:  champs internes, vtable/virtual ?
      0x34:       pointeur vers sous-objet A (vertex data ?)
      0x38:       pointeur vers sous-objet B
      0x3C:       pointeur vers sous-objet C
      0x40:       pointeur vers sous-objet D
      0x44-0x4F:  ?
      0x50:       index 0 dans le vertex array global (DAT_100b28c8)
      0x88:       index 1 dans le vertex array global
      0xC0:       index 2 dans le vertex array global
      0x158:      valeur interne
      0x160-0x1A0+ : sous-objet A contient des indices vertex

      0x208:      bool (culling flag)
      0x209:      byte (edge type flag)
      0x20A:      byte (render flag)
      0x210:      int (texture/type selector 0/1)
      0x228:      int (texture/type selector)
      0x234:      byte (render flag)
      0x23A:      byte (render flag)

    Les champs à 0x34, 0x38, 0x3C, 0x40 sont des pointeurs vers des
    sous-structures qui contiennent les indices vertex (0x160, 0x164, 0x1A0)
    pointant dans le tableau global DAT_100b28c8 de Vec3.
    """

    __slots__ = (
        'ptr',          # adresse simulée
        'sub_a',        # *[0x34] sous-objet A
        'sub_b',        # *[0x38] sous-objet B
        'sub_c',        # *[0x3C] sous-objet C
        'sub_d',        # *[0x40] sous-objet D
        'v_idx_0',      # [0x50] index vertex 0
        'v_idx_1',      # [0x88] index vertex 1
        'v_idx_2',      # [0xC0] index vertex 2
        'field_158',    # [0x158]
        'cull_flag',    # [0x208]
        'edge_flag',    # [0x209]
        'render_flag',  # [0x20A]
        'tex_sel_0',    # [0x210] wall type 0
        'tex_sel_1',    # [0x228] wall type 4 (also used as variation)
        'render_flag_2',# [0x234] wall flag 0
        'render_flag_3',# [0x23A] wall flag 3
        'grid_x',       # [0x30] position X dans la grille
        'grid_y',       # [0x2C] position Y dans la grille
        # Champs ajoutés pour les thunks
        'field_0x24',   # [0x24] tile type/ID (20 = water => culled)
        'field_0x28',   # [0x28] render flags/texture selector
        'sub_obj_count',# [0x44] nombre de sous-objets
        'sub_obj',      # [0x48+] liste de SubObjData (stride 0x38)
        'corner_heights',# [0x74+] 8 coins (chacun 3 floats, stride 0x38)
        'wall_types',   # [0x210,0x214,0x218,0x21c] 4 ints (types de mur)
        'wall_flags',   # [0x234-0x237] 4 bytes (flags de mur)
        'render_flag_236',# [0x236]
        'render_flag_238',# [0x238]
        'field_0x240',  # [0x240] texture base index
        'normals_dirty',# [0x244] flag de saleté des normales
        'field_0x220',  # [0x220] wall type 2
    )

    def __init__(self, ptr: int = 0, grid_x: int = 0, grid_y: int = 0):
        self.ptr = ptr
        self.sub_a = 0
        self.sub_b = 0
        self.sub_c = 0
        self.sub_d = 0
        self.v_idx_0 = 0
        self.v_idx_1 = 0
        self.v_idx_2 = 0
        self.field_158 = 0
        self.cull_flag = 0
        self.edge_flag = 0
        self.render_flag = 0
        self.tex_sel_0 = 0
        self.tex_sel_1 = 0
        self.render_flag_2 = 0
        self.render_flag_3 = 0
        self.grid_x = grid_x
        self.grid_y = grid_y
        # Nouveaux champs
        self.field_0x24 = 0
        self.field_0x28 = 0
        self.sub_obj_count = 0
        self.sub_obj = []  # list of dicts
        self.corner_heights = [0.0] * 24  # 8 corners * 3 axes (x,y,z)
        self.wall_types = [0, 0, 0, 0]
        self.wall_flags = [0, 0, 0, 0]
        self.render_flag_236 = 0
        self.render_flag_238 = 0
        self.field_0x240 = 0
        self.normals_dirty = 0
        self.field_0x220 = 0


class Terrain:
    """
    Traduction Python de la classe C++ Terrain (Terrain.dll).

    Layout mémoire vérifié sur le code Ghidra :
      [0x00] int       HGLRC (OpenGL context handle)
      [0x04] float     0.15 (constante éclairage?)
      [0x08] float     0.15
      [0x0C] float     0.2
      [0x10] float     1.0
      [0x14] int       grid_width
      [0x18] int       grid_height
      [0x1C] int       0 (viewport shift?)
      [0x20] int       viewport_width
      [0x24] int       viewport_height
      [0x28] byte      bool (Y coord flipped)
      [0x29] byte      0
      [0x2C..0x44]    surface type info (tableau de 37 entrées * 6 ints)
      [0x3A4]          Tile[2500] (50x50)
    """

    # Surface type strings from FUN_10002ae0
    SURFACE_NAMES = {
        0: "PuttingGreen",
        1: "Fairway",
        2: "FirmFairway",
        3: "Rough",
        4: "DeepRough",
        5: "GrassySand",
        6: "PotSandBunker",
        7: "Overgrowth",
        8: "Brush",
        9: None,    # DAT_1005f0e0 reference
        10: None,
        11: "Woods",
        12: "WaterShallow",
        13: "Marsh",
        14: "Overgrowth",
        15: None,
        16: "Building",
        17: "WaterDeep",
        18: "WaterMiddle",
        19: "WaterShallowDesert",
        20: "TrickyGreen",
        21: "SandBunker1",
        22: "SandBunker2",
        23: "SandBunker3",
        24: None,   # DAT_1005f030 reference
    }

    def __init__(self, width: int = DEFAULT_GRID_W, height: int = DEFAULT_GRID_H):
        # Singleton pattern (getInstance)
        self._hglrc: int = 0

        # Constantes d'éclairage
        self.float_04: float = 0.15
        self.float_08: float = 0.15
        self.float_0c: float = 0.2
        self.float_10: float = 1.0

        # Grid dimensions
        self.grid_w: int = width
        self.grid_h: int = height

        # Viewport shift
        self.field_1c: int = 0

        # Viewport
        self.viewport_w: int = 0
        self.viewport_h: int = 0

        # Flags
        self.flip_y: bool = False
        self.byte_29: int = 0

        # Surface type info (37 entries x 6 ints)
        self.surface_info: list = [0] * (SURFACE_TYPE_COUNT * 6)

        # Tiles — inline dans l'objet mémoire
        self.tiles: list = [
            TileStruct(ptr=TILE_ARRAY_OFFSET + (x + y * width) * TILE_STRIDE,
                       grid_x=x, grid_y=y)
            for y in range(height)
            for x in range(width)
        ]

    def tile_ptr(self, x: int, y: int) -> Optional[TileStruct]:
        """tileAt(this, x, y) retourne la Tile aux coordonnées (x, y)."""
        if 0 <= x < self.grid_w and 0 <= y < self.grid_h:
            return self.tiles[y * self.grid_w + x]
        return None

    def get_surface_name(self, idx: int) -> str:
        """Retourne le nom de surface pour l'index donné."""
        name = self.SURFACE_NAMES.get(idx, None)
        if name is None:
            return f"Surface_{idx}"
        return name

"""
Abstraction du rendu OpenGL utilisé par SimGolf.

Traduit les appels OpenGL directs (glLoadIdentity, glTranslatef, etc.)
en appels compatibles avec différents backends (Pygame, ModernGL, etc.).

Basé sur l'analyse Ghidra de Terrain.dll : renderTile.
"""

from typing import Protocol, Optional
from dataclasses import dataclass
from ..types import Vec2, Vec3, Color, TILE_SIZE


# === Abstraction de rendu ===

class RenderBackend(Protocol):
    """Interface de rendu pour SimGolf RE."""
    
    def load_identity(self) -> None: ...
    def push_matrix(self) -> None: ...
    def pop_matrix(self) -> None: ...
    def translate(self, x: float, y: float, z: float) -> None: ...
    def rotate(self, angle_deg: float, x: float, y: float, z: float) -> None: ...
    def scale(self, x: float, y: float, z: float) -> None: ...
    def bind_texture(self, texture_id: int) -> None: ...
    def enable_cull_face(self, enabled: bool) -> None: ...
    def begin_triangles(self) -> None: ...
    def end_triangles(self) -> None: ...
    def normal(self, x: float, y: float, z: float) -> None: ...
    def tex_coord(self, u: float, v: float) -> None: ...
    def vertex(self, x: float, y: float, z: float) -> None: ...
    def flush(self) -> None: ...


# === Convertisseurs d'hexfloats ===

def hex_float(h: int) -> float:
    """Convertit un hexfloat IEEE 754 32-bit en float Python.
    
    Exemples:
        0x42480000 → 50.0
        0xc2480000 → -50.0
        0x3f800000 → 1.0
        0x42340000 → 45.0
    """
    import struct
    return struct.unpack('>f', struct.pack('>I', h & 0xFFFFFFFF))[0]


# Constantes dérivées des hexfloats renderTile
_HALF_TILE = hex_float(0x42480000)  # 50.0 (demi-taille de tuile)
_NEG_HALF_TILE = hex_float(0xc2480000)  # -50.0
_ONE = hex_float(0x3f800000)  # 1.0
_ROTATION_45 = hex_float(0x42340000)  # 45.0 (angle de rotation isométrique)


def render_tile(
    renderer: RenderBackend,
    tile_type: int,
    screen_x: float,
    screen_y: float,
    scale: float = 1.0,
    texture_id: int = 0,
    num_textured_tiles: int = 30,  # Valeur de l'assert dans renderTile
) -> None:
    """Traduit Terrain::renderTile.
    
    Affiche une tuile de terrain à une position écran donnée.
    
    Args:
        renderer: Backend de rendu
        tile_type: Type de la tuile (0 = eau, 1 = sable, etc.)
        screen_x/screen_y: Position à l'écran (en pixels)
        scale: Facteur d'échelle (basé sur viewport/display_size)
        texture_id: ID de texture OpenGL
        num_textured_tiles: Nombre max de types texturés (assert debug)
    """
    # Vérification debug (présente dans le code original)
    if tile_type >= num_textured_tiles:
        raise AssertionError(
            f"Tile type {tile_type} >= {num_textured_tiles} (NUM_TEXTURED_TILES)"
        )
    
    # Conversion position écran → monde
    # renderTile: iStack_18 = param_2 + -0x1b0 → screen_x - 432
    # renderTile: iStack_1c = param_3 + -300 → screen_y - 300
    world_x = (screen_x - 432.0) * scale
    world_y = (screen_y - 300.0) * scale
    
    # Transformation OpenGL
    renderer.load_identity()
    renderer.push_matrix()
    renderer.translate(world_x, world_y, 0.0)
    renderer.rotate(45.0, 0.0, 0.0, 1.0)  # Rotation isométrique
    renderer.scale(scale, scale, scale)
    
    # Texture
    renderer.enable_cull_face(False)
    renderer.bind_texture(texture_id)
    
    # Quadrilatère en 2 triangles (GL_TRIANGLES)
    # Les 6 sommets sont:
    # 1: (-50, 0, -50)     → Tex(0, 1)
    # 2: (-50, 0,  50)     → Tex(0, 0)
    # 3: ( 50, 0,  50)     → Tex(1, 0)
    # 4: (-50, 0, -50)     → Tex(0, 1)  (triangle 2, redondant)
    # 5: ( 50, 0,  50)     → Tex(1, 0)  (triangle 2, redondant)
    # 6: ( 50, 0, -50)     → Tex(1, 1)
    #
    # Normale: (0, 1, 0) - face vers le haut
    renderer.begin_triangles()
    renderer.normal(0.0, 1.0, 0.0)
    
    # Triangle 1
    renderer.tex_coord(0.0, 1.0)
    renderer.vertex(-50.0, 0.0, -50.0)
    renderer.tex_coord(0.0, 0.0)
    renderer.vertex(-50.0, 0.0, 50.0)
    renderer.tex_coord(1.0, 0.0)
    renderer.vertex(50.0, 0.0, 50.0)
    
    # Triangle 2
    renderer.tex_coord(0.0, 1.0)
    renderer.vertex(-50.0, 0.0, -50.0)
    renderer.tex_coord(1.0, 0.0)
    renderer.vertex(50.0, 0.0, 50.0)
    renderer.tex_coord(1.0, 1.0)
    renderer.vertex(50.0, 0.0, -50.0)
    
    renderer.end_triangles()
    renderer.enable_cull_face(True)
    renderer.pop_matrix()
    renderer.flush()

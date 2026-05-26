"""
Types et énumérations du jeu SimGolf.
Basé sur l'analyse Ghidra de Terrain.dll et golf.exe.
"""

from enum import IntEnum
from dataclasses import dataclass
from typing import Optional


# === Énumérations ===

class TileType(IntEnum):
    """Types de tuiles terrain - extraits de l'analyse Ghidra.
    
    D'après le code original, le type est stocké comme 
    un entier dans la structure Tile.
    """
    WATER = 0
    SAND = 1
    ROUGH = 2
    FAIRWAY = 3
    GREEN = 4
    TEE = 5
    DIRT = 6
    FLOWERS = 7
    ROUGH_2 = 8
    ROUGH_3 = 9


class RenderMode(IntEnum):
    """Modes de rendu OpenGL."""
    TRIANGLES = 0x0004  # GL_TRIANGLES
    TRIANGLE_STRIP = 0x0005  # GL_TRIANGLE_STRIP
    TRIANGLE_FAN = 0x0006  # GL_TRIANGLE_FAN
    QUADS = 0x0007  # GL_QUADS
    QUAD_STRIP = 0x0008  # GL_QUAD_STRIP


# === Structures ===

@dataclass
class Vec2:
    """Vecteur 2D."""
    x: float = 0.0
    y: float = 0.0
    
    def __add__(self, other: 'Vec2') -> 'Vec2':
        return Vec2(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other: 'Vec2') -> 'Vec2':
        return Vec2(self.x - other.x, self.y - other.y)
    
    def __mul__(self, s: float) -> 'Vec2':
        return Vec2(self.x * s, self.y * s)
    
    def __repr__(self) -> str:
        return f"Vec2({self.x:.2f}, {self.y:.2f})"


@dataclass
class Vec3:
    """Vecteur 3D."""
    x: float = 0.0
    y: float = 0.0
    z: float = 0.0
    
    def __add__(self, other: 'Vec3') -> 'Vec3':
        return Vec3(self.x + other.x, self.y + other.y, self.z + other.z)
    
    def __sub__(self, other: 'Vec3') -> 'Vec3':
        return Vec3(self.x - other.x, self.y - other.y, self.z - other.z)
    
    def __mul__(self, s: float) -> 'Vec3':
        return Vec3(self.x * s, self.y * s, self.z * s)
    
    def cross(self, other: 'Vec3') -> 'Vec3':
        """Produit vectoriel."""
        return Vec3(
            self.y * other.z - self.z * other.y,
            self.z * other.x - self.x * other.z,
            self.x * other.y - self.y * other.x
        )
    
    def dot(self, other: 'Vec3') -> float:
        """Produit scalaire."""
        return self.x * other.x + self.y * other.y + self.z * other.z
    
    def normalized(self) -> 'Vec3':
        """Version normalisée."""
        length = (self.x**2 + self.y**2 + self.z**2) ** 0.5
        if length == 0:
            return Vec3()
        return Vec3(self.x / length, self.y / length, self.z / length)
    
    def __repr__(self) -> str:
        return f"Vec3({self.x:.2f}, {self.y:.2f}, {self.z:.2f})"
    

@dataclass
class Color:
    """Couleur RGBA."""
    r: float = 0.0
    g: float = 0.0
    b: float = 0.0
    a: float = 1.0
    
    @classmethod
    def from_int(cls, value: int) -> 'Color':
        """Crée une couleur depuis un entier 32-bit ARGB."""
        return cls(
            r=((value >> 16) & 0xFF) / 255.0,
            g=((value >> 8) & 0xFF) / 255.0,
            b=(value & 0xFF) / 255.0,
            a=((value >> 24) & 0xFF) / 255.0,
        )
    
    def to_int(self) -> int:
        """Convertit en entier 32-bit ARGB."""
        return (
            (int(self.a * 255) << 24) |
            (int(self.r * 255) << 16) |
            (int(self.g * 255) << 8) |
            int(self.b * 255)
        )
    
    def __repr__(self) -> str:
        return f"Color({self.r:.2f}, {self.g:.2f}, {self.b:.2f}, {self.a:.2f})"


# === Constantes ===

TILE_SIZE = 50.0  # Taille d'une tuile en unités jeu (d'après renderTile: 0x42480000 = 50.0)

# Facteurs d'échelle
SCALE_X = 1.0 / TILE_SIZE
SCALE_Y = 1.0 / TILE_SIZE

# Offsets d'affichage (d'après renderTile: -0x1b0 = -432, -300)
VIEWPORT_OFFSET_X = 432
VIEWPORT_OFFSET_Y = 300

# Unités OpenGL → pixels
# D'après renderTile, la matrice de projection utilise un facteur global
PIXEL_SCALE = 1.0  # À ajuster selon le contexte

# Couleurs par type de tuile (estimées)
TILE_COLORS = {
    TileType.WATER: Color(0.2, 0.4, 0.8, 1.0),
    TileType.SAND: Color(0.8, 0.75, 0.5, 1.0),
    TileType.ROUGH: Color(0.3, 0.6, 0.2, 1.0),
    TileType.FAIRWAY: Color(0.4, 0.7, 0.25, 1.0),
    TileType.GREEN: Color(0.35, 0.8, 0.3, 1.0),
    TileType.TEE: Color(0.5, 0.7, 0.4, 1.0),
    TileType.DIRT: Color(0.6, 0.5, 0.3, 1.0),
    TileType.FLOWERS: Color(0.9, 0.5, 0.5, 1.0),
    TileType.PATH: Color(0.5, 0.45, 0.35, 1.0),
    TileType.CART_PATH: Color(0.55, 0.5, 0.4, 1.0),
}

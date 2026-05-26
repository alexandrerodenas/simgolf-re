"""
Module terrain — traduction Python de Terrain.dll.

Classes et fonctions pour le système de terrain SimGolf.
Basé sur l'analyse Ghidra de Terrain.dll.
"""

from typing import Optional, List, Tuple
from dataclasses import dataclass, field
import math

from ..types import TileType, Color, Vec3, TILE_SIZE
from ..render import RenderBackend, render_tile


# === Structures ===

@dataclass
class Tile:
    """Représente une tuile de terrain.
    
    D'après l'analyse Ghidra, une Tile contient:
    - type: type de surface (eau, sable, fairway, etc.)
    - elevation: hauteur du coin (entier)
    - variation: variation visuelle
    - wall: type de mur/bordure
    """
    type: TileType = TileType.GRASS
    elevation: int = 0
    variation: int = 0
    wall: int = 0
    
    # Coordonnées dans la grille (ajoutées par la traduction Python)
    grid_x: int = 0
    grid_y: int = 0


@dataclass
class TerrainConfig:
    """Configuration du terrain."""
    grid_width: int = 32  # Nombre de tuiles en X
    grid_height: int = 32  # Nombre de tuiles en Y
    max_elevation: int = 7  # Élévation maximale
    ambient_color: Color = field(default_factory=lambda: Color(0.7, 0.7, 0.7, 1.0))
    light_direction: Vec3 = field(
        default_factory=lambda: Vec3(-0.5, 0.1, -1.0)
    )
    light_intensity: float = 0.9
    
    # Échelle de rendu (viewport / display_size)
    render_scale: float = 1.0


# === Classe Terrain ===

class Terrain:
    """Traduction de la classe Terrain (Terrain.dll).
    
    Gère la grille de tuiles, l'éclairage, et le rendu.
    """
    
    def __init__(self, config: Optional[TerrainConfig] = None):
        self.config = config or TerrainConfig()
        
        # Grille de tuiles [y][x]
        self.grid: List[List[Tile]] = [
            [Tile(grid_x=x, grid_y=y) for x in range(self.config.grid_width)]
            for y in range(self.config.grid_height)
        ]
        
        # Normales pré-calculées (vecteur par sommet de tuile)
        # Structure: grid_normals[y][x][corner] = Vec3
        # 4 coins par tuile: TL, TR, BR, BL
        self._normals: List[List[List[Vec3]]] = [
            [[Vec3(0.0, 1.0, 0.0) for _ in range(4)] for _ in range(self.config.grid_width)]
            for _ in range(self.config.grid_height)
        ]
        
        # État de l'éclairage (ambiance)
        self._ambient_r = 0.7
        self._ambient_g = 0.7
        self._ambient_b = 0.7
    
    # === Accesseurs terrain ===
    
    def get_tile(self, x: int, y: int) -> Optional[Tile]:
        """Retourne la tuile aux coordonnées données."""
        if 0 <= x < self.config.grid_width and 0 <= y < self.config.grid_height:
            return self.grid[y][x]
        return None
    
    def get_elevation(self, x: int, y: int) -> int:
        """Retourne l'élévation du coin supérieur gauche de la tuile.
        
        Note: Le jeu original utilise une grille d'élévations aux coins,
        pas aux centres des tuiles.
        """
        tile = self.get_tile(x, y)
        return tile.elevation if tile else 0
    
    def get_type(self, x: int, y: int) -> TileType:
        """Retourne le type de surface de la tuile."""
        tile = self.get_tile(x, y)
        return tile.type if tile else TileType.WATER
    
    def get_wall(self, x: int, y: int) -> int:
        """Retourne le type de mur/bordure de la tuile."""
        tile = self.get_tile(x, y)
        return tile.wall if tile else 0
    
    def tile_at(self, screen_x: float, screen_y: float) -> Optional[Tile]:
        """Trouve la tuile à des coordonnées écran (coordinate inverse).
        
        À implémenter: conversion écran → grille.
        """
        # TODO: Implémenter la transformation inverse de renderTile
        return None
    
    # === Calcul des normales ===
    
    def calc_normals(self, tile_x: int, tile_y: int) -> None:
        """Calcule les normales pour une tuile spécifique.
        
        Traduit de thunk_FUN_10012cf0 dans calcAllNormals.
        Calcule la normale à chaque coin de la tuile en moyennant
        les faces adjacentes.
        """
        # TODO: Implémenter le calcul de normales basé sur l'élévation
        pass
    
    def calc_all_normals(self) -> None:
        """Calcule les normales pour toutes les tuiles.
        
        Traduit de Terrain::calcAllNormals.
        Parcourt la grille et appelle calc_normals pour chaque tuile.
        """
        # Le code original calcAllNormals itère sur une zone
        # définie par getWidth et getHeight de la structure Tile
        for y in range(self.config.grid_height):
            for x in range(self.config.grid_width):
                self.calc_normals(x, y)
    
    # === Éclairage ===
    
    def change_lighting(self, direction: int = 0) -> None:
        """Change l'ambiance lumineuse.
        
        Traduit de Terrain::changeLighting.
        
        Args:
            direction: 0 = assombrir, non-0 = éclaircir
        """
        step = 0.05  # _DAT_1005f164 (pas de changement)
        
        if direction == 0:
            # Assombrir
            if self.config.ambient_color.r > step:
                self._ambient_r -= step
                self._ambient_g -= step
                self._ambient_b -= step
        else:
            # Éclaircir
            if self._ambient_r < 1.0 - step:
                self._ambient_r += step
                self._ambient_g += step
                self._ambient_b += step
        
        # Clamp
        self._ambient_r = max(0.0, min(1.0, self._ambient_r))
        self._ambient_g = max(0.0, min(1.0, self._ambient_g))
        self._ambient_b = max(0.0, min(1.0, self._ambient_b))
    
    # === Édition de terrain ===
    
    def elevate_corner(self, x: int, y: int, amount: int) -> None:
        """Élève un coin de tuile.
        
        Traduit de Terrain::elevateCorner.
        Modifie l'élévation du coin à la position donnée.
        """
        tile = self.get_tile(x, y)
        if tile is not None:
            # thunk_FUN_1000c7b0(param_1, param_2) → fonction d'élévation interne
            tile.elevation = min(self.config.max_elevation, tile.elevation + amount)
            self.calc_all_normals()
    
    def lower_corner(self, x: int, y: int, amount: int) -> None:
        """Abaisse un coin de tuile."""
        tile = self.get_tile(x, y)
        if tile is not None:
            tile.elevation = max(0, tile.elevation - amount)
            self.calc_all_normals()
    
    # === Initialisation ===
    
    def init_terrain(self) -> None:
        """Initialise le système de terrain.
        
        Traduit de Terrain::initTerrain.
        Configure les buffers de rendu.
        """
        self.calc_all_normals()
        # Note: Les appels OpenGL (glVertexPointer, glNormalPointer)
        # sont gérés par le backend de rendu
    
    def reset_terrain(self) -> None:
        """Réinitialise le terrain (nouveau niveau)."""
        for y in range(self.config.grid_height):
            for x in range(self.config.grid_width):
                self.grid[y][x] = Tile(
                    type=TileType.GREEN,
                    elevation=0,
                    grid_x=x,
                    grid_y=y,
                )
        self._ambient_r = 0.7
        self._ambient_g = 0.7
        self._ambient_b = 0.7
        self.calc_all_normals()
    
    # === Rendu ===
    
    def render(self, renderer: RenderBackend, viewport_x: int = 0, viewport_y: int = 0) -> None:
        """Rend toutes les tuiles visibles.
        
        Traduit de Terrain::render.
        """
        for y in range(self.config.grid_height):
            for x in range(self.config.grid_width):
                tile = self.grid[y][x]
                
                # Position à l'écran (projection isométrique)
                screen_x = viewport_x + (x - y) * TILE_SIZE * self.config.render_scale
                screen_y = viewport_y + (x + y) * TILE_SIZE * self.config.render_scale * 0.5
                
                render_tile(
                    renderer=renderer,
                    tile_type=tile.type,
                    screen_x=screen_x,
                    screen_y=screen_y,
                    scale=self.config.render_scale,
                    texture_id=hash((tile.type, tile.variation)),
                )
    
    def render_tile(self, renderer: RenderBackend, tile: Tile, 
                    viewport_x: int, viewport_y: int) -> None:
        """Rend une tuile individuelle.
        
        Traduit de Terrain::renderTile.
        """
        render_tile(
            renderer=renderer,
            tile_type=tile.type,
            screen_x=viewport_x + (tile.grid_x - tile.grid_y) * TILE_SIZE,
            screen_y=viewport_y + (tile.grid_x + tile.grid_y) * TILE_SIZE * 0.5,
            scale=self.config.render_scale,
        )

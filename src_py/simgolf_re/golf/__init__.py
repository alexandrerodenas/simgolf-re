"""
Traduction Python de la logique de jeu SimGolf (golf.exe).

Basé sur l'analyse Ghidra de golf.exe.
Modules:
  - game_loop: Boucle de jeu principale
  - physics: Moteur physique (tir, vent, collisions)
  - ai: IA des golfeurs
  - scoring: Système de score
  - golf_club: Clubs et mécaniques de tir
  - player: Gestion des golfeurs
"""

from dataclasses import dataclass, field
from enum import IntEnum
from typing import Optional, List

from ..types import Vec2, Vec3, TileType


# === Énumérations du jeu ===

class ClubType(IntEnum):
    """Types de clubs de golf."""
    DRIVER = 0
    WOOD_3 = 1
    WOOD_5 = 2
    IRON_3 = 3
    IRON_4 = 4
    IRON_5 = 5
    IRON_6 = 6
    IRON_7 = 7
    IRON_8 = 8
    IRON_9 = 9
    PITCHING_WEDGE = 10
    SAND_WEDGE = 11
    PUTTER = 12


class ShotType(IntEnum):
    """Types de coups."""
    NORMAL = 0
    POWER = 1      # Coup puissant
    FADE = 2       # Fade (gauche→droite)
    DRAW = 3       # Draw (droite→gauche)
    PUNCH = 4      # Coup bas
    LOB = 5        # Coup haut
    CHIP = 6       # Chip (petit coup roulé)
    PITCH = 7      # Pitch (petit coup lobé)
    PUTT = 8       # Putt


class TerrainEffect(IntEnum):
    """Effet du terrain sur la balle."""
    NORMAL = 0
    ROUGH_PENALTY = 1      # Ralentissement dans le rough
    SAND_PENALTY = 2       # Ralentissement dans le sable
    WATER_PENALTY = 3      # Balle dans l'eau
    FAIRWAY_BOUNCE = 4     # Rebond sur le fairway
    GREEN_ROLL = 5         # Roulement sur le green
    TEE_BOOST = 6          # Bonus sur le tee


# === Structures ===

@dataclass
class SwingState:
    """État du swing en cours.
    
    Le jeu original utilise un système de timing pour le swing:
    - Power bar: appui (monte) → relâchement (détermine la puissance)
    - Accuracy: deuxième appui (précision)
    """
    club: ClubType = ClubType.DRIVER
    shot_type: ShotType = ShotType.NORMAL
    target_x: float = 0.0
    target_y: float = 0.0
    power: float = 0.0       # 0.0 - 1.0
    accuracy: float = 1.0    # 0.0 - 1.0 (1.0 = parfait)
    hook_slice: float = 0.0  # Déviation latérale (-1.0 à 1.0)


@dataclass
class BallState:
    """État de la balle de golf."""
    pos: Vec2 = field(default_factory=Vec2)
    height: float = 0.0
    velocity: Vec3 = field(default_factory=Vec3)
    spin: float = 0.0
    on_ground: bool = False
    lies_in: TileType = TileType.FAIRWAY
    distance: float = 0.0  # Distance totale parcourue
    elevation: int = 0    # Élévation du sol


@dataclass
class GolfRoundState:
    """État d'une partie de golf."""
    hole: int = 0
    par: int = 3
    strokes: int = 0
    putts: int = 0
    score: int = 0  # Par rapport au par
    total_score: int = 0


@dataclass
class GolferState:
    """État d'un golfeur (joueur ou IA)."""
    name: str = ""
    position: Vec2 = field(default_factory=Vec2)
    facing_angle: float = 0.0
    ball: BallState = field(default_factory=BallState)
    round: GolfRoundState = field(default_factory=GolfRoundState)
    club: ClubType = ClubType.DRIVER
    
    # Stats du golfeur
    skill_power: float = 0.5     # 0.0 - 1.0
    skill_accuracy: float = 0.5  # 0.0 - 1.0
    skill_putting: float = 0.5   # 0.0 - 1.0
    skill_recovery: float = 0.5  # 0.0 - 1.0
    
    morale: float = 0.5  # Moral (affecte la performance)


# === Fonctions de traduction ===

def calculate_shot_power(
    swing: SwingState,
    golfer: GolferState,
    wind_speed: float = 0.0,
    wind_direction: float = 0.0,
) -> float:
    """Calcule la puissance effective d'un coup.
    
    Traduit des fonctions de golf.exe gérant le swing.
    """
    # Puissance de base
    power = swing.power * golfer.skill_power
    
    # Malus rough/sable
    if golfer.ball.lies_in == TileType.ROUGH:
        power *= 0.85
    elif golfer.ball.lies_in == TileType.SAND:
        power *= 0.70
    
    # Bonus/malus du vent
    # Le vent de face réduit la puissance, vent arrière l'augmente
    wind_factor = 1.0 - (wind_speed * 0.02 * wind_direction)
    power *= max(0.5, wind_factor)
    
    return power


def calculate_club_distance(club: ClubType, power: float) -> float:
    """Calcule la distance parcourue avec un club donné.
    
    Basé sur les données du jeu original.
    """
    # Distances de base en yards
    distances = {
        ClubType.DRIVER: 250,
        ClubType.WOOD_3: 220,
        ClubType.WOOD_5: 200,
        ClubType.IRON_3: 190,
        ClubType.IRON_4: 180,
        ClubType.IRON_5: 170,
        ClubType.IRON_6: 160,
        ClubType.IRON_7: 150,
        ClubType.IRON_8: 140,
        ClubType.IRON_9: 130,
        ClubType.PITCHING_WEDGE: 110,
        ClubType.SAND_WEDGE: 90,
        ClubType.PUTTER: 30,
    }
    return distances.get(club, 150) * power


def calculate_elevation_adjustment(
    target_elevation: int,
    golfer_elevation: int,
) -> float:
    """Ajuste la distance selon le dénivelé.
    
    Un terrain en montée réduit la distance,
    en descente l'augmente.
    """
    diff = target_elevation - golfer_elevation
    # ~1 yard par pied de dénivelé
    return -diff * 1.0


def calculate_wind_effect(
    wind_speed: float,
    wind_angle: float,
    shot_angle: float,
) -> Vec2:
    """Calcule l'effet du vent sur la balle.
    
    Returns:
        Vecteur de déviation (x, y) en yards.
    """
    import math
    
    # Vent relatif à la direction du tir
    relative_angle = math.radians(wind_angle - shot_angle)
    
    # Composantes: latéral (crosswind) et longitudinal (head/tailwind)
    cross = math.sin(relative_angle) * wind_speed * 0.5
    along = math.cos(relative_angle) * wind_speed * 0.3
    
    return Vec2(cross, along)

"""
Traduction Python de la logique de jeu SimGolf (golf.exe).

Modules:
  - swing: Système de swing à deux barres
  - physics: Moteur physique de la balle
  - clubs: Statistiques des clubs
  - ai: IA des golfeurs (à venir)
  - course: Gestion des parcours (à venir)

Basé sur l'analyse Ghidra de golf.exe, Terrain.dll.
"""

from .swing import (
    SwingMeter, SwingState, SwingPhase, SwingConfig,
    ShotResult, LieType, SwingPhase as SwPhase,
    LIE_DESCRIPTIONS, SHOT_RESULT_NAMES,
)

from .physics import (
    BallPhysics, BallState, BallTerrain, ClubStats, CLUB_STATS,
    CLUB_DISTANCES, TrajectoryPoint,
    BallPhysics as BP,
)

# Export pratique pour l'utilisation
__all__ = [
    'SwingMeter', 'SwingState', 'SwingPhase', 'SwingConfig',
    'ShotResult', 'LieType',
    'BallPhysics', 'BallState', 'BallTerrain', 'ClubStats',
    'CLUB_STATS', 'CLUB_DISTANCES', 'TrajectoryPoint',
    'LIE_DESCRIPTIONS', 'SHOT_RESULT_NAMES',
]

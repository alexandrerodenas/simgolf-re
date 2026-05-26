"""
Système de swing SimGolf — traduction Python.

Basé sur l'analyse de golf.exe et la connaissance du gameplay SimGolf.
Le système de swing original utilise un timing à deux barres :
1. Power bar : clic maintenu → relâchement détermine puissance
2. Accuracy bar : deuxième clic détermine précision
"""

from dataclasses import dataclass, field
from enum import IntEnum
from typing import Optional, Callable
import math


class SwingPhase(IntEnum):
    """Phases du swing."""
    IDLE = 0
    POWER_BUILDING = 1   # Barre de puissance qui monte
    POWER_SET = 2        # Puissance déterminée
    ACCURACY_BUILDING = 3  # Barre de précision qui bouge
    ACCURACY_SET = 4       # Précision déterminée
    SWING_COMPLETE = 5     # Swing terminé
    RESULT = 6             # Résultat du coup


class ShotResult(IntEnum):
    """Résultat d'un tir."""
    PERFECT = 0
    GOOD = 1
    OK = 2
    BAD = 3
    TERRIBLE = 4
    WHIFF = 5  # Raté


class LieType(IntEnum):
    """Type de lie (position de la balle)."""
    TEE = 0      # Sur un tee
    FAIRWAY = 1  # Fairway
    ROUGH = 2    # Rough
    SAND = 3     # Bunker
    DIRT = 4     # Terre battue
    CART_PATH = 5  # Chemin de voiture


@dataclass
class SwingConfig:
    """Configuration du système de swing."""
    # Temps en secondes pour la barre de puissance (aller-retour)
    power_cycle_time: float = 2.0
    # Temps pour la barre de précision  
    accuracy_cycle_time: float = 1.5
    # Fenêtre de perfection (proportion du cycle)
    perfect_window: float = 0.05
    good_window: float = 0.15
    ok_window: float = 0.30
    
    # Facteurs de difficulté par type de lie
    lie_difficulty = {
        LieType.TEE: 0.8,      # Facile
        LieType.FAIRWAY: 0.9,
        LieType.ROUGH: 1.2,
        LieType.SAND: 1.5,
        LieType.DIRT: 1.3,
        LieType.CART_PATH: 1.1,
    }


@dataclass
class SwingState:
    """État actuel du swing."""
    phase: SwingPhase = SwingPhase.IDLE
    power: float = 0.0       # 0.0 - 1.0 (puissance sélectionnée)
    accuracy: float = 0.0    # 0.0 - 1.0 (précision)
    pull_back: float = 0.0   # Position du backswing
    follow_through: float = 0.0  # Position du follow-through
    
    # Timing
    power_timer: float = 0.0
    accuracy_timer: float = 0.0
    
    # Résultat
    power_error: float = 0.0     # Erreur de puissance
    accuracy_error: float = 0.0  # Erreur de précision
    result: ShotResult = ShotResult.PERFECT


class SwingMeter:
    """Traduit le système de swing à deux barres de SimGolf.
    
    Le joueur :
    1. Clic et maintient → barre de puissance monte (rebondit si dépasse)
    2. Relâche → puissance fixée → barre de précision commence
    3. Re-clic au bon moment → précision fixée
    4. Coup exécuté !
    """
    
    def __init__(self, config: Optional[SwingConfig] = None):
        self.config = config or SwingConfig()
        self.state = SwingState()
        self._on_complete: Optional[Callable] = None
        self._difficulty_mult = 1.0
    
    def start_swing(self, lie: LieType = LieType.FAIRWAY) -> None:
        """Initie un nouveau swing.
        
        Traduit de l'état IDLE → POWER_BUILDING dans golf.exe.
        """
        self.state = SwingState(phase=SwingPhase.POWER_BUILDING)
        self._difficulty_mult = self.config.lie_difficulty.get(lie, 1.0)
    
    def update(self, dt: float, holding: bool = False) -> None:
        """Met à jour l'état du swing.
        
        Traduit de la boucle de mise à jour du swing dans golf.exe.
        
        Args:
            dt: Delta time en secondes
            holding: True si le joueur maintient le clic
        """
        if self.state.phase == SwingPhase.POWER_BUILDING:
            if holding:
                # Barre de puissance qui monte (oscille entre 0 et 1)
                self.state.power_timer += dt
                power = math.sin(self.state.power_timer * math.pi / self.config.power_cycle_time)
                self.state.power = abs(power)
            else:
                # Relâché → puissance fixée
                self._set_power()
                
        elif self.state.phase == SwingPhase.ACCURACY_BUILDING:
            if holding:
                # Barre de précision qui bouge (oscille rapidement)
                self.state.accuracy_timer += dt
                accuracy = math.sin(self.state.accuracy_timer * math.pi / self.config.accuracy_cycle_time)
                self.state.accuracy = abs(accuracy)
            else:
                # Re-clic → précision fixée
                self._set_accuracy()
    
    def _set_power(self) -> None:
        """Fixe la puissance et calcule l'erreur.
        
        Transition POWER_BUILDING → POWER_SET/ACCURACY_BUILDING.
        """
        # Puissance désirée = où le joueur voulait cliquer
        # (on utilise 1.0 = max comme cible par défaut)
        target_power = 1.0
        
        # Plus le joueur s'éloigne de la cible, plus l'erreur est grande
        error = abs(self.state.power - target_power) * self._difficulty_mult
        
        self.state.power_error = error
        self.state.phase = SwingPhase.ACCURACY_BUILDING
        self.state.accuracy_timer = 0.0
    
    def _set_accuracy(self) -> None:
        """Fixe la précision et calcule le résultat final.
        
        Transition ACCURACY_BUILDING → SWING_COMPLETE.
        """
        # Cible de précision = milieu de la barre (0.5)
        target_accuracy = 0.5
        
        error = abs(self.state.accuracy - target_accuracy) * self._difficulty_mult
        self.state.accuracy_error = error
        
        # Résultat combiné
        total_error = (self.state.power_error + self.state.accuracy_error) / 2.0
        
        if total_error < self.config.perfect_window:
            self.state.result = ShotResult.PERFECT
        elif total_error < self.config.good_window:
            self.state.result = ShotResult.GOOD
        elif total_error < self.config.ok_window:
            self.state.result = ShotResult.OK
        elif total_error < 0.5:
            self.state.result = ShotResult.BAD
        else:
            self.state.result = ShotResult.TERRIBLE
        
        self.state.phase = SwingPhase.SWING_COMPLETE
        
        if self._on_complete:
            self._on_complete(self.state.result)
    
    def get_effective_power(self, base_power: float) -> float:
        """Retourne la puissance effective après l'erreur de swing.
        
        Un swing parfait = puissance maximale.
        Un mauvais swing = puissance réduite.
        """
        reduction = self.state.power_error * 0.5
        return base_power * (1.0 - reduction)
    
    def get_effective_accuracy(self, base_accuracy: float) -> float:
        """Retourne la précision effective après l'erreur de swing."""
        reduction = self.state.accuracy_error * 0.7
        return base_accuracy * (1.0 - reduction)
    
    def get_hook_slice(self) -> float:
        """Calcule le hook/slice basé sur l'erreur de précision.
        
        Retourne -1.0 (hook fort) à +1.0 (slice fort).
        """
        if self.state.accuracy_error < self.config.good_window:
            return 0.0  # Précis = pas de déviation
        
        # Plus l'erreur est grande, plus la déviation est forte
        deviation = self.state.accuracy_error * 2.0 - 1.0
        
        # Si la barre s'est arrêtée trop tôt → slice (droite)
        # Si trop tard → hook (gauche)
        if self.state.accuracy < 0.5:
            return max(-1.0, -deviation)  # Slice
        else:
            return min(1.0, deviation)  # Hook
    
    def set_on_complete(self, callback: Callable) -> None:
        """Définit le callback appelé quand le swing est terminé."""
        self._on_complete = callback


# === Résultat par type de lie ===

LIE_DESCRIPTIONS = {
    LieType.TEE: "sur le tee",
    LieType.FAIRWAY: "sur le fairway",
    LieType.ROUGH: "dans le rough",
    LieType.SAND: "dans un bunker",
    LieType.DIRT: "sur de la terre battue",
    LieType.CART_PATH: "sur le chemin",
}

SHOT_RESULT_NAMES = {
    ShotResult.PERFECT: "Coup parfait !",
    ShotResult.GOOD: "Bon coup",
    ShotResult.OK: "Coup passable",
    ShotResult.BAD: "Mauvais coup",
    ShotResult.TERRIBLE: "Coup raté !",
    ShotResult.WHIFF: "Raté !",
}

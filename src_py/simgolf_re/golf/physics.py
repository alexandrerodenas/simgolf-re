"""
Système de physique de balle SimGolf — traduction Python.

Basé sur l'analyse golf.exe et les mécaniques connues de SimGolf.
Gère la trajectoire de la balle : lancement, vol, rebond, roulement.
"""

from dataclasses import dataclass, field
from typing import Optional, List, Tuple
from enum import IntEnum
import math


# === Types de terrain balle ===

class BallTerrain(IntEnum):
    """État du terrain sous la balle."""
    TEE = 0
    FAIRWAY = 1
    ROUGH = 2
    SAND = 3
    GREEN = 4
    WATER = 5
    OB = 6        # Out of bounds
    HOLE = 7      # Dans le trou !


# === Constantes physiques ===

GRAVITY = 9.81 * 0.5  # Gravité du jeu (ajustée pour le gameplay)
AIR_DENSITY = 1.225   # kg/m³
BALL_MASS = 0.04593   # kg (45.93g, balle de golf standard)
BALL_RADIUS = 0.02135 # m (21.35mm)
BALL_AREA = math.pi * BALL_RADIUS ** 2

# Coefficients aérodynamiques (basés sur SimGolf)
LIFT_COEFFICIENT = 0.3
DRAG_COEFFICIENT = 0.4
ROLLING_FRICTION_FAIRWAY = 0.3
ROLLING_FRICTION_GREEN = 0.15
ROLLING_FRICTION_ROUGH = 0.6
BOUNCE_RESTITUTION = 0.4  # Rebond


# === Clubs ===

@dataclass
class ClubStats:
    """Statistiques d'un club."""
    name: str
    max_distance: float     # Distance max en yards
    launch_angle: float     # Angle de lancement en degrés
    backspin: float         # Backspin en RPM
    height_factor: float    # Facteur de hauteur de trajectoire


CLUB_STATS = {
    "DRIVER": ClubStats("Driver", 280, 12.0, 2500, 1.0),
    "WOOD_3": ClubStats("Bois 3", 240, 14.0, 2800, 0.9),
    "WOOD_5": ClubStats("Bois 5", 220, 16.0, 3200, 0.85),
    "IRON_3": ClubStats("Fer 3", 210, 18.0, 4000, 0.8),
    "IRON_4": ClubStats("Fer 4", 200, 20.0, 4500, 0.75),
    "IRON_5": ClubStats("Fer 5", 190, 22.0, 5000, 0.7),
    "IRON_6": ClubStats("Fer 6", 180, 24.0, 5500, 0.65),
    "IRON_7": ClubStats("Fer 7", 170, 26.0, 6000, 0.6),
    "IRON_8": ClubStats("Fer 8", 160, 28.0, 6500, 0.55),
    "IRON_9": ClubStats("Fer 9", 150, 30.0, 7000, 0.5),
    "PITCHING_WEDGE": ClubStats("Pitching Wedge", 135, 34.0, 8000, 0.4),
    "SAND_WEDGE": ClubStats("Sand Wedge", 115, 38.0, 9000, 0.35),
    "LOB_WEDGE": ClubStats("Lob Wedge", 95, 42.0, 10000, 0.3),
    "PUTTER": ClubStats("Putter", 30, 3.0, 500, 0.0),
}

# Distance par club au format utilisé par le code original
CLUB_DISTANCES = {
    "DRIVER": 250,
    "WOOD_3": 220,
    "WOOD_5": 200,
    "IRON_3": 190,
    "IRON_4": 180,
    "IRON_5": 170,
    "IRON_6": 160,
    "IRON_7": 150,
    "IRON_8": 140,
    "IRON_9": 130,
    "PITCHING_WEDGE": 110,
    "SAND_WEDGE": 90,
    "PUTTER": 30,
}


# === État de la balle ===

@dataclass
class BallState:
    """État de la balle de golf."""
    pos_3d: Tuple[float, float, float] = (0.0, 0.0, 0.0)  # (x, y, z)
    velocity: Tuple[float, float, float] = (0.0, 0.0, 0.0)  # (vx, vy, vz)
    spin: float = 0.0           # RPM
    height: float = 0.0         # Hauteur au-dessus du sol
    ground_elevation: float = 0.0
    airborne: bool = False
    on_green: bool = False
    terrain: BallTerrain = BallTerrain.FAIRWAY
    distance: float = 0.0       # Distance totale parcourue
    speed: float = 0.0          # Vitesse actuelle (m/s)
    
    # Stats de vol
    apex_height: float = 0.0    # Hauteur max atteinte
    flight_time: float = 0.0    # Temps de vol
    carry_distance: float = 0.0 # Distance de vol
    roll_distance: float = 0.0  # Distance de roulement


# === Trajectoire ===

@dataclass
class TrajectoryPoint:
    """Point de trajectoire."""
    x: float = 0.0
    y: float = 0.0
    z: float = 0.0
    speed: float = 0.0
    height: float = 0.0
    ground_level: float = 0.0


class BallPhysics:
    """Moteur physique pour la balle de golf.
    
    Traduit des fonctions de physique de golf.exe.
    Simule la trajectoire complète : lancement → vol → rebond → roulement.
    """
    
    def __init__(self):
        self.state = BallState()
        self.trajectory: List[TrajectoryPoint] = []
        self._time_step = 0.01  # Pas de simulation (10ms)
    
    def launch(
        self,
        club_name: str,
        power_factor: float,
        accuracy_factor: float,
        hook_slice: float = 0.0,
        wind_speed: float = 0.0,
        wind_angle: float = 0.0,
        shot_angle: float = 0.0,
        elevation: float = 0.0,
        lie_type: BallTerrain = BallTerrain.FAIRWAY,
    ) -> None:
        """Lance la balle avec les paramètres donnés.
        
        Traduit des fonctions de tir de golf.exe.
        """
        club = CLUB_STATS.get(club_name, CLUB_STATS["IRON_5"])
        
        # Distance de base (en yards)
        base_distance = club.max_distance * power_factor
        
        # Conversion yards → mètres
        distance_m = base_distance * 0.9144
        
        # Vélocité initiale (m/s)
        # Formule simplifiée : E_kin = 1/2 * m * v² → v = sqrt(2E/m)
        initial_speed = 25.0 + distance_m * 0.8
        if lie_type == BallTerrain.ROUGH:
            initial_speed *= 0.85
        elif lie_type == BallTerrain.SAND:
            initial_speed *= 0.70
        
        # Angle de lancement (degrés → radians)
        launch_angle_rad = math.radians(club.launch_angle)
        
        # Direction du tir
        direction = shot_angle * math.pi / 180.0
        
        # Hook/slice déviation
        deviation = hook_slice * 5.0 * math.pi / 180.0  # Max ±5°
        
        # Vent
        wind_rad = wind_angle * math.pi / 180.0
        wind_cross = math.sin(wind_rad - direction) * wind_speed * 0.5
        wind_along = math.cos(wind_rad - direction) * wind_speed * 0.3
        
        # Vélocité initiale en 3D
        vx = initial_speed * math.cos(launch_angle_rad) * math.sin(direction + deviation) + wind_cross
        vy = initial_speed * math.cos(launch_angle_rad) * math.cos(direction + deviation) + wind_along
        vz = initial_speed * math.sin(launch_angle_rad)
        
        self.state = BallState(
            pos_3d=(0.0, 0.0, elevation),
            velocity=(vx, vy, vz),
            spin=club.backspin,
            height=0.0 if lie_type != BallTerrain.TEE else 0.05,
            ground_elevation=elevation,
            airborne=True if lie_type != BallTerrain.GREEN else False,
            terrain=lie_type,
            speed=initial_speed,
        )
        
        self.trajectory = []
    
    def simulate(self, max_time: float = 10.0) -> List[TrajectoryPoint]:
        """Simule la trajectoire complète de la balle.
        
        Returns:
            Liste des points de la trajectoire.
        """
        traj = []
        dt = self._time_step
        t = 0.0
        
        while t < max_time:
            point = TrajectoryPoint(
                x=self.state.pos_3d[0],
                y=self.state.pos_3d[1],
                z=self.state.pos_3d[2],
                speed=self.state.speed,
                height=self.state.height,
                ground_level=self.state.ground_elevation,
            )
            traj.append(point)
            
            if not self.state.airborne and self.state.speed < 0.1:
                break  # Balle arrêtée
            
            self._step(dt)
            
            # Mise à jour apex et distances
            if self.state.airborne:
                self.state.flight_time += dt
                self.state.carry_distance = math.sqrt(
                    self.state.pos_3d[0]**2 + self.state.pos_3d[1]**2
                )
                if self.state.pos_3d[2] > self.state.apex_height:
                    self.state.apex_height = self.state.pos_3d[2]
            else:
                self.state.roll_distance += self.state.speed * dt
            
            self.state.distance += self.state.speed * dt
            t += dt
        
        self.trajectory = traj
        return traj
    
    def _step(self, dt: float) -> None:
        """Avance la simulation d'un pas."""
        x, y, z = self.state.pos_3d
        vx, vy, vz = self.state.velocity
        
        speed = math.sqrt(vx*vx + vy*vy + vz*vz)
        self.state.speed = speed
        
        if speed < 0.01:
            return
        
        if self.state.airborne:
            self._step_flight(dt, x, y, z, vx, vy, vz, speed)
        else:
            self._step_ground(dt, x, y, z, vx, vy, speed)
    
    def _step_flight(self, dt, x, y, z, vx, vy, vz, speed):
        """Pas de vol (aérodynamique + gravité)."""
        # Forces aérodynamiques
        drag_force = 0.5 * AIR_DENSITY * DRAG_COEFFICIENT * BALL_AREA * speed**2
        lift_force = 0.5 * AIR_DENSITY * LIFT_COEFFICIENT * BALL_AREA * speed**2 * self.state.spin / 5000
        
        # Direction des forces
        if speed > 0:
            drag_x = -drag_force * vx / speed * dt / BALL_MASS
            drag_y = -drag_force * vy / speed * dt / BALL_MASS
            drag_z = -drag_force * vz / speed * dt / BALL_MASS
        else:
            drag_x = drag_y = drag_z = 0
        
        # Gravité + portance
        gravity = -GRAVITY * dt
        lift = lift_force * dt / BALL_MASS
        
        # Mise à jour vélocité
        new_vx = vx + drag_x
        new_vy = vy + drag_y
        new_vz = vz + drag_z + gravity + lift
        
        # Mise à jour position
        new_x = x + new_vx * dt
        new_y = y + new_vy * dt
        new_z = z + new_vz * dt
        
        # Perte de spin progressive
        spin_decay = self.state.spin * 0.99
        self.state.spin = spin_decay
        
        # Vérifier contact avec le sol
        if new_z <= self.state.ground_elevation:
            self._bounce(new_x, new_y, self.state.ground_elevation, new_vx, new_vy, new_vz)
        else:
            self.state.pos_3d = (new_x, new_y, new_z)
            self.state.velocity = (new_vx, new_vy, new_vz)
            self.state.height = new_z - self.state.ground_elevation
    
    def _step_ground(self, dt, x, y, z, vx, vy, speed):
        """Pas au sol (roulement)."""
        # Friction selon le terrain
        if self.state.on_green:
            friction = ROLLING_FRICTION_GREEN
        elif self.state.terrain == BallTerrain.ROUGH:
            friction = ROLLING_FRICTION_ROUGH
        else:
            friction = ROLLING_FRICTION_FAIRWAY
        
        # Décélération
        decel = friction * GRAVITY * dt
        
        if speed > decel:
            factor = (speed - decel) / speed
            new_x = x + vx * dt * factor
            new_y = y + vy * dt * factor
            new_vx = vx * factor
            new_vy = vy * factor
        else:
            new_x, new_y = x, y
            new_vx = new_vy = 0.0
        
        self.state.pos_3d = (new_x, new_y, self.state.ground_elevation)
        self.state.velocity = (new_vx, new_vy, 0.0)
        self.state.height = 0.0
    
    def _bounce(self, x, y, ground_z, vx, vy, vz):
        """Rebond de la balle au sol."""
        # Perte d'énergie au rebond
        new_vz = -vz * BOUNCE_RESTITUTION
        new_vx = vx * 0.9
        new_vy = vy * 0.9
        
        self.state.pos_3d = (x, y, ground_z + 0.01)
        self.state.height = 0.01
        self.state.airborne = False
        self.state.velocity = (new_vx, new_vy, new_vz)
        
        # Si le rebond est trop faible, la balle roule
        if abs(new_vz) < 1.0:
            self.state.velocity = (new_vx, new_vy, 0.0)
    
    def get_predicted_distance(self, club_name: str, power: float) -> float:
        """Prédit la distance pour un club et une puissance donnés."""
        club = CLUB_STATS.get(club_name, CLUB_STATS["IRON_5"])
        return club.max_distance * power
    
    def get_recommended_club(self, distance: float, lie: BallTerrain) -> str:
        """Recommande un club pour une distance donnée."""
        # Ajustement selon le lie
        if lie == BallTerrain.ROUGH:
            distance *= 1.15  # Besoin d'un club plus fort
        elif lie == BallTerrain.SAND:
            distance *= 1.3
        
        best_club = "PUTTER"
        best_diff = float('inf')
        
        for name, stats in CLUB_STATS.items():
            if name == "PUTTER" and distance > 50:
                continue
            diff = abs(stats.max_distance - distance)
            if diff < best_diff:
                best_diff = diff
                best_club = name
        
        return best_club

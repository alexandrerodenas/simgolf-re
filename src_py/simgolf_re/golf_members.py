"""
SimGolf Reverse Engineering — Member / Golfer Management
=========================================================
Translation of FUN_00424120 from Ghidra decompiled C.

This is the core golfer management function that handles:
  - Shot decision-making for each golfer
  - Trajectory computation (angle, distance, velocity)
  - Terrain analysis (finding fairway/green targets)
  - Golfer personality types: "Power Hitter", "Club Pro", etc.
  - Shot quality rating and stamina/fatigue modeling
  - Mood-based speech trigger system
  - Direction bias (hook/slice) based on golfer stats

Key:
  - DAT_005794b8/bc: golfer tile position (int, stride 0x40)
  - DAT_005794c8: golfer flags (bitfield, stride 0x40)
  - DAT_005794d0/d1: tile type / sub-type (stride 0x100)
  - DAT_005794d3: shot range rating (byte)
  - DAT_005794d4: shot phase / quality (byte)
  - DAT_005794d9: hole index for golfer (byte)
  - DAT_00579584/88: shot target tile coords (int)
  - DAT_00579598: shot velocity integral (int)
  - DAT_0057959c: shot power / distance (int)
  - DAT_005795a0: shot accuracy (int)
  - DAT_005795a4: shot spin / curve (int)
  - DAT_005795aa/ab/ac/ad/ae/af: personality modifiers (bytes)
  - DAT_005a59f8: current golfer index
  - DAT_00822c88: screen width (difficulty modifier)
  - DAT_005a9cc4: course difficulty level
  - DAT_005a9ce4: weather/wind flag
  - DAT_0059e7b8: global flags
  - DIR_DX/DIR_DY: direction offsets (DAT_004c2878/2898)
  - Personality names: "Power Hitter", "Club Pro"
  - PTR_s_Power_Hitter (DAT_004c2a28)
  - PTR_s_Club_Pro (DAT_004c2a30)
"""

from __future__ import annotations

import math
import random
from typing import Final, List, Tuple

# ── Constants ──────────────────────────────────────────────────────────────────

GOLFER_STRIDE: Final[int] = 0x40     # per-golfer state stride (tile arrays)
GOLFER_TILE_STRIDE: Final[int] = 0x100  # per-tile-type stride
GOLFER_COUNT: Final[int] = 0x98      # 152 max golfers

# Direction lookup tables (DAT_004c2878 / DAT_004c2898)
DIR_DX: Final[List[int]] = [1, 1, 0, -1, -1, -1, 0, 1]
DIR_DY: Final[List[int]] = [0, -1, -1, -1, 0, 1, 1, 1]

# Terrain/tile property table (DAT_00578372, stride 0x30 per tile type)
# Offsets into each 0x30-byte entry:
TILE_WALK_SPEED: Final[int] = 0x00    # movement speed modifier
TILE_SURFACE: Final[int] = 0x04       # surface type (\r = rough)
TILE_ELEVATION: Final[int] = 0x05     # elevation flag

# Golfer flags (DAT_005794c8 bitfield)
GF_ACTIVE: Final[int] = 1 << 0        # golfer is active on course
GF_HAS_BALL: Final[int] = 1 << 1      # golfer has ball
GF_ON_GREEN: Final[int] = 1 << 7      # golfer is on the green
GF_POWER_SWING: Final[int] = 1 << 25  # power swing mode
GF_APPROACH: Final[int] = 1 << 26     # approach shot mode
GF_SPECIAL: Final[int] = 1 << 27      # special shot mode
GF_SPIN: Final[int] = 1 << 28         # spin modifier active
GF_IN_MOTION: Final[int] = 1 << 29    # ball in motion

# Tile type flags (DAT_0053caf0, bitfield per tile)
TF_OCCUPIED: Final[int] = 1 << 8      # tile is occupied
TF_SPECIAL: Final[int] = 1 << 15      # special tile (water, etc.)

# Shot phase values (DAT_005794d4)
PHASE_TEE: Final[int] = 0             # teeing off
PHASE_FAIRWAY: Final[int] = 1         # fairway shot
PHASE_APPROACH: Final[int] = 2        # approach to green
PHASE_PUTT: Final[int] = 3            # putting
PHASE_CHIP: Final[int] = 4            # chip shot
PHASE_PITCH: Final[int] = 5           # pitch shot
PHASE_BUNKER: Final[int] = 6          # bunker shot
PHASE_DROPPED: Final[int] = 13        # dropped/penalty (0x0D)

# Shot range thresholds (DAT_005794d3)
RANGE_MIN: Final[int] = 0
RANGE_SHORT: Final[int] = 6
RANGE_MEDIUM: Final[int] = 10
RANGE_LONG: Final[int] = 24
RANGE_MAX: Final[int] = 40

# Personality type IDs
PERS_POWER_HITTER: Final[int] = 0
PERS_CLUB_PRO: Final[int] = 1
PERS_ACCURATE: Final[int] = 2
PERS_SHORT_GAME: Final[int] = 3
PERS_LONG_HITTER: Final[int] = 4
PERS_BUNKER_SPECIALIST: Final[int] = 5

# Personality names
PERSONALITY_NAMES: Final[List[str]] = [
    "Power Hitter",   # 0
    "Club Pro",       # 1
    "Accurate",       # 2
    "Short Game",     # 3
    "Long Hitter",    # 4
    "Bunker Spec.",   # 5
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Global state container
# ═══════════════════════════════════════════════════════════════════════════════

class GolfState:
    """Container for all mutable game state referenced by the member
    management system.  Defaults match the decompiled global layout."""

    def __init__(self) -> None:
        # ── Golfer tile positions (DAT_005794b8/bc, stride 0x40) ──
        self.tile_x: List[int] = [0] * GOLFER_COUNT
        self.tile_y: List[int] = [0] * GOLFER_COUNT
        self.tile_prev_x: List[int] = [0] * GOLFER_COUNT  # 7c
        self.tile_prev_y: List[int] = [0] * GOLFER_COUNT  # 80

        # ── Golfer flags (DAT_005794c8, bitfield) ────────────────
        self.golfer_flags: List[int] = [0] * GOLFER_COUNT

        # ── Tile type info (stride 0x100) ─────────────────────────
        self.tile_type: List[int] = [0] * GOLFER_COUNT       # d0
        self.tile_subtype: List[int] = [0] * GOLFER_COUNT    # d1 (bitfield)
        self.tile_dir: List[int] = [0] * GOLFER_COUNT        # d2 (direction)
        self.tile_range: List[int] = [0] * GOLFER_COUNT      # d3 (shot range)
        self.tile_shot_phase: List[int] = [0] * GOLFER_COUNT # d4 (shot phase)
        self.tile_delay: List[int] = [0] * GOLFER_COUNT      # d6
        self.tile_hole_idx: List[int] = [0] * GOLFER_COUNT   # d9 (signed byte)
        self.tile_hole_sub: List[int] = [0] * GOLFER_COUNT   # da (sub-hole)
        self.tile_height: List[int] = [0] * GOLFER_COUNT     # db

        # ── Shot target positions (DAT_00579584/88) ──────────────
        self.shot_target_x: List[int] = [0] * GOLFER_COUNT
        self.shot_target_y: List[int] = [0] * GOLFER_COUNT

        # ── Shot dynamics ─────────────────────────────────────────
        self.shot_velocity: List[int] = [0] * GOLFER_COUNT     # 98
        self.shot_power: List[int] = [0] * GOLFER_COUNT        # 9c
        self.shot_accuracy: List[int] = [0] * GOLFER_COUNT     # a0
        self.shot_spin: List[int] = [0] * GOLFER_COUNT         # a4
        self.shot_curve: List[int] = [0] * GOLFER_COUNT        # a4 (alt usage)

        # ── Personality modifiers (bytes) ────────────────────────
        self.pers_aa: List[int] = [0] * GOLFER_COUNT  # 795aa
        self.pers_ab: List[int] = [0] * GOLFER_COUNT  # 795ab
        self.pers_ac: List[int] = [0] * GOLFER_COUNT  # 795ac (power swing)
        self.pers_ad: List[int] = [0] * GOLFER_COUNT  # 795ad (hook)
        self.pers_ae: List[int] = [0] * GOLFER_COUNT  # 795ae (slice)
        self.pers_af: List[int] = [0] * GOLFER_COUNT  # 795af
        self.pers_b0: List[int] = [0] * GOLFER_COUNT  # 795b0

        # ── Mood / speech system ──────────────────────────────────
        self.golfer_mood: List[int] = [0] * GOLFER_COUNT       # 7953c
        self.golfer_mood_flags: List[int] = [0] * GOLFER_COUNT # 79532
        self.speech_triggered: List[int] = [0] * GOLFER_COUNT  # 79558 (short bitmap)

        # ── Partner / pairing ─────────────────────────────────────
        self.golfer_partner: List[int] = [0] * GOLFER_COUNT    # 7955a (short)
        self.golfer_group: List[int] = [0] * GOLFER_COUNT      # 7956e (short)

        # ── Fatigue / needs ───────────────────────────────────────
        self.golfer_fatigue: List[int] = [0] * GOLFER_COUNT    # 5e
        self.golfer_hunger: List[int] = [0] * GOLFER_COUNT     # 60
        self.golfer_thirst: List[int] = [0] * GOLFER_COUNT     # 5c

        # ── Patience / frustration ────────────────────────────────
        self.golfer_patience: List[int] = [0] * GOLFER_COUNT   # 62
        self.golfer_frustration: List[int] = [0] * GOLFER_COUNT  # 56

        # ── Personality type ──────────────────────────────────────
        self.golfer_personality: List[int] = [0] * GOLFER_COUNT  # from DAT_005795ac etc.

        # ── Current golfer ────────────────────────────────────────
        self.current_golfer: int = 0        # DAT_005a59f8

        # ── Course / world state ──────────────────────────────────
        self.screen_w: int = 800           # DAT_00822c88
        self.difficulty: int = 0           # DAT_005a9cc4 (0=easy, 1=normal, 2=hard)
        self.weather_flag: int = 0         # DAT_005a9ce4
        self.flags: int = 0                # DAT_0059e7b8
        self.course_theme: int = 0         # DAT_005a34e0

        # ── Terrain grid ──────────────────────────────────────────
        self.terrain_height: List[int] = [0] * (0x32 * 0x32)   # DAT_005722e8
        self.tile_occupied: List[int] = [0] * (0x32 * 0x32)    # DAT_0053caf0
        self.tile_surface: List[int] = [0] * 32                # DAT_00578372 (stride 0x30)
        self.tile_walk: List[int] = [0] * 32                   # DAT_00578376

        # ── Speech / mood table (DAT_005849f6) ────────────────────
        self.speech_table: List[int] = [0] * (19 * 0x2C)

        # ── Course feature flags ──────────────────────────────────
        self.course_features: int = 0      # DAT_005a6364
        self.feature_level: int = 0        # DAT_00543cb8?

        # ── Per-hole visitor counts ───────────────────────────────
        self.hole_visitors: List[int] = [0] * 19  # DAT_00575ad4

        # ── AI state ──────────────────────────────────────────────
        self.ai_state: int = 0             # DAT_005a7140
        self.ai_target_tile: int = 0       # local ad4/ae4 targets

        # ── Swing speed indicator ─────────────────────────────────
        self.swing_speed: int = 0          # DAT_005786a2
        self.swing_power: int = 0          # DAT_00578732


# ═══════════════════════════════════════════════════════════════════════════════
#  Stub helper functions
# ═══════════════════════════════════════════════════════════════════════════════

def _clamp(value: int, lo: int, hi: int) -> int:
    """FUN_00467130 — clamp value to [lo, hi]."""
    if value < lo:
        return lo
    if value > hi:
        return hi
    return value


def _angle_from_delta(dx: int, dy: int) -> int:
    """FUN_004672d0 — compute direction integral from delta x,y."""
    # Returns a compressed direction value used for velocity calculation
    # Higher bits = direction, lower bits = magnitude
    return 0


def _velocity_x(velocity: int, dist: int) -> int:
    """FUN_00467270 — compute x-component of velocity at given distance."""
    return 0


def _velocity_y(velocity: int, dist: int) -> int:
    """FUN_004672b0 — compute y-component of velocity at given distance."""
    return 0


def _tile_is_blocked(tx: int, ty: int) -> int:
    """FUN_0040bf60 — check if a tile is passable (0 = passable)."""
    return 0


def _tile_distance_score(tx1: int, ty1: int, tx2: int, ty2: int) -> int:
    """FUN_0040c170 — compute distance score between tile coordinates."""
    return abs(tx1 - tx2) + abs(ty1 - ty2)


def _golfer_max_stamina(golfer_idx: int) -> int:
    """FUN_00422530 — return the maximum stamina/fatigue for a golfer."""
    return 100


def _get_personality(golfer_idx: int) -> int:
    """FUN_00422fb0 — return the golfer's personality type."""
    return 0


def _trigger_speech(golfer_idx: int, speech_id: int, target: int) -> None:
    """FUN_00467a00 — trigger a golfer speech bubble / thought."""
    pass


def _rand_int(max_val: int) -> int:
    """FUN_0045c1e0 — return random int in [0, max_val)."""
    return random.randint(0, max_val - 1) if max_val > 0 else 0


def _abs_int(x: int) -> int:
    """Absolute value of an int."""
    return -x if x < 0 else x


def _sign_extend_byte(b: int) -> int:
    """Sign-extend a byte value to int."""
    if b & 0x80:
        return b | ~0xFF
    return b


def _power_modifier(power: int, accuracy: int, flags: int) -> int:
    """FUN_00422430 — compute shot power modifier from stamina/accuracy."""
    return (power * accuracy) // 100


def _golfer_total_stamina(golfer_idx: int) -> int:
    """FUN_0046c940 — return the golfer's current stamina."""
    return 100


def _golfer_skill_rating(golfer_idx: int) -> int:
    """FUN_004675d0 — return a skill rating for the golfer."""
    return 50


# ═══════════════════════════════════════════════════════════════════════════════
#  Core member management function   FUN_00424120()
# ═══════════════════════════════════════════════════════════════════════════════

def golfer_shot_decision(
    state: GolfState,
    golfer_idx: int,
    param_2: int,
    target_x: int = -1,
    target_y: int = -1,
) -> None:
    """FUN_00424120 — Member / Golfer Management.

    Main shot decision function for a golfer. This handles:
      - Computing the optimal shot target (fairway/green)
      - Calculating shot trajectory, velocity, and accuracy
      - Personality-based shot selection (aggressive vs. safe)
      - Terrain analysis for shot placement
      - Spin/curve adjustments based on golfer stats
      - Mood tracking and speech trigger system
      - Fatigue and stamina management

    Args:
        state: The global game state.
        golfer_idx: Index of the golfer to process (0..151).
        param_2: Flags/command parameter.
        target_x: Override target x tile coord (-1 = auto).
        target_y: Override target y tile coord (-1 = auto).
    """
    gs = golfer_idx
    i19 = gs * 0x100  # tile-type-stride offset

    # ── Personality / hole info ────────────────────────────────────
    personality = state.golfer_personality[gs]
    max_stamina = _golfer_max_stamina(gs)

    # Check if golfer is in a special state (flag bit 0 set)
    if (state.golfer_flags[gs] & GF_ACTIVE) != 0:
        state.swing_speed = 0x20
        state.swing_power = 0x20

    # ── Course difficulty / stamina ───────────────────────────────
    # DAT_004c2fcc == golfer_idx means this golfer was at the course
    # entrance and gets free stamina restoration
    if (state.flags & 0x20) != 0 and 0 < max_stamina:
        pass  # Stamina bonus at course entrance

    # ── Current tile position (scaled) ────────────────────────────
    tx = state.tile_x[gs] >> 10
    ty = state.tile_y[gs] >> 10
    tile_idx = ty + tx * 0x32

    # Current tile walk speed
    walk_speed = state.tile_walk[tile_idx] if tile_idx < len(state.tile_walk) else 0
    terrain_type = state.terrain_height[tile_idx] if tile_idx < len(state.terrain_height) else 0

    # ── Shot target setup ─────────────────────────────────────────
    if param_2 == 0:
        # Auto-target: use the pin position for the current hole
        hole_idx = state.tile_hole_idx[gs]
        state.shot_target_x[gs] = 0  # Would read from hole data
        state.shot_target_y[gs] = 0
    else:
        target_x = 0
        if state.difficulty < 2:
            target_x = state.difficulty

    # ── Compute target delta ──────────────────────────────────────
    dx = (state.shot_target_x[gs] * 0x400 - state.tile_x[gs]) + 0x200
    dy = (state.shot_target_y[gs] * 0x400 - state.tile_y[gs]) + 0x200

    if target_x != -1:
        dx = target_x - state.tile_x[gs]
        dy = target_y - state.tile_y[gs]
        state.shot_target_x[gs] = target_x >> 10
        state.shot_target_y[gs] = target_y >> 10

    # ── Compute initial shot velocity ─────────────────────────────
    stamina = max_stamina  # Current stamina placeholder
    shot_dir = _angle_from_delta(dx, dy)

    state.shot_velocity[gs] = shot_dir

    # ── Adjust flags ─────────────────────────────────────────────
    state.golfer_flags[gs] &= ~GF_APPROACH

    # ── Tee shot logic ────────────────────────────────────────────
    if param_2 == 0 and target_x == -1:
        # Default shot range based on golfer state
        shot_range = 0x4B  # Default medium
        if (state.golfer_flags[gs] & GF_ACTIVE) != 0 or \
           (state.tile_subtype[gs] & 4) != 0:
            shot_range = 0x19  # Short range

        if shot_range < stamina and walk_speed != 1:
            # Need to compute a proper shot trajectory
            shot_steps = _clamp(stamina - 0x19, 0, stamina)  # number of steps
            step_dist = (shot_steps * 0x400 + 0x200) // 0x19

            # Compute trajectory points
            vel_x = _velocity_x(shot_dir, step_dist)
            vel_y = _velocity_y(shot_dir, step_dist)

            target_tx = (vel_x + state.tile_x[gs]) >> 10
            target_ty = state.tile_y[gs] - vel_y >> 10

            # ── Terrain analysis for target tile ──────────────────
            # Check if target tile is blocked or out of bounds
            if _tile_is_blocked(target_tx, target_ty) == 0:
                # Valid target — compute personality-based modifiers
                pers_type = _get_personality(gs)

                if state.weather_flag == 0:
                    # Normal weather: compute natural shot position
                    dx = (state.shot_target_x[gs] * 0x400 - state.tile_x[gs]) + 0x200
                    dy = (state.shot_target_y[gs] * 0x400 - state.tile_y[gs]) + 0x200
                else:
                    # Windy: adjust trajectory
                    dx = state.shot_target_x[gs] * 0x400 - state.tile_x[gs]
                    dy = state.shot_target_y[gs] * 0x400 - state.tile_y[gs]
                    state.golfer_flags[gs] |= GF_APPROACH

                # ── Pathfinding check around target ───────────────
                if (state.tile_subtype[gs] & 4) != 0:
                    # Check 8 directional neighbors for best landing spot
                    best_score = 99999
                    for d in range(8):
                        nx = state.shot_target_x[gs] - DIR_DX[d]
                        ny = state.shot_target_y[gs] - DIR_DY[d]
                        nt_idx = (state.shot_target_y[gs] + ny * 0x32 +
                                  (state.shot_target_x[gs] - DIR_DX[d]))
                        # This would check neighbor tiles for obstructions
                        pass

                # Recalculate velocity for final shot
                shot_dir = _angle_from_delta(
                    dx * 0x19 >> 10,
                    dy * 0x19 >> 10,
                )
                state.shot_velocity[gs] = shot_dir

                # Restore stamina if at course entrance
                # (simplified)

        else:
            # Direct shot — set world target
            target_tx = state.shot_target_x[gs]
            target_ty = state.shot_target_y[gs]
            state.ai_state = 0
            # Set global target position
            if walk_speed != 1 and stamina > 0x19:
                # Check surrounding tiles for optimal landing
                direction = (shot_dir >> 0x1C) + 1 >> 1
                for d_check in [direction & 6, (direction & 7) + 1 & 6]:
                    # Compute height differences for trajectory
                    pass

    # ── Shot quality computation ──────────────────────────────────
    # Analyze terrain along the shot trajectory
    dir_idx = (state.shot_velocity[gs] >> 0x1C) + 1 >> 1 & 7
    shot_steps = stamina // 0x19
    step = 0

    # Scoring arrays for each tile type
    tile_scores: List[int] = [0] * 32       # local_ac4
    tile_dirs: List[int] = [0] * 32         # auStack_a44

    # ── Scan along shot trajectory ────────────────────────────────
    while step < shot_steps:
        cur_dist = 0x200 + step * 0x400

        vx = _velocity_x(state.shot_velocity[gs], cur_dist)
        cur_tx = (vx + state.tile_x[gs]) >> 10
        vy = _velocity_y(state.shot_velocity[gs], cur_dist)
        cur_ty = state.tile_y[gs] - vy >> 10

        if _tile_is_blocked(cur_tx, cur_ty) != 0:
            break  # Blocked tile — stop scanning

        tile_idx = cur_ty + cur_tx * 0x32
        tt = state.terrain_height[tile_idx] if tile_idx < len(state.terrain_height) else 0

        # Score this tile based on walk speed (lower = better for fairway)
        walk = state.tile_walk[tt * 0x30] if tt * 0x30 < len(state.tile_walk) else 1
        tile_scores[tt] += (step + 1) * walk * 2
        tile_dirs[tt] = dir_idx ^ 4

        # Check for special tiles
        if state.terrain_height[tile_idx] == 0x11:  # Water
            # Record closest water tile
            pass

        if cur_dist != 0x200:
            surface = state.tile_surface[tt * 0x30] if tt * 0x30 < len(state.tile_surface) else 0
            if surface == 0x0D:  # Rough
                pass  # Adjust score

        if (state.tile_occupied[tile_idx] & TF_OCCUPIED) != 0:
            pass  # Tile is occupied — record as target

        # Check if we're past the halfway point
        if step >= shot_steps // 2:
            target_dist = _tile_distance_score(
                state.shot_target_x[gs], state.shot_target_y[gs],
                state.shot_target_x[gs], state.shot_target_y[gs],
            )
            cur_dist_score = _tile_distance_score(cur_tx, cur_ty, cur_tx, cur_ty)
            if target_dist + 1 < cur_dist_score:
                # Too far from target — flag as risky
                pass
        else:
            start_dist = _tile_distance_score(tx, ty, tx, ty)
            cur_dist_score = _tile_distance_score(cur_tx, cur_ty, cur_tx, cur_ty)
            if start_dist + 1 < cur_dist_score:
                pass  # Risk penalty

        step += 1

    # ── Scan 8-directional neighbors for landing options ──────────
    for d in range(8):
        nx = state.shot_target_x[gs] + DIR_DX[d]
        ny = state.shot_target_y[gs] + DIR_DY[d]
        if _tile_is_blocked(nx, ny) == 0:
            nt_idx = ny + nx * 0x32
            tt = state.terrain_height[nt_idx] if nt_idx < len(state.terrain_height) else 0
            score_increment = (state.tile_walk[tt * 0x30] * (shot_steps + 1)) // 2
            tile_scores[tt] += score_increment
            tile_dirs[tt] = d
        else:
            # Blocked neighbor = penalty score
            pass

    # ── Find best tile type ───────────────────────────────────────
    best_score = -1
    best_tt = 0
    best_dir = 0
    for tt in range(32):
        if best_score < tile_scores[tt]:
            best_score = tile_scores[tt]
            best_tt = tt
            best_dir = tile_dirs[tt]

    # ── Compute final shot quality rating ──────────────────────────
    quality = best_score // (shot_steps + 3)
    if quality > 1:
        quality += 4  # Good landing area

    # ── Starting from tee (tile type 1) means 0 quality ──────────
    if state.terrain_height[tile_idx] == 1:
        quality = 0

    if stamina < 0x29 and quality > 10:
        quality = 10  # Cap quality when stamina low

    # ── Set shot range rating ──────────────────────────────────────
    state.tile_range[gs] = _clamp(quality, 0, 40)

    # ── Personality-based shot modifiers ──────────────────────────
    if (state.tile_subtype[gs] & 4) != 0:
        # Calculate distance to target for approach adjustment
        target_dist = _tile_distance_score(
            state.shot_target_x[gs], state.shot_target_y[gs], 0,
        )
        start_dist = _tile_distance_score(tx, ty, 0)
        dist_diff = target_dist - start_dist

        if dist_diff < 1:
            stamina += (dist_diff * 0x19) // 10
        else:
            stamina += (dist_diff * 0x19) >> 3

    # ── Clamp stamina to max ──────────────────────────────────────
    stamina = _clamp(stamina, 0, max_stamina)
    state.shot_power[gs] = stamina

    # ── Compute shot quality percentage ───────────────────────────
    pct = ((max_stamina - stamina) * 0x3C) // (max_stamina * 3)
    state.tile_shot_phase[gs] = _clamp(pct, 0 if walk_speed == 0 else 0, 0x0B)

    # ── Difficulty override ───────────────────────────────────────
    if param_2 != 0 and state.difficulty == 3 and pct < 5:
        stamina = (max_stamina * 0x0D) // 0x12
        state.shot_power[gs] = stamina
        state.tile_shot_phase[gs] = 5

    # ── Walk speed 1 (green) special handling ─────────────────────
    if walk_speed == 1 and stamina < 0x32 and \
       (state.golfer_flags[gs] & GF_ACTIVE) == 0:
        state.tile_shot_phase[gs] = 0x0D  # Putting phase

    # ── Compute shot accuracy from power ──────────────────────────
    accuracy = (state.shot_power[gs] * 0x14) // 0x19
    accuracy = (accuracy * 0x21 - (accuracy * accuracy) // 0x30) + 0x40
    state.shot_accuracy[gs] = accuracy

    # ── Compute velocity magnitude ────────────────────────────────
    vel_mag = ((accuracy + (accuracy >> 31 & 7)) >> 3) + 0x200
    state.shot_accuracy[gs] = vel_mag  # temporarily

    # ── Personality-based speed/spin adjustment ───────────────────
    speed = _power_modifier((stamina * 4) // 5, vel_mag, 0)
    state.shot_power[gs] = speed

    # Base swing speed
    swing_speed = 0x14
    if state.flags & 2:
        swing_speed = (swing_speed & ~7) + 0x14

    # Power swing bonus
    if (state.tile_subtype[gs] & 4) != 0:
        if state.feature_level != 0:
            swing_speed += swing_speed // (4 - state.feature_level)

    # Personality spin modifier
    if (state.tile_subtype[gs] & 4) != 0:
        spin_bonus = (state.pers_ac[gs] * swing_speed +
                      ((state.pers_ac[gs] * swing_speed) >> 31 & 7)) >> 3
        swing_speed += spin_bonus

    # Terrain height modifier
    # DAT_0056988c check for elevation flag
    if False:  # Would read heightmap at pin position
        swing_speed -= 10

    # Low personality modifier
    if state.pers_ab[gs] < 2:
        swing_speed //= 2

    # ── Add randomness to swing speed ─────────────────────────────
    swing_speed = swing_speed // 2
    rand_val = _rand_int(swing_speed)
    swing_speed = (rand_val & 0xFFFF) + 4 + swing_speed

    # ── Compute shot spin ────────────────────────────────────────
    spin = _power_modifier((max_stamina * 4) // 5, vel_mag, 0)

    state.shot_spin[gs] = 0

    if state.difficulty < 2:
        state.shot_spin[gs] = 100 * 0x50000  # Base spin

    if state.difficulty == 1:
        state.shot_spin[gs] //= 3

    # Personality hook/slice modifier
    if state.pers_ab[gs] < 0:  # Negative = hook tendency
        hook_factor = _clamp(-state.pers_ab[gs], 0, 3)
        state.shot_spin[gs] = (hook_factor * state.shot_spin[gs]) // 8 + \
                              state.shot_spin[gs]

    # ── Course feature modifiers ──────────────────────────────────
    if walk_speed != 1:  # Not on green
        if (state.tile_subtype[gs] & 2) != 0 or \
           (state.golfer_flags[gs] & GF_ACTIVE) != 0:
            if state.screen_w < 2:
                pass  # Reduce spin based on screen width
            state.shot_spin[gs] //= (2 + 2)  # Placeholder

    # Power swing flag reduces spin
    if (state.golfer_flags[gs] & GF_POWER_SWING) != 0:
        state.shot_spin[gs] -= state.shot_spin[gs] // 3

    # ── Shot phase processing ────────────────────────────────────
    shot_phase = state.tile_shot_phase[gs]
    state.golfer_flags[gs] &= ~GF_SPECIAL

    if shot_phase == 0x0D:
        # Dropped/penalty shot
        state.shot_spin[gs] = 0
        pass
    else:
        if state.tile_type[gs] != 0:
            if gs == state.current_golfer:
                pass  # Current golfer gets special handling
            elif (state.tile_type[gs] & 0xE0) == 0x20:
                pass  # Special tile type

    # ── Velocity adjustment based on shot phase ──────────────────
    vel = state.shot_velocity[gs]
    if shot_phase == 1:  # Fairway shot
        vel += 0x15555554
    elif shot_phase == -1:
        vel -= 0x15555554

    # ── Apply spin to velocity ────────────────────────────────────
    if shot_phase != 0x0D:
        spin_component = _clamp(state.shot_spin[gs], 0xFC71C71D, 0x38E38E3)
        vel += spin_component * 3
        state.shot_spin[gs] -= spin_component // 2

    # ── Fatigue / weather modifiers ──────────────────────────────
    if state.difficulty == 0 and (state.tile_type[gs] & 0xE0) == 0x20:
        spin_factor = (stamina - 100) * state.shot_spin[gs]
        state.shot_spin[gs] += (spin_factor + (spin_factor >> 31 & 0xFF)) >> 8
        rand_adj = _rand_int(0x71C6)
        state.shot_spin[gs] += (rand_adj + 0xFC71C71D) // 0x32

    # ── Clear some golfer flags ──────────────────────────────────
    state.golfer_flags[gs] &= ~0x180  # Clear special mode flags
    # ai_state check removed for clarity

    # ── Speech trigger system ────────────────────────────────────
    mood = state.golfer_mood_flags[gs]
    if target_x == -1:
        if shot_phase == 0x0D:
            # On green / dropped: check for "on fire" speech
            if state.terrain_height[
                state.shot_target_y[gs] + state.shot_target_x[gs] * 0x32
            ] == 1:
                pass  # Special speech 0x39
        else:
            # Normal shot: increment hole visitor count
            hole_idx = state.tile_hole_idx[gs]
            state.hole_visitors[hole_idx] += 1

            # Check for interest speech triggers
            start_dist = _tile_distance_score(tx, ty, tx, ty)
            max_dist_check = (start_dist << 4) // (state.screen_w + 2)

            if max_dist_check > 0:
                for _ in range(max_dist_check):
                    vel = state.shot_velocity[gs]
                    rand_offset = _rand_int(0x19)
                    vel += (0x0C - (rand_offset & 0xFFFF)) * 0x1000000

                    rand_dist = _rand_int(200)
                    shot_power = (stamina - (rand_dist & 0xFFFF)) + 100

                    if shot_power >= 0:
                        step_dist = (shot_power // 0x19) * 0x400

                        vx = _velocity_x(vel, step_dist)
                        cur_tx = (vx + state.tile_prev_x[gs]) >> 10
                        vy = _velocity_y(vel, step_dist)
                        cur_ty = state.tile_prev_y[gs] - vy >> 10

                        dir_idx_check = (vel >> 0x1C) + 1 >> 1 & 7

                        if _tile_is_blocked(cur_tx, cur_ty) == 0:
                            tile_idx = cur_ty + cur_tx * 0x32
                            if (state.tile_occupied[tile_idx] & TF_OCCUPIED) != 0 or \
                               state.terrain_height[tile_idx] == 0x13:
                                # Check if this is a valid target
                                pass

                            # Check for interest-generating tiles
                            if state.tile_surface[
                                state.terrain_height[tile_idx] * 0x30
                            ] == 0x10:  # Flowers or special surface
                                pass  # Interest speech

            # ── Speech trigger selection ─────────────────────────
            mood_unchanged = (state.golfer_mood_flags[gs] == mood)

            if mood_unchanged:
                # Check for type-specific speech
                if state.tile_hole_idx[gs] > 1 and \
                   state.tile_hole_sub[gs] == (gs & 1) + 1:
                    # Group personality check
                    pass

                # Distance-based speech
                if state.screen_w == 0:
                    # Random range check
                    rand_check = _rand_int(5)
                    if (rand_check & 0xFFFF) + 6 + state.screen_w < \
                       state.tile_range[gs] and \
                       stamina > 0x28:
                        if state.tile_range[gs] < 0x18:
                            # Direction-based speech (hook/slice)
                            dir_diff = (dir_idx - dir_idx) & 7
                            if dir_diff < 2 or dir_diff > 6:
                                _trigger_speech(gs, 0x26, best_tt)
                            elif dir_diff == 2 or dir_diff == 6:
                                _trigger_speech(gs, 5, best_tt)
                            else:
                                _trigger_speech(gs, 0x25, best_tt)
                        else:
                            _trigger_speech(gs, 0x1F, best_tt)
                        state.tile_range[gs] = 10

    # ── AI state-based speech ─────────────────────────────────────
    if state.ai_state != 0 and state.ai_target_tile != 0:
        if state.ai_state & 3:
            _trigger_speech(gs, ~state.ai_state & 1 | 0x20, 0x14)
        else:
            if walk_speed < 1:
                _trigger_speech(gs, 6, 0x14)

    # ── Post-shot flag clearing ───────────────────────────────────
    state.golfer_flags[gs] &= ~GF_HAS_BALL

    # ── Shot execution (param_5 == 1 or -1) ──────────────────────
    shot_power = state.shot_power[gs]

    if 1:  # param_5 == 1 (power shot)
        vel = state.shot_velocity[gs]
        state.shot_velocity[gs] = vel + 0x15555554

        if (state.golfer_flags[gs] & GF_ON_GREEN) != 0:
            state.shot_velocity[gs] = vel + 0xFFFFFFF

        if state.shot_spin[gs] > 0 and gs == state.current_golfer:
            state.shot_spin[gs] //= 2

        if stamina < 300:
            if stamina < 0xFA:
                state.shot_power[gs] = (shot_power << 4) // (0x14A - stamina) + shot_power
            else:
                state.shot_power[gs] = (shot_power << 4) // (400 - stamina) + shot_power
        else:
            state.shot_power[gs] = shot_power + (shot_power << 4) // (400 - stamina)

    # ── Final clamping ────────────────────────────────────────────
    state.shot_power[gs] = _clamp(
        state.shot_power[gs], 0, 999999,
    )

    # ── Difficulty-based spin adjustment ──────────────────────────
    if stamina < 0x4B:
        if state.screen_w == 0:
            if gs == param_2:
                state.shot_spin[gs] //= 3
            elif gs == (param_2 | 1):
                state.shot_spin[gs] <<= 1

        if walk_speed != 1:
            if (state.tile_subtype[gs] & 7) == 7:
                speed_mod = state.screen_w + 4
            else:
                speed_mod = 9 - state.screen_w
            state.shot_velocity[gs] += speed_mod * state.shot_spin[gs] * 2

    # ── Weather / wind modifier ───────────────────────────────────
    if state.tile_type[gs] != 0 and walk_speed > 0:
        if _rand_int(walk_speed * 10) <= state.pers_b0[gs]:
            walk_speed = 2
            state.golfer_flags[gs] |= GF_SPECIAL

    if state.difficulty == 0 and walk_speed != 1:
        rand_wind = _rand_int(0x5555)
        wind_adj = _clamp(state.shot_spin[gs], -0x1000000, 0x1000000)
        state.shot_velocity[gs] += wind_adj * (rand_wind + 0x1555555) * walk_speed
        state.shot_spin[gs] = ((walk_speed + 2) * state.shot_spin[gs]) // 2

    # ── Active golfer special handling ────────────────────────────
    if (state.golfer_flags[gs] & GF_ACTIVE) != 0 and \
       state.tile_hole_sub[gs] > 6:
        state.shot_power[gs] = shot_power  # Restore original power
        walk_speed = -1

    # ── Apply final spin bias ─────────────────────────────────────
    state.shot_spin[gs] += 0  # Would add personality hook/slice bias

    # ── Shot quality based on walk speed ──────────────────────────
    final_power = state.shot_power[gs]

    if walk_speed == 0:  # Fairway
        rand_val = _rand_int((final_power + (final_power >> 31 & 3)) >> 2)
        pass
    elif walk_speed == 1:  # Green
        rand_val = _rand_int((final_power + (final_power >> 31 & 7)) >> 3)
        final_power = (final_power // 0x0C - (rand_val & 0xFFFF)) + final_power
        if shot_phase == 0x0D:
            pass  # Reset accuracy for puts
    elif walk_speed == 2:  # Rough
        if (state.tile_occupied[tile_idx] & TF_SPECIAL) == 0:
            rand_val = _rand_int(final_power // 3)
            final_power = (final_power // 6 - (rand_val & 0xFFFF)) + final_power
    else:  # Default / other
        rand_val = _rand_int(final_power)
        half_power = final_power // 2
        final_power = (half_power - (rand_val & 0xFFFF)) + final_power

    # ── Shot power penalty for special surfaces ───────────────────
    if walk_speed in (4, 5, 8, 0x15, 0x16):
        rand_val = _rand_int(final_power // 2)
        final_power = (((final_power + (final_power >> 31 & 3)) >> 2) -
                       (rand_val & 0xFFFF)) + final_power
        rand_spin = _rand_int(_abs_int(state.shot_spin[gs]) // 2)
        state.shot_spin[gs] += rand_spin & 0xFFFF
        # Additional velocity adjustment
        state.shot_velocity[gs] += state.shot_spin[gs] * 4

    # ── Power swing override (walk_speed 9) ──────────────────────
    if walk_speed == 9:
        rand_val = _rand_int(final_power << 1)
        final_power = rand_val & 0xFFFF
        state.shot_velocity[gs] += state.shot_spin[gs] * 0x10

    # ── Moderate swing (walk_speed 0xB, 0xC) ──────────────────────
    if walk_speed in (0x0B, 0x0C):
        rand_val = _rand_int(final_power)
        final_power = final_power // 2 + (rand_val & 0xFFFF)

    # ── Final power clamp ─────────────────────────────────────────
    state.shot_power[gs] = final_power

    # ── Golfer active check ───────────────────────────────────────
    if (state.tile_subtype[gs] & 2) != 0 and walk_speed < 1:
        final_power = (shot_power + final_power) // 2
        state.shot_power[gs] = final_power

    if state.difficulty == 0:
        walk_mod = state.tile_walk[walk_speed * 0x30] * \
                   (final_power - shot_power)
        state.shot_power[gs] = ((walk_mod + (walk_mod >> 31 & 7)) >> 3) + final_power

    # Ensure minimum power
    min_power = shot_power // 3
    if state.shot_power[gs] < min_power:
        state.shot_power[gs] = min_power

    if state.difficulty > 1:
        state.shot_power[gs] = shot_power  # Easy mode: fix power

    if state.difficulty == 1:
        state.shot_power[gs] = (final_power + shot_power * 2) // 3

    # ── Final smooth blending ────────────────────────────────────
    final = state.shot_power[gs]
    blend = _clamp(walk_speed, -10, 0x10)
    blend_factor = blend * (shot_power - final)
    state.shot_power[gs] = ((blend_factor + (blend_factor >> 31 & 0xF)) >> 4) + final

    # ── Clamp spin ───────────────────────────────────────────────
    state.shot_spin[gs] = _clamp(state.shot_spin[gs], 0xEAAAAAAB, 0x15555555)

    # ── Clear active flag ─────────────────────────────────────────
    state.golfer_flags[gs] &= ~GF_ACTIVE

    # ── Reset swing indicators ───────────────────────────────────
    state.swing_speed = 8
    state.swing_power = 8


# ═══════════════════════════════════════════════════════════════════════════════
#  Exported interface
# ═══════════════════════════════════════════════════════════════════════════════

__all__ = [
    'GolfState',
    'GOLFER_COUNT',
    'GOLFER_STRIDE',
    'GOLFER_TILE_STRIDE',
    'DIR_DX',
    'DIR_DY',
    'PERSONALITY_NAMES',
    'golfer_shot_decision',
]

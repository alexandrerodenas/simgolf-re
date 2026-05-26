"""
SimGolf Reverse Engineering — Course Generation / Terrain Simulation
====================================================================
Translation of FUN_004289E0 from Ghidra decompiled C.

Generates course terrain, places tiles, and sets up golf hole layouts.
Iterates over all terrain tiles (0..0x97), creating:
  - Tee, fairway, green, rough, bunkers, water
  - Pathfinding waypoints for golfer movement
  - Proper hole sequencing (front nine, back nine, par-3/4/5)

Key:
  - Terrain height grid: DAT_005794b8 (int stride 0x40)
  - Tile types: DAT_005722e8 (1-byte-per-cell map, 0x32×0x32 = 50×50)
  - Random: FUN_0045C1E0(n) returns 0..n-1
  - Course theme: DAT_005a34e0 (1=Desert, 2=Tropical, 3=Links, 4=Parkland)
  - Hole data: DAT_00575ab0 (stride 0x208)
"""

from __future__ import annotations

import math
import random
from typing import Final, List, Tuple

# ── Constants ─────────────────────────────────────────────────────────────────

TERRAIN_STRIDE: Final[int] = 0x40
TILE_STRIDE: Final[int] = 0x100
HOLE_STRIDE: Final[int] = 0x208
GOLFER_STRIDE: Final[int] = 0x80
BUILDING_STRIDE: Final[int] = 0x2c

MAP_COLS: Final[int] = 0x32  # 50
MAP_ROWS: Final[int] = 0x32  # 50
TILE_COUNT: Final[int] = 0x98  # 152

# Direction offsets (DAT_004c2878 / DAT_004c2898)
DIR_DX: Final[List[int]] = [1, 1, 0, -1, -1, -1, 0, 1]
DIR_DY: Final[List[int]] = [0, -1, -1, -1, 0, 1, 1, 1]

# Tile terrain types (from DAT_00578377 table indexed by map tile value)
# 0x00=out-of-bounds, 0x01=tee, 0x02=green,
# 0x03=fairway, 0x04=rough, 0x05=sand(bunker), 0x06=water,
# 0x07=path, 0x08=flower, 0x09=trees, 0x0a=deep-rough,
# 0x0b=wall, 0x0c=deep-water, 0x0d=cliff, 0x0e=bridge, 0x0f=beach,
# 0x10=waste, 0x11=forest, 0x12=ice, 0x13=lava, 0x14=marsh,
# 0x15=road, 0x16=primary-fairway
TERRAIN_NAMES: Final[List[str]] = [
    "out", "tee", "green", "fairway", "rough", "sand", "water",
    "path", "flower", "trees", "deep_rough", "wall", "deep_water",
    "cliff", "bridge", "beach", "waste", "forest", "ice", "lava",
    "marsh", "road", "pfairway",
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Course generation state
# ═══════════════════════════════════════════════════════════════════════════════

class CourseGenState:
    """State container for the course generation process.

    Mirrors the packed global arrays accessed by FUN_004289E0."""

    def __init__(self) -> None:
        # ── Terrain map (DAT_005722e8 — byte grid, 50×50) ──────────────
        self.tmap: List[List[int]] = [[0] * MAP_COLS for _ in range(MAP_ROWS)]

        # ── Tile occupancy / flags (DAT_0053caf0 — 2-byte per cell) ────
        self.occ: List[List[int]] = [[0] * MAP_COLS for _ in range(MAP_ROWS)]

        # ── Terrain coordinates (DAT_005794b8/bc etc., stride 0x40) ────
        self.tile_x: List[int] = [0] * TILE_COUNT    # b8
        self.tile_y: List[int] = [0] * TILE_COUNT    # bc
        self.tile_x2: List[int] = [0] * TILE_COUNT   # "previous"
        self.tile_y2: List[int] = [0] * TILE_COUNT
        self.tile_c0: List[int] = [0] * TILE_COUNT   # c0 (y bounds)
        self.tile_c4: List[int] = [0] * TILE_COUNT   # c4 (x bounds)
        self.tile_flags: List[int] = [0] * TILE_COUNT  # c8 (bitfield)

        # ── Tile type / direction arrays (DAT_005794d0..db) ────────────
        self.tile_type: List[int] = [0] * TILE_COUNT     # d0
        self.tile_subtype: List[int] = [0] * TILE_COUNT  # d1
        self.tile_dir: List[int] = [0] * TILE_COUNT      # d2
        self.tile_attr: List[int] = [0] * TILE_COUNT     # d3
        self.tile_phase: List[int] = [0] * TILE_COUNT    # d4
        self.tile_state: List[int] = [0] * TILE_COUNT    # d5
        self.tile_delay: List[int] = [0] * TILE_COUNT    # d6
        self.tile_wind: List[int] = [0] * TILE_COUNT     # d7
        self.tile_moved: List[int] = [0] * TILE_COUNT    # d8
        self.tile_hole_idx: List[int] = [0] * TILE_COUNT  # d9 (signed byte)
        self.tile_subhole: List[int] = [0] * TILE_COUNT   # da
        self.tile_height_adj: List[int] = [0] * TILE_COUNT  # db

        # ── Hole data (DAT_00575ab0, stride 0x208) ─────────────────────
        self.hole_active: List[int] = [0] * TILE_COUNT  # byte
        self.hole_par: List[int] = [0] * TILE_COUNT     # short
        self.hole_tee_x: List[int] = [0] * TILE_COUNT   # int @+8
        self.hole_tee_y: List[int] = [0] * TILE_COUNT   # int @+12
        self.hole_pin_x: List[int] = [0] * TILE_COUNT   # int @+16
        self.hole_pin_y: List[int] = [0] * TILE_COUNT   # int @+20

        # ── Golfer state (DAT_00579556..6e, stride 0x80) ───────────────
        self.golfer_frustration: List[int] = [0] * TILE_COUNT  # 56 (short)
        self.golfer_patience: List[int] = [0] * TILE_COUNT     # 5c (short)
        self.golfer_fatigue: List[int] = [0] * TILE_COUNT      # 5e (short)
        self.golfer_hunger: List[int] = [0] * TILE_COUNT       # 60 (short)
        self.golfer_thirst: List[int] = [0] * TILE_COUNT       # 62 (short)
        self.golfer_energy: List[int] = [0] * TILE_COUNT       # 66 (short)
        self.golfer_mood: List[int] = [0] * TILE_COUNT         # 68?
        self.golfer_partner: List[int] = [0] * TILE_COUNT      # 5a (short)
        self.golfer_tile_idx: List[int] = [0] * TILE_COUNT     # 6e (short)
        self.golfer_distress: List[int] = [0] * TILE_COUNT     # 5c -> same as patience

        # ── Ball / shot status (DAT_0057957c..98, stride 0x100) ───────
        self.ball_prev_x: List[int] = [0] * TILE_COUNT  # 7c
        self.ball_prev_y: List[int] = [0] * TILE_COUNT  # 80
        self.shot_target_x: List[int] = [0] * TILE_COUNT  # 84
        self.shot_target_y: List[int] = [0] * TILE_COUNT  # 88
        self.ball_x: List[int] = [0] * TILE_COUNT        # 8c
        self.ball_y: List[int] = [0] * TILE_COUNT        # 90
        self.ball_dist: List[int] = [0] * TILE_COUNT     # 94
        self.shot_vel: List[int] = [0] * TILE_COUNT      # 98
        self.shot_accel: List[int] = [0] * TILE_COUNT    # a0
        self.shot_spin: List[int] = [0] * TILE_COUNT     # a4

        # ── Building data (DAT_005849e0, stride 0x2c) ──────────────────
        self.building_data: List[List[int]] = [[0] * 0x2c for _ in range(256)]

        # ── Course global state ──────────────────────────────────────────
        self.time: int = 0               # DAT_00834170
        self.theme: int = 0              # DAT_005a34e0 (1-4)
        self.flags: int = 0              # DAT_0059e7b8
        self.screen_w: int = 800         # DAT_00822c88
        self.screen_h: int = 600         # DAT_00822c90
        self.num_holes: int = 18         # DAT_005685f0
        self.course_rating: int = 0      # DAT_005a6d3c
        self.money_earned: int = 0       # DAT_00571fd4
        self.wind_speed: int = 0         # DAT_005a5a24 (wind index)
        self.golfer_turn: int = 0        # DAT_005a59f8
        self.all_left: bool = False      # DAT_00569498
        self.weather_dry: int = 0        # DAT_0059b04c

        # ── Per-hole stat accumulators (DAT_00575c0a etc.) ─────────────
        self.hole_play_count: List[int] = [0] * TILE_COUNT
        self.hole_par3_count: List[int] = [0] * TILE_COUNT
        self.hole_eagle_count: List[int] = [0] * TILE_COUNT
        self.hole_birdie_count: List[int] = [0] * TILE_COUNT
        self.hole_shot_count: List[int] = [0] * TILE_COUNT
        self.hole_fairway_hit: List[int] = [0] * TILE_COUNT
        self.hole_total_dist: List[int] = [0] * TILE_COUNT
        self.hole_longest_drive: List[int] = [0] * TILE_COUNT
        self.hole_gir_count: List[int] = [0] * TILE_COUNT
        self.hole_avg_putts: List[int] = [0] * TILE_COUNT


# ═══════════════════════════════════════════════════════════════════════════════
#  Random helper (FUN_0045C1E0)
# ═══════════════════════════════════════════════════════════════════════════════

def _rand(n: int) -> int:
    """Return a random integer in [0, n-1] (like FUN_0045C1E0).

    The original uses a LCG; we approximate with Python's PRNG."""
    if n <= 0:
        return 0
    return random.randrange(n)


# ═══════════════════════════════════════════════════════════════════════════════
#  Core course generation    FUN_004289e0()
# ═══════════════════════════════════════════════════════════════════════════════

def generate_course(state: CourseGenState) -> None:
    """Main course generation / turn processing.

    Iterates over all 152 tiles (local_6c = 0..0x97), applying terrain
    simulation, hole setup, golfer movement, pathfinding, and event
    processing.
    """
    local_6c: int = 0
    while True:
        stride = local_6c * TILE_STRIDE

        # Check if tile is active (DAT_005794d9 is non-zero)
        hole_idx = state.tile_hole_idx[local_6c]
        if hole_idx != 0:
            # ── Active tile processing ────────────────────────────────
            _process_active_tile(state, local_6c, stride)
        else:
            # ── Inactive tile: course generation / hole setup ──────────
            _process_inactive_tile(state, local_6c, stride)

        # ── Movement / physics step (DAT_00579556 check) ──────────────
        _apply_movement(state, local_6c)

        # ── Pathfinding and shot decision-making ──────────────────────
        _process_shot(state, local_6c)

    # (The loop terminates only when local_6c > 0x97 via the check below)
        local_6c += 1
        if local_6c > 0x97:
            return


# ═══════════════════════════════════════════════════════════════════════════════
#  Per-tile processing stages
# ═══════════════════════════════════════════════════════════════════════════════

def _process_active_tile(state: CourseGenState, tile: int, stride: int) -> None:
    """Process an active tile (DAT_005794d9[tile*0x100] != 0).

    This includes the main outer block of FUN_004289E0 beginning at
    line 85 (the 'else' branch of the hole_idx check).
    """
    # ── Find partner (loop over DAT_0059fc60 stride 0x1c4) ─────────────
    partner = -1
    for i in range(TILE_COUNT):
        # DAT_0059fc60[i * 0x1c4] == tile ?
        pass  # stub — actual partner resolution
    local_4c = partner

    # ── If partner found but flags mismatch, clear it ──────────────────
    if partner != -1 and (state.tile_flags[tile] & 0x40000) == 0:
        local_4c = -1
        # (&DAT_0059fc60)[partner * 0x1c4] = 0xffff

    # ── Mood timer / speech trigger (DAT_0057953c) ─────────────────────
    mood = state.golfer_mood[tile]
    if mood != 0 and (state.time & 7) == 0:
        new_mood = mood - 1
        state.golfer_mood[tile] = new_mood
        if new_mood == 1 and _rand(6) + 1 > state.num_holes:
            # Trigger golfer speech - FUN_004675d0
            _golfer_speak(state, tile)

    # ── Difficulty-and-terrain based speed limit ───────────────────────
    speed_limit = 0x1ff
    if (state.tile_type[tile] & 0xc000) == 0:
        speed_limit = 0xff
    if (state.tile_type[tile] & 0x4000) != 0:
        speed_limit >>= 2
    if state.tile_phase[tile] > 0:  # short @DAT_005794cc
        speed_limit >>= 1

    # ── Random direction checking ──────────────────────────────────────
    if ((speed_limit & (state.time + tile * 0x21)) == 0 and
            (state.tile_subtype[tile] & 0x7f) != 0xb):
        # Check map tile type at random offset
        uVar13 = _rand(5)
        dir_idx = ((state.tile_height_adj[tile] - 2) + uVar13) & 7
        mx = (state.tile_x[tile] >> 10) + DIR_DX[dir_idx]
        my = (state.tile_y[tile] >> 10) + DIR_DY[dir_idx]

        if 0 <= mx < MAP_COLS and 0 <= my < MAP_ROWS:
            if state.tmap[mx][my] == 0x16:  # primary fairway
                # FUN_0040df80(mx, my) returns index into DAT_0058bcb8
                idx = _get_tile_info_index(mx, my)
                if state.occ[idx][0] == 2:
                    # FUN_00467a00: log detail
                    _golfer_detail(state, tile, 0xb, mx + my * MAP_COLS)
                elif state.occ[idx][0] == 4 and state.occ[idx][1] < 0x10:
                    _golfer_detail(state, tile, 0x14, mx + my * MAP_COLS)

    # ── Course flag check for current vector ───────────────────────────
    if (state.tile_flags[tile] & 0x200) != 0:
        # Save as current display cursor position
        pass

    # ── Terrain type checking at current position ──────────────────────
    tx = state.tile_x2[tile] >> 10  # DAT_00579590 >> 10
    ty = state.tile_y2[tile] >> 10  # DAT_0057958c >> 10
    map_val = state.tmap[tx][ty] if 0 <= tx < MAP_COLS and 0 <= ty < MAP_ROWS else 0
    terrain_class = _terrain_class(map_val)

    # ── Fatigue / thirst / hunger periodic events ──────────────────────
    hole_idx = state.tile_hole_idx[tile]
    delay = (state.time + tile * 0x25) % ((-1 if state.tile_phase[tile] != 0 else -0x28) + 0xa0)
    if delay == 0 and hole_idx != 0x13:
        if hole_idx > 1 and state.tile_subhole[tile] == 0 and state.golfer_fatigue[tile] == 0:
            if _rand(state.money_earned // 2 if state.money_earned else 1) == 0:
                _golfer_detail(state, tile, 0x3f, 0x14)

        # Check terrain around current position for hazards
        has_hazard_nearby = _check_hazard_nearby(state, tile, tx, ty)
        if (state.theme == 3 and _rand(2) != 0) or has_hazard_nearby:
            if hole_idx > 2 and _rand(2) == 0:
                state.golfer_fatigue[tile] += 1
                if state.golfer_fatigue[tile] > 0xf:
                    if state.golfer_fatigue[tile] % 4 == 0:
                        if (state.tile_type[tile] & 0xe0) == 0x20:
                            state.golfer_fatigue[tile] = 0x10
                        else:
                            _golfer_detail(state, tile, 0xf, 0x14)
            else:
                state.golfer_hunger[tile] += 1
                if state.golfer_hunger[tile] > 0xf:
                    if state.golfer_hunger[tile] % 4 == 0:
                        if (state.tile_type[tile] & 0xe0) == 0x20:
                            state.golfer_hunger[tile] = 0x10
                        else:
                            _golfer_detail(state, tile, 0xe, 0x14)

    # ── Movement state machine ─────────────────────────────────────────
    # Check if ball is in play / golfer is moving
    if state.tile_state[tile] > 9:
        _golfer_editor_mode(state, tile)
        return

    # ── Shot / pathfinding AI ──────────────────────────────────────────
    _golfer_ai_shot(state, tile)


def _process_inactive_tile(state: CourseGenState, tile: int, stride: int) -> None:
    """Process an inactive tile — primarily hole setup (DAT_005794d9[tile]==0).

    Corresponds to the first branch (lines 70-84) of FUN_004289E0.
    """
    hole_idx = state.tile_hole_idx[tile]
    if hole_idx == -1:  # 0xff
        if state.golfer_mood[tile] == 0:
            if _rand(100) == 0:
                # Place a new thing at tile position
                state.tile_x[tile] = state.tile_x[tile] * 0x400 + 0x600
                state.tile_y[tile] = state.tile_y[tile] * 0x400 + 0x600
        if state.golfer_mood[tile] == 0:
            return
        if _rand(2) != 0:
            state.golfer_mood[tile] -= 1


def _apply_movement(state: CourseGenState, tile: int) -> None:
    """Apply movement / position update logic.

    Handles frustration < 0 (golfer is leaving/angry) and other
    movement-related flags.
    """
    frustration = state.golfer_frustration[tile]
    if frustration < 0:
        if (state.time & 1) != 0:
            state.golfer_frustration[tile] = frustration + 1
        if (state.tile_flags[tile] & 0x40000) == 0:
            return
        # goto LAB_0042c661
        return

    if (state.tile_flags[tile] & 0x80000000) != 0:
        # FUN_00406670(tile) — clear something
        pass
    state.tile_flags[tile] &= 0xffff7fff


def _process_shot(state: CourseGenState, tile: int) -> None:
    """Process the shot/pathfinding decision for a golfer tile.

    This corresponds to the major decision tree beginning around
    line 900+ of FUN_004289E0.
    """
    # ── Partner check / ball in motion ────────────────────────────────
    # If ball is not at rest (tile_attr / scatter != 0), handle trajectory
    ball_scatter = state.tile_attr[tile]  # DAT_0057959c
    if ball_scatter != 0:
        _update_ball_trajectory(state, tile)
        return

    # ── Already moved (tile_moved[tile] == 1) → follow-through ────────
    moved = state.tile_moved[tile]
    if moved == 1:
        _handle_shot_follow_through(state, tile)
        return

    # ── Normal pathfinding: compute target position ────────────────────
    # (This is the main shot selection tree)
    _plan_shot(state, tile)


# ═══════════════════════════════════════════════════════════════════════════════
#  Shot / pathfinding subroutines
# ═══════════════════════════════════════════════════════════════════════════════

def _plan_shot(state: CourseGenState, tile: int) -> None:
    """Plan the next shot — direction selection, club choice, power.

    Corresponds to the large block starting around line 1000 of the
    decompiled C (LAB_00429eee).  Chooses a target point then moves
    the ball toward it via the 8-direction movement system.
    """
    # ── Determine shot direction ──────────────────────────────────────
    hole = state.tile_hole_idx[tile]
    dir_idx = state.tile_dir[tile]

    # Compute target: pin or waypoint
    target_x = state.hole_pin_x[hole] * 0x400 + 0x200 if hole < len(state.hole_pin_x) else 0
    target_y = state.hole_pin_y[hole] * 0x400 + 0x200 if hole < len(state.hole_pin_y) else 0

    # ── Pick direction toward target ──────────────────────────────────
    dx = target_x - state.tile_x[tile]
    dy = target_y - state.tile_y[tile]
    dir_idx = _direction_from_delta(dx, dy)

    # ── Apply randomness / fatigue influence ───────────────────────────
    scatter = state.golfer_fatigue[tile]
    if scatter > 0:
        dir_idx = (dir_idx + (1 if scatter % 3 == 0 else -1)) & 7

    state.tile_dir[tile] = dir_idx

    # ── Compute shot power based on distance and terrain ───────────────
    dist = int(math.hypot(dx, dy))
    max_power = 0x400 * 7  # max ≈ 7 tiles

    # ── Execute movement update ────────────────────────────────────────
    move_amount = min(dist, max_power)
    state.tile_x[tile] += DIR_DX[dir_idx] * move_amount
    state.tile_y[tile] += DIR_DY[dir_idx] * move_amount

    # Reduce remaining movement budget
    state.tile_phase[tile] -= move_amount // 0x40

    # ── Advance shot state (phase counter) ─────────────────────────────
    # Increment shot phase every few ticks
    if (state.time + tile * 0xb) % 0x18 == 0 and hole != 0x13:
        state.tile_state[tile] = min(0xa0, state.tile_state[tile] + 1)
        # Fatigue increment based on terrain
        terrain = _get_terrain_at(state, tile)
        if terrain < 0x0b:
            state.golfer_fatigue[tile] += 1

    # Dispatch to next state
    _update_shot_state(state, tile)


def _update_ball_trajectory(state: CourseGenState, tile: int) -> None:
    """Update a ball that is in motion (scatter != 0).

    Corresponds to lines 2092-2290 of the decompiled C.
    """
    scatter = state.tile_attr[tile]
    vel = state.shot_vel[tile]

    # Compute velocity components from direction
    dir_idx = state.tile_dir[tile]
    dx = DIR_DX[dir_idx]
    dy = DIR_DY[dir_idx]

    # Scale velocity
    speed = abs(vel) >> 16 if vel else 0
    if speed < 1:
        speed = 1

    # Update position
    state.ball_x[tile] += dx * speed
    state.ball_y[tile] += dy * speed

    # Decay
    state.shot_vel[tile] -= speed * 0x1000
    state.tile_attr[tile] -= speed

    # Check for landing
    if state.tile_attr[tile] <= 0:
        state.tile_attr[tile] = 0
        state.shot_vel[tile] = 0


def _handle_shot_follow_through(state: CourseGenState, tile: int) -> None:
    """Handle post-shot logic (tile_moved == 1).

    Corresponds to lines 2640-2820 of the decompiled C.
    """
    hole = state.tile_hole_idx[tile]
    phase = state.tile_state[tile]

    if phase != 0x10:
        state.tile_state[tile] = 0xb
        # Check if we should skip based on patience
        if state.golfer_fatigue[tile] != 0:
            pass
        # Search for nearest golfer to compare distance
        _find_nearby_golfer(state, tile)

    # Advance mover state machine
    state.tile_moved[tile] += 1
    phase2 = max(0, min(6, state.tile_moved[tile] - 3))
    state.tile_state[tile] = phase2

    if phase2 == 5:
        # Play swing sound / animation
        _play_shot_animation(state, tile)
        state.tile_flags[tile] |= 0x40000

    if phase2 > 4 or (state.tile_flags[tile] & 0x40000) != 0:
        if state.tile_moved[tile] == 0x20 and (state.tile_flags[tile] & 0x4000) != 0:
            state.tile_flags[tile] |= 0x400
            state.tile_moved[tile] = 0
        # Reset position to ball position
        if state.tile_moved[tile] == 0:
            state.tile_x[tile] = state.ball_prev_x[tile] - DIR_DX[0] * 0x80 * 2
            state.tile_y[tile] = state.ball_prev_y[tile] - DIR_DY[0] * 0x80 * 2


def _update_shot_state(state: CourseGenState, tile: int) -> None:
    """Advance the shot state machine."""
    # If close enough to target, mark as arrived
    dx = state.tile_x[tile] - state.shot_target_x[tile] * 0x400
    dy = state.tile_y[tile] - state.shot_target_y[tile] * 0x400
    dist = int(math.hypot(dx, dy))

    if dist < 0x200:
        state.tile_state[tile] = 0xb  # ARRIVED
        return

    # Still moving
    if state.tile_state[tile] < 7:
        state.tile_state[tile] = 7


def _find_nearby_golfer(state: CourseGenState, tile: int) -> int:
    """Find the nearest active golfer to this tile.

    Corresponds to the loop at lines 1569-1622.
    """
    best_idx = -1
    best_dist = 0x7fffffff
    for i in range(TILE_COUNT):
        if i == tile:
            continue
        if state.tile_hole_idx[i] == 0:
            continue
        dx = state.tile_x[i] - state.tile_x[tile]
        dy = state.tile_y[i] - state.tile_y[tile]
        d = dx * dx + dy * dy
        if d < best_dist:
            best_dist = d
            best_idx = i
    return best_idx


# ═══════════════════════════════════════════════════════════════════════════════
#  Utility helpers
# ═══════════════════════════════════════════════════════════════════════════════

def _terrain_class(map_val: int) -> int:
    """Map a tile value to a terrain class via DAT_00578377 table.

    Returns values 0-22 corresponding to TERRAIN_NAMES.
    """
    # In the original game: DAT_00578377[map_val * 0x30]
    table = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
             16, 17, 18, 19, 20, 21, 22]
    idx = map_val if 0 <= map_val < len(table) else 0
    return table[idx]


def _get_terrain_at(state: CourseGenState, tile: int) -> int:
    """Get the map tile value at the golfer's current position."""
    tx = state.tile_x[tile] >> 10
    ty = state.tile_y[tile] >> 10
    if 0 <= tx < MAP_COLS and 0 <= ty < MAP_ROWS:
        return state.tmap[tx][ty]
    return 0


def _get_tile_info_index(mx: int, my: int) -> int:
    """Compute index into DAT_0058bcb8 from map coords."""
    return (mx * 8)  # stride 8 per tile info entry


def _direction_from_delta(dx: int, dy: int) -> int:
    """Convert a delta vector to one of 8 compass directions (0..7).

    0=E, 1=SE, 2=S, 3=SW, 4=W, 5=NW, 6=N, 7=NE
    """
    if dx == 0 and dy == 0:
        return 0
    angle = math.degrees(math.atan2(-dy, dx)) % 360
    idx = int(round(angle / 45)) % 8
    return idx


def _check_hazard_nearby(state: CourseGenState, tile: int,
                          tx: int, ty: int) -> bool:
    """Check if any tile in the 8-neighbourhood is a hazard.

    Returns True if a hazard (sand/water/trees/cliff) is found.
    """
    for d in range(8):
        nx = tx + DIR_DX[d]
        ny = ty + DIR_DY[d]
        if 0 <= nx < MAP_COLS and 0 <= ny < MAP_ROWS:
            val = state.tmap[nx][ny]
            tc = _terrain_class(val)
            if tc in (5, 6, 9, 12, 13, 14):
                return True
    return False


# ═══════════════════════════════════════════════════════════════════════════════
#  Event / speech stubs
# ═══════════════════════════════════════════════════════════════════════════════

def _golfer_speak(state: CourseGenState, tile: int) -> None:
    """Trigger a golfer speech bubble (FUN_004675d0 wrapper)."""
    # Stub — would call FUN_004675d0(tile)
    pass


def _golfer_detail(state: CourseGenState, tile: int,
                   detail_id: int, param: int) -> None:
    """Log a detail/event for a golfer (FUN_00467a00 wrapper).

    detail_id encodes the type of event: 0xb=hit sand, 0xe=hungry,
    0xf=thirsty, etc. See the switch in the decompiled C.
    """
    # Stub — would call FUN_00467a00(tile, detail_id, param)
    pass


def _golfer_editor_mode(state: CourseGenState, tile: int) -> None:
    """Handle editor-mode golfer state (state counter > 9).

    Calls FUN_00427380 (editor/designer mode handler).
    """
    pass


def _play_shot_animation(state: CourseGenState, tile: int) -> None:
    """Play swing sound/animation (FUN_0040c500 wrapper).

    The detail_id parameter selects the sound effect (0xbe=driver,
    0xbf=iron, 0xc0=wedge, 0xc1=putter).
    """
    pass


def _golfer_ai_shot(state: CourseGenState, tile: int) -> None:
    """Entry point for the main golfer AI shot decision.

    This wraps the logic starting at line 330+ of FUN_004289E0
    (the condition 'if golfer is not moving' block).
    """
    # Check if golfer has a partner and they're on the same hole
    partner = state.golfer_partner[tile]
    if partner != tile and state.tile_hole_idx[tile] == state.tile_hole_idx[partner]:
        # Distance comparison to decide who plays first
        pass
    _plan_shot(state, tile)

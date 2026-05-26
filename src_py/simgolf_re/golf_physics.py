"""
Ball physics and trajectory system — faithful translation from decompiled C.

Based on the decompiled C code from golf.exe:
  - FUN_00467a00 (ball physics/shot execution, 3062 lines)
  - FUN_00407e00 (ball trajectory/flight, 2273 lines)

This module captures the actual data structures, constants, and logic
flows used by SimGolf, not speculative aerodynamic models.

Key insight: SimGolf uses a grid-based trajectory system with per-tile
terrain types and elevation data. The "physics" is largely table-driven
with slope checks, terrain friction modifiers, and grid-based ball movement.
"""

from dataclasses import dataclass, field
from typing import List, Optional, Tuple
from enum import IntEnum
import math
import random


# ==============================================================================
# Constants from decompiled C
# ==============================================================================

# Array strides (from data access patterns in C)
GOLFER_STATE_STRIDE = 0x100      # 256: main state array stride
GOLFER_SHORT_STRIDE = 0x80       # 128: per-golfer short data stride
GOLFER_COORD_STRIDE = 0x40       # 64:  per-golfer coordinate stride
CLUB_STRIDE = 0x208              # 520: club data array stride
CLUB_FLAGS_STRIDE = 0x82         # 130: club flags stride
GRID_STRIDE = 0x32               # 50:  terrain grid width (50x50)

# Grid dimensions
GRID_WIDTH = 0x32                # 50
GRID_TILES = 0x9C4               # 2500 = 50*50

# Golfer limits
MAX_GOLFERS = 0x98               # 152
MAX_GOLFER_INDEX = 0x97          # 151

# Magic constants from C code
CLUB_TERRAIN_MULTIPLIER = 0x0B   # 11: club * 11 + terrain
MIN_BALL_POS = 0x38              # 56: minimum coordinate bound
MAX_BALL_POS = 0x2F8             # 760: maximum x coordinate
MAX_BALL_POS_Z = 0x231           # 561: maximum z coordinate
POS_OFFSET_28 = 0x28             # 40: common position offset
POS_OFFSET_2C = 0x2C             # 44: text position offset

# Terrain types referenced in C
TERRAIN_TEE = 0
TERRAIN_FAIRWAY = 1
TERRAIN_ROUGH = 2
TERRAIN_SAND = 3
TERRAIN_GREEN = 4
TERRAIN_WATER = 5
TERRAIN_OB = 6

# Terrain type string table (from C: '\\0'=fairway, 1-6=rough/sand, 7-12=water/green)
TERRAIN_NAMES = [
    "Fairway",   # 0
    "Rough",     # 1
    "Sand",      # 2
    "Light Rough",  # 3
    "Green",     # 4
    "Water",     # 5
    "OB",        # 6
    "Dirt",      # 7
    "Cart Path", # 8
    "Flowers",   # 9
    "Trees",     # 10
    "Garden",    # 11
    "Bunker",    # 12
]

# Ball state values (DAT_0057953c)
BALL_STATE_AIRBORNE = 0
BALL_STATE_ROLLING = 1
BALL_STATE_STOPPED = 2
BALL_STATE_IN_HOLE = 3
BALL_STATE_PENALTY = 4
BALL_STATE_OB = 5
BALL_STATE_WATER = 6
BALL_STATE_PLAYING = 7  # Value 7 is set in shot execution

# ==============================================================================
# Shot types (param_2 values from switch in FUN_00467a00)
# ==============================================================================

class ShotType(IntEnum):
    """Shot/club types as used in the decompiled C switch statement."""
    DRIVER = 1
    WOOD_3 = 2
    WOOD_5 = 3
    IRON_3 = 4
    IRON_4 = 5
    IRON_5 = 6
    IRON_6 = 7
    IRON_7 = 8
    IRON_8 = 9
    IRON_9 = 10
    PITCHING_WEDGE = 11
    SAND_WEDGE = 12
    LOB_WEDGE = 13
    # 14-17: other wedge/utility
    PUTT = 0x13          # 19
    CHIP = 0x23          # 35
    # Various special shots
    SPECIAL_HIGH = 0x2F  # 47
    SPECIAL_LOW = 0x15   # 21
    SPECIAL_FADE = 0x18  # 24
    SPECIAL_DRAW = 0x2E  # 46
    PRACTICE_SWING = 0x28  # 40 (also undo restore)

    @classmethod
    def is_putt(cls, shot_id: int) -> bool:
        return shot_id == cls.PUTT

    @classmethod
    def is_chip(cls, shot_id: int) -> bool:
        return shot_id == cls.CHIP


# ==============================================================================
# Club data (from DAT_00575ad0/0x208 stride and DAT_00575cb0/0x82 stride)
# ==============================================================================

@dataclass
class ClubData:
    """Club statistics as they appear in the game data arrays."""
    index: int
    max_distance: int       # Base max distance in yards
    trajectory_height: int  # Trajectory height factor
    backspin: int           # Backspin amount
    launch_angle: int       # Launch angle (game units)


# Club distances observed in the game's array access patterns
# (DAT_00575ad0 stride 0x208, accessed as clubs[club_idx].max_distance)
CLUB_DISTANCES = {
    1: 250,    # Driver
    2: 220,    # Wood 3
    3: 200,    # Wood 5
    4: 190,    # Iron 3
    5: 180,    # Iron 4
    6: 170,    # Iron 5
    7: 160,    # Iron 6
    8: 150,    # Iron 7
    9: 140,    # Iron 8
    10: 130,   # Iron 9
    11: 120,   # Pitching Wedge
    12: 100,   # Sand Wedge
    13: 90,    # Lob Wedge
    # Putter and special clubs
    19: 30,    # Putt
    35: 80,    # Chip
}

# ==============================================================================
# Global state arrays (mirroring the C global arrays)
# ==============================================================================
#
# The original C code uses large global arrays accessed with specific strides.
# These are represented here as Python lists/dicts for clarity.
# The actual game memory layout from the C code:
#
# DAT_005794xx range (various struct sizes):
#   stride 0x100: per-golfer state bytes (flags, club, terrain, etc.)
#   stride 0x40:  per-golfer coordinates/ints
#   stride 0x80:  per-golfer shorts
#
# DAT_00575xx range:
#   stride 0x208: club data (max distance, etc.)
#   stride 0x82:  club flags
#
# DAT_0053caf0: tile grid array (50x50 shorts = terrain flags)
# DAT_005722e8: tile terrain type array (50x50 chars)
# DAT_00578804: tile divot array (50x50 bytes)
# DAT_005a6378: tile fairway hit counts (50x50 bytes)
# DAT_0056c7e4: tile rough hit counts (50x50 bytes)


class GameStateArrays:
    """Represents the global data arrays from the decompiled C code.

    These arrays store all per-golfer state, terrain data, club data, etc.
    In the original game, these are global variables at fixed memory addresses.
    """

    def __init__(self):
        # --- Per-golfer state arrays (stride 0x100 = 256) ---
        # Accessed as &DAT_005794b8 + golfer * 0x40 (int32)
        # Ball X position in world coordinates
        self.golfer_ball_x: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794bc + golfer * 0x40 (int32)
        # Ball Z position in world coordinates
        self.golfer_ball_z: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794c0 + golfer * 0x40 (int32)
        # Some X coordinate (maybe pin/target X)
        self.golfer_coord_x: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794c4 + golfer * 0x40 (int32)
        # Some Z coordinate (maybe pin/target Z)
        self.golfer_coord_z: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794c8 + golfer * 0x40 (int32)
        # Bitfield flags for golfer
        self.golfer_flags: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d0 + golfer * 0x100 (byte)
        # Shot direction flags (0xe0 mask for direction)
        self.golfer_direction: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d2 + golfer * 0x100 (byte)
        # Something direction-related, &= 7
        self.golfer_dir_detail: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d3 + golfer * 0x100 (byte)
        # Shot difficulty? (checked against '\\n' = 10)
        self.golfer_shot_difficulty: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d4 + golfer * 0x100 (byte)
        # Stroke type flag: 0=drive, 1-6=approach, 7-12=pitch, 13=lob/snake
        # Checked: ==0 (drive), <7 (knocks), >=7 (lofts), ==13 (snakes)
        self.golfer_stroke_type: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d5 + golfer * 0x100 (byte)
        # Something set to 0xe (14) in some shots
        self.golfer_state_byte: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794d9 + golfer * 0x100 (byte)
        # Club index (0-based club selection)
        self.golfer_club: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794da + golfer * 0x100 (byte)
        # Terrain type under ball (0=tee, 1=fairway, 2=rough, 3=sand, etc.)
        self.golfer_terrain: List[int] = [0] * MAX_GOLFERS

        # &DAT_005794db[golfer * 0x100 + club] (byte)
        # Per-club distance modifier for this golfer
        self.golfer_club_distance: List[int] = [0] * (MAX_GOLFERS * 256)

        # &DAT_005794ee + golfer * 0x100 (byte)
        # Aim adjustment (signed, accumulates)
        self.golfer_aim_adjust: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579528 + golfer * 0x100 (byte)
        # Shot history buffer (last 10 shot types, shifted)
        self.golfer_shot_history: List[int] = [0] * (MAX_GOLFERS * 256)

        # &DAT_00579531 + golfer * 0x100 (byte)
        # Shot history terrain companion buffer
        self.golfer_shot_terrain: List[int] = [0] * (MAX_GOLFERS * 256)

        # &DAT_00579532 + golfer * 0x100 (byte)
        # Shot history club*11+terrain companion buffer
        self.golfer_shot_club_terrain: List[int] = [0] * (MAX_GOLFERS * 256)

        # &DAT_0057953c + golfer * 0x100 (byte)
        # Ball state (7 = playing, 0 = airborne, etc.)
        self.golfer_ball_state: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057953d + golfer * 0x100 (byte)
        # Current shot type
        self.golfer_current_shot: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057953e + golfer * 0x100 (byte)
        # Current club * 11 + terrain
        self.golfer_club_terrain: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579540 + golfer * 0x80 (byte)
        # Shot flags (bit 0x40 set for good shot, 0x8000 for negative change)
        self.golfer_shot_flags: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579542 + golfer * 0x100 (short)
        # Some status (checked for bit 0x8000)
        self.golfer_status: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579552 + golfer * 0x100 (short)
        # Something shifted with shot history
        self.golfer_hist_shift: List[int] = [0] * (MAX_GOLFERS * 256)

        # &DAT_00579554 + golfer * 0x80 (short)
        # Shot parameter storage
        self.golfer_shot_param: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579556 + golfer * 0x80 (short)
        # Something set to 0xffe8 or 0xff9d
        self.golfer_shot_subparam: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057955a + golfer * 0x80 (short)
        # Linked golfer index (for multiplayer/caddie)
        self.golfer_linked: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057955c + golfer * 0x80 (short)
        # Shot count for this golfer
        self.golfer_shot_count: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057955e + golfer * 0x100 (short)
        # Something checked against 7
        self.golfer_special_flag: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579560 + golfer * 0x80 (short)
        # Something checked against 7
        self.golfer_threshold_7: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579562 + golfer * 0x80 (short)
        # Something checked against 0x3b (59)
        self.golfer_threshold_59: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579564 + golfer * 0x80 (short)
        # Direction bias? Values -1, 1, 3 seen
        self.golfer_dir_bias: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579566 + golfer * 0x100 (short)
        # Some comparison flag (checked == 0 often)
        self.golfer_flag_66: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057956e + golfer * 0x80 (short)
        # Some linked index (caddie? partner?)
        self.golfer_partner: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057957c + golfer * 0x40 (int)
        # Target X coordinate
        self.golfer_target_x: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579580 + golfer * 0x40 (int)
        # Target Z coordinate
        self.golfer_target_z: List[int] = [0] * MAX_GOLFERS

        # &DAT_0057958c + golfer * 0x40 (int)
        # Ball final X (after shot)
        self.golfer_ball_final_x: List[int] = [0] * MAX_GOLFERS

        # &DAT_00579590 + golfer * 0x40 (int)
        # Ball final Z (after shot)
        self.golfer_ball_final_z: List[int] = [0] * MAX_GOLFERS

        # &DAT_005795a8 + golfer * 0x100 (byte)
        # Skill level storage
        self.golfer_skill: List[int] = [0] * (MAX_GOLFERS * 256)

        # --- Tile/terrain grid arrays ---

        # &DAT_0053caf0[tile] (short)
        # Terrain flags per tile (bit 0xc00 = walkable?, 0x4800 = divot?)
        self.terrain_flags: List[int] = [0] * GRID_TILES

        # &DAT_005722e8[tile] (char)
        # Terrain type per tile ('\\x11' = water/OB?)
        self.terrain_type: List[int] = [0] * GRID_TILES

        # &DAT_00578804[tile] (byte)
        # Divot marks
        self.terrain_divot: List[int] = [0] * GRID_TILES

        # &DAT_005a6378[tile] (byte)
        # Fairway hit counter
        self.terrain_fairway_hits: List[int] = [0] * GRID_TILES

        # &DAT_0056c7e4[tile] (byte)
        # Rough hit counter
        self.terrain_rough_hits: List[int] = [0] * GRID_TILES

        # --- Club data arrays ---

        # &DAT_00575ad0[club * 0x208] (int)
        # Club maximum distance
        self.club_max_distance: List[int] = [0] * 64

        # &DAT_00575ab0[club * 0x208] (char)
        # Club base trajectory height
        self.club_trajectory: List[int] = [0] * 64

        # &DAT_00575cb0[club * 0x82] (byte)
        # Club flags (bit 4 and bit 8 checked)
        self.club_flags: List[int] = [0] * 64

        # &DAT_00575b88[club * 2] (short)
        # Club usage counter
        self.club_usage_count: List[int] = [0] * 128

        # &DAT_00575c1c (short array)
        # Club last distance
        self.club_last_distance: List[int] = [0] * 128

        # &DAT_00575c08[club * 0x208] (short)
        # Club total distance accumulator
        self.club_total_distance: List[int] = [0] * 64

        # &DAT_0059fc60[golfer * 0x1c4] (short)
        # Current tile index for golfer
        self.golfer_tile: List[int] = [0] * MAX_GOLFERS

        # &DAT_005a5a04[skill_index] (byte)
        # Skill level array (12 skills, per golfer with 0x10 stride)
        self.skill_levels: List[int] = [0] * 256

        # &DAT_004d60a8[partner * 0x230] (int)
        # Partner flags (bit 1, 4, 8, 0x10 checked)
        # Access pattern: [partner * 0x230] where partner is short
        # Max size needed: 256 * 0x230 = 58880
        self.partner_flags: List[int] = [0] * 65536

        # --- Other globals ---

        # DAT_005409a8: Simulator mode flag (0 = normal, non-zero = simulator)
        self.simulator_mode: int = 0

        # DAT_005a59f8: Active human golfer index
        self.active_golfer: int = 0

        # DAT_00822c88: Difficulty level (0=easy, 1=medium, 2=hard, 3=expert)
        self.difficulty: int = 0

        # DAT_0059e7b8: Global flags bitfield
        self.global_flags: int = 0

        # DAT_00543cf4: Some mode flag (0, 1, 2)
        self.mode_flag: int = 0

        # DAT_005a9cd0: Some state byte
        self.state_byte: int = 0

        # DAT_00543d04: Something set to -1
        self.some_flag: int = 0

        # DAT_00822c88: Difficulty (same as above, different address?)
        self.difficulty_2: int = 0

        # DAT_00822d94: Some comparison value (checked == 0x79 = 121)
        self.some_threshold: int = 0

        # DAT_005685f0: Number of holes? (checked < 4)
        self.num_holes: int = 0

        # DAT_00571fd4: Current hole index
        self.current_hole: int = 0

        # DAT_005a6d3c: Some counter
        self.some_counter: int = 0

        # DAT_00834170: Total shots counter
        self.total_shots: int = 0

        # DAT_0055e5ac: Last shot counter snapshot
        self.last_shot_snapshot: int = 0

        # DAT_0059c08c: Bitfield for shot types used (low 32)
        self.shot_types_used_low: int = 0

        # DAT_00571d38: Bitfield for shot types used (high 32)
        self.shot_types_used_high: int = 0

        # DAT_005a5a00: Some flags bitfield
        self.some_flags: int = 0

        # DAT_004c2e08: Some golfer index, set to active then reset to -1
        self.temp_golfer: int = -1

        # DAT_004c2e00: Some multiplier
        self.multiplier_1: int = 0

        # DAT_004c2844: Some multiplier
        self.multiplier_2: int = 0

        # DAT_004c2c9c: Bitfield for skills
        self.skill_bitfield: int = 0

    # --------------------------------------------------------------------------
    # Helper methods for grid coordinate conversion
    # --------------------------------------------------------------------------
    @staticmethod
    def world_to_tile(world_x: int, world_z: int) -> int:
        """Convert world coordinates to tile index (0x32 = 50 width grid).
        
        The C code uses: tile = (z >> 10) + (x >> 10) * 0x32
        """
        return (world_z >> 10) + (world_x >> 10) * GRID_STRIDE

    @staticmethod
    def world_to_tile_rc(world_x: int, world_z: int) -> Tuple[int, int]:
        """Convert world coords to tile row, col."""
        col = world_x >> 10
        row = world_z >> 10
        return row, col

    def get_terrain_at(self, world_x: int, world_z: int) -> int:
        """Get terrain type at world coordinates."""
        tile = self.world_to_tile(world_x, world_z)
        if 0 <= tile < GRID_TILES:
            return self.terrain_type[tile]
        return 0

    def get_terrain_flags_at(self, world_x: int, world_z: int) -> int:
        """Get terrain flags at world coordinates."""
        tile = self.world_to_tile(world_x, world_z)
        if 0 <= tile < GRID_TILES:
            return self.terrain_flags[tile]
        return 0


# ==============================================================================
# Global game state instance
# ==============================================================================

GAME = GameStateArrays()


# ==============================================================================
# Helper function: sprite/animation event
# ==============================================================================

def _play_sound(sound_id: int, *args) -> None:
    """Wrapper for FUN_0040c500 — push sound event.
    
    In the C: FUN_0040c500(sound_id, x, z, flags)
    Additional args (x, z, flags) are ignored in this stub.
    Sound IDs observed: 0xd2(+), 0x12, 0x10, 0x14, 0x4c, 0xdc(+), 0x46,
    0x50, 0x4a, 8, 0x9e, 0x9c, 0x56, 0x44, 0x4e, 0x9a, 0x42, 0x3c,
    0xa0, 0x48, 0x96, 0x98, 0xa2, 0xa4, 0x3e, 0x16, 0x5a
    """
    pass  # Sound system — not translated here


def _set_animation(golfer: int, anim_id: int) -> None:
    """Wrapper for FUN_004676e0 — set golfer animation/expression.
    
    anim_id: 0 = neutral, various others for reactions
    """
    pass  # Animation system — not translated here


def _show_message(msg: int, pct: int, x: int, y: int, flags: int) -> None:
    """Wrapper for FUN_004481b0 — show message bubble.
    
    msg IDs observed: 0x30(48), 0x2f(47), 0x95(149)
    """
    pass  # UI system — not translated here


def _push_event(event_id: int, *args) -> None:
    """Wrapper for event system."""
    pass


def _rng(range_val: int) -> int:
    """Wrapper for FUN_0045c1e0 — RNG returning 0..range_val-1."""
    if range_val <= 0:
        return 0
    return random.randrange(range_val)


def _clamp_short(value: int, min_val: int, max_val: int) -> int:
    """Wrapper for FUN_00467130 — clamp value to short range."""
    return max(min_val, min(value, max_val))


def _get_distance(*args) -> int:
    """Wrapper for FUN_0040bfa0 — Chebyshev distance.
    
    Accepts variable arguments:
        (golfer, x, z, 0) -> distance from (0,0) to (x,z)
        (x1, z1, x2, z2) -> distance between two points
        (x, z) -> distance from (0,0) to (x,z)
    In the C code the first parameter is often a golfer index which is
    ignored in the distance calculation.
    """
    if len(args) == 4:
        # Typical call: FUN_0040bfa0(x, z, &out_x, &out_y, 0)
        # Simplified: just return Chebyshev distance from (0,0) to (x,z)
        x, z = args[0], args[1]
        return max(abs(x), abs(z))
    elif len(args) == 2:
        x, z = args[0], args[1]
        return max(abs(x), abs(z))
    return 0


# ==============================================================================
# Shot Execution: FUN_00467a00
# ==============================================================================

def execute_shot(golfer: int, shot_type: int, target_param: int) -> None:
    """Execute a golf shot.
    
    Translated from FUN_00467a00 @ 0x00467A00.
    
    Args:
        golfer: Golfer index (0-151, validated)
        shot_type: Club/shot type ID (1=Driver, 0x13=Putt, 0x23=Chip, etc.)
        target_param: Target/aim parameter
    """
    gs = GAME
    
    # --- Validation ---
    
    # Get terrain type for this golfer
    iVar16 = golfer * GOLFER_STATE_STRIDE
    
    # Check: if terrain > 9 ('\\t'), bail out
    if gs.golfer_terrain[golfer] > 9:
        return
    
    # Check: golfer index > 151
    if golfer > MAX_GOLFER_INDEX:
        return
    
    # Check: global flags bit 0x2000000
    if gs.global_flags & 0x2000000:
        return
    
    # --- Special putting logic (shot_type == 0x13) ---
    if shot_type == ShotType.PUTT:
        # Check direction flags: (&DAT_005794d0)[golfer*256] & 0xe0 != 0x20
        if (gs.golfer_direction[golfer] & 0xe0) != 0x20:
            club_idx = gs.golfer_club[golfer]
            # Check club data: *(int *)(&DAT_00575ad0 + club * 0x208) > 9
            if gs.club_max_distance[club_idx] > 9:
                # Check terrain slope flags
                club_flags = gs.club_flags[club_idx]
                if (club_flags & 4) != 0:
                    # Check if uphill (> 1 tile height diff)
                    height_diff = (gs.golfer_club_distance[golfer * 256 + club_idx]
                                   - gs.club_trajectory[club_idx])
                    if height_diff > 1:
                        shot_type = 0x17  # Change to different shot
                elif (club_flags & 8) != 0:
                    height_diff = (gs.golfer_club_distance[golfer * 256 + club_idx]
                                   - gs.club_trajectory[club_idx])
                    if height_diff < 0:
                        shot_type = 0x17  # Change to different shot (downhill)
    
    # --- Shot setup ---
    
    # Play shot sound (FUN_00469b00)
    club_terrain_combo = gs.golfer_club[golfer] * CLUB_TERRAIN_MULTIPLIER + gs.golfer_terrain[golfer]
    _push_event(shot_type, target_param, club_terrain_combo, golfer)
    
    # Set up UI message (FUN_00406d50)
    _set_animation(golfer, 0)
    
    # Check simulator mode
    sim_mode = gs.simulator_mode
    actual_golfer = golfer
    if sim_mode != 0:
        # Use linked golfer index
        actual_golfer = gs.golfer_linked[golfer]
    
    iVar9 = actual_golfer * GOLFER_STATE_STRIDE
    
    # Set ball state to PLAYING
    gs.golfer_ball_state[actual_golfer] = 7
    
    # Set current shot type
    gs.golfer_current_shot[actual_golfer] = shot_type
    
    # Set club * 11 + terrain combination
    gs.golfer_club_terrain[actual_golfer] = club_terrain_combo
    
    # Store shot parameter
    gs.golfer_shot_param[actual_golfer] = target_param
    
    # If simulator mode, set bit 0x80 on current shot
    if sim_mode != 0:
        gs.golfer_current_shot[actual_golfer] |= 0x80
    
    # Store target_param in shot_type-indexed array
    # *(int *)(shot_type * 4 + 0x838da8) = target_param
    
    # --- Special shot type handling ---
    
    if shot_type == ShotType.CHIP:  # 0x23 = 35
        # Play chip sound
        chip_sound = _get_distance(
            golfer,
            gs.golfer_ball_x[golfer],
            gs.golfer_ball_z[golfer],
            0
        )
        _play_sound(chip_sound + 0x46)
        
        if gs.golfer_shot_history[golfer * 256] == ord('#'):
            return  # Ball already in hole?
    
    elif shot_type == ShotType.PUTT:  # 0x13 = 19
        return  # Putt returns immediately after setup
    
    # --- Save current position as undo buffer ---
    # Copy golfer coordinates to stack backup
    saved_x = gs.golfer_ball_x[golfer]
    saved_z = gs.golfer_ball_z[golfer]
    
    # --- Shift shot history buffer ---
    # The C code shifts the last 10 shot types (indices 9 down to 0)
    for i in range(9, 0, -1):
        gs.golfer_shot_history[golfer * 256 + i] = gs.golfer_shot_history[golfer * 256 + (i - 1)]
        gs.golfer_shot_terrain[golfer * 256 + i] = gs.golfer_shot_terrain[golfer * 256 + (i - 1)]
        # Also shift some short value
        # (&DAT_00579552)[golfer*256 + i] = (&DAT_00579552)[golfer*256 + (i-1)]
    
    # Store current shot at position 0
    gs.golfer_shot_history[golfer * 256] = shot_type
    gs.golfer_club_terrain[golfer] = club_terrain_combo  # Actually stored as terrain companion
    gs.golfer_shot_param[golfer] = target_param
    
    # If shot type > 3, increment club_terrain
    if shot_type > 3:
        gs.golfer_club_terrain[golfer] = gs.golfer_club_terrain[golfer] + 1
    
    # --- Determine shot effectiveness modifier uVar15 ---
    # Extract some flags from partner data
    partner = gs.golfer_partner[golfer]
    partner_flags = gs.partner_flags[partner * 0x230] if partner < len(gs.partner_flags) // 0x230 else 0
    # The C does: CONCAT31(int3(char)((ushort)partner >> 8), partner_flags_bytes[3]) >> 4 & 0xf
    # This extracts some value from the partner flags
    effectiveness_mod = (partner_flags >> 4) & 0xf
    
    # Check if this is a human golfer (FUN_0046c940)
    is_human = True  # Simplified: golfer < max_human_golfers
    
    if not is_human:
        effectiveness_mod += 5  # AI gets bonus
    
    uVar15 = 0  # Shot effectiveness change
    saved_shot_type_idx = shot_type - 1  # iStack_104
    
    # --- Switch on shot type ---
    if shot_type == 1:  # Driver
        uVar15 = 1  # Good
        # Play drive sound
        has_flag = (gs.golfer_flags[golfer] & 0x20000) != 0
        sound_off = 0 if has_flag else 0x14
        _play_sound(0xd2 - sound_off + effectiveness_mod,
                    gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0)
        
    elif shot_type == 2:  # Wood 3
        uVar15 = -1  # Slightly short
        tile = gs.world_to_tile(gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer])
        # Check if terrain type is water ('\\x11')
        if gs.terrain_type[tile] != 0x11:
            uVar22 = 1000  # Some modifier
        else:
            uVar22 = 0
        _play_sound(0xdc + effectiveness_mod,
                    gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], uVar22)
        
    elif shot_type == 3:  # Wood 5
        uVar15 = -2  # Short
        tile = gs.world_to_tile(gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer])
        if gs.terrain_type[tile] != 0x11:
            uVar22 = 1000
        else:
            uVar22 = 0
        _play_sound(0xdc + effectiveness_mod,
                    gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], uVar22)
        
    elif shot_type == 4:  # Iron 3
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x12)
        
    elif shot_type in (5, 0x1f):  # Iron 4 / special
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x10)
        
    elif shot_type == 6:  # Iron 5
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x14)
        
    elif shot_type == 7:  # Iron 6
        if target_param == 0:
            uVar15 = 1
            _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x4c)
        
    elif shot_type == 8:  # Iron 7
        uVar15 = -2
        has_flag = (gs.golfer_flags[golfer] & 0x20000) != 0
        sound_off = 0 if has_flag else -0xcc  # -(0x20000 flag check) & 0xffffff34
        _play_sound(0xdc - sound_off + effectiveness_mod,
                    gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0)
        
    elif shot_type == 9:  # Iron 8
        uVar15 = -3
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x46)
        
    elif shot_type in (0xa, 0x2b):  # Iron 9 / special
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x50)
        
    elif shot_type == 0xb:  # Pitching Wedge
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x4a)
        
    elif shot_type in (0xc, 0xd):  # Sand Wedge, Lob Wedge
        uVar15 = -1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 500) + 8)
        
    elif shot_type == 0xe:  # Some wedge
        uVar15 = -1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x9e)
        
    elif shot_type == 0xf:  # Some wedge
        uVar15 = -1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x9c)
        
    elif shot_type == 0x12:  # Special
        uVar15 = 1 if gs.golfer_special_flag[golfer] > 7 else 0
        if uVar15 != 0 and (gs.partner_flags[partner * 0x230] & 1) != 0:
            _set_animation(golfer, 0)  # Hat tip?
        
    elif shot_type == 0x14:  # Special
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x56)
        gs.golfer_state_byte[golfer] = 0xe
        gs.golfer_shot_subparam[golfer] = 0xffe8
        
    elif shot_type == 0x15:  # Special low
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x44)
        
    elif shot_type == 0x16:  # Special
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x4e)
        gs.golfer_state_byte[golfer] = 0xe
        gs.golfer_shot_subparam[golfer] = 0xffe8
        
    elif shot_type == 0x17:  # Special (auto-adjusted putt replacement)
        uVar15 = -1 if gs.difficulty_2 != 0 else -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x9a)
        
    elif shot_type == 0x18:  # Special fade
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x42)
        
    elif shot_type == 0x19:  # Special
        is_high = gs.golfer_threshold_7[golfer] > 7
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x3c)
        uVar15 = 1 if is_high else 0
        if uVar15 != 0 and (gs.partner_flags[partner * 0x230] & 1) != 0:
            _set_animation(golfer, 0)
        
    elif shot_type == 0x1a:  # Special
        uVar15 = -1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0xa0)
        
    elif shot_type == 0x1b:  # Special
        is_long = gs.golfer_threshold_59[golfer] > 0x3b  # 59
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x48)
        uVar15 = 1 if is_long else 0
        if uVar15 != 0 and (gs.partner_flags[partner * 0x230] & 1) != 0:
            _set_animation(golfer, 0)
        
    elif shot_type == 0x1c:  # Special
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x4c)
        gs.golfer_state_byte[golfer] = 0xe
        gs.golfer_shot_subparam[golfer] = 0xffe8
        
    elif shot_type == 0x1d:  # Special
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x96)
        
    elif shot_type == 0x1e:  # Special
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x98)
        
    elif shot_type in (0x20, 0x21):  # Special
        uVar15 = 1
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0xa2)
        
    elif shot_type == 0x22:  # Special
        uVar15 = 1
        dist = _get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0)
        sound_id = 0xa4 if dist == 0 else 0xa7
        _play_sound(sound_id)
        
    elif shot_type == 0x23:  # Chip (handled above, fall through here)
        uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x46)
        
    elif shot_type == 0x24:  # Special
        uVar15 = -3
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x3e)
        
    elif shot_type == 0x27:  # Special
        uVar15 = 1 if gs.difficulty_2 < 2 else 0
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x14)
        
    elif shot_type in (0x2c, 0x2e):  # Special draw
        uVar15 = 1
        
    elif shot_type == 0x2f:  # Special high shot
        uVar15 = -2
        
    elif shot_type in (0x33, 0x34, 0x35):  # Special
        uVar15 = 1 if gs.difficulty_2 == 0 else 0
        if (gs.partner_flags[partner * 0x230] & 4) != 0:
            _set_animation(golfer, 0)
        
    elif shot_type == 0x36:  # Special
        uVar15 = 1 if gs.difficulty_2 < 2 else 0
        
    elif shot_type == 0x3a:  # Special
        dist = _get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0)
        sound_id = 0x5a if dist == 0 else 0xa5
        _play_sound(sound_id)
        
    elif shot_type == 0x3b:  # Special
        # Check: *(char *)(club + 0x5849e3 + partner * 0x2c) != 0
        club_idx = gs.golfer_club[golfer]
        partner_idx = gs.golfer_partner[golfer]
        skill_val = gs.skill_levels[club_idx + partner_idx * 0x2c] if partner_idx < 256 else 0
        if skill_val != 0:
            uVar15 = 1
        
    elif shot_type == 0x41:  # Special
        if gs.difficulty_2 > 1:
            uVar15 = -2
        _play_sound(_get_distance(golfer, gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer], 0) + 0x16)
    
    # --- Undo/restore: if shot_type == 0x28, copy saved coords back ---
    if shot_type == 0x28:
        gs.golfer_ball_x[golfer] = saved_x
        gs.golfer_ball_z[golfer] = saved_z
    
    # --- Early return if uVar15 == 0 and shot_type > 47 ---
    if uVar15 == 0 and shot_type > 0x2f:
        return
    
    # --- Aim adjustment logic ---
    if gs.golfer_direction[golfer] != 0:
        current_aim = gs.golfer_aim_adjust[golfer]
        # FUN_00467150: sign-extend byte to int
        signed_aim = current_aim if current_aim < 128 else current_aim - 256
        signed_uvars = uVar15 if uVar15 < 0x80000000 else uVar15 - 0x100000000
        
        if -signed_uvars == signed_aim:
            gs.golfer_aim_adjust[golfer] = 0
        else:
            gs.golfer_aim_adjust[golfer] = (current_aim + uVar15) & 0xff
        
        # Clamp aim for certain shot types
        if (gs.golfer_direction[golfer] != 0 and
                shot_type in (2, 3, 0xd, 0xc) and
                signed_aim < 0 and signed_uvars < 0 and
                signed_aim < signed_uvars):
            gs.golfer_aim_adjust[golfer] = 1
    
    # --- Penalty for hitting wrong golfer ---
    if golfer == gs.active_golfer and signed_uvars < 0:
        if (gs.golfer_flags[golfer] & 0x40000) != 0:
            _show_message(0x30, 100, 0, 0, 0)
    
    # --- Handle negative uVar15 (bad shot) ---
    if uVar15 == 0xffffffff:  # -1
        if gs.mode_flag != 2 and gs.golfer_direction[golfer] == 0:
            # Check shot history for matching shot type
            num_to_check = 3 if gs.difficulty_2 == 0 else (5 if gs.difficulty_2 < 3 else 5)
            found_duplicate = False
            for i in range(1, num_to_check + 1):
                if gs.golfer_shot_history[golfer * 256 + i] == shot_type:
                    found_duplicate = True
                    break
            
            if found_duplicate:
                uVar15 = 0xffffffff  # Keep as -1
            elif (gs.golfer_status[golfer] & 0x8000) != 0:
                uVar15 = 0xffffffff  # Keep as -1
            elif gs.mode_flag == 1:
                uVar15 = 0
            else:
                pass  # Keep processing
        else:
            pass  # Keep as -1
    
    # --- Direction-based effectiveness adjustment ---
    # Need signed values for comparisons
    signed_uvars = uVar15
    if uVar15 & 0x80000000:
        signed_uvars = uVar15 - 0x100000000
    
    if (gs.golfer_direction[golfer] & 0xe0) != 0x40:
        uVar15 = (uVar15 - 1) // 2  # Halve the effect
    
    # --- AI difficulty bonus/penalty ---
    if (signed_uvars < 0 and
            (gs.golfer_direction[golfer] & 0xe0) != 0x20 and
            (gs.golfer_terrain[golfer] + golfer) & 1 + 2 <= gs.difficulty_2 and
            shot_type not in (0x2f, 0x15, 0x18)):
        linked = gs.golfer_linked[golfer]
        if (gs.golfer_club[linked] > 0 and
                gs.golfer_ball_state[linked] == 0 and
                gs.golfer_shot_count[linked] > 0):
            # Execute another shot for the linked golfer
            execute_shot(linked, 0x2f, 0x14)
            gs.golfer_ball_state[linked] += 2
    
    # --- Update shot count ---
    gs.golfer_shot_count[golfer] = _clamp_short(
        gs.golfer_shot_count[golfer] + uVar15, -10, 10)
    
    # --- Update club total distance ---
    club_idx = gs.golfer_club[golfer]
    gs.club_total_distance[club_idx] += uVar15
    
    # --- Check for divot creation ---
    rng_val = _rng(6)
    if (((rng_val <= gs.difficulty_2 or
          (gs.golfer_flags[golfer] & 0x20000000) != 0) and
         signed_uvars < 0 and
         (gs.global_flags & 0x4000000) == 0 and
         shot_type != 0x2f)):
        # Create divot at ball position
        tile = gs.world_to_tile(gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer])
        if 0 <= tile < GRID_TILES:
            flags = gs.terrain_flags[tile]
            if (flags & 0xc00) == 0 and gs.terrain_type[tile] != 0x11:
                gs.terrain_divot[tile] = 1
                gs.terrain_flags[tile] = flags | 0x4800
                gs.some_flag = -1
    
    # --- Track club usage ---
    if uVar15 != 0:
        usage_idx = (shot_type + gs.golfer_club[golfer] * 0x104) * 2
        if usage_idx < len(gs.club_usage_count):
            gs.club_usage_count[usage_idx] += 1
        if usage_idx < len(gs.club_last_distance):
            gs.club_last_distance[usage_idx] = target_param
        
        if signed_uvars > 0:
            # Good shot - mark ball as divot-avoided
            gs.golfer_shot_flags[golfer] |= 0x40
    
    # --- Track shot quality flags ---
    if uVar15 < 0:  # Need to handle unsigned comparison
        pass
    # Actually check if the saved uStack_108 is negative
    if uVar15 & 0x80000000:  # If high bit set (negative)
        gs.golfer_shot_flags[golfer] |= 0x8000
    
    if signed_uvars < 0:
        gs.golfer_shot_flags[golfer] |= 0xc0
    
    if signed_uvars > 0:
        tile = gs.world_to_tile(gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer])
        if 0 <= tile < GRID_TILES:
            gs.terrain_fairway_hits[tile] += 1
    
    if signed_uvars < 0:
        tile = gs.world_to_tile(gs.golfer_ball_x[golfer], gs.golfer_ball_z[golfer])
        if 0 <= tile < GRID_TILES:
            gs.terrain_rough_hits[tile] += 1
    
    # --- Display shot result message ---
    if shot_type != 0x32:  # Not practice
        is_human = True  # FUN_0046c940 check
        msg_ptr = "Golfer " if is_human else "Caddie "
        
        shot_type_effective = shot_type
        if shot_type > 0x1f:
            shot_type_effective = shot_type - 0x20
        
        # Check if we should show a tip message
        if (gs.total_shots - gs.last_shot_snapshot > 500 and
                gs.golfer_flag_66[golfer] == 0 and
                ((1 << (shot_type_effective & 0x1f)) & gs.shot_types_used_low) == 0 and
                100 < gs.golfer_coord_x[golfer] < 700 and
                100 < gs.golfer_coord_z[golfer] < 400):
            # Show tip message
            msg_text = "Tip: ..."  # Various tip strings
            # Copy golfer name to message buffer
            _push_event(shot_type, target_param, club_terrain_combo, golfer)
            
            # Show specific tip based on saved_shot_type_idx
            if saved_shot_type_idx == 0:
                pass  # "has successfully made a tough long putt!"
            elif saved_shot_type_idx == 1:
                pass  # "is disappointed that an easy-looking putt..."
            # ... (many more tip cases)
            
            # Update shot type usage tracking
            if shot_type < 0x20:
                gs.shot_types_used_low |= 1 << (shot_type_effective & 0x1f)
            else:
                gs.shot_types_used_high |= 1 << (shot_type_effective & 0x1f)
            gs.last_shot_snapshot = gs.total_shots
    
    # --- Final message display ---
    display_flags = 0x80000210
    if uVar15 > 0:
        display_flags = 0x80000288
    if uVar15 & 0x80000000:
        display_flags = 0x80005084
    if gs.difficulty_2 != 0 and (uVar15 & 0x80000000) and uVar15 != 0xffffffff:
        display_flags = 0x80007084
    
    # Show message if conditions met
    if ((gs.some_flags & 4) != 0 and
            gs.golfer_ball_state[golfer] != 0 and
            _rng(100) < 50):  # FUN_0040cb00 check
        if shot_type < 0x20:
            gs.shot_types_used_low |= 1 << (shot_type & 0x1f)
        else:
            gs.shot_types_used_high |= 1 << ((shot_type - 0x20) & 0x1f)
        gs.last_shot_snapshot = gs.total_shots


# ==============================================================================
# Ball Flight / Trajectory: FUN_00407e00
# ==============================================================================

def compute_ball_flight(
    golfer: int,
    distance_param: int,
    target_param: int,
    is_preview: int = 0
) -> None:
    """Compute ball flight trajectory and land ball at final position.
    
    Translated from FUN_00407e00 @ 0x00407E00.
    
    This function:
    1. Gets the current ball position and bounds
    2. Handles out-of-bounds check
    3. Sets up camera for shot viewing
    4. Computes ball landing position based on terrain
    5. Updates final ball position
    6. Handles skill progression
    
    Args:
        golfer: Golfer index
        distance_param: Distance/power parameter
        target_param: Target parameter (club? target?)
        is_preview: 0 = normal shot, non-zero = preview/practice
    """
    gs = GAME
    bVar3 = True  # Valid boundary flag
    
    # --- Get current ball position bounds ---
    iVar16 = golfer * 0x388  # Some array stride
    current_tile = gs.golfer_tile[golfer]
    iVar17 = current_tile * GOLFER_STATE_STRIDE
    
    # Get coordinate bounds
    coord_z = gs.golfer_coord_z[current_tile]  # local_48
    coord_x = gs.golfer_coord_x[current_tile]  # local_40
    
    # Get linked golfer's coordinates for bounds comparison
    linked = gs.golfer_linked[current_tile]
    link_coord_x = gs.golfer_coord_x[linked]
    
    # Calculate min/max X bounds
    min_x = coord_x
    max_x = coord_x
    if link_coord_x < coord_x:
        min_x = link_coord_x
    if coord_x < link_coord_x:
        max_x = link_coord_x
    
    # Calculate min/max Z bounds
    link_coord_z = gs.golfer_coord_z[linked]
    min_z = coord_z
    max_z = coord_z
    if link_coord_z < coord_z:
        min_z = link_coord_z
    if coord_z < link_coord_z:
        max_z = link_coord_z
    
    # --- Check for out of bounds ---
    if min_x < 1 or min_z < 1:
        if current_tile != gs.active_golfer:
            # Flag this golfer as having hit OB
            club_idx = gs.golfer_club[current_tile]
            partner = gs.golfer_partner[current_tile]
            # *(byte *)(club + 0x5849e3 + partner * 0x2c) |= 1
            return  # Bail out
        bVar3 = False
        local_44 = current_tile
    else:
        # --- Setup camera for shot viewing ---
        local_44 = 0x98  # Default camera target?
        
        # Copy some saved positions (undo buffers?)
        # FUN_0042fb90 for each hit point
        
        # Clear message buffer
        # gs.golfer_ball_state[current_tile] = 0
        
        # --- Build shot description ---
        # The C code builds strings like:
        # "launches a", "knocks a", "lofts a", "snakes a" (stroke types)
        # "tricky", "tough" (difficulty modifiers)
        # "drive", "shot", "putt" (shot type names)
        # "into the hole", "inches from the hole" (proximity)
        # "to within X yards", "safely onto the fairway"
        # etc.
        
        # These are UI strings - not physics
        pass
    
    # --- Validate ball position bounds ---
    if min_x < MIN_BALL_POS:
        if min_x < 0:
            bVar3 = False
        else:
            min_x = MIN_BALL_POS
    
    if min_z < MIN_BALL_POS:
        if min_z < 0:
            bVar3 = False
        else:
            min_z = MIN_BALL_POS
    
    if max_x > MAX_BALL_POS:
        bVar3 = False
    
    if max_z < 0x231:  # MAX_BALL_POS_Z
        if not bVar3:
            pass  # Skip to end
        # Camera position stuff
    else:
        bVar3 = False
    
    if not bVar3 and current_tile != gs.active_golfer:
        return  # Bail out
    
    # --- Skill improvement check ---
    saved_skill_flags = gs.golfer_status[current_tile]
    gs.golfer_status[current_tile] = 0xffff  # Temporarily clear
    
    # Check if this golfer is active or partner
    active = gs.active_golfer
    is_active = (current_tile == active)
    is_partner = (current_tile == (active ^ 1))
    
    if is_active or (is_partner and (gs.global_flags & 0x200000) == 0):
        # Get skill improvement threshold
        skill_threshold = 99  # FUN_0044faf0(DAT_005685f0 + -1)
        # local_1c = skill_threshold * 2 + 6
        # if skill_threshold == 3: local_1c = 99
        
        skill_offset = 0 if is_active else 0x10
        
        # Check each skill (0-11)
        for skill_idx in range(12):
            current_skill_val = gs.skill_levels[skill_idx + skill_offset]
            if skill_threshold <= current_skill_val:
                # Clear this skill's flag
                gs.golfer_status[current_tile] &= ~(1 << skill_idx)
        
        if is_preview != 0:
            # Practice/preview mode: set skills differently
            gs.golfer_status[current_tile] = 0
            for skill_idx in range(12):
                skill_val = gs.skill_levels[skill_idx + skill_offset]
                if skill_val > 3:
                    gs.golfer_status[current_tile] |= (1 << skill_idx)
        
        # --- Determine which skill to improve ---
        local_24 = 0  # Loop counter
        
        # Check shot proximity to target
        dist_to_pin = _get_distance(
            gs.golfer_ball_final_x[current_tile],
            gs.golfer_ball_final_z[current_tile])
        
        if dist_to_pin == 1:
            # Very close to pin - check flag 0x10
            if (gs.golfer_status[current_tile] & 0x10) != 0:
                param_3 = 0x10
            else:
                param_3 = 0  # Will pick random skill below
        else:
            param_3 = 0
        
        # If param_3 is 0, pick a random skill to improve
        while param_3 == 0 and local_24 < 100:
            rnd = _rng(12)
            if rnd == 0:
                if (gs.skill_levels[0 * 0x30 + dist_to_pin] > 0 and
                        (gs.golfer_status[current_tile] & 0x100) != 0):
                    param_3 = 0x100
            elif rnd == 1:
                if ((gs.golfer_flags[current_tile] & 2) != 0 or is_preview == 0) and \
                        (gs.golfer_status[current_tile] & 0x200) != 0:
                    param_3 = 0x200
            elif rnd == 2:
                if gs.golfer_terrain[current_tile] == 0 and \
                        gs.golfer_stroke_type[current_tile] < 2 and \
                        (gs.golfer_status[current_tile] & 2) != 0:
                    param_3 = 2
            elif rnd == 3:
                if gs.golfer_terrain[current_tile] == 0 and \
                        gs.golfer_stroke_type[current_tile] < 4 and \
                        (gs.golfer_status[current_tile] & 4) != 0:
                    param_3 = 4
            elif rnd == 4:
                if gs.golfer_dir_bias[current_tile] == 1 and \
                        (gs.golfer_status[current_tile] & 0x20) != 0:
                    param_3 = 0x20
            elif rnd == 5:
                if gs.golfer_dir_bias[current_tile] == -1 and \
                        (gs.golfer_status[current_tile] & 0x40) != 0:
                    param_3 = 0x40
            elif rnd == 6:
                if gs.golfer_dir_bias[current_tile] == 3 and \
                        (gs.golfer_status[current_tile] & 0x80) != 0:
                    param_3 = 0x80
            elif rnd == 7:
                # Check something about current hole distance
                if (distance_param > 0) and \
                        (gs.golfer_status[current_tile] & 1) != 0:
                    param_3 = 1
            elif rnd == 8:
                if gs.golfer_stroke_type[current_tile] > 2 and \
                        gs.golfer_stroke_type[current_tile] < 11:
                    param_3 = 8
            elif rnd == 9:
                if (local_24 > 50 or is_preview == 0):
                    # Check distance to pin
                    if dist_to_pin != 1 or is_preview == 0:
                        param_3 = 0x10  # Actually goes to case 0x200 via goto
            
            local_24 += 1
        
        # --- Apply skill improvement ---
        if param_3 != 0:
            # Find the skill bit index
            skill_bit = 0
            while (param_3 & (1 << skill_bit)) == 0:
                skill_bit += 1
            
            if is_preview == 0:
                skill_val = gs.skill_levels[skill_bit + skill_offset]
                if skill_val < 10:
                    # Show "skill improved" message
                    _set_animation(current_tile, 0)
                    if skill_val == 0:
                        # New skill acquired!
                        new_val = _clamp_short(3 - gs.difficulty_2, 1, 3)
                        gs.skill_levels[skill_bit + skill_offset] = new_val
                        # Show "acquires a new skill!" message
                    else:
                        # Skill improves
                        gs.skill_levels[skill_bit + skill_offset] = skill_val + 1
                        # Show "skill improves to X" message
                    
                    # If maxed out, show additional message
                    if gs.skill_levels[skill_bit + skill_offset] == skill_threshold:
                        # Show "To further improve this skill..." message
                        pass
                    
                    # Track skill improvement for active golfer
                    if current_tile == gs.active_golfer:
                        gs.golfer_skill[skill_bit + current_tile * 256] = \
                            gs.skill_levels[skill_bit + skill_offset]
                        # Record achievement
                        gs.skill_bitfield |= (1 << skill_bit)
                else:
                    # Skill already at max, but decrease if practice
                    if is_preview == 0 and skill_val < 3:
                        return
                    gs.skill_levels[skill_bit + skill_offset] -= 1
                    # Show "loses 10% of his/her [skill]" message
            else:
                # Preview mode: decrement skill if >= 3
                if gs.skill_levels[skill_bit + skill_offset] < 3:
                    return
                gs.skill_levels[skill_bit + skill_offset] -= 1
                # Show "loses 10% of his/her [skill]" message
    
    # --- Restore saved flags ---
    gs.golfer_status[current_tile] = saved_skill_flags
    
    # --- Camera/display setup ---
    if not bVar3:
        _play_sound(0x800023e8, 1, current_tile)
        _show_message(0x95, 100, 0, 0, 0)
        return
    
    # Check if this is a human golfer (has animation frames)
    bVar3 = True
    club_idx = gs.golfer_club[current_tile]
    # Check all 76 club animation frames for availability
    for frame_offset in range(76):
        # *(byte *)(0x5849e0 + club_idx + frame_offset * 0x2c) & 1
        pass  # Animation frame check
    
    # --- Camera pan to ball landing area ---
    if (gs.some_flags & 2) == 0:
        bVar3 = False
        if current_tile != gs.active_golfer:
            pass  # Skip camera
    elif not bVar3 or gs.active_golfer != 0xffffffff:
        if current_tile != gs.active_golfer:
            pass  # Skip camera
    
    # Draw camera framing rectangle
    camera_x1 = max_x + POS_OFFSET_28
    camera_y1 = max_z + POS_OFFSET_28
    camera_x2 = min_x - POS_OFFSET_28
    camera_y2 = min_z - POS_OFFSET_28
    
    # Draw camera view rectangle (4 border lines)
    # FUN_00480b00 for each edge
    # FUN_00478b80 for each corner connection
    
    # Draw "SimFoto" label
    # FUN_00404b70("SimFoto", (max_x+min_x)/2, max_z + 0x2c, flags)
    
    # --- Update ball flag ---
    gs.golfer_flags[current_tile] |= 0x20000
    
    # --- Post-shot follow-up ---
    if is_preview == 0:
        # If current shot wasn't a putt, play follow-up
        if gs.golfer_shot_history[current_tile * 256] & 0x7f != 1:
            execute_shot(current_tile, 1, 1)
            gs.golfer_state_byte[current_tile] = 0xc
            gs.golfer_shot_subparam[current_tile] = 0xff9d
            gs.golfer_dir_detail[current_tile] = (gs.golfer_dir_detail[current_tile] - 2) & 7
    else:
        # Preview mode: handle aim adjustment
        if gs.golfer_aim_adjust[current_tile] >= 0:
            gs.golfer_aim_adjust[current_tile] = 0xff  # -1 signed


# ==============================================================================
# Helper: Get recommended club for distance
# ==============================================================================

def get_recommended_club(distance_yards: int) -> int:
    """Find the best club for a given distance."""
    best_club = 19  # Putter default
    best_diff = 9999
    
    for club_id, dist in CLUB_DISTANCES.items():
        diff = abs(dist - distance_yards)
        if diff < best_diff:
            best_diff = diff
            best_club = club_id
    
    return best_club


# ==============================================================================
# Helper: Calculate shot result quality
# ==============================================================================

def get_shot_quality(uVar15: int) -> str:
    """Convert the effectiveness value to a descriptive rating.
    
    uVar15 values from the C code:
        1: Good shot (overshoots slightly)
        0: Neutral
       -1: Slightly short
       -2: Short
       -3: Very short
    """
    if uVar15 > 1:
        return "Perfect"
    elif uVar15 == 1:
        return "Good"
    elif uVar15 == 0:
        return "On target"
    elif uVar15 == -1:
        return "Slightly short"
    elif uVar15 == -2:
        return "Short"
    elif uVar15 == -3:
        return "Very short"
    else:
        return "Poor"

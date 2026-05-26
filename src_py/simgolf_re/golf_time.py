"""
SimGolf Reverse Engineering — Time / Day Cycle System
=======================================================
Translation of FUN_0040E720 from Ghidra decompiled C.

This function implements the hole-scoring / course-opening display
that appears after a golfer finishes a hole. It shows:
  - Hole number, par, length, and difficulty rating
  - Dogleg direction (left/right) and elevation (uphill/downhill)
  - Course feature unlock messages as new amenities become available
  - "Hole X is now open for play" milestone messages
  - Per-hole statistics and course progression tracking

Key:
  - DAT_005685f0: current hole index being processed
  - DAT_00575ab0: hole difficulty rating (2=easy..6=very hard)
  - DAT_00575ab4: hole length (in game units)
  - DAT_00575ab8/abc: tee box grid coordinates
  - DAT_00575ac0/ac4: pin position grid coordinates
  - DAT_00575ac8/acc: pin position (scaled to tile coords)
  - DAT_00575cb0: hole flags (0x20=dogleg left, 0x40=dogleg right,
                   0x1000=uphill, 0x2000=downhill, 0x60=both)
  - DAT_005a6364: course feature unlock counter (0..18)
  - DAT_00575ad4: visitor count per hole
  - DAT_00575ca4: shots counter per hole
  - DAT_00575c9c: time spent per hole
  - DAT_00834170: game tick / time
  - DAT_00822c88: screen width (<2 means course is still building)
  - Hole stride: 0x208 (520 bytes per hole)
"""

from __future__ import annotations

from typing import Final, List, Optional

# ── Constants ──────────────────────────────────────────────────────────────────

HOLE_STRIDE: Final[int] = 0x208           # bytes per hole

# Hole difficulty levels (DAT_00575ab0)
HOLE_EASY: Final[int] = 2
HOLE_NORMAL: Final[int] = 3
HOLE_HARD: Final[int] = 4
HOLE_VERY_HARD: Final[int] = 5
HOLE_EXTREME: Final[int] = 6

# Length thresholds (in game units)
LENGTH_SHORT_MAX: Final[int] = 200        # "short" for normal holes
LENGTH_LONG_MIN: Final[int] = 200         # "long" threshold for normal
LENGTH_HARD_SHORT_MAX: Final[int] = 0x15E  # 350 for hard holes
LENGTH_HARD_LONG_MIN: Final[int] = 0x1A9   # 425 for hard holes
LENGTH_VHARD_SHORT_MAX: Final[int] = 500
LENGTH_VHARD_LONG_MIN: Final[int] = 0x23F  # 575

# Course feature unlock milestones
FEATURE_BALL_WASHER: Final[int] = 3
FEATURE_CONCESSION: Final[int] = 5
FEATURE_IMAGINATION: Final[int] = 6
FEATURE_RESTAURANT: Final[int] = 7
FEATURE_ACCURACY: Final[int] = 8
FEATURE_TEE_TIME: Final[int] = 9
FEATURE_LONG_HITTER: Final[int] = 10
FEATURE_SPEED: Final[int] = 11
FEATURE_HOME_VALUE: Final[int] = 12
FEATURE_COMFORT: Final[int] = 13
FEATURE_GREEN_FEE: Final[int] = 14

# String constants
STR_HOLE: Final[str] = "Hole "
STR_OPEN_FOR_PLAY: Final[str] = " is now open for play!"
STR_SHORT: Final[str] = "short"
STR_LONG: Final[str] = "long"
STR_UPHILL: Final[str] = "uphill"
STR_DOWNHILL: Final[str] = "downhill"
STR_DOGLEG_LEFT: Final[str] = "with a dogleg to the left"
STR_DOGLEG_RIGHT: Final[str] = "with a dogleg to the right"
STR_SCENIC: Final[str] = "scenic"

# New player/feature unlock strings
STR_NEW_PLAYERS: Final[str] = \
    "New players are flocking to your course!"
STR_NEW_BUILDING: Final[str] = \
    "As your course grows, you can add new amenities."
STR_YOU_MAY_BUILD: Final[str] = "You may now build a"

# Feature description strings (indexed by milestone)
FEATURE_DESCRIPTIONS: Final[List[str]] = [
    "",  # 0
    "",  # 1
    "",  # 2
    "A ball washer near the tee will improve your players' accuracy.",
    # 3
    "",  # 4
    "A snack bar or restaurant is a quick way to raise some cash "
    "and keep your golfers happy.",
    # 5
    "Allows your golfers with imagination to improve their power.",
    # 6
    "Will feed golfers who get hungry, keeping them on the course longer.",
    # 7
    "Allows your accurate golfers to improve their short game.",
    # 8
    "Helps your players to begin play at the right time.",
    # 9
    "Allows your long hitters to improve their drive distance.",
    # 10
    "Increases your players' speed of play.",
    # 11
    "Increases the value of all homes on your course.",
    # 12
    "Keeps your players from getting too hot or too cold.",
    # 13
    "Allows you to charge higher green fees.",
    # 14
    "",  # 15
    "",  # 16
    "",  # 17
    "",  # 18
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Global state container
# ═══════════════════════════════════════════════════════════════════════════════

class TimeGlobals:
    """Container for all global variables referenced by the time/day cycle."""

    def __init__(self) -> None:
        # DAT_005685f0 — current hole index
        self.current_hole: int = 0

        # Per-hole arrays (stride 0x208)
        # DAT_00575ab0 — hole difficulty (byte)
        self.hole_difficulty: List[int] = [0] * 19
        # DAT_00575ab2 — hole wind direction (byte, 0..7)
        self.hole_wind_dir: List[int] = [0] * 19
        # DAT_00575ab4 — hole length (short)
        self.hole_length: List[int] = [0] * 19
        # DAT_00575ab8 — tee x (int)
        self.hole_tee_x: List[int] = [0] * 19
        # DAT_00575abc — tee y (int)
        self.hole_tee_y: List[int] = [0] * 19
        # DAT_00575ac0 — pin x (int)
        self.hole_pin_x: List[int] = [0] * 19
        # DAT_00575ac4 — pin y (int)
        self.hole_pin_y: List[int] = [0] * 19
        # DAT_00575ac8 — pin x tile coord (int)
        self.hole_pin_tx: List[int] = [0] * 19
        # DAT_00575acc — pin y tile coord (int)
        self.hole_pin_ty: List[int] = [0] * 19
        # DAT_00575ad0 — visitor count (int)
        self.hole_visitors: List[int] = [0] * 19
        # DAT_00575ad4 — total rounds (int)
        self.hole_rounds: List[int] = [0] * 19
        # DAT_00575ad8 — per-hole score array (short[8][10])
        self.hole_scores: List[List[int]] = [[0] * 8 for _ in range(10)]
        # DAT_00575b88 — per-hole misc flags (int[32])
        self.hole_flags_ext: List[List[int]] = [[0] * 32 for _ in range(19)]
        # DAT_00575c08/c0a — counters (short)
        self.hole_counter1: List[int] = [0] * 19
        self.hole_counter2: List[int] = [0] * 19
        # DAT_00575c9c — time per hole (int)
        self.hole_time: List[int] = [0] * 19
        # DAT_00575ca4 — shots per hole (int)
        self.hole_shots: List[int] = [0] * 19
        # DAT_00575cb0 — hole flags (byte)
        self.hole_flags: List[int] = [0] * 19
        # DAT_00575cb8 — hole active flag (byte, 0=inactive)
        self.hole_active: List[int] = [0] * 19
        # DAT_00575cc0/cc4 — cumulative course stats (int)
        self.course_total_yards: int = 0
        self.course_total_par: int = 0

        # DAT_00834170 — game tick
        self.game_tick: int = 0

        # DAT_00822c88 — screen width (<2 => course building phase)
        self.screen_w: int = 800

        # DAT_0059e7b8 — global flags (0x40 = specific mode)
        self.flags: int = 0

        # DAT_005a6364 — course feature unlock counter
        self.feature_level: int = 0

        # DAT_0058a528 — string buffer for numeric conversion
        self.num_buf: str = ""

        # DAT_0051a068 — text rendering buffer
        self.text_buffer: str = ""

        # DAT_004c2848 — last rendered hole (seems to be -1 = invalidate)
        self.last_hole_rendered: int = -1

        # Derived
        self.hole_tee_pin_dist: int = 0  # angle from tee to pin

    # ── Hole data accessors with stride ─────────────────────────────
    def _hofs(self, hole: int) -> int:
        """Return the byte offset for the given hole."""
        return hole * HOLE_STRIDE

    def _set_hole_byte(self, arr: List[int], hole: int, value: int) -> None:
        """Set a byte value in a per-hole array at the given hole index."""
        if 0 <= hole < len(arr):
            arr[hole] = value & 0xFF

    def _set_hole_short(self, arr: List[int], hole: int, value: int) -> None:
        """Set a short value in a per-hole array."""
        if 0 <= hole < len(arr):
            arr[hole] = value & 0xFFFF

    def _set_hole_int(self, arr: List[int], hole: int, value: int) -> None:
        """Set an int value in a per-hole array."""
        if 0 <= hole < len(arr):
            arr[hole] = value


# ═══════════════════════════════════════════════════════════════════════════════
#  Stub helper functions
# ═══════════════════════════════════════════════════════════════════════════════

def _render_text(text: str, x: int, y: int, flags: int = 0x80000000) -> None:
    """Render text at screen position (stub)."""
    pass


def _render_label(text: str, x: int, y: int, flags: int = 0x80000000) -> None:
    """Render a text label (stub)."""
    pass


def _play_sound(sound_id: int, volume: int = 100, pan: int = 0,
                loop: int = 0, priority: int = 0) -> None:
    """Play a sound effect (stub)."""
    pass


def _itoa(value: int, buf: str, base: int = 10) -> str:
    """FUN_004ad425 — integer to ASCII conversion (stub)."""
    if base == 10:
        return str(value)
    return format(value, 'x')


def _ftol() -> int:
    """__ftol — float-to-long conversion stub."""
    return 0


def _distance(dx: int, dy: int) -> int:
    """FUN_004672d0 — compute angle/direction from delta x,y."""
    return 0


def _clamp(value: int, lo: int, hi: int) -> int:
    """FUN_00467130 — clamp value to [lo, hi]."""
    if value < lo:
        return lo
    if value > hi:
        return hi
    return value


def _play_ambient(sound_id: int, x: int, y: int) -> None:
    """FUN_0046e7b0 — play a positional ambient sound (stub)."""
    pass


def _show_message(flags: int, unk1: int, unk2: int) -> None:
    """FUN_0040cb00 — display a message box (stub)."""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Core time/day cycle function   FUN_0040E720()
# ═══════════════════════════════════════════════════════════════════════════════

def time_day_cycle(tg: TimeGlobals) -> None:
    """FUN_0040E720 — Time / Day Cycle System.

    Called after a golfer finishes a hole to:
      1. Compute and display hole difficulty rating
      2. Show hole length and par information
      3. Display dogleg and elevation characteristics
      4. Show "Hole X is now open for play" message
      5. Unlock course features at milestone holes
      6. Play ambient sound effects for the hole
      7. Advance the hole counter for the next golfer

    The function reads from and writes to the hole data arrays
    and manages the course progression state machine.

    Args:
        tg: The TimeGlobals state container.
    """
    hole = tg.current_hole

    # ── Guard: no valid course data ────────────────────────────────
    if (tg.hole_tee_x[hole] == 0 or tg.hole_pin_tx[hole] == 0) or \
       ((tg.flags & 0x40) != 0 and tg.hole_pin_x[hole] == 0):
        _play_sound(0x18)
        return

    # ── Reset per-hole score arrays ────────────────────────────────
    for i in range(10):
        for j in range(8):
            tg.hole_scores[i][j] = 0

    # ── Compute hole length if not set ─────────────────────────────
    length = tg.hole_length[hole]
    if length == 0:
        length = _ftol()
        tg.hole_length[hole] = length
        if length > 0xFA:
            # Scale up long holes
            extra = (length - 0xFA + ((length - 0xFA) >> 31 & 3)) >> 2
            tg.hole_length[hole] = length + extra

    # ── Apply length modifiers for dogleg holes ────────────────────
    flags = tg.hole_flags[hole]
    if (flags & 0x60) != 0 and length > 0xFA:
        length += 0x19  # add 25 yards for doglegs

    # Cap extremely long holes
    if length > 300:
        length += tg.course_total_yards * -0x19 + length

    # ── Set difficulty rating ──────────────────────────────────────
    # 2=easy, 3=normal, 4=hard, 5=very hard, 6=extreme
    if length < 0x33:      # < 51
        tg.hole_difficulty[hole] = HOLE_EASY
    elif length > 0xF9:    # > 249
        tg.hole_difficulty[hole] = HOLE_HARD
    elif length > 0x1DA:   # > 474
        tg.hole_difficulty[hole] = HOLE_VERY_HARD
    elif length > 0x271:   # > 625
        tg.hole_difficulty[hole] = HOLE_EXTREME
    else:
        tg.hole_difficulty[hole] = HOLE_NORMAL

    # ── Play ambient sounds ───────────────────────────────────────
    if tg.screen_w < 2:
        if (flags & 0x40) != 0:   # dogleg right
            _play_ambient(0, tg.hole_pin_tx[hole] * 0x400 + 0x200,
                          tg.hole_pin_ty[hole] * 0x400 + 0x200)
        if (flags & 0x20) != 0:   # dogleg left
            _play_ambient(1, tg.hole_pin_tx[hole] * 0x400 + 0x200,
                          tg.hole_pin_ty[hole] * 0x400 + 0x200)
        if tg.hole_difficulty[hole] == HOLE_VERY_HARD:
            _play_ambient(4, tg.hole_pin_tx[hole] * 0x400 + 0x200,
                          tg.hole_pin_ty[hole] * 0x400 + 0x200)

    difficulty = tg.hole_difficulty[hole]

    # ── Render hole description text ──────────────────────────────
    # Length descriptor
    if difficulty == HOLE_NORMAL:
        if length < LENGTH_SHORT_MAX:
            _render_text(STR_SHORT, 0, 0, 0)  # "short"
        elif length > LENGTH_LONG_MIN:
            _render_text(STR_LONG, 0, 0, 0)   # "long"
    elif difficulty == HOLE_HARD:
        if length < LENGTH_HARD_SHORT_MAX:
            _render_text(STR_SHORT, 0, 0, 0)
        elif length > LENGTH_HARD_LONG_MIN:
            _render_text(STR_LONG, 0, 0, 0)
    elif difficulty == HOLE_VERY_HARD:
        if length < LENGTH_VHARD_SHORT_MAX:
            _render_text(STR_SHORT, 0, 0, 0)
        elif length > LENGTH_VHARD_LONG_MIN:
            _render_text(STR_LONG, 0, 0, 0)

    # ── Reset per-hole scoring counters ────────────────────────────
    tg.hole_shots[hole] = 0
    tg.hole_rounds[hole] = 0
    tg.hole_visitors[hole] = 0
    tg.hole_time[hole] = 0
    tg.hole_counter1[hole] = 0
    tg.hole_counter2[hole] = 0
    for i in range(10):
        for j in range(8):
            tg.hole_scores[i][j] = 0
    for i in range(32):
        tg.hole_flags_ext[hole][i] = 0

    # ── Compute direction from tee to pin ──────────────────────────
    dx = tg.hole_pin_tx[hole] - tg.hole_pin_x[hole]
    dy = tg.hole_pin_ty[hole] - tg.hole_pin_y[hole]
    tg.hole_tee_pin_dist = _distance(dx, dy)
    # Wind direction (byte, 0..7)
    tg.hole_wind_dir[hole] = ((tg.hole_tee_pin_dist >> 0x1C & 0xF) + 1 >> 1) & 7

    # ── Mark terrain tile for this hole ────────────────────────────
    tile_idx = tg.hole_tee_y[hole] + tg.hole_tee_x[hole] * 0x32
    # Set occupied flag on the tile
    # DAT_0053caf0[tile_idx] byte 1 |= 0x40
    # DAT_00578804[tile_idx] = 0

    # ── Render "Hole X" header ────────────────────────────────────
    hole_num_text = f"Hole {hole}"  # Hole number heading
    _render_text(hole_num_text, 0, 0, 0)

    # ── Hole length display ───────────────────────────────────────
    length_text = _itoa(length, "", 10)
    _render_text(length_text, 0, 0, 0)  # "yds" suffix

    # ── "par" label ────────────────────────────────────────────────
    _render_text("par", 0, 0, 0)

    # ── Difficulty rating display ──────────────────────────────────
    diff_text = _itoa(difficulty, "", 10)
    _render_text(diff_text, 0, 0, 0)

    # ── Elevation description ──────────────────────────────────────
    if (flags & 0x1000) != 0:
        _render_text(STR_UPHILL, 0, 0, 0)
    if (flags & 0x2000) != 0:
        _render_text(STR_DOWNHILL, 0, 0, 0)

    # ── "scenic" label ─────────────────────────────────────────────
    _render_text(STR_SCENIC, 0, 0, 0)

    # ── Dogleg description ─────────────────────────────────────────
    if (flags & 0x20) != 0:
        _render_text(STR_DOGLEG_LEFT, 0, 0, 0)
    if (flags & 0x40) != 0:
        _render_text(STR_DOGLEG_RIGHT, 0, 0, 0)

    # ── "Hole X is now open for play!" ────────────────────────────
    _render_text(f"Hole {hole} is now open for play!", 0, 0, 0)

    # ── Course feature unlock logic ────────────────────────────────
    feature_msg_shown = -1

    if hole == 6:
        _play_sound(0)
    elif hole != 10:
        # Check if we should show a feature unlock message
        if hole <= tg.feature_level - 5 or tg.feature_level > 14:
            pass  # No message, normal progression
        else:
            # Show the appropriate feature unlock message
            is_odd_hole = (hole & 1) == 0
            if is_odd_hole:
                _render_text(STR_NEW_PLAYERS, 0, 0, 0)
            else:
                _render_text(STR_NEW_BUILDING, 0, 0, 0)

            # "You may now build a" + feature name
            _render_text(STR_YOU_MAY_BUILD, 0, 0, 0)

            # Feature name (from pathway array based on feature level)
            feature_idx = tg.feature_level
            feature_name = f"Pathway Level {feature_idx}"
            _render_text(feature_name, 0, 0, 0)

            # Feature description
            if 0 <= feature_idx < len(FEATURE_DESCRIPTIONS):
                desc = FEATURE_DESCRIPTIONS[feature_idx]
                if desc:
                    _render_text(desc, 0, 0, 0)

            # Feature name again (second line)
            _render_text(feature_name, 0, 0, 0)

            # Feature-specific description
            if feature_idx == FEATURE_BALL_WASHER:
                _render_text(
                    "A ball washer near the tee will improve your "
                    "players' accuracy.",
                    0, 0, 0,
                )
            elif feature_idx == FEATURE_CONCESSION:
                desc = (
                    "A snack bar or restaurant is a quick way to raise "
                    "some cash and keep your golfers happy."
                )
                _render_text(desc, 0, 0, 0)
                _render_text(
                    "You may build luxurious villas or unimproved land "
                    "on the course.",
                    0, 0, 0,
                )
            elif feature_idx == FEATURE_IMAGINATION:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_IMAGINATION],
                             0, 0, 0)
            elif feature_idx == FEATURE_RESTAURANT:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_RESTAURANT],
                             0, 0, 0)
            elif feature_idx == FEATURE_ACCURACY:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_ACCURACY],
                             0, 0, 0)
            elif feature_idx == FEATURE_TEE_TIME:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_TEE_TIME],
                             0, 0, 0)
            elif feature_idx == FEATURE_LONG_HITTER:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_LONG_HITTER],
                             0, 0, 0)
            elif feature_idx == FEATURE_SPEED:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_SPEED],
                             0, 0, 0)
            elif feature_idx == FEATURE_HOME_VALUE:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_HOME_VALUE],
                             0, 0, 0)
            elif feature_idx == FEATURE_COMFORT:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_COMFORT],
                             0, 0, 0)
            elif feature_idx == FEATURE_GREEN_FEE:
                _render_text(FEATURE_DESCRIPTIONS[FEATURE_GREEN_FEE],
                             0, 0, 0)

            feature_msg_shown = -tg.feature_level
            tg.feature_level += 1

    # ── Play sound for feature unlock ──────────────────────────────
    _play_sound(1)

    # ── Handle hole 18 (last hole) ─────────────────────────────────
    if hole == 0x12:
        _play_sound(2)

    # ── Show message box if game tick allows ───────────────────────
    if tg.game_tick != 0:
        _show_message(0x80004210, 1, feature_msg_shown)

    # ── Course totals for hole 1 ──────────────────────────────────
    if hole == 1:
        total_yards = tg.course_total_yards
        total_par = tg.course_total_par
        # Compute average rating per hole (yards/par)
        # These are stored in DAT_00585860/85861
        avg_rating = (total_yards * 2) // 3  # simplified from original
        # Stored as bytes
        pass

    # ── Play positional sounds for specific holes ──────────────────
    if hole == 9:
        _play_ambient(6, tg.hole_pin_tx[9] * 0x400 + 0x200,
                      tg.hole_pin_ty[9] * 0x400 + 0x200)

    if hole == 0x12:
        _play_ambient(0x0E, tg.hole_pin_tx[0x12] * 0x400 + 0x200,
                      tg.hole_pin_ty[0x12] * 0x400 + 0x200)

    # ── Advance to next active hole ────────────────────────────────
    next_hole = 1
    tg.current_hole = 1
    # Scan forward to find the next active hole
    while next_hole < len(tg.hole_active) and tg.hole_active[next_hole] == 0:
        next_hole += 1
        tg.current_hole = next_hole

    # Invalidate last rendered hole
    tg.last_hole_rendered = -1


# ═══════════════════════════════════════════════════════════════════════════════
#  Exported interface
# ═══════════════════════════════════════════════════════════════════════════════

__all__ = [
    'TimeGlobals',
    'time_day_cycle',
]

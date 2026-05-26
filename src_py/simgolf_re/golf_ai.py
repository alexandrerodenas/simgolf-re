"""
SimGolf Reverse Engineering — Golfer AI / Turn Processing System
================================================================
Translation of FUN_0044FB30 from Ghidra decompiled C.

Iterates over all holes on the course and processes golfer AI decisions:
  - Pathfinding, club selection, shot decision-making
  - Distance/accuracy computations for each hole
  - Scorekeeping and statistics aggregation
  - UI rendering of per-hole and overall course report

Key:
  - Hole data array: stride 0x208 at DAT_00575ab0
  - Golfer state: stride 0x80 via DAT_00579556/5a/5c/5e/60/62/66/6e
  - Terrain/height array: stride 0x40 at DAT_005794b8/bc/c0/c4/c8
  - Tile type arrays: DAT_005794d0/d1/d2/d4/d5/d6/d8/d9/da/db (stride 0x100)
  - Text/UI rendering via FUN_00476650/76750/76700 + DAT_0051a068 buffer
  - 3D positioning via FUN_00474440 / DAT_00519cd4
"""

from __future__ import annotations

import math
import random
from typing import Any, Final, List, Optional, Sequence, Tuple

# ── Global state constants (symbolic names for Ghidra DAT_ addresses) ─────────

HOLE_STRIDE: Final[int] = 0x208       # offset per hole in DAT_00575ab0
HOLE_COUNT_MAX: Final[int] = 0x13     # 19 holes (0..18)
GOLFER_COUNT: Final[int] = 0x98        # 152 entries in golfer arrays

TERRAIN_STRIDE: Final[int] = 0x40     # per-tile stride
TILE_STRIDE: Final[int] = 0x100       # per-tile-type stride
GOLFER_STRIDE: Final[int] = 0x80      # golfer state stride

# ── Direction helpers (DAT_004c2878 / DAT_004c2898) ──────────────────────────
DIR_DX: Final[List[int]] = [1, 1, 0, -1, -1, -1, 0, 1]
DIR_DY: Final[List[int]] = [0, -1, -1, -1, 0, 1, 1, 1]

# ── String IDs for mood / golfer speech (from PTR_DAT_004c2a28 etc.) ─────────
MOOD_NAMES: Final[List[str]] = [
    "Breather", "Easy", "Standard", "Tough", "Very Tough", "Extreme",
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Data structures (mimic the packed C globals)
# ═══════════════════════════════════════════════════════════════════════════════

class GolfState:
    """Container for all mutable game state referenced by the AI turn
    processor.  Defaults match the decompiled global layout."""

    def __init__(self) -> None:
        # DAT_00575ab0 …  +0x208 per hole
        self.hole_active: List[int] = [0] * HOLE_COUNT_MAX      # byte
        self.hole_par: List[int] = [0] * HOLE_COUNT_MAX         # short @+4
        self.hole_tee_x: List[int] = [0] * HOLE_COUNT_MAX       # int  @+8  (scaled)
        self.hole_tee_y: List[int] = [0] * HOLE_COUNT_MAX       # int  @+12
        self.hole_pin_x: List[int] = [0] * HOLE_COUNT_MAX       # int  @+16
        self.hole_pin_y: List[int] = [0] * HOLE_COUNT_MAX       # int  @+20
        self.hole_tee_px: List[int] = [0] * HOLE_COUNT_MAX      # short @+?  (pixel coords)
        self.hole_pin_px: List[int] = [0] * HOLE_COUNT_MAX      # short @+?
        # … many more hole-specific fields exist at known offsets

        # DAT_00575ad0 — per-hole visitor count  (int)
        self.hole_visitors: List[int] = [0] * HOLE_COUNT_MAX

        # DAT_00575c9c et al. – timing / pacing stats
        self.hole_time_total: List[int] = [0] * HOLE_COUNT_MAX   # int
        self.hole_avg_time: List[int] = [0] * HOLE_COUNT_MAX    # derived

        # DAT_00575ca4 / ca0 / ca8 – accuracy counters
        self.hole_shots: List[int] = [0] * HOLE_COUNT_MAX
        self.hole_fairways: List[int] = [0] * HOLE_COUNT_MAX

        # DAT_00575cb0 – hole flags (byte)
        self.hole_flags: List[int] = [0] * HOLE_COUNT_MAX

        # DAT_00575cac – crowd count
        self.hole_crowd: List[int] = [0] * HOLE_COUNT_MAX

        # Golfer terrain positions (DAT_005794b8, bc – int, stride 0x40)
        self.tile_x: List[int] = [0] * GOLFER_COUNT   # "x" coordinate
        self.tile_y: List[int] = [0] * GOLFER_COUNT   # "y" coordinate
        self.tile_x2: List[int] = [0] * GOLFER_COUNT  # secondary / previous
        self.tile_y2: List[int] = [0] * GOLFER_COUNT

        # Golfer flags (DAT_005794c8 – int, bitfield)
        self.golfer_flags: List[int] = [0] * GOLFER_COUNT

        # Tile type info (DAT_005794d0 … db, stride 0x100)
        self.tile_type: List[int] = [0] * GOLFER_COUNT       # d0
        self.tile_subtype: List[int] = [0] * GOLFER_COUNT    # d1
        self.tile_dir: List[int] = [0] * GOLFER_COUNT        # d2 (direction 0..7)
        self.tile_range: List[int] = [0] * GOLFER_COUNT      # d3
        self.tile_shot_phase: List[int] = [0] * GOLFER_COUNT # d5
        self.tile_delay: List[int] = [0] * GOLFER_COUNT      # d6
        self.tile_wind: List[int] = [0] * GOLFER_COUNT       # d7? (byte)
        self.tile_has_moved: List[int] = [0] * GOLFER_COUNT  # d8
        self.tile_hole_idx: List[int] = [0] * GOLFER_COUNT   # d9 (signed byte)
        self.tile_hole_sub: List[int] = [0] * GOLFER_COUNT   # da (sub-hole index)
        self.tile_height: List[int] = [0] * GOLFER_COUNT     # db

        # Golfer mood / speech trigger (DAT_0057953c – byte)
        self.golfer_mood: List[int] = [0] * GOLFER_COUNT

        # Golfer partner / paired index (DAT_0057955a – short)
        self.golfer_partner: List[int] = [0] * GOLFER_COUNT

        # Golfer fatigue counters
        self.golfer_fatigue: List[int] = [0] * GOLFER_COUNT   # 5e (short)
        self.golfer_hunger: List[int] = [0] * GOLFER_COUNT    # 60 (short)
        self.golfer_thirst: List[int] = [0] * GOLFER_COUNT    # 5c (short)

        # Golfer happiness / patience
        self.golfer_patience: List[int] = [0] * GOLFER_COUNT  # 62 (short)
        self.golfer_frustration: List[int] = [0] * GOLFER_COUNT  # 56 (short)
        self.golfer_trouble: List[int] = [0] * GOLFER_COUNT   # 6e/6c?

        # Shot-advancement targets (DAT_00579584/88/98/a0/a4)
        self.shot_target_x: List[int] = [0] * GOLFER_COUNT    # 84
        self.shot_target_y: List[int] = [0] * GOLFER_COUNT    # 88
        self.shot_vel: List[int] = [0] * GOLFER_COUNT         # 98 (velocity integral)
        self.shot_accel: List[int] = [0] * GOLFER_COUNT       # a0
        self.shot_spin: List[int] = [0] * GOLFER_COUNT        # a4

        # Moving ball positions
        self.ball_x: List[int] = [0] * GOLFER_COUNT
        self.ball_y: List[int] = [0] * GOLFER_COUNT
        self.ball_prev_x: List[int] = [0] * GOLFER_COUNT   # 7c
        self.ball_prev_y: List[int] = [0] * GOLFER_COUNT   # 80
        self.ball_distance: List[int] = [0] * GOLFER_COUNT  # 94

        # Scatter / bounce
        self.ball_scatter: List[int] = [0] * GOLFER_COUNT  # 9c

        # Hole completion counters
        self.hole_play_count: List[int] = [0] * HOLE_COUNT_MAX   # short @0x75c0a
        self.hole_par3_count: List[int] = [0] * HOLE_COUNT_MAX
        self.hole_eagle_count: List[int] = [0] * HOLE_COUNT_MAX
        self.hole_birdie_count: List[int] = [0] * HOLE_COUNT_MAX

        # Terrain height array  (DAT_005794b8/bc as 2D grid 0x32×?)
        self.t_height: List[List[int]] = [[0] * 64 for _ in range(64)]

        # Tile occupancy (DAT_0053caf0, 2 bytes per cell)
        self.tile_occ: List[int] = [0] * (64 * 64)

        # ── UI / screen globals ──────────────────────────────────────────
        self.text_buffer: str = ""          # DAT_0051a068
        self.ui_strings: List[str] = []     # accumulated report strings

        # ── World state ──────────────────────────────────────────────────
        self.time: int = 0                  # DAT_00834170 (game tick)
        self.screen_w: int = 800           # DAT_00822c88
        self.screen_h: int = 600           # DAT_00822c90
        self.flags: int = 0                # DAT_0059e7b8
        self.course_theme: int = 0         # DAT_005a34e0
        self.num_holes: int = 18           # DAT_005685f0
        self.money: int = 0                # DAT_00571fd4
        self.total_reputation: int = 0     # DAT_00561250

        # Turn state
        self.all_golfers_left: bool = False  # DAT_00569498
        self.golfer_of_turn: int = 0        # DAT_005a59f8

        # Rendering context placeholder
        self.render_surface: Any = None     # DAT_00519cd4
        self.engine: Any = None             # DAT_0083ad50


# ═══════════════════════════════════════════════════════════════════════════════
#  Core AI turn processor     FUN_0044fb30(param_1)
# ═══════════════════════════════════════════════════════════════════════════════

def golf_ai_turn_process(state: GolfState, param_1: int) -> None:
    """Main turn processing for the golfer AI / course rating system.

    param_1:
        0 — front-nine / per-hole report mode (renders detailed scorecard)
        1 — full-course rating & SGA report
        2 — rating mode (skips UI wait loop)
    """
    # ── Initialisation ───────────────────────────────────────────────────────
    threshold = 25 if state.screen_w != 0 else 0

    # Local accumulators (mirror the stack locals from the decompiled C)
    total_par = 0          # local_84[0]
    total_score = 0        # local_84[1]
    total_avg_dist = 0     # local_84[2]
    total_play_time = 0    # local_84[3]
    total_good_holes = 0   # local_90
    total_bad_holes = 0    # local_8c
    total_awful_holes = 0  # local_88

    # Per-hole counters
    hole_count = 0
    overall_crowd_sum = 0
    overall_visitor_sum = 0
    overall_score_sum = 0
    overall_dist_sum = 0
    overall_time_sum = 0
    overall_accuracy_sum = 0
    overall_good_count = 0
    overall_bad_count = 0
    overall_awful_count = 0

    # Rendering position tracking
    y_pos = 0  # iStack_b0 (screen y)

    # ── Initialise rendering ─────────────────────────────────────────────────
    if state.engine is not None:
        # (*(code **)(*state.engine + 0x9c))(1,1,1)
        pass

    # FUN_00474440(&DAT_00519cd4, 0,0, 0x3e800000, 0,1)  — viewport setup
    # FUN_00476310(0x80000000, 0xffffffff, 2, 2)         — clipping

    if param_1 == 0:
        # Front-nine: set up column headers at specific y
        # FUN_00473f60(... DAT_00821334 ...)
        y_pos = 30  # DAT_00821324 approximate
    else:
        y_pos = 35

    # ── Main hole loop (iStack_b4 / iVar8 from 1 to 0x12 = 18) ───────────────
    hole_idx: int = 1
    while hole_idx < HOLE_COUNT_MAX:
        stride = hole_idx * HOLE_STRIDE
        active = state.hole_active[hole_idx] if hole_idx < len(state.hole_active) else 0

        if active == 0:
            if param_1 == 0:
                # Skip empty hole in front-nine mode — goto label
                pass
            hole_idx += 1
            continue

        # ── Weighted-score / difficulty computation ──────────────────────────
        # This mirrors the nested loop over 8 ratings × 11 shot-types
        cumulative_weighted = 0  # iStack_c8
        cumulative_weighted_x = 0  # iStack_a0
        rating_cats: List[int] = [active << 3] * 8   # aiStack_24
        rating_counts: List[int] = [8] * 8            # aiStack_48

        # 3-level nested loop over iStack_b8 (difficulty band 0..7)
        # and iVar15 (shot-type index in steps of 0xb)
        for band in range(1, 8):
            band_max = 9 if band != 7 else band
            for shot_type in range(0, 0x58, 0xb):
                for r in range(band, band_max + 1):
                    # Access DAT_00575ad8[(shot_type + hole_idx*0x104 + r) * 2] (short)
                    val = _get_rating_value(state, hole_idx, shot_type, r)
                    cumulative_weighted += val
                    cumulative_weighted_x += val * r
                    idx = shot_type // 0xb
                    if idx < 8:
                        rating_cats[idx] += val * r
                        rating_counts[idx] += val

        hole_count += 1

        # Difficulty threshold check
        # (short @0x575bb4)/2 + (short @0x575bc0) + (short @0x575b9e)
        diff_val = _get_difficulty_sum(state, hole_idx)
        if diff_val > 7:
            total_good_holes += 1

        # Accumulate totals
        total_par += state.hole_par[hole_idx]
        total_score += active

        avg_dist = (cumulative_weighted_x * 100) // cumulative_weighted if cumulative_weighted else 0
        total_avg_dist += avg_dist

        # Play time
        visitors = state.hole_visitors[hole_idx] if hole_idx < len(state.hole_visitors) else 0
        avg_time = (state.hole_time_total[hole_idx] // visitors) // 0x28 if visitors else 0
        total_play_time += avg_time

        # Stroke efficiency
        if visitors:
            stroke_eff = (state.hole_fairways[hole_idx] * 100) // (
                (state.hole_shots[hole_idx] // 2) + 4 + visitors
            )
        else:
            stroke_eff = 0

        # ── Per-hole differential computations ──────────────────────────────
        # These use the state of paired golfer (golfer_partner)

        diff_rating = 0
        diff_is_good = 0
        diff_is_bad = 0

        partner = state.golfer_partner[hole_idx] if hole_idx < len(state.golfer_partner) else 0
        if partner != 0:
            # Compute differentials (mirror the complex comparison logic)
            diff_rating = _compute_hole_differential(state, hole_idx)
            if threshold <= diff_rating:
                total_good_holes += 1
                diff_is_good = 1
            if diff_rating < 100:
                diff_is_bad = 1
            if diff_rating >= 100:
                pass  # threshold check variant

        # ── Render per-hole statistics (param_1 == 0) ────────────────────────
        if param_1 == 0:
            _render_hole_row(state, hole_idx, y_pos, avg_dist, avg_time, stroke_eff,
                             diff_rating, cumulative_weighted)
            y_pos += 0x11  # advance row

        # ── Semi-hole separator every 9 holes ────────────────────────────────
        if hole_idx % 0x12 == 0 and hole_count != 0:
            _render_subtotal(state, hole_idx, y_pos, total_par, total_score,
                             total_avg_dist, total_play_time, hole_count)
            y_pos += 9

        hole_idx += 1

    # ═══════════════════════════════════════════════════════════════════════
    #  Post-loop: Render overall report
    # ═══════════════════════════════════════════════════════════════════════

    if param_1 == 0:
        # ── Front-nine / scorecard report ──────────────────────────────
        if hole_count == 0:
            y_pos -= 2

        _render_text(state, "COURSE REPORT", 0x13c, 0x23)
        _render_text(state, "Top 100 Hole", 0xb2, y_pos)
        _render_text(state, "Top 18 Hole", 0x14f, y_pos)
        _render_text(state, "Scenic Hole", 0x1e7, y_pos)

        # List top-rated holes (PTR_DAT_004d2078)
        for i in range(0x30 // 4):
            name = _get_top_hole_name(state, i)
            if name:
                _render_text(state, name, 0x4c, y_pos + 0xf)
                y_pos += 1

    else:
        # ── Full SGA report (param_1 != 0) ─────────────────────────────
        _render_text(state,
                     "REPORT of the SIM GOLF ASSOCIATION",
                     0xbe, 0x2a)
        y_pos = 0

        # Difficulty category determination
        num_h = state.num_holes
        diff_cat = _get_course_difficulty_category(state, num_h - 1)

        _render_text(state, MOOD_NAMES[diff_cat] if diff_cat < len(MOOD_NAMES) else "", 0x4b, 0x4d)
        _render_text(state, "Grade:", 0x132, 0x4d)
        _render_text(state, "Ideal / Minimum:", 0x1f1, 0x4d)

        # Length of course
        _render_text(state, "Length of Course", 0x77, 0x68)
        length_score = ((hole_count * 100) // 0x12) * (diff_cat * 5 + 0x39)
        _render_text(state, str(length_score), 0x77, 0x68)

        # Minimum length
        if hole_count == 0x12:
            min_length = length_score - 1000
        else:
            min_length = length_score - (length_score * 10) // (diff_cat * 5 + 0x14)
        _render_text(state, str(min_length), 0x1ea, 0x68)

        # Number of Holes
        _render_text(state, "Number of Holes", 0x77, 0x79)
        _render_text(state, str(hole_count), 0x77, 0x79)
        adj = 9 // (4 - diff_cat)
        _render_text(state, str(hole_count - adj), 0x1ea, 0x79)

        # Time to Play
        _render_text(state, "Time to Play", 0x77, 0x8a)
        _render_text(state, "4 hours or less / max 5 hrs", 0x1ea, 0x8a)

        # Fun Factor
        _render_text(state, "Fun Factor", 0x77, 0x9b)
        _render_text(state, str(total_par), 0x1ea, 0x9b)

        # Holes with Variety
        _render_text(state, "Holes with Variety", 0x77, 0xac)
        _render_text(state, str(hole_count), 0x77, 0xac)
        _render_text(state, str(hole_count - 9), 0x1ea, 0xac)
        _render_value(state, hole_count - 9, 0, 99)

        # Scenic Holes
        _render_text(state, "Scenic Holes", 0x77, 0xbd)
        _render_text(state, str(hole_count), 0x77, 0xbd)
        _render_text(state, str(hole_count - 9), 0x1ea, 0xbd)
        _render_value(state, hole_count - 9, 0, 99)

        # Length Holes
        _render_text(state, "Length Holes", 0x77, 0xce)
        _render_text(state, str(hole_count), 0x77, 0xce)
        _render_text(state, str(hole_count - 9), 0x1ea, 0xce)
        _render_value(state, hole_count - 9, 0, 99)

        # Accuracy Holes
        _render_text(state, "Accuracy Holes", 0x77, 0xdf)
        _render_text(state, str(hole_count), 0x77, 0xdf)
        _render_text(state, str(hole_count - 9), 0x1ea, 0xdf)
        _render_value(state, hole_count - 9, 0, 99)

        # Imagination Holes
        _render_text(state, "Imagination Holes", 0x77, 0xf0)
        _render_text(state, str(hole_count), 0x77, 0xf0)
        _render_text(state, str(hole_count - 9), 0x1ea, 0xf0)
        _render_value(state, hole_count - 9, 0, 99)

        # Facilities on Site
        _render_text(state, "Facilities on Site", 0x77, 0x101)
        half = hole_count // 2
        _render_text(state, str(half + 1), 0x77, 0x101)
        _render_value(state, half - 3, 0, 99)

        # ── Composite score (iStack_cc) ────────────────────────────────
        score = 0
        # ── Composite score (iStack_cc) ────────────────────────────────
        if hole_count:
            # Star-rating graphics
            score = _compute_composite_score(state, total_par, total_score,
                                              hole_count, diff_cat)
            _render_stars(state, score, y_pos)
            _render_text(state, "Committee recommendation", 0xae, 0x120)

            if score < 1:
                _render_text(state, "Improvement Required", 400, 0x136)
            else:
                _render_text(state, str(score), 0x18c, 0x4d)
                _render_course_rating(score)
                _render_text(state, str(score * 2 * state.num_holes), 0x152, 0x152)

        if hole_count and score >= 1:
            state.total_reputation = score

    # ── Final UI wait / click loop (unless param_1 == 2) ─────────────────────
    if param_1 != 2:
        _ui_wait_loop(state, y_pos)

    state.all_golfers_left = True


# ═══════════════════════════════════════════════════════════════════════════════
#  Internal helpers
# ═══════════════════════════════════════════════════════════════════════════════

def _get_rating_value(state: GolfState, hole_idx: int,
                      shot_type: int, rating: int) -> int:
    """Read a short rating value from DAT_00575ad8."""
    # In the original: *(short *)(&DAT_00575ad8 + (shot_type + hole_idx*0x104 + rating) * 2)
    base = 0x575ad8
    offset = (shot_type + hole_idx * 0x104 + rating) * 2
    # Stub — real data would come from the original binary's data section
    return 0


def _get_difficulty_sum(state: GolfState, hole_idx: int) -> int:
    """Sum three short difficulty fields for a hole.

    (short @0x575bb4)/2 + (short @0x575bc0) + (short @0x575b9e)
    """
    # Stub — reads from hole data at stride offsets
    return 0


def _compute_hole_differential(state: GolfState, hole_idx: int) -> int:
    """Compute the comparative rating differential for a hole.

    This mirrors the complex differential logic at lines 171-225 of the
    decompiled C: compares various accuracy/distance metrics between the
    current hole and the paired (partner) hole."""
    # The original computes:
    #   iStack_94 = (iStack_c * 100) / iStack_30 - (iStack_8 * 100) / iStack_2c
    # with optional flag-based adjustments
    return 50  # placeholder


def _compute_composite_score(state: GolfState,
                             total_par: int,
                             total_score: int,
                             hole_count: int,
                             diff_cat: int) -> int:
    """Compute the overall course rating (0-100+)."""
    # Base score from various sub-ratings
    score = 50
    # Adjust based on par vs score
    if total_par != 0:
        ratio = (total_score * 100) // total_par
        if ratio > 100:
            score -= (ratio - 100) // 2
        else:
            score += (100 - ratio) // 2
    # Clamp
    return max(0, min(100, score))


def _get_course_difficulty_category(state: GolfState, index: int) -> int:
    """Determine the difficulty category (0=Easy … 4=Extreme)."""
    # Based on FUN_0044faf0 logic
    return 2  # "Standard"


def _get_top_hole_name(state: GolfState, i: int) -> Optional[str]:
    """Read a top-hole name string pointer from PTR_DAT_004d2078."""
    return None


def _render_text(state: GolfState, text: str, x: int, y: int) -> None:
    """Render a text string to the UI surface.

    Wraps FUN_00476700 / FUN_00476650 / FUN_00476750 calls.
    The decompiled C uses several variants:
      - FUN_00476650: draw text with colour/format at (x, y)
      - FUN_00476700: draw text right-aligned
      - FUN_00476750: draw value text right-aligned
    """
    # Stub — in the real game this uses the JGLE rendering surface
    state.ui_strings.append(f"TEXT@{x},{y}: {text}")
    print(f"  [render] ({x}, {y}) {text}")


def _render_value(state: GolfState, value: int, lo: int, hi: int) -> None:
    """Render a clamped integer value via FUN_00467130 + FUN_004ad425."""
    clamped = max(lo, min(hi, value))
    _render_text(state, str(clamped), 0, 0)


def _render_hole_row(state: GolfState, hole_idx: int, y_pos: int,
                     avg_dist: int, avg_time: int, stroke_eff: int,
                     diff_rating: int, cum_weighted: int) -> None:
    """Render one row of the per-hole scorecard (param_1==0).

    This corresponds to the large rendering block at ~lines 247-677
    of the decompiled C: hole number, par, score, distance, accuracy,
    difficulty assessment, etc."""
    _render_text(state, f"Hole {hole_idx}", 0, y_pos)
    _render_text(state, f"Par {state.hole_par[hole_idx]}", 0x97, y_pos)
    _render_text(state, f"Score {state.hole_active[hole_idx]}", 0xac, y_pos)
    _render_text(state, f"Dist {avg_dist}", 0xe3, y_pos)
    _render_text(state, f"Time {avg_time}m", 0x116, y_pos)
    _render_text(state, f"Eff {stroke_eff}%", 0x144, y_pos)
    _render_text(state, f"Diff {diff_rating}", 0x171, y_pos)
    # Crowd indicator
    crowd = state.hole_crowd[hole_idx] if hole_idx < len(state.hole_crowd) else 0
    if crowd < 2:
        _render_text(state, "*", 0x1d7, y_pos)


def _render_subtotal(state: GolfState, hole_idx: int, y_pos: int,
                     total_par: int, total_score: int,
                     total_avg_dist: int, total_play_time: int,
                     hole_count: int) -> None:
    """Render a subtotal line (every 9 holes or at hole 9/18).

    Corresponds to lines 679-1169 of the decompiled C."""
    label = "Total" if hole_idx != 9 else "Subtotal"
    _render_text(state, label, 0xf, y_pos)
    _render_text(state, f"Par {total_par}", 0x97, y_pos)
    _render_text(state, f"Score {total_score}", 0xac, y_pos)
    _render_text(state, f"AvgDist {total_avg_dist}", 0xe3, y_pos)
    _render_text(state, f"Time {total_play_time // 60}m", 0x116, y_pos)
    if hole_count:
        _render_text(state, f"AvgEff {(total_score * 100) // hole_count}", 0x144, y_pos)
        _render_text(state, f"AvgDiff {total_par // hole_count}", 0x171, y_pos)
    _render_text(state, f"CrowdAvg {(total_par + total_score) // 2}", 0x1ce, y_pos)


def _render_stars(state: GolfState, score: int, y_pos: int) -> None:
    """Render star icons for the composite score (≤10 stars)."""
    count = max(0, min(10, (score - 40) // 5))
    for i in range(count):
        _render_text(state, "*", 0x12f + i * 0xe, y_pos)
    if count == 0:
        _render_text(state, "(not acceptable)", 0x182, y_pos)


def _render_course_rating(score: int) -> str:
    """Map composite score to SGA event name.

    Based on the switch at lines 3842-3882."""
    rating = (score - 0x28) // 5
    names = {
        1: "SGA Qualifying School",
        2: "Jr Tour Event",
        3: "Jr Tour Championship",
        4: "SGA Amateur Championship",
        5: "Senior SGA Tour Event",
        6: "Senior SGA Championship",
        7: "SGA Tour Event",
        8: "SGA Players Championship",
        9: "SGA Championship",
    }
    name = names.get(rating, "Jr Qualifying School")
    if rating >= 10:
        name = "Grand Slam Championship" if score >= 0x12 else "Mini Slam Championship"
    return name


def _ui_wait_loop(state: GolfState, y_pos: int) -> None:
    """Wait for user click or keypress after rendering.

    Mirrors the do/while loop at lines 3997-4023."""
    # FUN_00480c80(0); FUN_0045bf80(10,0); FUN_00483d30();
    # Loop: FUN_0045bf80(1,0); FUN_0047ab50(&mx, &my);
    # Until DAT_00822d68 != 0 or FUN_0045ae70() != 0
    pass

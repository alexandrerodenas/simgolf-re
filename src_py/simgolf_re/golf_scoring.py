"""
SimGolf Reverse Engineering — Course Rating & Hole Scoring
===========================================================
Translation of:
  - FUN_0045C560 — Course rating / golfer stats screen
  - FUN_0045FD80 — Hole scoring / intro story

FUN_0045C560 @ 0x0045C560 (1594 lines):
  Displays golfer stat screen with skills (length, accuracy, short game,
  putting), attributes (personality bitflags), needs (attitude, energy,
  hunger, thirst), and per-hole scoring summary. Handles button clicks
  for Customize, Move/Eject, Take Snapshot, View Story, Golfer Comments,
  and Next Chapter.

FUN_0045FD80 @ 0x0045FD80 (1224 lines):
  Shows introductory story text based on course theme (0-3).
  Also contains tutorial text (DAT_00834170 == 0x1400).
"""

from __future__ import annotations

from typing import Final, List, Optional

# ── Constants ─────────────────────────────────────────────────────────────────

HOLE_STRIDE: Final[int] = 0x208       # DAT_00575ab0 stride
TERRAIN_STRIDE: Final[int] = 0x40     # DAT_005794b8 stride
HOLE_FLAGS_STRIDE: Final[int] = 0x100 # DAT_00579566 stride
GOLFER_TILE_STRIDE: Final[int] = 0x80 # DAT_0057956e stride
HOLE_TILE_STRIDE: Final[int] = 0x80   # DAT_0057955a stride
GOLFER_STATS_STRIDE: Final[int] = 0x8c  # DAT_004d6088 stride
GOLFER_FLAGS_STRIDE: Final[int] = 0x230 # DAT_004d60a8 stride

TILE_COUNT: Final[int] = 0x98         # 152 tiles max

# ── Button action IDs (DAT_00824130) ─────────────────────────────────────────
BTN_CUSTOMIZE: Final[int] = 0
BTN_MOVE_EJECT: Final[int] = 1
BTN_SNAPSHOT: Final[int] = 2
BTN_GOLFER_COMMENTS: Final[int] = 3
BTN_STORY: Final[int] = 3
BTN_NEXT_CHAPTER: Final[int] = 5
BTN_NONE: Final[int] = -1

# ── Button coordinate regions (for hit testing) ──────────────────────────────
# These match the x/y/width checks in the original C's FUN_0047AB50/FUN_00467170
BUTTON_REGIONS: Final[List[tuple]] = [
    ("customize", 0x13e, 0x106, 0x19),
    ("move_eject", 0x17f, 0x106, 0x19),
    ("snapshot", 0x1c0, 0x106, 0x19),
    ("story", 0x201, 0x106, 0x19),
    ("next_chapter", 0x253, 0x106, 0x19),
]


# ── Skill/attribute name arrays ──────────────────────────────────────────────

SKILL_NAMES: Final[List[str]] = [
    "Length",        # 0x01
    "Accuracy",      # 0x02
    "Short Game",    # 0x04
    "Putting",       # 0x08
    "Power",         # 0x10
    "Finesse",       # 0x20
    "Recovery",      # 0x40
    "Mental",        # 0x80
]

PERSONALITY_NAMES: Final[List[str]] = [
    "Energetic",
    "Lazy",
    "Friendly",
    "Rude",
    "Generous",
    "Cheap",
    "Patient",
    "Impatient",
    "Arrogant",
    "Humble",
    "Optimistic",
    "Pessimistic",
    "Brave",
    "Cowardly",
    "Creative",
    "Dull",
    "Leader",
    "Follower",
    "Lucky",
    "Unlucky",
    "Athletic",
    "Unathletic",
    "Smart",
    "Dim",
    "Calm",
    "Nervous",
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Data model — mirrors the global arrays accessed by these functions
# ═══════════════════════════════════════════════════════════════════════════════

class ScoringState:
    """State container for course rating + hole scoring data.

    Mirrors the relevant global arrays.
    """

    def __init__(self) -> None:
        # ── Golfer-to-tile mapping (DAT_0057956e, stride 0x80) ────────
        self.golfer_tile: List[int] = [-1] * TILE_COUNT

        # ── Hole flags (DAT_00579566, stride 0x100) ────────────────────
        self.hole_flags: List[bytearray] = [
            bytearray(0x100) for _ in range(TILE_COUNT)
        ]

        # ── Hole-to-tile mapping (DAT_0057955a, stride 0x80) ───────────
        self.hole_tile_map: List[int] = [0] * TILE_COUNT

        # ── Current hole for golfer (DAT_0057955c, stride 0x80) ────────
        self.current_hole: List[int] = [0] * TILE_COUNT

        # ── Golfer stats array (DAT_004d6088, stride 0x8c) ────────────
        self.golfer_stats: List[bytearray] = [
            bytearray(0x8c) for _ in range(TILE_COUNT)
        ]

        # ── Golfer flags/personality (DAT_004d60a8, stride 0x230) ─────
        self.golfer_flags: List[bytearray] = [
            bytearray(0x230) for _ in range(TILE_COUNT)
        ]

        # ── Tile type (DAT_005794d0, byte per tile) ────────────────────
        self.tile_type: List[int] = [0] * TILE_COUNT

        # ── Tile subtype (DAT_005794d1, byte per tile) ─────────────────
        self.tile_subtype: List[int] = [0] * TILE_COUNT

        # ── Tile DX/DY (DAT_005794d9/da — signed bytes) ───────────────
        self.tile_dx: List[int] = [0] * TILE_COUNT
        self.tile_dy: List[int] = [0] * TILE_COUNT

        # ── Height adjustments (DAT_005794db) ─────────────────────────
        self.tile_height_adj: List[int] = [0] * TILE_COUNT

        # ── Shot history per hole (DAT_00579528..32, stride ×0x100) ───
        self.shot_type: List[int] = [0] * (TILE_COUNT * 0x100)
        self.shot_data: List[int] = [0] * (TILE_COUNT * 0x100)

        # ── Golfer needs/stats (DAT_00579558..72, stride 0x80) ────────
        self.golfer_needs: List[bytearray] = [
            bytearray(0x80) for _ in range(TILE_COUNT)
        ]

        # ── Interaction state ──────────────────────────────────────────
        self.DAT_00824130: int = BTN_NONE      # button hover/click
        self.DAT_00823768: int = 0              # click count / confirm
        self.DAT_00824144: int = 0              # UI mode flag
        self.DAT_00824134: int = 0              # string conversion buffer

        # ── Text buffer (DAT_0051a068) ─────────────────────────────────
        self.text_buf: str = ""

    # ── Access helpers ───────────────────────────────────────────────────────

    def get_golfer_stats(self, golfer_idx: int, offset: int, size: int = 1) -> int:
        """Read golfer stats from DAT_004d6088 + golfer_idx*0x8c + offset."""
        raw = self.golfer_stats[golfer_idx][offset:offset + size]
        return int.from_bytes(raw, "little", signed=(size == 4))

    def set_golfer_stats(self, golfer_idx: int, offset: int, val: int, size: int = 1) -> None:
        self.golfer_stats[golfer_idx][offset:offset + size] = \
            val.to_bytes(size, "little", signed=True)

    def get_hole_flag(self, hole_idx: int, flag_byte: int) -> int:
        """Read byte from DAT_00579566 + hole_idx*0x100 + offset."""
        return self.hole_flags[hole_idx][flag_byte]

    def set_hole_flag(self, hole_idx: int, flag_byte: int, val: int) -> None:
        self.hole_flags[hole_idx][flag_byte] = val & 0xff

    def get_needs_short(self, golfer_idx: int, offset: int) -> int:
        """Read 16-bit value from DAT_00579558 + golfer_idx*0x80 + offset."""
        raw = self.golfer_needs[golfer_idx][offset:offset + 2]
        return int.from_bytes(raw, "little", signed=True)

    def set_needs_short(self, golfer_idx: int, offset: int, val: int) -> None:
        self.golfer_needs[golfer_idx][offset:offset + 2] = \
            val.to_bytes(2, "little", signed=True)


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0045C560 — Course Rating / Golfer Stats Screen
# ═══════════════════════════════════════════════════════════════════════════════

def course_rating_screen(state: ScoringState, golfer_idx: int, param_2: int) -> None:
    """FUN_0045C560 — Display course rating / golfer stats.

    Shows golfer info, skills, attributes, needs, and per-hole scores.
    Handles button interactions.

    Args:
        state: ScoringState with current game data.
        golfer_idx: Index of the golfer to display stats for.
        param_2: Screen mode flag (0=normal, 1=compare mode).
    """
    iVar12 = golfer_idx * 0x100
    state.text_buf = ""

    # ── Show golfer name ───────────────────────────────────────────────
    # DAT_0051a068._0_1_ = 0 (clear text buffer)
    _clear_textbuf(state)
    _get_golfer_name(state, golfer_idx)  # via FUN_0045F0F0
    _render_golfer_name(state)

    # ── Draw frame ─────────────────────────────────────────────────────
    # FUN_004740F0 / FUN_00473E60 — draw UI frame
    _draw_frame(state, golfer_idx)

    # ── Show golfer subtype ────────────────────────────────────────────
    _clear_textbuf(state)
    _get_golfer_subtype(state, golfer_idx)
    _render_subtype(state)

    # ── Show marital status flags ──────────────────────────────────────
    flags = state.get_hole_flag(golfer_idx, 0x70)  # DAT_00579570
    _render_marital_status(state, flags)

    # ── Show age ───────────────────────────────────────────────────────
    _render_age(state, golfer_idx)

    # ── Show skill values ──────────────────────────────────────────────
    skills = state.get_golfer_stats(golfer_idx, 0)  # byte 0 = skill bitmask
    _render_skills(state, skills, golfer_idx)

    # ── Show hole scores ───────────────────────────────────────────────
    _render_hole_scores(state, golfer_idx, iVar12)

    # ── Show needs (attitude, energy, hunger, thirst) ──────────────────
    _render_needs(state, golfer_idx, iVar12)

    # ── Show personality traits ────────────────────────────────────────
    _render_personality(state, golfer_idx, iVar12)

    # ── Show club used for each hole shot type ─────────────────────────
    _render_club_used(state, golfer_idx, iVar12, param_2)

    # ── Button hit-testing and interaction ─────────────────────────────
    _handle_buttons(state, golfer_idx, param_2)

    # ── Show shot history (recent shots) ───────────────────────────────
    _render_shot_history(state, golfer_idx, iVar12, param_2)


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0045FD80 — Hole Scoring / Intro Story
# ═══════════════════════════════════════════════════════════════════════════════

def hole_scoring_intro(state: ScoringState) -> None:
    """FUN_0045FD80 — Display intro story / scoring transitions.

    Shows the introductory story text for each course theme,
    plus tutorial text when DAT_00834170 == 0x1400.
    """
    if state.DAT_00824144 == 0x20:
        _handle_special_sequence(state)
        return

    # Check game state flags
    # DAT_0059e7b8 & 0x1000000 — if set, return immediately
    # (handled by caller)

    theme = state.DAT_00824144 & 3  # DAT_005a34e0 (course theme: 0-3)

    theme_stories = {
        0: {
            "title": "Welcome to...",
            "story": (
                "Golf Club. The unexpected passing of your great uncle Harry "
                "has left you in control of his estate."
            ),
            "detail": (
                "The property includes rolling hills, sparkling waters. "
                "However, uncle Harry was a lazy slacker and never built "
                "any golf holes."
            ),
            "budget_note": "$%d budget to turn into a world class golf course.",
        },
        1: {
            "title": "Welcome to the...",
            "story": (
                "Desert Country Club. What was once a vast featureless desert "
                "is now a vast desert by a lonely golf clubhouse."
            ),
            "detail": (
                "This area is blessed with sunshine and warm breezes."
            ),
            "budget_note": (
                "$%d budget to turn into a world class golf resort."
            ),
        },
        2: {
            "title": "Welcome to...",
            "story": (
                "Golf Course. This delightful slice of island paradise "
                "needs only your help to become a top notch resort."
            ),
            "detail": (
                "After all, who doesn't enjoy a luxurious tropical golf "
                "getaway? With the successful conclusion of the dedication "
                "of the new El Presidente Golf Resort..."
            ),
            "budget_note": (
                "$%d budget to turn into a world class golf resort."
            ),
        },
        3: {
            "title": "Welcome to...",
            "story": (
                "Golf Links. This ancient and venerable course "
                "has fallen upon hard times."
            ),
            "detail": (
                "Whereupon kings and princes did play, but all is not lost. "
                "With a tidy butterfly collection and a royal budget..."
            ),
            "budget_note": (
                "$%d budget to restore it to its former preeminence "
                "in the world of golf."
            ),
        },
    }

    story_data = theme_stories.get(theme, theme_stories[0])
    _render_story_text(state, story_data)


def _handle_special_sequence(state: ScoringState) -> None:
    """Handle the DAT_00834170 == 0x20 / 0x1400 sequences."""
    if state.DAT_00824144 == 0x1400:
        _render_tutorial_text(state)


# ═══════════════════════════════════════════════════════════════════════════════
#  Rendering abstractions (stubs for game engine calls)
# ═══════════════════════════════════════════════════════════════════════════════

def _clear_textbuf(state: ScoringState) -> None:
    """Clear the global text buffer (DAT_0051a068._0_1_ = 0)."""
    state.text_buf = ""


def _get_golfer_name(state: ScoringState, golfer_idx: int) -> None:
    """FUN_0045F0F0 — Build golfer name into text buffer."""
    # In the original C:
    #   FUN_004676e0(golfer_idx, 0)  — get golfer name
    #   FUN_0045f0f0(buf, golfer_class, -1, golfer_idx, -50)
    # Build display name from golfer data
    pass


def _get_golfer_subtype(state: ScoringState, golfer_idx: int) -> None:
    """Get golfer personality subtype description."""
    pass


def _render_golfer_name(state: ScoringState) -> None:
    """FUN_00404BC0 — Draw golfer name text."""
    # FUN_00404bc0(buf, 0x1a4, 0x28, 0x80000210)
    pass


def _render_subtype(state: ScoringState) -> None:
    """Draw subtype/golfer-class text."""
    pass


def _render_marital_status(state: ScoringState, flags: int) -> None:
    """Draw marital status text based on flag bits.

    Flags (from DAT_00579570):
      0x08 — Single
      0x10 — Married
      0x20 — Divorced
      0x40 — Widowed
    """
    statuses = []
    if flags & 0x08:
        statuses.append("Single")
    if flags & 0x10:
        statuses.append("Married")
    if flags & 0x20:
        statuses.append("Divorced")
    if flags & 0x40:
        statuses.append("Widowed")
    state.text_buf += " ".join(statuses)
    # FUN_00404bc0(buf, 0x1a4, 0x5b, 0x80004210)


def _render_age(state: ScoringState, golfer_idx: int) -> None:
    """Render golfer age line."""
    # FUN_00453260(golfer_idx, &DAT_00824134, 10) — format age
    # FUN_00404b70(buf, 0x1a4, 0x3e, 0x80000210) — draw "Age: XX"
    pass


def _render_skills(state: ScoringState, skills_bitmask: int, golfer_idx: int) -> None:
    """Render skill ratings (Length, Accuracy, Short Game, Putting, etc.).

    Skills are bitflags in the first byte of golfer stats.
    The skill names are from PTR_DAT_004c2864 (array of string pointers).
    """
    skill_idx = 0
    count = 0
    while skills_bitmask:
        bit = 1 << skill_idx
        if skills_bitmask & bit:
            skills_bitmask &= ~bit
            count += 1
            if count > 1:
                # Insert ", " separator
                state.text_buf += ", "
            if skill_idx < len(SKILL_NAMES):
                state.text_buf += SKILL_NAMES[skill_idx]
        skill_idx += 1
    # FUN_00404b70(buf, 0x1a4, 0x4b, 0x80000210)


def _render_hole_scores(state: ScoringState, golfer_idx: int, iVar12: int) -> None:
    """Render hole-by-hole score summary."""
    # C code iterates 0x10a entries starting from DAT_00575cb8
    # Each entry is a hole score with nav/color coding
    pass


def _render_needs(state: ScoringState, golfer_idx: int, iVar12: int) -> None:
    """Render golfer needs: Attitude, Energy, Hunger, Thirst.

    Each is rendered as a colored bar using FUN_00480B00.
    """
    # Attitude: (8 - current_hole) * 10, capped at 0x28
    attitude = (8 - state.current_hole[golfer_idx]) * 10
    _render_bar(state, "Attitude", 0x2c, attitude)

    # Energy: from golfer stats
    energy = state.get_needs_short(golfer_idx, 0x0a) >> 2  # DAT_00579562
    _render_bar(state, "Energy", 0x3c, energy)

    # Hunger: tile_dx * 5 / 2
    hunger = (state.tile_dx[golfer_idx] * 5) // 2
    _render_bar(state, "Hunger", 0x4c, hunger)

    # Thirst: tile_dy * 5 / 2
    thirst = (state.tile_dy[golfer_idx] * 5) // 2
    _render_bar(state, "Thirst", 0x5c, thirst)


def _render_bar(state: ScoringState, label: str, y_pos: int, value: int) -> None:
    """Draw a labeled bar indicator.

    Uses FUN_00404b70 for label, FUN_00480B00 for bar.
    """
    # Label
    # FUN_00404b70(label, 0x24a, y_pos, 0x80000000)
    # Bar background (max width = 0x50)
    # FUN_00480b00(0x222, y_pos+0x0a, 0x50, 4, color_bg)
    # Bar fill
    # FUN_00480b00(0x272 - value, y_pos+0x0a, value, 4, color_fill)
    pass


def _render_personality(state: ScoringState, golfer_idx: int, iVar12: int) -> None:
    """Render personality traits as text lines.

    Uses PTR_DAT_004c2960 array of trait string pointers.
    For each bit in DAT_00579558 (16-bit), show the trait name
    or "---" if the bit is not set.
    """
    trait_mask = state.get_needs_short(golfer_idx, 0)  # DAT_00579558
    bit = 0
    state.text_buf = ""
    while bit < 0x1a:  # up to 26 traits
        if trait_mask & (1 << bit):
            if bit < len(PERSONALITY_NAMES):
                state.text_buf += PERSONALITY_NAMES[bit] + " "
            else:
                state.text_buf += "Trait_%d " % bit
        else:
            if bit < 16:  # show "---" for first 16 unticked traits
                state.text_buf += "--- "
        bit += 1
    # FUN_00404b70(buf, 0x1a4, 0x69, 0x80000210) — draw all traits
    pass


def _render_club_used(state: ScoringState, golfer_idx: int, iVar12: int,
                      param_2: int) -> None:
    """Render club type used for each shot.

    DAT_005794d9 = number of shots on current hole.
    For each shot, display club name and distance.
    """
    num_shots = state.tile_dx[golfer_idx]
    if num_shots < 0:
        return

    # Club name strings from PTR_s_Drive_004c28b8 array
    club_names = ["Drive", "3-Wood", "5-Wood", "3-Iron", "4-Iron",
                  "5-Iron", "6-Iron", "7-Iron", "8-Iron", "9-Iron",
                  "PW", "SW", "Putter"]

    hole_ofs = 0x5cb8  # DAT_00575cb8 offset within hole data
    for i in range(1, num_shots + 1):
        # shot_type is at DAT_005794ef[iVar12 + i]
        shot_type = 0  # placeholder
        club_name = club_names[shot_type % len(club_names)] if shot_type < 0x13 else "---"
        state.text_buf += club_name
        # Draw at computed position
        # FUN_004049d0(buf, x, y, color)


def _handle_buttons(state: ScoringState, golfer_idx: int, param_2: int) -> None:
    """Handle button hit-testing and interaction.

    Uses FUN_0047AB50 to get mouse position, then FUN_00467170
    to check distance to each button hotspot.
    """
    mouse_x = 0
    mouse_y = 0
    # FUN_0047ab50(&mouse_x, &mouse_y)

    # Check each button region
    state.DAT_00824130 = BTN_NONE
    for name, cx, cy, radius in BUTTON_REGIONS:
        dist_sq = (cx - mouse_x) ** 2 + (cy - mouse_y) ** 2
        if dist_sq < radius * radius:
            if name == "customize":
                state.DAT_00824130 = BTN_CUSTOMIZE
            elif name == "move_eject":
                state.DAT_00824130 = BTN_MOVE_EJECT
            elif name == "snapshot":
                state.DAT_00824130 = BTN_SNAPSHOT
            elif name == "story":
                state.DAT_00824130 = BTN_STORY
            elif name == "next_chapter":
                state.DAT_00824130 = BTN_NEXT_CHAPTER
            break

    # Handle button switch based on hover
    # C code switches on DAT_00824130 + checks DAT_00823768 for confirm
    _process_button_action(state, golfer_idx, mouse_x, mouse_y)


def _process_button_action(state: ScoringState, golfer_idx: int,
                           mouse_x: int, mouse_y: int) -> None:
    """Process selected button action.

    Button actions:
      0 = Customize (golfer appearance)
      1 = Move/Eject Golfer
      2 = Take Snapshot
      3 = View Story / Golfer Comments
      4 = (unused)
      5 = Next Chapter
    """
    st = state.DAT_00824130
    state.text_buf = ""

    action_names = {
        BTN_CUSTOMIZE: "Customize",
        BTN_MOVE_EJECT: "Move/Eject Golfer",
        BTN_SNAPSHOT: "Take Snapshot",
        BTN_STORY: "View Story",
        BTN_NEXT_CHAPTER: "Next Chapter",
    }

    action_name = action_names.get(st, "---")
    state.text_buf = action_name

    if st != state.DAT_00823768:
        state.DAT_00823768 = 0

    state.DAT_00823768 += 1
    if state.DAT_00823768 >= 7 and st != BTN_NONE:
        # FUN_00432620(mouse_x, mouse_y) — execute button action
        _execute_button_action(state, golfer_idx, st)


def _execute_button_action(state: ScoringState, golfer_idx: int,
                           action: int) -> None:
    """Execute the golf action associated with a button click.

    In the original C, this calls FUN_00432620 which dispatches
    to the actual game logic.
    """
    # Action dispatch happens via event system
    pass


def _render_shot_history(state: ScoringState, golfer_idx: int, iVar12: int,
                         param_2: int) -> None:
    """Render recent shot history for each hole."""
    # Iterates DAT_00579528[iVar12 + i] for shot types (char)
    # and DAT_00579532[iVar12 + i] for shot data (byte)
    # Displays club name + shot distance + event type
    pass


def _render_story_text(state: ScoringState, story_data: dict) -> None:
    """Display introductory story text for the current course theme.

    In the original C, each string is concatenated into DAT_0051a068
    via 4-byte copy loops, then drawn with FUN_0040daa0.
    """
    lines = [
        story_data.get("title", ""),
        story_data.get("story", ""),
        story_data.get("detail", ""),
    ]

    for line in lines:
        if line:
            state.text_buf = line
            # FUN_0040daa0(0xffffffff) — draw line
            pass


def _render_tutorial_text(state: ScoringState) -> None:
    """Display tutorial text when DAT_00834170 == 0x1400.

    Text describes the philosophy of building a great course:
      "Building a great golf course requires planning..."
      "The basic idea is to present the player with interesting choices..."
      "This philosophy is known as 'looking at the shot from the green back'..."
      "Players who enjoy your course will..."
    """
    tutorial_lines = [
        "Building a great golf course requires planning, patience, "
        "and require strategic thinking.",
        "The basic idea is to present the player with interesting choices "
        "and challenges that are fair but demanding.",
        "This philosophy is known as 'looking at the shot from the green back' "
        "to the tee, designing each hole as a complete experience.",
        "Players who enjoy your course will return again and again, "
        "bringing their friends and spending money at your club.",
    ]

    for line in tutorial_lines:
        state.text_buf = line
        # FUN_0040cb00(0x80002190, 0, 0xfffffffc)
        pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Drawing stubs
# ═══════════════════════════════════════════════════════════════════════════════

def _draw_frame(state: ScoringState, golfer_idx: int) -> None:
    """Draw the UI frame around the golfer stats panel.

    Original calls:
      FUN_004740F0 / FUN_00473E60 — draw panel background
      FUN_00473F60 — draw panel elements
      FUN_0045C200 — draw interaction cue
      FUN_004762D0 — clear draw area
    """
    pass


def _measure_text(state: ScoringState, text: str) -> int:
    """FUN_00477250 — measure text width in pixels."""
    return len(text) * 8  # rough estimate


# ═══════════════════════════════════════════════════════════════════════════════
#  Utility
# ═══════════════════════════════════════════════════════════════════════════════

def _str_copy_4byte_aligned(dst: bytearray, dst_ofs: int,
                            src: str) -> int:
    """Simulate the 4-byte-aligned string copy pattern used throughout.

    The original C code copies strings in 4-byte chunks then handles
    remaining bytes (1-3). Returns the length copied.
    """
    encoded = src.encode("ascii") + b"\x00"
    length = len(encoded)

    # Copy 4-byte chunks
    i = 0
    while i + 4 <= length:
        chunk = encoded[i:i + 4]
        val = int.from_bytes(chunk.ljust(4, b"\x00"), "little")
        dst[dst_ofs + i:dst_ofs + i + 4] = val.to_bytes(4, "little")
        i += 4

    # Copy remaining bytes
    while i < length:
        dst[dst_ofs + i] = encoded[i]
        i += 1

    return length

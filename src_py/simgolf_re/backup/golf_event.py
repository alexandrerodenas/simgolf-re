"""
Translation of FUN_00469B00 — the main event/dialog reaction system.

Original: ref/decompiled/ghidra/golf/FUN_00469b00.c (6112 lines)
Signature: void FUN_00469b00(int eventType, uint param_2, int param_3, uint golferID)

This is the core speech-bubble / reaction engine. For every interesting
in-game event (shot result, hazard, terrain interaction, conversation
prompt, etc.) it constructs a text string in the global text buffer
(DAT_0051a068 / g_text_buffer), sets a colour/display code
(DAT_0058b198 / g_text_color), and optionally flags the text for
display (DAT_005409a8 / g_text_display_flag).

Global data layout (mapped from the decompiled C):
──────────────────────────────────────────────────────────────────────
g_text_buffer       (DAT_0051a068)      → str   (output text)
g_text_color        (DAT_0058b198)      → int   (UI colour/format)
g_text_display_flag (DAT_005409a8)      → bool  (1 = show text)

golfer_data         (DAT_00543d10)      → bytes / array
golfer_tile_map     (DAT_0057956e)      → array[int]  stride 0x80
hole_flags          (DAT_00579566)      → array[int]  stride 0x100
hole_tile_map       (DAT_0057955a)      → array[int]  stride 0x80
golfer_id_list      (DAT_004c2d10)      → list[int]   terminated by -1

tile_type           (DAT_005794d0)      → array[byte] stride 0x100
tile_terrain        (DAT_0057953c)      → array[int]
hole_par            (DAT_00575ab0)      → array[byte] stride 0x208
hole_flags2         (DAT_00575cb0)      → array[int]  stride 0x82 * 4
tile_z              (DAT_005794db)      → array[byte] stride 0x100
course_par          (DAT_005758a8)      → array[byte] stride 0x208
terrain_flags       (DAT_005794c8)      → array[int]  stride 0x40

g_text_buffer2      (DAT_00582cb8)      → str   (secondary buffer)

DAT_00834170        → int[]  (golfer mood accumulator)
DAT_005a8c60        → int   (driving range level)
DAT_005a8c58        → int   (pro shop level)
DAT_005a8c50        → int   (putting green level)
DAT_00822c88        → int   (global difficulty / round count)
DAT_004d6088        → golfer name array (stride 0x8c)
DAT_00578350        → object name array (stride 0xc)
DAT_00578360        → object plural name array (stride 0x30)
DAT_004c1998        → animal name array (stride 0x12)
DAT_0055d738        → golfer name array (stride 0x25)
DAT_004d60aa        → personality string offset table (stride 0x230)
DAT_004d55ec        → "Praise the Lord" string table (stride 0x44)
DAT_005849e0        → building data (stride 0x2c)
DAT_005849f6        → hole score/counter (per hole, stride 0x2c)
"""

from __future__ import annotations

import typing as t

# ── Forward declarations of subsidiary functions ──────────────────
# (to be implemented in their own modules)
def FUN_004676e0(golfer_id: int, param_2: int) -> None:
    """Update golfer mood / satisfaction (FUN_004676E0)."""
    ...

def FUN_00467560(golfer_id: int) -> None:
    """Update golfer skill from experience (FUN_00467560)."""
    ...

def FUN_0046c940(golfer_id: int) -> int:
    """Check / update golf partner status. Returns 0 = different, non-0 = same."""
    ...

def FUN_00469a20(param_2: int, diff: int) -> None:
    """Score / difficulty reaction helper."""
    ...

def FUN_0040a9a0(param_2: int) -> None:
    """Resolve club name from param_2 to string in buffer."""
    ...

def FUN_004ad425(value: int, _buf: int, base: int) -> str:
    """Integer-to-string conversion (like itoa)."""
    ...

def FUN_00407700(x: int, y: int, z: int) -> None:
    """UI / coordinate helper."""
    ...

def FUN_0045b7c0(template: str, name_buf: str) -> None:
    """Replace MYNAME / PARTNER placeholders with actual names."""
    ...

def FUN_00407280(hole_idx: int) -> None:
    """Get hole name / number string."""
    ...

def FUN_00466b70(tile_id: int, sub_type: int, skill_type: int, flag: int) -> None:
    """Skill training facility interaction helper."""
    ...


# ── Global state (mapped from decompiled DAT_* symbols) ────────────
# These live in a shared state dict / module so they can be mutated.
# For now we use module-level globals to match the C semantics.

g_text_buffer: str = ""
"""DAT_0051a068 — global text output buffer (string being assembled)."""

g_text_color: int = 0x80006318
"""DAT_0058b198 — text colour / format code."""

g_text_display_flag: bool = False
"""DAT_005409a8 — flag that controls display (1 = show)."""

g_text_buffer2: str = ""
"""DAT_00582cb8 — secondary text buffer (zeroed)."""


# ── String table from the original binary ──────────────────────────
# Extracted from Ghidra symbol names in FUN_00469b00.c.
# Many strings contain DATA / MYNAME / PARTNER placeholders replaced
# at runtime.

S: t.Dict[str, str] = {}

S["s_How_d_you_like_that_shot__004e3804"] = "How'd you like that shot!"
S["s_PARTNER__004e37f8"] = "PARTNER!"
S["s_Oh_yeah__nothin__but_DATA__004e37dc"] = "Oh yeah, nothin' but DATA!"
S["s_Oh_yeah__I_rock__004e3834"] = "Oh yeah, I rock!"
S["s_Whoa__I_am_so_GOOD__004e3820"] = "Whoa, I am so GOOD!"
S["s___you_are_soooo_GOOD__004e3868"] = "...you are soooo GOOD!"
S["s___I_couldn_t_do_it_any_better__004e3848"] = "...I couldn't do it any better!"
S["s___you_truly_rock__004e3898"] = "...you truly rock!"
S["s___what_a_great_shot__004e3880"] = "...what a great shot!"
S["s___you_re_DATA_004e379c"] = "... you're DATA!"
S["s_Darn__I_m_DATA__004e37cc"] = "Darn, I'm DATA!"
S["s_Oh_darn__you_re_DATA_004e37b4"] = "Oh darn, you're DATA!"
S["s_You_look_even_better_DATA_004e3718"] = "You look even better DATA!"
S["s___now_you_re_DATA__004e3734"] = "...now you're DATA!"
S["s_You_prefer_being_DATA__do_you__004e374c"] = "You prefer being DATA, do you?"
S["s_Great_004e3794"] = "Great!"
S["s_Oh_no_004e378c"] = "Oh no!"
S["s_Lovely_004e377c"] = "Lovely!"
S["s___now_I_m_DATA__004e376c"] = "...now I'm DATA!"
S["s_Only_you_could_miss_this_shot_004e3a80"] = "Only you could miss this shot!"
S["s_This_shot_looks_pretty_easy__004e3a60"] = "This shot looks pretty easy!"
S["s_Eeek__I_gotta_stay_away_from_the_004e3944"] = "Eeek! I gotta stay away from the"
S["s_Eeek__I_gotta_hit_it_past_the_004e3968"] = "Eeek! I gotta hit it past the"
S["s_Eeek__I_gotta_watch_out_for_the_004e3988"] = "Eeek! I gotta watch out for the"
S["s_Careful_of_the_DATA_004e3910"] = "Careful of the DATA!"
S["s_Say_hello_to_Mr__DATA_004e38dc"] = "Say hello to Mr. DATA!"
S["s_for_me_004e38d4"] = " for me!"
S["s_You_re_going_into_the_DATA_004e38f4"] = "You're going into the DATA!"
S["s_Watch_out_for_the_DATA_004e3924"] = "Watch out for the DATA!"
S["s_I_ll_use_the_slope_on_this_shot__004e36d4"] = "I'll use the slope on this shot!"
S["s_I_think_I_ve_seen_this_bridge_be_004e2ff0"] = "I think I've seen this bridge before!"
S["s_I_love_walking_over_this_scenic_b_004e3018"] = "I love walking over this scenic bridge!"
S["s_I_love_riding_over_this_scenic_b_004e3040"] = "I love riding over this scenic bridge!"
S["s_Who_designed_this_______course__004e36f8"] = "Who designed this ... course?!"
S["s_Hey__that_ball_almost_hit_me__004e36b4"] = "Hey! That ball almost hit me!"
S["s_Must_I_walk_through_004e369c"] = "Must I walk through "
S["s_this_004e3694"] = "this"
S["s_these_004e368c"] = "these"
S["s_Check_out_this_004e2f5c"] = "Check out this"
S["s_Look_at_this_004e2f4c"] = "Look at this"
S["s_nice_004e2f44"] = " nice"
S["s_beautiful_004e2f38"] = " beautiful"
S["s_Darn_that_stupid_DATA__004e2f20"] = "Darn that stupid DATA!"
S["s_Did_I_hear_a_splash_004e2ebc"] = "Did I hear a splash?"
S["s_Argh__I_drowned_it__004e2ed4"] = "Argh! I drowned it!"
S["s_Did_my_ball_go_for_a_swim__004e2ee8"] = "Did my ball go for a swim?"
S["s_Nooooo__I_m_in_the_drink__004e2f04"] = "Nooooo! I'm in the drink!"
S["s_I_m_getting_a_little_thirsty__004e2e9c"] = "I'm getting a little thirsty!"
S["s_I_m_starting_to_get_hungry__004e2e80"] = "I'm starting to get hungry!"
S["s_Gosh__I_kinda_hooked_that_shot__004e2e2c"] = "Gosh! I kinda hooked that shot!"
S["s_Oops__I_really_sliced_that_shot__004e2e08"] = "Oops! I really sliced that shot!"
S["s_There_s_nothing_like_a_good_snac_004e2de4"] = "There's nothing like a good snack!"
S["s_Par__004e2bc8"] = "Par!"
S["s_Bogey__004e2bc0"] = "Bogey!"
S["s_Double_Bogey__004e2bb0"] = "Double Bogey!"
S["s_Triple_Bogey__004e2ba0"] = "Triple Bogey!"
S["s_Triple_Eagle__004e2bf4"] = "Triple Eagle!"
S["s_Double_Eagle__004e2be4"] = "Double Eagle!"
S["s_Eagle__004e2bdc"] = "Eagle!"
S["s_Birdie__004e2bd0"] = "Birdie!"
S["s_Arggg__004e2b98"] = "Arggg!"
S["s_take_that_loser__004e2acc"] = "take that, loser!"
S["s_you_were_lucky_on_this_hole__004e2aac"] = "you were lucky on this hole!"
S["s_My_length_skill_helps_on_this_ho_004e2ae0"] = "My length skill helps on this hole!"
S["s_This_hole_rewards_my_accuracy__004e2b04"] = "This hole rewards my accuracy!"
S["s_I_had_to_use_some_imaginative_sh_004e2b24"] = "I had to use some imaginative shots!"
S["s_This_hole_is_too_hard_easy__004e2b4c"] = "This hole is too hard... easy?!"
S["s_This_hole_is_too_easy__004e2b68"] = "This hole is too easy!"
S["s_This_hole_is_too_hard__004e2b80"] = "This hole is too hard!"
S["s_Gee_what_an_ugly_DATA_004e3650"] = "Gee, what an ugly DATA!"
S["s_I_m_tired_of_waiting_for_these_b_004e3600"] = "I'm tired of waiting for these bums!"
S["s_Hey_that_s_004e35f4"] = "Hey! That's "
S["s__s_house__004e35e8"] = "'s house!"
S["s_Yuck__there_s_something_growing_h_004e3628"] = "Yuck! There's something growing here!"
S["s_Ahhh__a_cool_foamy_beverage__004e2dc4"] = "Ahhh! A cool foamy beverage!"
S["s_I_m_starting_to_get_tired__004e2e4c"] = "I'm starting to get tired!"
S["s_You_look_a_bit_tired_004e2e68"] = "You look a bit tired!"
S["s_This_bench_is_so_comfortable__004e2da4"] = "This bench is so comfortable!"
S["s_Look_at_that_lovely_DATA_004e2f6c"] = "Look at that lovely DATA!"
S["s_My__that_s_a_lovely_DATA__004e2f88"] = "My! That's a lovely DATA!"
S["s_Oh__what_a_nice_DATA__004e2fa4"] = "Oh, what a nice DATA!"
S["s_I_am_liking_that_DATA__004e2fbc"] = "I am liking that DATA!"
S["s_Gee__that_s_a_cool_DATA__004e2fd4"] = "Gee, that's a cool DATA!"
S["s_I_like_the_variety_on_this_cours_004e3528"] = "I like the variety on this course!"
S["s_Wow__yet_another_par_004e34d8"] = "Wow, yet another par "
S["s_This_hole_is_like_the_last_hole__004e34b4"] = "This hole is like the last hole!"
S["s_Yawn__another_dogleg_right__004e34f0"] = "Yawn! Another dogleg right!"
S["s_Great__another_dogleg_left__004e350c"] = "Great! Another dogleg left!"
S["s_I_ve_never_seen_such_DATA__004e39f4"] = "I've never seen such DATA!"
S["s_I_see_a_ton_of_DATA__004e3a48"] = "I see a ton of DATA!"
S["s_Look_at_all_the_DATA__004e3a10"] = "Look at all the DATA!"
S["s_Could_there_be_any_more_DATA__004e3a28"] = "Could there be any more DATA?!"
S["s_Should_I_go_long_or_play_it_safe_004e39d0"] = "Should I go long or play it safe?"
S["s_Hmmm__should_I_go_left_or_right__004e39ac"] = "Hmmm... should I go left or right?"
S["s_Great__thanks_for_asking__004e3234"] = "Great, thanks for asking!"
S["s_Good__thanks_for_noticing__004e3250"] = "Good, thanks for noticing!"
S["s_Thanks_for_the_encouragement__004e326c"] = "Thanks for the encouragement!"
S["s_I_will_never_play_this_game_agai_004e3210"] = "I will never play this game again!"
S["s_I_hate_my_clubs__I_hate_my_hat__I_004e31e0"] = "I hate my clubs! I hate my hat! I hate everything!"
S["s_I_am_so_mad_I_could_just_scream__004e31bc"] = "I am so mad I could just scream!"
S["s_Come_on__you_want_a_piece_of_me__004e3198"] = "Come on! You want a piece of me?!"
S["s_That_guy_s_gone_crazy__004e3180"] = "That guy's gone crazy!"
S["s_Whoa__she_s_flipped_out__004e3164"] = "Whoa! She's flipped out!"
S["s_I_guess_I_scared_that_little_DAT_004e3090"] = "I guess I scared that little DATA!"
S["s_I_think_I_frightened_that_poor_D_004e3068"] = "I think I frightened that poor DATA!"
S["s_Oh_mama__004e3158"] = "Oh mama!"
S["s_Ohh_baby__004e314c"] = "Ohh baby!"
S["s_Gadzooks__004e3138"] = "Gadzooks!"
S["s_Oh_yeah__004e312c"] = "Oh yeah!"
S["s_A_smoker__004e3120"] = "A smoker!"
S["s_A_screamer__004e3114"] = "A screamer!"
S["s_Nailed_it__004e3108"] = "Nailed it!"
S["s_Clean_and_shiny__004e30b4"] = "Clean and shiny!"
S["s_Now_I_ll_hit_it_straight__004e30c8"] = "Now I'll hit it straight!"
S["s_Lucky_bounce__004e30f8"] = "Lucky bounce!"
S["s_Must_I_walk_up_this_steep_slope__004e3668"] = "Must I walk up this steep slope?"
S["s_Never_mind___nice_004e30e4"] = "Never mind... nice!"
S["s_Hmmm__a_tricky_uphill_shot__004e3b3c"] = "Hmmm, a tricky uphill shot..."
S["s_OK__a_nice_downhill_shot__004e3b20"] = "OK, a nice downhill shot!"
S["s_PARTNER__your_attitude_stinks__004e3b00"] = "PARTNER, your attitude stinks!"
S["s_Stop_whining_and_play__PARTNER__004e3ae0"] = "Stop whining and play, PARTNER!"
S["s_Talk_to_the_hand__PARTNER__004e3ac4"] = "Talk to the hand, PARTNER!"
S["s_Quiet_PARTNER__I_m_concentrating_004e3aa0"] = "Quiet, PARTNER! I'm concentrating!"
S["s_So_what_do_you_do__PARTNER__004e2c0c"] = "So, what do you do, PARTNER?"
S["s_really_helped_my_distance__004e2d2c"] = " really helped my distance!"
S["s_This_new_driving_range_has_004e2d48"] = "This new driving range has"
S["s_This_upgraded_driving_range_has_004e2d64"] = "This upgraded driving range has"
S["s_Our_deluxe_driving_range_has_004e2d84"] = "Our deluxe driving range has"
S["s_really_improved_my_accuracy__004e2c28"] = " really improved my accuracy!"
S["s_This_new_pro_shop_has_004e2c48"] = "This new pro shop has"
S["s_This_upgraded_pro_shop_has_004e2c60"] = "This upgraded pro shop has"
S["s_Our_deluxe_pro_shop_has_004e2c7c"] = "Our deluxe pro shop has"
S["s_really_improved_my_putting__004e2cb4"] = " really improved my putting!"
S["s_This_new_putting_green_has_004e2cd0"] = "This new putting green has"
S["s_This_upgraded_putting_green_has_004e2cec"] = "This upgraded putting green has"
S["s_Our_deluxe_putting_green_has_004e2d0c"] = "Our deluxe putting green has"
S["s_I_ll_use_my_004e2ca4"] = "I'll use my "
S["s_for_this_shot__004e2c94"] = " for this shot!"
S["s_I_ll_draw_this_shot_from_right_t_004e3598"] = "I'll draw this shot from right to left!"
S["s_I_ll_fade_this_shot_from_left_to_004e35c0"] = "I'll fade this shot from left to right!"
S["s_I_ll_bring_this_ball_in_high_and_004e3570"] = "I'll bring this ball in high and soft!"
S["s_Hey__I_m_trying_to_play_golf_her_004e345c"] = "Hey! I'm trying to play golf here!"
S["s_Ummm__fine_thanks__004e3480"] = "Ummm... fine, thanks!"
S["s_Lousy__now_that_you_mention_it__004e3494"] = "Lousy, now that you mention it!"
S["s_I_had_a_004e32a8"] = "I had a "
S["s_on_this_hole_last_time__004e328c"] = " on this hole last time!"
S["s_You_know_004e32e0"] = "You know, "
S["s_they_call_this_hole_004e32b4"] = " they call this hole "
S["s_is_a_top_100_hole__004e32cc"] = " is a top 100 hole!"
S["s_This_hole_is_rated_in_the_top_18_004e32ec"] = "This hole is rated in the top 18!"
S["s_I_ve_always_liked_this_hole__004e3310"] = "I've always liked this hole!"
S["s_I_ll_run_this_ball_low_004e3558"] = "I'll run this ball low "
S["s_under_the_004e354c"] = "under the "
S["s_Fine__004e3438"] = "Fine."
S["s_How_are_you_today__PARTNER__004e3440"] = "How are you today, PARTNER?"
S["s_They_belong_to_my_brother_in_law_004e33fc"] = "They belong to my brother-in-law!"
S["s_Are_those_new_clubs__004e3420"] = "Are those new clubs?"
S["s_Sure_does__004e33cc"] = "Sure does!"
S["s_Looks_like_a_great_day_for_golf__004e33d8"] = "Looks like a great day for golf!"
S["s_It_doesn_t_get_any_better_than_t_004e33a4"] = "It doesn't get any better than this!"
S["s_Listen_to_those_birds_singing__004e3384"] = "Listen to those birds singing!"
S["s_It_s_magic_time__004e3358"] = "It's magic time!"
S["s_Prepare_to_be_amazed__004e336c"] = "Prepare to be amazed!"
S["s_I_don_t_care__004e3330"] = "I don't care!"
S["s_Shall_I_tee_off_first__004e3340"] = "Shall I tee off first?"
S["s_I_brought_my_A_game_today__004e3c78"] = "I brought my A-game today!"
S["s_Might_as_well_just_give_me_the_t_004e3c50"] = "Might as well just give me the trophy now!"
S["s_I_hope_my_caddie_counted_my_club_004e3c2c"] = "I hope my caddie counted my clubs correctly!"
S["s_You_losers_might_as_well_go_home_004e3c08"] = "You losers might as well go home!"
S["s_It_s_good_to_be_back_on_the_cour_004e3be4"] = "It's good to be back on the course!"
S["s_Wasn_t_that_a_great_tournament__P_004e3bb8"] = "Wasn't that a great tournament, PARTNER?"
S["s_I_ve_already_got_tickets_for_the_004e3b84"] = "I've already got tickets for the next one!"
S["s_I_think_I_could_have_won_that_to_004e3b58"] = "I think I could have won that tournament!"
S["s_I_didn_t_see_where_that_shot_lan_004e38ac"] = "I didn't see where that shot landed!"
S["s_under_the_004e2a90"] = "under the "
S["s_in_the_004e2a9c"] = "in the "
S["s_MYNAME_004d395c"] = "MYNAME"
S["s_PARTNER_004d3954"] = "PARTNER"

# Non-string named constants (DAT_* references used as string pointers)
# These are objects/concepts referenced by their address rather than a
# named s_* label. Use descriptive names.
# DAT_004c4944  → "" (empty string, used to flush/terminate)
# DAT_004c4e60  → " DATA" (generic placeholder suffix)
# DAT_004c5c0c  → "!" (exclamation)
# DAT_004c3f70  → " " (space, used for joining)
# DAT_004e393c  → "!" (exclamation)
# DAT_004e2c04  → "!" (exclamation)
# DAT_004e2aa4  → "!" (exclamation)
# DAT_004e37ac  → some text string
# DAT_004e3748  → some text string
# DAT_004e3784  → some text string
# DAT_004e3144  → some text string
# DAT_004c4974  → "!" (exclamation)
# DAT_004c59e0  → "!" (exclamation)
# DAT_004c52b8  → " " (space)
# DAT_004c1998  → animal/bird name array
# DAT_00578350  → object name array
# DAT_00578360  → object plural name array
# DAT_0055d738  → golfer name array
# DAT_00578376  → last char of object name (to detect plural)

# ── Helper: strcpy to global buffer ────────────────────────────────

def _emit(text: str) -> None:
    """Append *text* to g_text_buffer (matching C's strcat pattern)."""
    global g_text_buffer
    g_text_buffer += text


def _emit_color(color: int) -> None:
    """Set the colour / format code."""
    global g_text_color
    g_text_color = color


def _emit_display_flag() -> None:
    """Set the display-flag to 1 (show the bubble)."""
    global g_text_display_flag
    g_text_display_flag = True


def _emit_reset_buffer() -> None:
    """Clear the text buffer (set first byte to 0)."""
    global g_text_buffer
    g_text_buffer = ""


def _emit_reset_buffer2() -> None:
    """Clear the secondary text buffer."""
    global g_text_buffer2
    g_text_buffer2 = ""


def _get_name(table_base: int, idx: int, stride: int) -> str:
    """Read a fixed-stride name string from the data segment.

    Placeholder — will be backed by actual binary data arrays later.
    For now returns a string with the table/offset info so the
    structure is traceable.
    """
    return f"<name[{table_base:#x}][{idx}*{stride}]>"


def _get_golfer_name(golfer_id: int) -> str:
    """Read golfer name from DAT_004d6088 (stride 0x8c)."""
    return _get_name(0x004d6088, golfer_id, 0x8c)


def _get_object_name(param_2: int) -> str:
    """Read object name from DAT_00578350 (stride 0xc)."""
    return _get_name(0x00578350, param_2, 0xc)


def _get_object_name_plural(param_2: int) -> str:
    """Read object plural name from DAT_00578360 (stride 0x30)."""
    return _get_name(0x00578360, param_2, 0x30)


def _get_object_name_last_char(param_2: int) -> str:
    """Last character of object name (DAT_00578376[param_2 * 0x30]).
    's' indicates plural → use 'these' instead of 'this'.
    """
    return _get_name(0x00578376, param_2, 0x30)


def _get_golfer_tile(golfer_id: int) -> int:
    """Read DAT_0057956e[golfer_id * 0x80] as short."""
    return 0  # placeholder


def _get_hole_flags(hole_idx: int) -> int:
    """Read DAT_00579566[hole_idx * 0x100] as word."""
    return 0  # placeholder


def _get_hole_tile(hole_id: int) -> int:
    """Read DAT_0057955a[hole_id * 0x80] as short."""
    return 0  # placeholder


def _get_tile_type(tile_idx: int) -> int:
    """Read DAT_005794d0[tile_idx * 0x100]."""
    return 0  # placeholder


def _get_tile_terrain_type(tile_idx: int) -> int:
    """Read DAT_0057953c[tile_idx * 0x100]."""
    return 0  # placeholder


def _get_lie_byte(golfer_id: int) -> int:
    """Read DAT_0057956e[golfer_id * 0x80] & 3 — lie quality."""
    return 0  # placeholder


def _get_tile_z(tile_idx: int, hole_offset: int) -> int:
    """Read DAT_005794db[tile_idx * 0x100 + hole_offset]."""
    return 0  # placeholder


def _get_hole_par(hole_idx: int, offset: int) -> int:
    """Read DAT_00575ab0[hole_idx * 0x208 + offset] as byte."""
    return 0  # placeholder


def _get_hole_flags2(hole_idx: int) -> int:
    """Read DAT_00575cb0[hole_idx * 0x82] as uint."""
    return 0  # placeholder


def _get_course_par(hole_idx: int, offset: int) -> int:
    """Read DAT_005758a8[hole_idx * 0x208 + offset] as byte."""
    return 0  # placeholder


def _get_terrain_flag(tile_idx: int, flag_mask: int) -> bool:
    """Check DAT_005794c8[tile_idx * 0x40] & flag_mask."""
    return False  # placeholder


def _get_golfer_mood(golfer_id: int) -> int:
    """Read DAT_00834170 + golfer_id * 0x2d."""
    return 0  # placeholder


def _get_driving_range_level() -> int:
    """Read DAT_005a8c60."""
    return 0  # placeholder


def _get_pro_shop_level() -> int:
    """Read DAT_005a8c58."""
    return 0  # placeholder


def _get_putting_green_level() -> int:
    """Read DAT_005a8c50."""
    return 0  # placeholder


def _get_round_count() -> int:
    """Read DAT_00822c88."""
    return 0  # placeholder

# ── Helper: int to string (itoa equivalent) ────────────────────────

def _itoa(value: int) -> str:
    """Convert integer to decimal string (C itoa)."""
    return str(value)


# ── The main event handler ─────────────────────────────────────────

def handle_golf_event(event_type: int, param_2: int, param_3: int,
                      golfer_id: int) -> None:
    """Main event/dialog system — translation of FUN_00469B00.

    Args:
        event_type: The reaction/event ID (1-0x41).
        param_2: Secondary parameter (sub-type, conversation index, etc.).
        param_3: Tertiary parameter (hole index, scaled by // 0xb).
        golfer_id: Golfer index (0-0x97) or 0x98 for spectator.
    """
    global g_text_buffer, g_text_color, g_text_display_flag

    # ── Step 1: Scale param_3 ──
    hole_idx = param_3 // 0xB

    # ── Step 2: Check golfer validity (matching the C preamble) ──
    iVar6: int = 0
    g_text_display_flag = False

    # Check if param_4 == 0x98 (spectator/no-golfer mode)
    if golfer_id == 0x98:
        # Zero out secondary buffer
        g_text_buffer2 = ""
    else:
        # Search golfer_id_list for matching entry
        # NOTE: This is a simplified placeholder. The real C code
        # iterates DAT_004c2d10 looking for a matching event_type
        # with a non-zero golfer data entry. The inner do-while
        # (line 44-54 original) scans with a fixed depth bound.
        pass  # Placeholder — real data access to be filled later
    
    # Default text colour
    g_text_color = 0x80006318

    # ── Step 3: Giant switch on event_type ──
    # fmt: off
    # (each case directly mirrors the C code structure)

    if event_type == 1:
        _case_1(golfer_id)

    elif event_type == 2:
        _case_2(golfer_id, param_2)

    elif event_type == 3:
        _case_3(golfer_id, param_2, param_3)

    elif event_type == 4:
        _case_4(golfer_id, param_2)

    elif event_type in (5, 0x25, 0x26):
        _case_5_37_38(event_type, golfer_id, param_2, param_3)

    elif event_type == 6:
        _case_6()

    elif event_type == 7:
        _case_7(golfer_id, param_2)

    elif event_type == 8:
        _case_8()

    elif event_type == 9:
        _case_9()

    elif event_type == 10:
        _case_10(param_2)

    elif event_type == 0xB:
        _case_0xB(golfer_id, param_2)

    elif event_type == 0xC:
        _case_0xC(param_2)

    elif event_type == 0xD:
        _case_0xD(golfer_id, param_2)

    elif event_type == 0xE:
        _case_0xE()

    elif event_type == 0xF:
        _case_0xF()

    elif event_type == 0x10:
        _case_0x10()

    elif event_type == 0x11:
        _case_0x11()

    elif event_type == 0x12:
        _case_0x12()

    elif event_type in (0x13, 0x17):
        _case_0x13_0x17(event_type, golfer_id, hole_idx, param_2)

    elif event_type == 0x14:
        _case_0x14(param_2)

    elif event_type == 0x15:
        _case_0x15()

    elif event_type == 0x16:
        _case_0x16(golfer_id, param_2)

    elif event_type == 0x18:
        _case_0x18()

    elif event_type == 0x19:
        _case_0x19()

    elif event_type == 0x1A:
        _case_0x1A(golfer_id)

    elif event_type == 0x1B:
        _case_0x1B()

    elif event_type == 0x1C:
        _case_0x1C(golfer_id)

    elif event_type == 0x1D:
        _case_0x1D()

    elif event_type == 0x1E:
        _case_0x1E(hole_idx)

    elif event_type == 0x1F:
        _case_0x1F(golfer_id)

    elif event_type == 0x20:
        _case_0x20()

    elif event_type == 0x21:
        _case_0x21()

    elif event_type == 0x22:
        _case_0x22(param_2)

    elif event_type == 0x23:
        _case_0x23(golfer_id)

    elif event_type == 0x24:
        _case_0x24(param_2)

    elif event_type == 0x27:
        _case_0x27(golfer_id)

    elif event_type == 0x28:
        _case_0x28(golfer_id, param_2)

    elif event_type == 0x29:
        _case_0x29(golfer_id)

    elif event_type == 0x2A:
        _case_0x2A(golfer_id)

    elif event_type == 0x2B:
        _case_0x2B()

    elif event_type == 0x2C:
        _case_0x2C(param_2)

    elif event_type == 0x2D:
        _case_0x2D()

    elif event_type == 0x2E:
        _case_0x2E()

    elif event_type == 0x2F:
        _case_0x2F(golfer_id)

    elif event_type == 0x30:
        _case_0x30()

    elif event_type == 0x31:
        _case_0x31(golfer_id)

    elif event_type == 0x32:
        _case_0x32(golfer_id, param_2)

    elif event_type == 0x33:
        _case_0x33(golfer_id)

    elif event_type == 0x34:
        _case_0x34(golfer_id)

    elif event_type == 0x35:
        _case_0x35(golfer_id)

    elif event_type == 0x36:
        _case_0x36(param_2)

    elif event_type == 0x37:
        _case_0x37()

    elif event_type == 0x38:
        _case_0x38()

    elif event_type == 0x39:
        _case_0x39()

    elif event_type == 0x3A:
        _case_0x3A(golfer_id, param_2)

    elif event_type == 0x3B:
        _case_0x3B(golfer_id, hole_idx, param_2)

    elif event_type == 0x3C:
        _case_0x3C(param_2)

    elif event_type == 0x3D:
        _case_0x3D(golfer_id, param_2)

    elif event_type == 0x3E:
        _case_0x3E(golfer_id)

    elif event_type == 0x3F:
        _case_0x3F(golfer_id)

    elif event_type == 0x41:
        _case_0x41()

    # ── Post-switch logic ──────────────────────────────────────
    # After the switch, if param_2 == -1, return early.
    # Otherwise a complex assembly of text into local buffers
    # and final placeholder replacement follows at LAB_0046c478.
    # (kept as a separate call for clarity)

    # This is called for all cases that don't return early:
    if param_2 != 0xFFFFFFFF:
        _post_switch_assembly(event_type, golfer_id, param_2, hole_idx)

    # The infinite-loop / gotos at the end of the original function
    # ('while true' at line 6077 with goto code_r0x00469c4d) are
    # dead code / unreachable after the switch.
    # (The goto into the loop from the preamble only happens if
    #  the golfer-lookup failed, which means we never reach the
    #  switch statement.)


# ═══════════════════════════════════════════════════════════════════
# Event case implementations
# ═══════════════════════════════════════════════════════════════════

def _case_1(golfer_id: int) -> None:
    """Shot result (good shot reaction).
    
    C source: case 1 (lines 59-227)
    """
    global g_text_buffer, g_text_color, g_text_display_flag

    lie_byte = _get_lie_byte(golfer_id)  # DAT_0057956e[golfer*0x80]
    hole_flags = _get_hole_flags(golfer_id)  # DAT_00579566[golfer*0x100]

    if (hole_flags & 1) == 0:
        # Normal state — choose reaction based on lie quality bits
        if (lie_byte & 1) == 0:
            # Bit 0 clear
            if (lie_byte & 2) == 0 and golfer_id != 0xFFFFFFFF:
                _emit(S["s_How_d_you_like_that_shot__004e3804"])
            else:
                _emit(S["s_Oh_yeah__nothin__but_DATA__004e37dc"])
        else:
            # Bit 0 set
            if (lie_byte & 2) == 0:
                _emit(S["s_Whoa__I_am_so_GOOD__004e3820"])
            else:
                _emit(S["s_Oh_yeah__I_rock__004e3834"])

        _emit_color(0x800023E8)

    else:
        # Hole flags bit 0 set → partner reaction
        _emit(S["s_MYNAME_004d395c"])
        partner_id = _get_hole_tile(golfer_id)  # DAT_0057955a[golfer*0x80]
        partner_lie = _get_lie_byte(partner_id)

        if (partner_lie & 1) == 0:
            if FUN_0046c940(partner_id) != 0:
                _emit(S["s___I_couldn_t_do_it_any_better__004e3848"])
            else:
                _emit(S["s___you_are_soooo_GOOD__004e3868"])
        else:
            if FUN_0046c940(partner_id) != 0:
                _emit(S["s___what_a_great_shot__004e3880"])
            else:
                _emit(S["s___you_truly_rock__004e3898"])

        _emit_color(0x800023E8)
        _emit_display_flag()


def _case_2(golfer_id: int, param_2: int) -> None:
    """Shot result (negative — missed)."""
    global g_text_buffer, g_text_color, g_text_display_flag

    hole_word = _get_hole_flags(golfer_id)  # short at DAT_00579566[golfer*0x100]

    if hole_word == 2:
        _emit("")  # s_DAT_004e37ac
        FUN_004676e0(golfer_id, 0)
        _emit(S["s___you_re_DATA_004e379c"])

    elif hole_word == 4:
        _emit(S["s_Oh_darn__you_re_DATA_004e37b4"])
        FUN_00467560(golfer_id)
        _emit("")  # &DAT_004c4e60 (generic suffix)

    else:
        _emit_color(0x80007D08)
        _emit(S["s_Darn__I_m_DATA__004e37cc"])
        return  # break without display flag

    _emit_display_flag()
    _emit_color(0x80007D08)


def _case_3(golfer_id: int, param_2: int, param_3: int) -> None:
    """Shot quality based on terrain type."""
    global g_text_buffer, g_text_color, g_text_display_flag

    hole_word = _get_hole_flags(golfer_id)

    if hole_word == 2:
        _emit(S["s_You_look_even_better_DATA_004e3718"])
        _emit(" ")  # DAT_004c3f70
        FUN_004676e0(golfer_id, 0)
        _emit("")  # DAT_004c4944 (empty flush)
        _goto_LAB_0046a713()

    elif hole_word == 3:
        _emit("")  # &DAT_004e3748
        FUN_004676e0(golfer_id, 0)
        _emit(S["s___now_you_re_DATA__004e3734"])
        _goto_LAB_0046a713()

    elif hole_word == 4:
        _emit(S["s_You_prefer_being_DATA__do_you__004e374c"])
        _goto_LAB_0046a713()

    # Default: switch on lie quality bits
    lie = _get_lie_byte(golfer_id) & 3
    if lie == 0:
        _emit(S["s_Great_004e3794"])
    elif lie == 1:
        _emit(S["s_Oh_no_004e378c"])
    elif lie == 2:
        _emit("")  # &DAT_004e3784
    elif lie == 3:
        _emit(S["s_Lovely_004e377c"])

    _goto_switchD_default()


def _case_4(golfer_id: int, param_2: int) -> None:
    """Missed shot or easy shot."""
    global g_text_buffer, g_text_color, g_text_display_flag

    if _get_hole_flags(golfer_id) == 4:
        _emit(S["s_Only_you_could_miss_this_shot_004e3a80"])
        FUN_004676e0(golfer_id, 0)
        _emit_display_flag()
        _emit_color(0x80007D08)
    else:
        _emit_color(0x80007D08)
        _emit(S["s_This_shot_looks_pretty_easy__004e3a60"])


def _case_5_37_38(event_type: int, golfer_id: int,
                   param_2: int, param_3: int) -> None:
    """Hazard reactions (water, trees, sand, etc.)."""
    global g_text_buffer, g_text_color, g_text_display_flag

    hole_word = _get_hole_flags(golfer_id)  # switch on (short)

    # The original C uses a switch with fallthrough cases 0 and 4
    if hole_word in (0, 4):
        if event_type == 5:
            _emit(S["s_Eeek__I_gotta_stay_away_from_the_004e3944"])
        elif event_type == 0x25:
            _emit(S["s_Eeek__I_gotta_hit_it_past_the_004e3968"])
        elif event_type == 0x26:
            _emit(S["s_Eeek__I_gotta_watch_out_for_the_004e3988"])
        else:
            _emit("!  ")  # &DAT_004e393c (with extra spaces)

    elif hole_word == 1:
        _emit(S["s_Careful_of_the_DATA_004e3910"])
        FUN_00467560(golfer_id)
        # goto LAB_0046a2bd — inlined
        _emit_display_flag()

    elif hole_word == 2:
        if (golfer_id & 1) == 0:
            _emit(S["s_Say_hello_to_Mr__DATA_004e38dc"])
            _emit(S["s_for_me_004e38d4"])
        else:
            _emit(S["s_You_re_going_into_the_DATA_004e38f4"])
        _emit(" ")  # DAT_004c3f70
        # goto LAB_0046a2b4 — inlined
        FUN_004676e0(golfer_id, 0)
        _emit_display_flag()

    elif hole_word in (3, 5):
        # uVar17 = 1
        _emit(S["s_Watch_out_for_the_DATA_004e3924"])
        # goto LAB_0046a2b4 with uVar17=1 — inlined
        FUN_004676e0(golfer_id, 1)
        _emit_display_flag()

    # Shared postlogue for sub-cases
    _emit("")  # &DAT_004c4944


def _case_6() -> None:
    """Use the slope on this shot."""
    _emit_color(0x800023E8)
    _emit(S["s_I_ll_use_the_slope_on_this_shot__004e36d4"])


def _case_7(golfer_id: int, param_2: int) -> None:
    """Bridge / terrain interaction."""
    if param_2 != 0:
        _emit(S["s_I_think_I_ve_seen_this_bridge_be_004e2ff0"])
        return

    if not _get_terrain_flag(golfer_id, 0x10000):
        _emit_color(0x800023E8)
        _emit(S["s_I_love_walking_over_this_scenic_b_004e3018"])
    else:
        _emit_color(0x800023E8)
        _emit(S["s_I_love_riding_over_this_scenic_b_004e3040"])

    _goto_LAB_0046c478()


def _case_8() -> None:
    """Course design complaint."""
    _emit_color(0x80007D08)
    _emit(S["s_Who_designed_this_______course__004e36f8"])


def _case_9() -> None:
    """Almost hit by ball."""
    _emit_color(0x80007D08)
    _emit(S["s_Hey__that_ball_almost_hit_me__004e36b4"])


def _case_10(param_2: int) -> None:
    """Must I walk through [object]?"""
    # First copy object name from DAT_00578350[param_2 * 0xc]
    obj_name = _get_object_name(param_2)
    _emit(S["s_Must_I_walk_through_004e369c"])
    _emit(obj_name)
    _emit(" ")  # space

    # Plural detection: if last char is 's', use "these" instead of "this"
    last_char = _get_object_name_last_char(param_2)
    if last_char == 's':
        _emit(S["s_these_004e368c"])
    else:
        _emit(S["s_this_004e3694"])

    _emit_color(0x80007D08)
    # Re-emit object name after the "this/these"
    _emit(obj_name)
    _emit("!")  # &DAT_004c5c0c (exclamation)


def _case_0xB(golfer_id: int, param_2: int) -> None:
    """Check out this [nice/beautiful] [object]."""
    hole_type = _get_hole_flags(golfer_id)

    if hole_type == 1:
        _emit(S["s_Look_at_this_004e2f4c"])
    else:
        _emit(S["s_Check_out_this_004e2f5c"])

    # Choose adjective based on param_2 bit 0x100
    if (param_2 & 0x100) != 0:
        _emit(S["s_nice_004e2f44"])
    else:
        _emit(S["s_beautiful_004e2f38"])

    _emit("! ")  # &DAT_004e393c

    # Hole type 1 → call skill update
    if hole_type == 1:
        tile_id = _get_hole_tile(golfer_id)
        FUN_00467560(tile_id)
        _emit_color(0x800023E8)
    else:
        _emit("")  # &DAT_004c4e60 (generic DATA suffix)
        _emit_color(0x800023E8)


def _case_0xC(param_2: int) -> None:
    """Object interaction."""
    _emit_color(0x80007D08)
    _emit(S["s_Darn_that_stupid_DATA__004e2f20"])


def _case_0xD(golfer_id: int, param_2: int) -> None:
    """Water / hazard reactions."""
    hole_word = _get_hole_flags(golfer_id)

    if hole_word in (2, 4):
        _emit(S["s_Did_I_hear_a_splash_004e2ebc"])
        FUN_004676e0(golfer_id, 0)
        _emit("!")  # &DAT_004c5c0c
        _emit_display_flag()
        _goto_LAB_0046bb15()

    else:
        # Water depth reaction based on tile index % 3
        tile_idx = _get_golfer_tile(golfer_id) % 3
        if tile_idx == 0:
            _emit_color(0x80007D08)
            _emit(S["s_Argh__I_drowned_it__004e2ed4"])
        elif tile_idx == 1:
            _emit_color(0x80007D08)
            _emit(S["s_Did_my_ball_go_for_a_swim__004e2ee8"])
        else:
            # tile_idx == 2
            _emit_color(0x80007D08)
            _emit(S["s_Nooooo__I_m_in_the_drink__004e2f04"])

    _goto_LAB_0046bb15()


def _case_0xE() -> None:
    """Thirsty."""
    _emit_color(0x80007D08)
    _emit(S["s_I_m_getting_a_little_thirsty__004e2e9c"])


def _case_0xF() -> None:
    """Hungry."""
    _emit_color(0x80007D08)
    _emit(S["s_I_m_starting_to_get_hungry__004e2e80"])


def _case_0x10() -> None:
    """Hooked shot."""
    _emit(S["s_Gosh__I_kinda_hooked_that_shot__004e2e2c"])


def _case_0x11() -> None:
    """Sliced shot."""
    _emit(S["s_Oops__I_really_sliced_that_shot__004e2e08"])


def _case_0x12() -> None:
    """Snack break."""
    _emit_color(0x800023E8)
    _emit(S["s_There_s_nothing_like_a_good_snac_004e2de4"])


def _case_0x13_0x17(event_type: int, golfer_id: int,
                     hole_idx: int, param_2: int) -> None:
    """Score / hole result after completing a hole.

    Inner switch on score vs par (iVar11 = hole_score - course_par).
    """
    hole_offset = golfer_id * 0x100
    score = _get_tile_z(hole_idx, hole_offset)
    par = _get_hole_par(hole_idx, 0)
    diff = score - par

    # Inner switch on diff
    if diff == 0:
        _emit(S["s_Par__004e2bc8"])
    elif diff == 1:
        _emit(S["s_Bogey__004e2bc0"])
    elif diff == 2:
        _emit(S["s_Double_Bogey__004e2bb0"])
    elif diff == 3:
        _emit(S["s_Triple_Bogey__004e2ba0"])
    elif diff == -4:
        _emit(S["s_Triple_Eagle__004e2bf4"])
    elif diff == -3:
        _emit(S["s_Double_Eagle__004e2be4"])
    elif diff == -2:
        _emit(S["s_Eagle__004e2bdc"])
    elif diff == -1:
        _emit(S["s_Birdie__004e2bd0"])
    else:
        _emit(S["s_Arggg__004e2b98"])

    hole_flags2 = _get_hole_flags2(hole_idx)

    # Additional commentary logic
    if ((hole_flags2 & 4) != 0 and diff < 2 and golfer_id != 0x98) or \
       (hole_flags2 & 8) != 0 and diff >= 0 and golfer_id != 0x98:
        pass  # continue with comparison logic
    else:
        if event_type != 0x17:
            # Check personality skill flags
            skill_flag = 0
            combo = (golfer_id + hole_idx) & 3
            if combo == 0:
                if (_get_tile_type(hole_idx) & 1) != 0:
                    skill_flag = 0x100
            elif combo == 1:
                if (_get_tile_type(hole_idx) & 2) != 0:
                    skill_flag = 0x200
            elif combo == 2:
                if (_get_tile_type(hole_idx) & 4) != 0:
                    skill_flag = 0x400

            if (skill_flag & hole_flags2) == 0 or diff > 0:
                # Delegate to FUN_00469a20 for generic reaction
                FUN_00469a20(param_2, diff)
                return
            else:
                if skill_flag == 0x100:
                    _emit(S["s_My_length_skill_helps_on_this_ho_004e2ae0"])
                elif skill_flag == 0x200:
                    _emit(S["s_This_hole_rewards_my_accuracy__004e2b04"])
                elif skill_flag == 0x400:
                    _emit(S["s_I_had_to_use_some_imaginative_sh_004e2b24"])
        else:
            # event_type == 0x17: difficulty complaint
            _emit_color(0x80007D08)
            _emit(S["s_This_hole_is_too_hard_easy__004e2b4c"])

    # Alternate branches for too-hard/too-easy
    _emit_color(0x80007D08)


def _case_0x14(param_2: int) -> None:
    """Ugly terrain / building."""
    _emit_color(0x80007D08)
    _emit(S["s_Gee_what_an_ugly_DATA_004e3650"])
    _emit("")  # &DAT_004c4944 (flush)


def _case_0x15() -> None:
    """Tired of waiting."""
    _emit_color(0x80007D08)
    _emit(S["s_I_m_tired_of_waiting_for_these_b_004e3600"])


def _case_0x16(golfer_id: int, param_2: int) -> None:
    """That's [name]'s house!"""
    _emit_color(0x800023E8)
    _emit(S["s_Hey_that_s_004e35f4"])
    # Copy golfer name from DAT_0055d738[param_2 * 0x25]
    _emit(_get_name(0x0055d738, param_2, 0x25))
    _emit(S["s__s_house__004e35e8"])


def _case_0x18() -> None:
    """Something growing here."""
    _emit_color(0x80007D08)
    _emit(S["s_Yuck__there_s_something_growing_h_004e3628"])


def _case_0x19() -> None:
    """Cool foamy beverage."""
    _emit_color(0x800023E8)
    _emit(S["s_Ahhh__a_cool_foamy_beverage__004e2dc4"])


def _case_0x1A(golfer_id: int) -> None:
    """Tired / exhaustion."""
    hole_flags = _get_hole_flags(golfer_id)

    if (hole_flags & 1) == 0:
        _emit(S["s_I_m_starting_to_get_tired__004e2e4c"])
    else:
        _emit(S["s_You_look_a_bit_tired_004e2e68"])
        if hole_flags == 1:
            FUN_00467560(golfer_id)
        else:
            partner_id = _get_hole_tile(golfer_id)
            FUN_004676e0(partner_id, 1)
        _emit_display_flag()
        _emit("")  # &DAT_004c4944


def _case_0x1B() -> None:
    """Bench comfort."""
    _emit_color(0x800023E8)
    _emit(S["s_This_bench_is_so_comfortable__004e2da4"])


def _case_0x1C(golfer_id: int) -> None:
    """Scenery / object appreciation."""
    hole_type = _get_hole_flags(golfer_id)

    if hole_type in (1, 3, 5):
        _emit(S["s_Look_at_that_lovely_DATA_004e2f6c"])
        if hole_type == 1:
            tile_id = _get_hole_tile(golfer_id)
            FUN_00467560(tile_id)
        else:
            partner_id = _get_hole_tile(golfer_id)
            FUN_004676e0(partner_id, 1)
        _emit("")  # &DAT_004c4944
        _emit_color(0x800023E8)
    else:
        partner_status = FUN_0046c940(golfer_id)
        if partner_status == 0:
            if (_get_lie_byte(golfer_id) & 1) == 0:
                _emit_color(0x800023E8)
                _emit(S["s_My__that_s_a_lovely_DATA__004e2f88"])
            else:
                _emit_color(0x800023E8)
                _emit(S["s_Oh__what_a_nice_DATA__004e2fa4"])
        elif (_get_lie_byte(golfer_id) & 1) == 0:
            _emit_color(0x800023E8)
            _emit(S["s_I_am_liking_that_DATA__004e2fbc"])
        else:
            _emit_color(0x800023E8)
            _emit(S["s_Gee__that_s_a_cool_DATA__004e2fd4"])


def _case_0x1D() -> None:
    """Course variety."""
    _emit_color(0x800023E8)
    _emit(S["s_I_like_the_variety_on_this_cours_004e3528"])


def _case_0x1E(hole_idx: int) -> None:
    """Hole similarity / repetition."""
    _emit_color(0x80007D08)

    flags2 = _get_hole_flags2(hole_idx)
    iVar6 = hole_idx * 0x208

    if (flags2 & 0x20) == 0 or (_get_terrain_flag(hole_idx, 0x20) == 0):
        if (flags2 & 0x40) == 0 or (_get_terrain_flag(hole_idx, 0x40) == 0):
            # Check if hole par matches course par
            hole_par = _get_hole_par(hole_idx, 0)
            course_par = _get_course_par(hole_idx, 0)
            if hole_par == course_par:
                _emit(S["s_Wow__yet_another_par_004e34d8"])
                _emit(_itoa(hole_par))
                _emit("")  # &DAT_004c4944
            else:
                _emit(S["s_This_hole_is_like_the_last_hole__004e34b4"])
        else:
            _emit(S["s_Yawn__another_dogleg_right__004e34f0"])
    else:
        _emit(S["s_Great__another_dogleg_left__004e350c"])


def _case_0x1F(golfer_id: int) -> None:
    """Excessive feature commentary."""
    lie = _get_lie_byte(golfer_id) & 3

    if lie == 0:
        _emit(S["s_I_ve_never_seen_such_DATA__004e39f4"])
    elif lie == 1:
        _emit(S["s_I_see_a_ton_of_DATA__004e3a48"])
    elif lie == 2:
        _emit(S["s_Look_at_all_the_DATA__004e3a10"])
    elif lie == 3:
        _emit(S["s_Could_there_be_any_more_DATA__004e3a28"])


def _case_0x20() -> None:
    """Strategy: go long or play safe."""
    _emit_color(0x800023E8)
    _emit(S["s_Should_I_go_long_or_play_it_safe_004e39d0"])


def _case_0x21() -> None:
    """Strategy: go left or right."""
    _emit_color(0x800023E8)
    _emit(S["s_Hmmm__should_I_go_left_or_right__004e39ac"])


def _case_0x22(param_2: int) -> None:
    """How-are-you response."""
    if param_2 == 0:
        _emit(S["s_Great__thanks_for_asking__004e3234"])
    elif param_2 == 1:
        _emit(S["s_Good__thanks_for_noticing__004e3250"])
    elif param_2 == 2:
        _emit(S["s_Thanks_for_the_encouragement__004e326c"])
    _emit_color(0x800023E8)


def _case_0x23(golfer_id: int) -> None:
    """Angry / frustrated outburst."""
    # Mood index = (DAT_00834170[golfer_id * 0x2d] // 0x50) & 3
    mood = (_get_golfer_mood(golfer_id) // 0x50) & 3
    if mood == 0:
        _emit(S["s_I_will_never_play_this_game_agai_004e3210"])
    elif mood == 1:
        _emit(S["s_I_hate_my_clubs__I_hate_my_hat__I_004e31e0"])
    elif mood == 2:
        _emit(S["s_I_am_so_mad_I_could_just_scream__004e31bc"])
    elif mood == 3:
        _emit(S["s_Come_on__you_want_a_piece_of_me__004e3198"])
    _emit_color(0x80007D08)


def _case_0x24(param_2: int) -> None:
    """Crazy / flipped-out reaction."""
    if param_2 == 0:
        _emit(S["s_Whoa__she_s_flipped_out__004e3164"])
    else:
        _emit(S["s_That_guy_s_gone_crazy__004e3180"])
    _emit_color(0x80007D08)


def _case_0x27(golfer_id: int) -> None:
    """Scared a creature."""
    if FUN_0046c940(golfer_id) != 0:
        _emit(S["s_I_guess_I_scared_that_little_DAT_004e3090"])
    else:
        _emit(S["s_I_think_I_frightened_that_poor_D_004e3068"])
    _emit_color(0x800023E8)


def _case_0x28(golfer_id: int, param_2: int) -> None:
    """Exclamation: Oh mama / Oh yeah / Smoker / Screamer / Nailed it."""
    # (int)(short)DAT_0057956e[golfer*0x80] modulo 8
    tile_val = _get_golfer_tile(golfer_id)
    exclamation = tile_val & 7

    if exclamation == 0:
        _emit(S["s_Oh_mama__004e3158"])
    elif exclamation == 1:
        _emit(S["s_Ohh_baby__004e314c"])
    elif exclamation == 2:
        _emit("")  # &DAT_004e3144
    elif exclamation == 3:
        _emit(S["s_Gadzooks__004e3138"])
    elif exclamation == 4:
        _emit(S["s_Oh_yeah__004e312c"])
    elif exclamation == 5:
        _emit(S["s_A_smoker__004e3120"])
    elif exclamation == 6:
        _emit(S["s_A_screamer__004e3114"])
    elif exclamation == 7:
        _emit(S["s_Nailed_it__004e3108"])

    if param_2 > 0:
        _emit("!")  # &DAT_004c4974
        FUN_00407700(0, 0, param_2)
        _emit("!")  # &DAT_004c59e0


def _case_0x29(golfer_id: int) -> None:
    """Clean / dirty club reaction."""
    if (golfer_id & 1) == 0:
        _emit(S["s_Clean_and_shiny__004e30b4"])
    else:
        _emit(S["s_Now_I_ll_hit_it_straight__004e30c8"])


def _case_0x2A(golfer_id: int) -> None:
    """Lucky bounce."""
    _emit(S["s_Lucky_bounce__004e30f8"])
    FUN_004676e0(golfer_id, 0)
    _emit_display_flag()


def _case_0x2B() -> None:
    """Steep slope complaint."""
    _emit_color(0x80007D08)
    _emit(S["s_Must_I_walk_up_this_steep_slope__004e3668"])


def _case_0x2C(param_2: int) -> None:
    """Never mind — nice."""
    _emit(S["s_Never_mind___nice_004e30e4"])
    FUN_00407700(0, 0, param_2)
    _emit("!")  # &DAT_004c59e0
    _emit_color(0x800023E8)


def _case_0x2D() -> None:
    """Tricky uphill shot."""
    _emit(S["s_Hmmm__a_tricky_uphill_shot__004e3b3c"])


def _case_0x2E() -> None:
    """Nice downhill shot."""
    _emit_color(0x800023E8)
    _emit(S["s_OK__a_nice_downhill_shot__004e3b20"])


def _case_0x2F(golfer_id: int) -> None:
    """Partner scolding."""
    lie = _get_lie_byte(golfer_id) & 3
    if lie == 0:
        _emit(S["s_PARTNER__your_attitude_stinks__004e3b00"])
    elif lie == 1:
        _emit(S["s_Stop_whining_and_play__PARTNER__004e3ae0"])
    elif lie == 2:
        _emit(S["s_Talk_to_the_hand__PARTNER__004e3ac4"])
    elif lie == 3:
        _emit(S["s_Quiet_PARTNER__I_m_concentrating_004e3aa0"])

    _emit_color(0x80007D08)


def _case_0x30() -> None:
    """What do you do, partner?"""
    _emit(S["s_So_what_do_you_do__PARTNER__004e2c0c"])


def _case_0x31(golfer_id: int) -> None:
    """Golfer bio / introduction."""
    _emit("")  # &DAT_004e2c04 (exclamation?)
    golfer_tile = _get_golfer_tile(golfer_id)
    _emit(_get_name(0x004d6088, golfer_tile, 0x8c))
    _emit("")  # &DAT_004c4944 (flush)


def _case_0x32(golfer_id: int, param_2: int) -> None:
    """Skill training facility interaction."""
    _emit_reset_buffer()
    tile_id = _get_hole_tile(golfer_id)
    sub_type = param_2 & 0xF
    skill_type = param_2 >> 4
    flag = (_get_terrain_flag(golfer_id, 1 << 20) & 1)
    FUN_00466b70(tile_id, sub_type, skill_type, flag)


def _case_0x33(golfer_id: int) -> None:
    """Driving range commentary."""
    mood = (_get_golfer_mood(golfer_id) & 8)
    if mood == 0:
        _emit(S["s_really_helped_my_distance__004e2d2c"])
    elif _get_driving_range_level() == 1:
        _emit(S["s_This_new_driving_range_has_004e2d48"])
    elif _get_driving_range_level() == 2:
        _emit(S["s_This_upgraded_driving_range_has_004e2d64"])
    elif _get_driving_range_level() == 3:
        _emit(S["s_Our_deluxe_driving_range_has_004e2d84"])


def _case_0x34(golfer_id: int) -> None:
    """Pro shop commentary."""
    mood = (_get_golfer_mood(golfer_id) & 8)
    if mood == 0:
        _emit(S["s_really_improved_my_accuracy__004e2c28"])
    elif _get_pro_shop_level() == 1:
        _emit(S["s_This_new_pro_shop_has_004e2c48"])
    elif _get_pro_shop_level() == 2:
        _emit(S["s_This_upgraded_pro_shop_has_004e2c60"])
    elif _get_pro_shop_level() == 3:
        _emit(S["s_Our_deluxe_pro_shop_has_004e2c7c"])


def _case_0x35(golfer_id: int) -> None:
    """Putting green commentary."""
    mood = (_get_golfer_mood(golfer_id) & 8)
    if mood == 0:
        _emit(S["s_really_improved_my_putting__004e2cb4"])
    elif _get_putting_green_level() == 1:
        _emit(S["s_This_new_putting_green_has_004e2cd0"])
    elif _get_putting_green_level() == 2:
        _emit(S["s_This_upgraded_putting_green_has_004e2cec"])
    elif _get_putting_green_level() == 3:
        _emit(S["s_Our_deluxe_putting_green_has_004e2d0c"])


def _case_0x36(param_2: int) -> None:
    """I'll use my [club] for this shot."""
    _emit(S["s_I_ll_use_my_004e2ca4"])
    FUN_0040a9a0(param_2)  # resolves club name into buffer
    _emit(S["s_for_this_shot__004e2c94"])
    if _get_round_count() < 2:
        _emit_color(0x800023E8)


def _case_0x37() -> None:
    """Draw shot (right to left)."""
    _emit(S["s_I_ll_draw_this_shot_from_right_t_004e3598"])


def _case_0x38() -> None:
    """Fade shot (left to right)."""
    _emit(S["s_I_ll_fade_this_shot_from_left_to_004e35c0"])


def _case_0x39() -> None:
    """High soft shot."""
    _emit(S["s_I_ll_bring_this_ball_in_high_and_004e3570"])


def _case_0x3A(golfer_id: int, param_2: int) -> None:
    """Conversational response."""
    if param_2 == 0:
        if (golfer_id & 1) == 0:
            _emit(S["s_Hey__I_m_trying_to_play_golf_her_004e345c"])
        else:
            _emit(S["s_Ummm__fine_thanks__004e3480"])
    elif param_2 == 1:
        _emit(S["s_Lousy__now_that_you_mention_it__004e3494"])
    _goto_LAB_0046c478()


def _case_0x3B(golfer_id: int, hole_idx: int, param_2: int) -> None:
    """Hole history / trivia."""
    tile_short = _get_golfer_tile(golfer_id)
    prev_score = _get_tile_z(hole_idx, tile_short * 0x2c)
    if prev_score == 0:
        hole_flags2 = _get_hole_flags2(hole_idx)
        if (hole_flags2 & 1) == 0:
            _emit(S["s_I_had_a_004e32a8"])
            _emit(_itoa(_get_hole_par(hole_idx, tile_short * 0x2c)))
            _emit(S["s_on_this_hole_last_time__004e328c"])
        elif (hole_flags2 & 2) == 0:
            _emit(S["s_You_know_004e32e0"])
            FUN_004676e0(golfer_id ^ 1, 0)
            _emit(" ")  # &DAT_004c52b8
            lie = _get_lie_byte(golfer_id)
            if (lie & 1) == 0:
                _emit(S["s_they_call_this_hole_004e32b4"])
                FUN_00407280(hole_idx)
                _emit("")  # &DAT_004c4944
            else:
                FUN_00407280(hole_idx)
                _emit(S["s_is_a_top_100_hole__004e32cc"])
        else:
            _emit(S["s_This_hole_is_rated_in_the_top_18_004e32ec"])
        _goto_LAB_0046c43b()
    else:
        _emit_color(0x800023E8)
        _emit(S["s_I_ve_always_liked_this_hole__004e3310"])


def _case_0x3C(param_2: int) -> None:
    """Low running shot."""
    _emit(S["s_I_ll_run_this_ball_low_004e3558"])
    if _get_object_name_last_char(param_2) == '\r':
        _emit(S["s_under_the_004e354c"])
        _emit(_get_object_name(param_2))
    _emit("")  # &DAT_004c4944


def _case_0x3D(golfer_id: int, param_2: int) -> None:
    """Small talk / conversation."""
    if param_2 == 3:
        if (golfer_id & 1) == 0:
            _emit(S["s_Fine__004e3438"])
        else:
            _emit(S["s_How_are_you_today__PARTNER__004e3440"])
    elif param_2 == 4:
        if (golfer_id & 1) == 0:
            _emit(S["s_They_belong_to_my_brother_in_law_004e33fc"])
        else:
            _emit(S["s_Are_those_new_clubs__004e3420"])
    elif param_2 == 5:
        if (golfer_id & 1) == 0:
            _emit(S["s_Sure_does__004e33cc"])
        else:
            _emit(S["s_Looks_like_a_great_day_for_golf__004e33d8"])
    elif param_2 == 6:
        if (golfer_id & 1) == 0:
            _emit(S["s_It_doesn_t_get_any_better_than_t_004e33a4"])
        else:
            _emit(S["s_Listen_to_those_birds_singing__004e3384"])
    elif param_2 == 7:
        if (golfer_id & 1) == 0:
            _emit(S["s_It_s_magic_time__004e3358"])
        else:
            _emit(S["s_Prepare_to_be_amazed__004e336c"])
    else:
        if (golfer_id & 1) == 0:
            _emit(S["s_I_don_t_care__004e3330"])
        else:
            _emit(S["s_Shall_I_tee_off_first__004e3340"])


def _case_0x3E(golfer_id: int) -> None:
    """Praise the Lord quote (personality-based)."""
    tile_idx = _get_golfer_tile(golfer_id)
    # Read personality offset byte at DAT_004d60aa[tile_idx * 0x230]
    personality_offset = 0  # placeholder
    # Adjust offset based on partner status
    partner_status = FUN_0046c940(golfer_id)
    if partner_status == 0:
        personality_offset += 0x14
    # String table at DAT_004d55ec + personality_offset * 0x44
    _emit(S.get("s_Praise_the_Lord_for_this_fabulou_004d55ec",
                "Praise the Lord for this fabulous course!"))


def _case_0x3F(golfer_id: int) -> None:
    """Pre-game / tournament comments based on personality."""
    personality_type = (_get_tile_type(golfer_id) & 0xE0)
    if personality_type == 0x20:
        # Regular personality — 4 types
        ptype = golfer_id & 3
        if ptype == 0:
            _emit(S["s_I_brought_my_A_game_today__004e3c78"])
        elif ptype == 1:
            _emit(S["s_Might_as_well_just_give_me_the_t_004e3c50"])
        elif ptype == 2:
            _emit(S["s_I_hope_my_caddie_counted_my_club_004e3c2c"])
        elif ptype == 3:
            _emit(S["s_You_losers_might_as_well_go_home_004e3c08"])
    else:
        # Other personality — 4 types
        ptype = golfer_id & 3
        if ptype == 0:
            _emit(S["s_It_s_good_to_be_back_on_the_cour_004e3be4"])
        elif ptype == 1:
            _emit(S["s_Wasn_t_that_a_great_tournament__P_004e3bb8"])
        elif ptype == 2:
            _emit(S["s_I_ve_already_got_tickets_for_the_004e3b84"])
        elif ptype == 3:
            _emit(S["s_I_think_I_could_have_won_that_to_004e3b58"])


def _case_0x41() -> None:
    """Didn't see where shot landed."""
    _emit(S["s_I_didn_t_see_where_that_shot_lan_004e38ac"])
    if _get_round_count() > 1:
        _emit_color(0x80007D08)


# ═══════════════════════════════════════════════════════════════════
# Internal goto targets
# ═══════════════════════════════════════════════════════════════════

def _goto_LAB_0046a713() -> None:
    """Shared postlogue for cases 3, etc."""
    global g_text_buffer, g_text_color, g_text_display_flag
    _emit("")  # &DAT_004c4944 — re-emit from buffer start
    _emit_display_flag()
    _emit_color(0x80007D08)


def _goto_switchD_default() -> None:
    """Default fallthrough for case 3."""
    global g_text_buffer, g_text_color
    _emit_color(0x80007D08)
    _emit(S["s___now_I_m_DATA__004e376c"])


# Note: _goto_LAB_0046a2b4_with_flag and _goto_LAB_0046a2b4 are called
# from _case_5_37_38 where `golfer_id` is in the enclosing scope.
# They are inlined in the C code at the LAB_* labels; the golfer_id
# used by the calls to FUN_004676e0/FUN_00467560 comes from the
# encompassing case block's scope.


def _goto_LAB_0046c478() -> None:
    """Jump to the post-switch assembly section."""
    pass
    # This is a goto to the final assembly block — handled by the
    # caller in _post_switch_assembly


def _goto_LAB_0046bb15() -> None:
    """Set colour for water hazard path."""
    _emit_color(0x80007D08)


def _goto_LAB_0046c43b() -> None:
    """Postlogue for various cases that set display flag."""
    _emit_display_flag()


# ═══════════════════════════════════════════════════════════════════
# Post-switch assembly (LAB_0046c478)
# ═══════════════════════════════════════════════════════════════════

def _post_switch_assembly(event_type: int, golfer_id: int,
                           param_2: int, hole_idx: int) -> None:
    """Assemble the final display string from local buffers,
    replace MYNAME / PARTNER / DATA placeholders, and copy to output.

    This corresponds to LAB_0046c478 through the end of the function
    (lines 5789-6112 in the original C).

    NOTE: For now this is a simplified placeholder that preserves
    the buffer. The full implementation requires access to the
    object-name tables (DAT_00578350, DAT_00578360, etc.) which
    are not yet connected to backing data.
    """
    global g_text_buffer, g_text_color

    # In the original C, this section:
    # 1. Copies g_text_buffer → local_400 (text from case handler)
    # 2. Replaces MYNAME/PARTNER placeholders
    # 3. Appends object name from param_2
    # 4. Finalises the text into local_480

    # Simplified: the text from the case handler is already in the buffer.
    # Placeholder replacement will be done when data tables are available.
    pass


# ═══════════════════════════════════════════════════════════════════
# Convenience wrapper
# ═══════════════════════════════════════════════════════════════════

def process_event(event_type: int, param_2: int = 0,
                   param_3: int = 0, golfer_id: int = 0) -> str:
    """Process an event and return the resulting text.

    This is a convenience wrapper that resets state before handling.
    """
    global g_text_buffer, g_text_color, g_text_display_flag

    g_text_buffer = ""
    g_text_color = 0x80006318
    g_text_display_flag = False

    handle_golf_event(event_type, param_2, param_3, golfer_id)

    return g_text_buffer

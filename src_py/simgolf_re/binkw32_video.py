"""
binkw32_video.py — Pure Python reimplementation of Bink Video DLL (binkw32.dll)

Translated from decompiled C (Ghidra) at ref/decompiled/ghidra/binkw32/all_decompiled.c

Bink is a video format by RAD Game Tools. This module handles:
  - Bink file loading (.bik)
  - Frame decompression
  - Audio/video sync
  - Palette management
  - YUV blitting to various buffer formats

NOTE: This is a structural translation of the decompiled C. The actual pixel
decoding / YUV-blitting inner loops are stubs that should be replaced with
numpy-accelerated implementations for real use.
"""

from __future__ import annotations

import ctypes
import struct
import time
import threading
from array import array
from dataclasses import dataclass, field
from typing import Any, Optional

# ---------------------------------------------------------------------------
# Bink file format constants
# ---------------------------------------------------------------------------

# Bink FourCC codes
BINK_ID_OLD = 0x664B4942  # 'BIKf' — Bink 1 (old)
BINK_ID_STD = 0x674B4942  # 'BIKg' — Bink 1 (standard)
BINK_ID_NEW = 0x684B4942  # 'BIKh' — Bink 2 (new)
BINK_ID_ALPHA = 0x694B4942  # 'BIKi' — Bink with alpha

# Bink flags (param_2 to BinkOpen)
BINK_OPEN_FLAGS = {
    'SURFACE': 0x00000000,      # No scaling, no stretching
    'HALF': 0x10000000,          # 1/2 size
    'DOUBLE': 0x20000000,        # Double size
    'SCALED': 0x30000000,        # Custom scaled
    'SMOOTHSCALED': 0x40000000,  # Smooth scaled
    'SMOOTHSCALED2X': 0x50000000,  # Smooth scaled 2x
    'ASMSMOOTHSCALE': 0x60000000,  # ASM smooth scale
    'ASMSMOOTHSCALED2X': 0x70000000,  # ASM smooth scale 2x
    'FULLSCREEN': 0x00000008,   # Full-screen mode
    'FULLSCREENMODE': 0x00000004,  # Use full-screen mode
    'SETFRAMERATE': 0x00001000,  # Set frame rate
    'SETVOLUME': 0x00002000,     # Set volume
    'SETPANNING': 0x00004000,    # Set panning
    'IMMEDIATE': 0x00000001,     # Immediate open
    'FROMMEMORY': 0x04000000,    # Open from memory
    'NOSOUND': 0x08000000,       # No sound
    'NOTHREADEDIO': 0x10000000,  # No threaded IO
}

# Bink frame flags
BINK_FRAME_KEYFRAME = 0x01  # Key frame flag (bit 0 of frame info)
BINK_FRAME_DELTA = 0x02     # Delta frame

# YUV blit pixel format IDs
YUV_24BPP = 1
YUV_24RBPP = 2
YUV_32BPP = 3
YUV_32RBPP = 4
YUV_32ABPP = 5
YUV_32RABPP = 6
YUV_16A4BPP = 7
YUV_16A1BPP = 8
YUV_16BPP = 9
YUV_16BPP_ALT = 10
YUV_16BPP_ALT2 = 11
YUV_16BPP_ALT3 = 12
YUV_YUY2 = 0x0D
YUV_UYVY = 0x0E
YUV_YV12 = 0x0F

# Bink summary structure indices
BINKSUMMARY_WIDTH = 0
BINKSUMMARY_HEIGHT = 1
BINKSUMMARY_FRAMES = 3
BINKSUMMARY_FRAMERATE_DEN = 4
BINKSUMMARY_FRAMERATE_NUM = 5
BINKSUMMARY_FRAMENUM = 8
BINKSUMMARY_TRACKS = 10
BINKSUMMARY_TOTALSIZE = 26


# ---------------------------------------------------------------------------
# Bink I/O structure (BINKIO)
# ---------------------------------------------------------------------------

@dataclass
class BinkIO:
    """I/O callback table for Bink file reading."""
    open_fn: Any = None
    close_fn: Any = None
    read_fn: Any = None
    set_fn: Any = None


# ---------------------------------------------------------------------------
# Bink track structure
# ---------------------------------------------------------------------------

@dataclass
class BinkTrack:
    """An audio track within a Bink file."""
    size: int = 0               # uncompressed data size
    bits_per_sample: int = 16   # 8 or 16
    channels: int = 1           # 1 or 2
    max_size: int = 0           # max compressed size
    source: Any = None          # buffer pointer
    index: int = 0              # track index
    file: 'Bink' = None        # owning Bink


# ---------------------------------------------------------------------------
# Summary structure
# ---------------------------------------------------------------------------

@dataclass
class BinkSummary:
    """Playback summary returned by BinkGetSummary."""
    width: int = 0
    height: int = 0
    total_frames: int = 0
    frame_rate_num: int = 0
    frame_rate_den: int = 0
    frame_num: int = 0
    tracks: int = 0
    total_size: int = 0
    # extended fields
    dropped_frames: int = 0
    total_frames_played: int = 0

    @classmethod
    def from_bink(cls, b: 'Bink') -> 'BinkSummary':
        return cls(
            width=b.width,
            height=b.height,
            total_frames=b.total_frames,
            frame_rate_num=b.frame_rate_div,
            frame_rate_den=b.frame_rate,
            frame_num=b.frame_num,
            tracks=b.tracks,
            total_size=b.total_size,
            dropped_frames=b.dropped_frames,
            total_frames_played=b.frames_played,
        )


@dataclass
class BinkRealtime:
    """Real-time playback statistics."""
    total_frames: int = 0
    frame_rate: int = 0
    playback_rate: int = 0
    frames_dropped: int = 0
    avg_sync: int = 0
    total_play_time: int = 0
    frame_num: int = 0


# ---------------------------------------------------------------------------
# The main Bink structure (equivalent to the C struct ~ 0x3A4 bytes)
# ---------------------------------------------------------------------------

@dataclass
class Bink:
    """Main Bink playback object — corresponds to the C struct accessed
    via pointer offsets throughout the decompiled code.

    The C struct is approximately 0x3A4 bytes (932 int32 slots).
    We store the most important fields explicitly.
    """
    # Frame info (int[0xE9] at offset 0)
    width: int = 0                      # [0x00] video width
    height: int = 0                     # [0x01] video height
    total_frames: int = 0               # [0x02]
    frame_num: int = 0                  # [0x03] current frame (1-based)
    frame_num_displayed: int = 0        # [0x04]
    frame_rate: int = 0                 # [0x05] frame rate denominator
    frame_rate_div: int = 0             # [0x06] frame rate numerator?

    # Bink flags
    flags: int = 0                      # [0x08]
    info_flags: int = 0                 # [0x09]

    # File size / frame table
    file_size: int = 0                  # [0x0A]
    tracks: int = 0                     # [0x0B]
    largest_frame_size: int = 0          # [0x0C]

    # Current frame rect (in pixels)
    frame_rect_x: int = 0               # [0x0D]
    frame_rect_y: int = 0               # [0x0E]
    frame_rect_w: int = 0               # [0x0F]
    frame_rect_h: int = 0               # [0x10]

    # Video internal dimensions
    video_width: int = 0                # [0x28] actual video width
    video_height: int = 0               # [0x24] actual video height

    # YUV plane sizes
    y_plane_w: int = 0                  # [0x30C]
    y_plane_h: int = 0                  # [0x310]
    y_plane_stride: int = 0             # [0x314]
    uv_plane_w: int = 0                 # [0x308]
    uv_plane_h: int = 0                 # [0x300]
    plane_area: int = 0                 # [0x2FC]

    # Frame table pointer
    frame_table: list[int] = field(default_factory=list)
    frame_table_sorted: list[int] = field(default_factory=list)

    # Plane buffers (Y, U, V)
    y_buf: Optional[bytearray] = None
    u_buf: Optional[bytearray] = None
    v_buf: Optional[bytearray] = None

    # Decompressed frame buffer (two alternating buffers for double-buffering)
    plane_buf_a: Optional[bytearray] = None
    plane_buf_b: Optional[bytearray] = None
    plane_buf_active: int = 0

    # Palette (used for 8-bit frames)
    palette: list[int] = field(default_factory=list)

    # I/O callbacks (for memory or custom I/O)
    io: BinkIO = field(default_factory=BinkIO)
    io_ptr: Any = None  # pointer to raw I/O struct (list of ints for vtable)

    # Audio track info
    audio_tracks: list[Any] = field(default_factory=list)
    audio_track_types: list[int] = field(default_factory=list)
    audio_track_max_sizes: list[int] = field(default_factory=list)
    audio_track_ids: list[int] = field(default_factory=list)
    current_audio_track: int = -1  # [0x7B]

    # Timing
    start_time: int = 0
    paused: bool = False
    frame_timer: int = 0
    frame_interval: int = 0  # in ms

    # Statistics
    frames_played: int = 0
    dropped_frames: int = 0
    skipped_frames: int = 0
    total_size: int = 0

    # Threading (since the C DLL uses a background thread for IO)
    _lock: Any = field(default_factory=threading.Lock)
    _decompress_thread: Optional[threading.Thread] = None

    # Internal C-like fields (for faithful translation)
    # These map to specific array indices used by the C code
    _raw: list = field(default_factory=lambda: [0] * 0xE9)

    # C struct access simulation — int array indexed by word offset
    _data: list = field(default_factory=lambda: [0] * 400)

    def __getitem__(self, idx: int) -> int:
        """Simulate C pointer dereference `param_1[idx]`."""
        if idx < len(self._data):
            return self._data[idx]
        return 0

    def __setitem__(self, idx: int, val: int):
        """Simulate C pointer write `param_1[idx] = val`."""
        while idx >= len(self._data):
            self._data.append(0)
        self._data[idx] = val

    def get_ptr(self):
        """Return self to simulate a C pointer."""
        return self

    def _seek_frame(self, target_frame: int) -> bool:
        """Internal seek — sets up frame streaming for the given frame."""
        # Stub: In the real DLL this sets the IO position and prepares decompression
        self.frame_num = target_frame
        return True


# ---------------------------------------------------------------------------
# Global state (equivalent to the .data / .bss globals in the DLL)
# ---------------------------------------------------------------------------

_g_last_error: str = ""
_g_sound_system: Any = None
_g_sound_open: Any = None
_g_frame_rate: int = -1
_g_frame_rate_div: int = 0
_g_simulate: int = 0xFFFFFFFF
_g_sound_track: int = 0xFFFFFFFF
_g_io_size: int = -1
_g_io_callback: Any = None
_g_io_buffer_size: int = 0

# DirectDraw surface globals (BinkBuffer)
_g_dd_surface: Any = None
_g_dd: Any = None
_g_dd_caps: int = 0

# Mouse cursor tracking
_g_cursor_hidden: int = 0
_g_cursor_software: int = 0
_g_last_cursor: Any = None
_g_last_cursor_hotspot_x: int = 0
_g_last_cursor_hotspot_y: int = 0

# Screen metrics
_g_screen_width: int = 0
_g_screen_height: int = 0
_g_screen_depth: int = 0
_g_bpp: int = 0


# ---------------------------------------------------------------------------
# Helper functions
# ---------------------------------------------------------------------------

def _rad_timer_read() -> int:
    """Simulate RADTimerRead — returns a tick count in ms."""
    return int(time.time() * 1000)


def _bink_set_error(msg: str):
    """Set the last Bink error string."""
    global _g_last_error
    _g_last_error = msg


def _bink_get_error() -> str:
    """Get the last Bink error string."""
    return _g_last_error


def _rad_malloc(size: int) -> Optional[bytearray]:
    """Simulate radmalloc with alignment handling."""
    if size == 0 or size == 0xFFFFFFFF:
        return None
    return bytearray(size)


def _rad_free(buf: Any):
    """Simulate radfree."""
    pass  # Python GC handles this


# ---------------------------------------------------------------------------
# Bink file loading
# ---------------------------------------------------------------------------

def _read_bink_header(data: bytes) -> dict:
    """Parse the Bink file header from raw bytes.

    Bink header (32 bytes):
        Offset  Size  Description
        0       4     FourCC ('BIKf', 'BIKg', 'BIKh', 'BIKi')
        4       4     File size (including header)
        8       4     Number of frames
        12      4     Largest frame size (including header)
        16      4     Flags
        20      2     Width
        22      2     Height
        24      4     Frame rate (numerator/denominator depending on version)
        28      4     Audio tracks / frame rate denominator
    """
    if len(data) < 32:
        raise ValueError("Data too small for Bink header")

    fourcc = struct.unpack_from('<I', data, 0)[0]
    file_size = struct.unpack_from('<I', data, 4)[0]
    num_frames = struct.unpack_from('<I', data, 8)[0]
    largest_frame_size = struct.unpack_from('<I', data, 12)[0]
    flags = struct.unpack_from('<I', data, 16)[0]
    width = struct.unpack_from('<H', data, 20)[0]
    height = struct.unpack_from('<H', data, 22)[0]

    # Frame rate and tracks differ by version
    frame_rate = 0
    frame_rate_div = 0
    tracks = 0

    if fourcc in (BINK_ID_OLD, BINK_ID_OLD):
        # BIKf: frame_rate is denominator, frame_rate_div is numerator
        frame_rate = struct.unpack_from('<I', data, 24)[0]
        frame_rate_div = struct.unpack_from('<I', data, 28)[0]
    elif fourcc == BINK_ID_STD:
        # BIKg: frame_rate, frame_rate_div
        frame_rate = struct.unpack_from('<I', data, 24)[0]
        tracks = struct.unpack_from('<I', data, 28)[0]
        frame_rate_div = 1000
    else:
        # BIKh / BIKi
        frame_rate = struct.unpack_from('<I', data, 24)[0]
        tracks = struct.unpack_from('<I', data, 28)[0]
        frame_rate_div = 1000

    return {
        'fourcc': fourcc,
        'file_size': file_size,
        'num_frames': num_frames,
        'largest_frame_size': largest_frame_size,
        'flags': flags,
        'width': width,
        'height': height,
        'frame_rate': frame_rate,
        'frame_rate_div': frame_rate_div,
        'tracks': tracks,
    }


def _read_frame_table(data: bytes, num_frames: int, frame_offset: int) -> list[int]:
    """Read the frame offset/size table from Bink data."""
    table = []
    for i in range(num_frames):
        off = frame_offset + i * 4
        if off + 4 > len(data):
            break
        entry = struct.unpack_from('<I', data, off)[0]
        table.append(entry)
    return table


def bink_open(filename_or_data: Any, flags: int = 0) -> Optional[Bink]:
    """Open a Bink file.

    Args:
        filename_or_data: Either a file path (str) or bytes object with
                          Bink data (for in-memory playback).
        flags: Bitfield of BinkOpen flags.

    Returns:
        A Bink instance, or None on failure.
    """
    # Read file data
    if isinstance(filename_or_data, bytes):
        data = filename_or_data
    elif isinstance(filename_or_data, str):
        with open(filename_or_data, 'rb') as f:
            data = f.read()
    else:
        _bink_set_error("Invalid file parameter.")
        return None

    if len(data) < 32:
        _bink_set_error("Not a Bink file.")
        return None

    hdr = _read_bink_header(data)

    # Validate FourCC
    if hdr['fourcc'] not in (BINK_ID_OLD, BINK_ID_STD, BINK_ID_NEW, BINK_ID_ALPHA):
        _bink_set_error("Not a Bink file.")
        return None

    if hdr['num_frames'] == 0:
        _bink_set_error("The file doesn't contain any compressed frames yet.")
        return None

    # -- Create the Bink object --
    bink = Bink()
    bink.width = hdr['width']
    bink.height = hdr['height']
    bink.total_frames = hdr['num_frames']
    bink.frame_rate = hdr['frame_rate']
    bink.frame_rate_div = hdr['frame_rate_div']
    bink.file_size = hdr['file_size']
    bink.flags = flags
    bink.tracks = hdr['tracks']
    bink.total_size = hdr['file_size']
    bink.start_time = _rad_timer_read()

    # Set video dimensions
    bink.video_width = hdr['width']
    bink.video_height = hdr['height']

    # Frame table offset (after header + track info)
    # Header is 40 bytes for BIKf/g, 44 for BIKh/i
    hdr_size = 40 if hdr['fourcc'] in (BINK_ID_OLD, BINK_ID_STD) else 44

    # Track info follows header
    track_info_size = 0
    track_offsets = []
    if hdr['tracks'] > 0:
        # Read track types (4 bytes each)
        for i in range(hdr['tracks']):
            off = hdr_size + i * 4
            if off + 4 > len(data):
                break
            track_type = struct.unpack_from('<I', data, off)[0]
            bink.audio_track_types.append(track_type)
        # Track max sizes follow
        track_info_offset = hdr_size + hdr['tracks'] * 4
        for i in range(hdr['tracks']):
            off = track_info_offset + i * 4
            if off + 4 > len(data):
                break
            max_sz = struct.unpack_from('<I', data, off)[0]
            bink.audio_track_max_sizes.append(max_sz)
        # Track IDs follow
        track_id_offset = track_info_offset + hdr['tracks'] * 4
        for i in range(hdr['tracks']):
            off = track_id_offset + i * 4
            if off + 4 > len(data):
                break
            tid = struct.unpack_from('<I', data, off)[0]
            bink.audio_track_ids.append(tid)
        track_info_size = hdr['tracks'] * 4 * 3

    # Frame table starts after header + track info
    frame_table_offset = hdr_size + track_info_size
    bink.frame_table = _read_frame_table(data, hdr['num_frames'], frame_table_offset)
    bink.frame_table_sorted = bink.frame_table[:]

    # First frame data starts after frame table
    first_frame_offset = frame_table_offset + hdr['num_frames'] * 4

    # Calculate YUV plane dimensions
    w = hdr['width']
    h = hdr['height']
    y_plane_w = ((w + 1) >> 1) + 7
    y_plane_w = y_plane_w & 0xFFFFFFF8
    uv_plane_w = ((h + 1) >> 1) + 7
    uv_plane_w = uv_plane_w & 0xFFFFFFF8
    y_stride = y_plane_w * 2
    uv_stride = uv_plane_w * 2

    bink.y_plane_w = y_plane_w
    bink.y_plane_h = y_plane_w  # Note: this matches the C code's local_30c/local_310
    bink.y_plane_stride = y_stride
    bink.uv_plane_w = uv_plane_w
    bink.uv_plane_h = uv_plane_w
    bink.plane_area = (y_plane_w * uv_plane_w) >> 4

    # Allocate YUV planes
    plane_size = y_plane_w * uv_plane_w
    bink.y_buf = bytearray(plane_size)
    bink.u_buf = bytearray(plane_size)
    bink.v_buf = bytearray(plane_size)

    # Allocate double buffer for decoded frames
    bink.plane_buf_a = bytearray(plane_size * 2)
    bink.plane_buf_b = bytearray(plane_size * 2)
    bink.plane_buf_active = 0

    # Set frame_num to 1 and seek to first frame
    bink.frame_num = 1
    bink.frame_num_displayed = 1

    # Store the raw data for frame access
    bink.io_ptr = data
    bink.total_size = len(data)

    # Setup frame interval
    if bink.frame_rate != 0:
        bink.frame_interval = int((bink.frame_rate_div * 1000) / bink.frame_rate)
    else:
        bink.frame_interval = 33  # ~30fps default

    return bink


def bink_close(bink: Optional[Bink]):
    """Close a Bink file and free resources."""
    if bink is None:
        return
    bink_pause(bink, True)
    # Wait for any decompress thread
    if hasattr(bink, '_decompress_thread') and bink._decompress_thread:
        bink._decompress_thread = None
    # Clear buffers
    bink.y_buf = None
    bink.u_buf = None
    bink.v_buf = None
    bink.plane_buf_a = None
    bink.plane_buf_b = None
    bink.frame_table = []
    bink.frame_table_sorted = []


# ---------------------------------------------------------------------------
# Frame seeking and navigation
# ---------------------------------------------------------------------------

def _bink_get_key_frame(bink: Bink, frame_num: int, search_type: int) -> int:
    """Find the nearest key frame to `frame_num`.

    search_type:
        0      = Find previous key frame (default)
        0x80   = frame_num is already a key frame
        1      = Find next key frame
        2      = Find nearest surrounding key frame
    """
    if bink is None:
        return 0

    ft = bink.frame_table
    n = bink.total_frames

    if (search_type & 0x80) != 0:
        return frame_num

    if frame_num > n:
        frame_num = n

    # Check if frame_num itself is a key frame
    if frame_num >= 1 and frame_num <= n:
        if (ft[frame_num - 1] & 1) != 0:
            return frame_num

    search = search_type & 0x7F

    if search == 1:
        # Find next key frame
        for i in range(frame_num, n):
            if (ft[i] & 1) != 0:
                return i + 1
        return n

    if search == 2:
        # Find nearest surrounding key frame
        i = frame_num - 2
        while i >= 0:
            if (ft[i] & 1) != 0:
                return i + 1
            i -= 1
        # Fall through to forward search
        for i in range(frame_num, n):
            if (ft[i] & 1) != 0:
                return i + 1
        return 0

    # Default (search == 0): find previous key frame
    i = frame_num - 2
    while i >= 0:
        if (ft[i] & 1) != 0:
            return i + 1
        i -= 1
    return 1  # First frame is always a key frame


def bink_goto(bink: Optional[Bink], frame_num: int, seek_type: int = 0):
    """Navigate to a specific frame.

    Args:
        bink: Bink instance
        frame_num: Target frame (1-based)
        seek_type: 0 = seek to nearest key frame, 1 = exact seek
    """
    if bink is None:
        return

    if frame_num > bink.total_frames:
        frame_num = bink.total_frames

    if (seek_type & 1) == 0:
        if bink.frame_num != frame_num:
            key_frame = _bink_get_key_frame(bink, frame_num, 0)
            if (bink.frame_num <= frame_num and key_frame <= bink.frame_num) or \
               (bink.frame_num != key_frame and bink._seek_frame(key_frame)):
                return
            bink_pause(bink, True)
            bink_do_frame(bink)
            bink_next_frame(bink)
            while bink.frame_num != frame_num:
                bink_do_frame(bink)
                bink_next_frame(bink)
            bink_pause(bink, False)
    else:
        bink._seek_frame(frame_num)


# ---------------------------------------------------------------------------
# Frame decompression and playback
# ---------------------------------------------------------------------------

def _decode_frame(bink: Bink, frame_idx: int) -> bytearray:
    """Decode a single Bink frame into YUV planes.

    This is a stub — real Bink frame decompression is complex:
    - RLE block decoding
    - DCT-based (Bink 1) or wavelet-based (Bink 2) transform
    - Motion compensation
    - Intra-frame vs inter-frame handling

    For now we return an empty Y plane.
    """
    # Stub: return empty Y plane buffer
    size = bink.y_plane_w * bink.y_plane_h
    return bytearray(size)


def bink_do_frame(bink: Bink) -> int:
    """Decompress and process the current frame.

    Returns 0 on success, non-zero if skipped.
    """
    if bink is None:
        return 0
    with bink._lock:
        if bink.frame_num > bink.total_frames:
            return 0
        if bink.frame_num_displayed == bink.frame_num:
            return 1  # Already displayed

        # Record timing
        now = _rad_timer_read()
        bink._data[0x82] = now

        # Decode frame
        active = bink.plane_buf_active
        # Decode into plane_buf_active
        decoded = _decode_frame(bink, bink.frame_num - 1)

        # Update frame rect
        bink.frame_rect_x = 0
        bink.frame_rect_y = 0
        bink.frame_rect_w = bink.width
        bink.frame_rect_h = bink.height

        # Toggle double buffer
        bink.plane_buf_active ^= 1

        bink.frame_num_displayed = bink.frame_num
        bink.frames_played += 1
        bink._data[0x80] = bink.frames_played
        bink._data[0x2D] = -1  # Invalidate dirty rect list
    return 0


def bink_next_frame(bink: Bink):
    """Advance to the next frame."""
    if bink is None:
        return
    with bink._lock:
        now = _rad_timer_read()
        if bink.frame_num < bink.total_frames:
            bink.frame_num += 1
        else:
            bink.frame_num = 1  # Loop
        bink._seek_frame(bink.frame_num)


def bink_wait(bink: Bink) -> int:
    """Wait until the next frame should be displayed (timing).

    Returns 0 when the frame is ready to display, 1 if still waiting.
    """
    if bink is None:
        return 0

    if bink.frames_played == 0 or bink.paused:
        return 0

    now = _rad_timer_read()
    elapsed = now - bink._data[0x84] if bink._data[0x84] != 0 else 0

    if bink.paused:
        return 1

    # Calculate expected frame duration
    if bink.frame_rate != 0:
        expected_ms = (bink.frame_rate_div * 1000) // bink.frame_rate
    else:
        expected_ms = 33

    if elapsed < expected_ms:
        time.sleep(0.001)  # Yield
        return 1

    return 0


def bink_pause(bink: Bink, pause: bool) -> int:
    """Pause or resume playback.

    Returns the new pause state.
    """
    if bink is None:
        return 0

    pause_val = 1 if pause else 0
    bink.paused = bool(pause_val)
    bink._data[0x3F] = pause_val
    bink._data[0xDA] = 0

    if not pause:
        bink._data[0x84] = 0  # Reset frame timer

    return pause_val


def bink_service(bink: Bink):
    """Service the Bink player (processes audio, etc.). Called periodically."""
    if bink is None:
        return
    # Audio track servicing would happen here


# ---------------------------------------------------------------------------
# Copy frame to external buffer (BinkCopyToBuffer)
# ---------------------------------------------------------------------------

def _yuv_init(pixel_format: int):
    """Initialize YUV blitter for given pixel format."""
    # Stub — real implementation sets up lookup tables
    pass


def _yuv_blit_24bpp(dst: bytearray, dst_pitch: int, dst_x: int, dst_y: int,
                    src_y: bytearray, src_u: bytearray, src_v: bytearray,
                    width: int, height: int, flags: int):
    """Blit YUV to 24-bit BGR buffer."""
    # Stub
    pass


def _yuv_blit_32bpp(dst: bytearray, dst_pitch: int, dst_x: int, dst_y: int,
                    src_y: bytearray, src_u: bytearray, src_v: bytearray,
                    width: int, height: int, flags: int):
    """Blit YUV to 32-bit BGRA buffer."""
    # Stub
    pass


def bink_copy_to_buffer(bink: Bink,
                        dst_buf: bytearray,
                        dst_pitch: int,
                        dst_bpp: int,
                        dst_x: int,
                        dst_y: int,
                        flags: int) -> int:
    """Copy the current Bink frame into an external buffer with YUV-to-RGB conversion.

    Args:
        bink: Bink instance
        dst_buf: Destination pixel buffer
        dst_pitch: Bytes per row of destination
        dst_bpp: Bytes per pixel (2=16bpp, 3=24bpp, 4=32bpp)
        dst_x: X offset in destination
        dst_y: Y offset in destination
        flags: Blit flags (pixel format + options)

    Returns:
        0 on success, 1 if frame was skipped (dropped)
    """
    if bink is None or dst_buf is None:
        return 0

    pixel_format = flags & 0xF
    _yuv_init(pixel_format)

    # If audio track requires sync, handle timing
    if bink.current_audio_track != -1 and bink.frames_played > 0 and not bink.paused:
        now = _rad_timer_read()
        elapsed = now - (bink._data[0x84] if bink._data[0x84] != 0 else now)
        expected = (bink.frames_played * bink.frame_interval) if bink.frame_rate != 0 else 0
        if elapsed > expected + bink._data[0x86]:
            # Frame is late — skip
            bink.dropped_frames += 1
            return 1

    # Determine source planes from active buffer
    active = bink.plane_buf_active
    src_y = bink.y_buf or bytearray(1)
    src_u = bink.u_buf or bytearray(1)
    src_v = bink.v_buf or bytearray(1)

    # Call appropriate blitter based on pixel format
    if flags & 0x80000000:
        # Masked blit
        pass
    else:
        # Non-masked blit — dispatch by format
        if pixel_format == YUV_24BPP:
            _yuv_blit_24bpp(dst_buf, dst_pitch, dst_x, dst_y,
                            src_y, src_u, src_v, bink.width, bink.height, flags)
        elif pixel_format in (YUV_32BPP, YUV_32ABPP):
            _yuv_blit_32bpp(dst_buf, dst_pitch, dst_x, dst_y,
                            src_y, src_u, src_v, bink.width, bink.height, flags)
        # ... other formats would be handled similarly

    return 0


def bink_get_summary(bink: Bink) -> Optional[BinkSummary]:
    """Get playback summary.

    Returns a BinkSummary, or None if bink is invalid.
    """
    if bink is None:
        return None
    return BinkSummary.from_bink(bink)


def bink_get_realtime(bink: Bink, num_frames: int = 0) -> Optional[BinkRealtime]:
    """Get realtime playback statistics.

    Args:
        bink: Bink instance
        num_frames: Number of frames to average over (0 = all)
    """
    if bink is None:
        return None
    rt = BinkRealtime()
    rt.total_frames = bink.total_frames
    rt.frame_num = bink.frame_num
    rt.frames_dropped = bink.dropped_frames
    rt.playback_rate = bink.frames_played
    return rt


def bink_get_rects(bink: Bink, flags: int = 0) -> list:
    """Get dirty rectangles for the current frame.

    Returns list of (x, y, w, h) tuples.
    """
    if bink is None or bink.frame_num == bink.frame_num_displayed:
        return [(0, 0, bink.width, bink.height)] if bink else []

    # In the C code this returns the BINKRECTS structure
    return [(bink.frame_rect_x, bink.frame_rect_y,
             bink.frame_rect_w, bink.frame_rect_h)]


# ---------------------------------------------------------------------------
# Bink track API
# ---------------------------------------------------------------------------

def bink_get_track_type(bink: Bink, track_idx: int) -> int:
    """Get the type of an audio track."""
    if bink is None or track_idx >= len(bink.audio_track_types):
        return 0
    return bink.audio_track_types[track_idx]


def bink_get_track_max_size(bink: Bink, track_idx: int) -> int:
    """Get the maximum size of an audio track's data."""
    if bink is None or track_idx >= len(bink.audio_track_max_sizes):
        return 0
    return bink.audio_track_max_sizes[track_idx]


def bink_get_track_id(bink: Bink, track_idx: int) -> int:
    """Get the ID of an audio track."""
    if bink is None or track_idx >= len(bink.audio_track_ids):
        return 0
    return bink.audio_track_ids[track_idx]


def bink_open_track(bink: Bink, track_idx: int) -> Optional[BinkTrack]:
    """Open an audio track for reading."""
    if bink is None or track_idx >= bink.tracks:
        return None
    track_type = bink_get_track_type(bink, track_idx)
    max_size = bink_get_track_max_size(bink, track_idx)

    # Only sound tracks (bit 31 set) can be opened
    if (track_type & 0x80000000) == 0:
        return None

    track = BinkTrack()
    track.size = track_type & 0xFFFF
    track.bits_per_sample = 16 if (track_type >> 0x1B & 8) == 0 else 8
    track.channels = (track_type >> 0x1D & 1) + 1
    track.max_size = max_size
    track.index = track_idx
    track.file = bink
    bink.audio_tracks.append(track)
    return track


def bink_close_track(track: Optional[BinkTrack]):
    """Close an audio track."""
    if track is not None and track.source is not None:
        track.source = None


def bink_get_track_data(track: BinkTrack, dst: bytearray) -> int:
    """Read decoded audio data from a track into dst.

    Returns the number of bytes written.
    """
    # Stub — real implementation reads from the track's audio ringbuffer
    return 0


def bink_set_volume(bink: Bink, volume: int):
    """Set playback volume (0–65535)."""
    if bink is not None and bink.current_audio_track != -1:
        # Forward to audio driver
        pass


def bink_set_pan(bink: Bink, pan: int):
    """Set stereo pan (0–65535, 32768 = center)."""
    if bink is not None and bink.current_audio_track != -1:
        pass


def bink_set_video_on_off(bink: Bink, on: bool):
    """Enable/disable video output."""
    if bink is not None:
        bink._data[0x8D] = 1 if on else 0


def bink_set_sound_on_off(bink: Bink, on: bool) -> int:
    """Enable/disable sound output.

    Returns the previous state.
    """
    if bink is None or bink.current_audio_track == -1:
        return 0
    prev = bink._data[0x8C]
    bink._data[0x8C] = 1 if on else 0
    return prev


# ---------------------------------------------------------------------------
# Sound system registration (BinkSetSoundSystem)
# ---------------------------------------------------------------------------

def bink_set_sound_system(sound_system_fn: Any, param: int = 0) -> bool:
    """Register a sound system for audio playback.

    The sound_system_fn will be called to open audio channels.
    """
    global _g_sound_system, _g_sound_open

    if sound_system_fn is None:
        return False

    _g_sound_system = sound_system_fn
    try:
        result = _g_sound_system(param)
        if result:
            _g_sound_open = result
        return _g_sound_open is not None
    except Exception:
        return False


def bink_open_waveout() -> Any:
    """Open the default waveOut audio system (stub)."""
    # In the DLL this returns a function table for waveOut audio
    return None


def bink_open_direct_sound() -> Any:
    """Open DirectSound audio system (stub)."""
    return None


def bink_open_miles() -> Any:
    """Open Miles Sound System (stub)."""
    return None


# ---------------------------------------------------------------------------
# Configuration setters (mirrors the DLL exports)
# ---------------------------------------------------------------------------

def bink_set_frame_rate(framerate: int, divisor: int = 0):
    """Override the default frame rate for subsequent BinkOpen calls."""
    global _g_frame_rate, _g_frame_rate_div
    _g_frame_rate = framerate
    _g_frame_rate_div = divisor


def bink_set_io_size(size: int):
    """Set the I/O buffer size."""
    global _g_io_size
    _g_io_size = size


def bink_set_io(callback: Any):
    """Register a custom I/O handler for file reads."""
    global _g_io_callback
    _g_io_callback = callback


def bink_set_simulate(simulate: int):
    """Set network simulation mode (for testing)."""
    global _g_simulate
    _g_simulate = simulate


def bink_set_sound_track(track: int):
    """Select a specific sound track (by ID)."""
    global _g_sound_track
    _g_sound_track = track


def bink_set_error(msg: str):
    """Set the last error message."""
    _bink_set_error(msg)


def bink_get_error() -> str:
    """Get the last error message."""
    return _bink_get_error()


def bink_logo_address() -> int:
    """Return the address of the Bink logo data (stub)."""
    return 0


# ---------------------------------------------------------------------------
# BinkBuffer API (DirectDraw overlay helpers)
# ---------------------------------------------------------------------------

def bink_buffer_set_directdraw(surface: Any, dd: Any):
    """Register a DirectDraw surface for BinkBuffer operations."""
    global _g_dd_surface, _g_dd
    if surface and dd:
        _g_dd_surface = surface
        _g_dd = dd
        return True
    _g_dd_surface = None
    _g_dd = None
    return True


def bink_buffer_set_resolution(width: int, height: int, bpp: int):
    """Set the DirectDraw buffer resolution."""
    global _g_screen_width, _g_screen_height, _g_bpp
    _g_screen_width = width
    _g_screen_height = height
    _g_bpp = bpp


def bink_buffer_open(hwnd: Any, param2: int, param3: int, param4: int) -> Optional[Any]:
    """Open a BinkBuffer overlay window."""
    # Stub — in the DLL this creates a DirectDraw surface
    return None


def bink_buffer_close(buf: Any):
    """Close a BinkBuffer."""
    pass


def bink_buffer_lock(buf: Any) -> Optional[bytearray]:
    """Lock a BinkBuffer for writing."""
    return None


def bink_buffer_unlock(buf: Any):
    """Unlock a BinkBuffer."""
    pass


def bink_buffer_clear(buf: Any, color: int = 0):
    """Clear a BinkBuffer to a color."""
    pass


def bink_buffer_get_description(buf: Any) -> str:
    """Get a description string for the buffer."""
    return "BinkBuffer"


def bink_buffer_set_scale(buf: Any, scale_x: int, scale_y: int):
    """Set scaling factors for the buffer."""
    pass


def bink_buffer_set_offset(buf: Any, off_x: int, off_y: int):
    """Set the display offset for the buffer."""
    pass


def bink_buffer_set_hwnd(buf: Any, hwnd: Any):
    """Set the window handle for the buffer."""
    pass


def bink_buffer_check_win_pos(buf: Any, x_ptr: Any, y_ptr: Any):
    """Check/adjust window position for the buffer."""
    pass


def bink_buffer_blit(buf: Any, blit_param: int = 0):
    """Blit the buffer to the screen."""
    pass


# ---------------------------------------------------------------------------
# Cursor helpers
# ---------------------------------------------------------------------------

def bink_is_software_cursor(cursor: Any) -> bool:
    """Check if the current cursor is a software-rendered cursor.

    Returns True if the cursor uses software rendering.
    """
    return False


def bink_check_cursor(hwnd: Any, x: int, y: int, w: int, h: int) -> int:
    """Check if the cursor is over the video area and hide it if so.

    Returns the number of times the cursor was hidden.
    """
    return 0


def bink_restore_cursor(count: int):
    """Restore the cursor after bink_check_cursor hid it."""
    pass


def bink_dd_surface_type(surface: Any) -> int:
    """Determine the DirectDraw surface type."""
    return 0


# ---------------------------------------------------------------------------
# RAD memory management helpers
# ---------------------------------------------------------------------------

def rad_set_memory(malloc_fn: Any, free_fn: Any):
    """Register custom memory allocation functions."""
    global _g_malloc_fn, _g_free_fn
    _g_malloc_fn = malloc_fn
    _g_free_fn = free_fn


# ---------------------------------------------------------------------------
# Key frame helper
# ---------------------------------------------------------------------------

def bink_get_key_frame(bink: Bink, frame_num: int, search_type: int = 0) -> int:
    """Find a key frame near the given frame number."""
    return _bink_get_key_frame(bink, frame_num, search_type)


# ===========================================================================
# Main high-level playback convenience API
# ===========================================================================

class BinkPlayer:
    """High-level Bink video player wrapping the low-level API."""

    def __init__(self, path_or_data: Any, flags: int = 0):
        self.bink = bink_open(path_or_data, flags)
        self._playing = False
        self._paused = False

    @property
    def is_open(self) -> bool:
        return self.bink is not None

    @property
    def width(self) -> int:
        return self.bink.width if self.bink else 0

    @property
    def height(self) -> int:
        return self.bink.height if self.bink else 0

    @property
    def current_frame(self) -> int:
        return self.bink.frame_num if self.bink else 0

    @property
    def total_frames(self) -> int:
        return self.bink.total_frames if self.bink else 0

    def play(self):
        """Start playback."""
        if self.bink:
            self._playing = True
            self._paused = False

    def pause(self):
        """Pause playback."""
        if self.bink:
            bink_pause(self.bink, True)
            self._paused = True

    def resume(self):
        """Resume playback."""
        if self.bink:
            bink_pause(self.bink, False)
            self._paused = False

    def toggle_pause(self):
        """Toggle pause state."""
        if self._paused:
            self.resume()
        else:
            self.pause()

    def seek(self, frame_num: int):
        """Seek to a specific frame."""
        if self.bink:
            bink_goto(self.bink, frame_num)

    def advance(self) -> bool:
        """Advance one frame.

        Returns True if a new frame is available.
        """
        if not self.bink or not self._playing:
            return False
        if self._paused:
            return False

        if bink_wait(self.bink):
            return False  # Not time yet

        bink_do_frame(self.bink)
        bink_next_frame(self.bink)
        return True

    def close(self):
        """Close the player."""
        self._playing = False
        if self.bink:
            bink_close(self.bink)
            self.bink = None

    def get_frame_rgb(self, fmt: str = 'bgr24') -> Optional[bytearray]:
        """Get the current frame as RGB data (stub)."""
        if not self.bink:
            return None
        size = self.bink.width * self.bink.height * 3
        buf = bytearray(size)
        bink_copy_to_buffer(self.bink, buf, self.bink.width * 3, 3, 0, 0, 1)
        return buf

    def get_summary(self) -> Optional[BinkSummary]:
        """Get playback summary."""
        return bink_get_summary(self.bink)

    def get_realtime(self, num_frames: int = 0) -> Optional[BinkRealtime]:
        """Get realtime stats."""
        return bink_get_realtime(self.bink, num_frames)


# ===========================================================================
# Self-test / demonstration
# ===========================================================================

def _demo():
    """Quick demonstration — run if executed directly."""
    print("Bink Video Player — Pure Python Translation")
    print("=" * 50)
    print()

    # Open from a file if provided
    import sys
    if len(sys.argv) > 1:
        path = sys.argv[1]
        print(f"Opening: {path}")
        bink = bink_open(path)
        if bink:
            summary = bink_get_summary(bink)
            if summary:
                print(f"  Dimensions: {summary.width}x{summary.height}")
                print(f"  Frames: {summary.total_frames}")
                print(f"  Framerate: {summary.frame_rate_num}/{summary.frame_rate_den}")
            bink_close(bink)
        else:
            print(f"  Error: {bink_get_error()}")
    else:
        print("Usage: python binkw32_video.py <file.bik>")
        print()
        print("No .bik file provided — loading embedded test header...")

        # Minimal test: construct a fake BIKg header and validate parsing
        hdr = bytearray(40)
        struct.pack_into('<I', hdr, 0, BINK_ID_STD)  # 'BIKg'
        struct.pack_into('<I', hdr, 4, 4096)  # file size
        struct.pack_into('<I', hdr, 8, 150)  # frames
        struct.pack_into('<I', hdr, 12, 2048)  # largest frame
        struct.pack_into('<I', hdr, 16, 0)  # flags
        struct.pack_into('<H', hdr, 20, 320)  # width
        struct.pack_into('<H', hdr, 22, 240)  # height
        struct.pack_into('<I', hdr, 24, 30)  # frame rate
        struct.pack_into('<I', hdr, 28, 0)  # tracks

        # Frame table (150 entries of all zeros)
        for i in range(150):
            hdr.extend(struct.pack('<I', 0x40 + i * 100))

        result = _read_bink_header(bytes(hdr[:40]))
        print(f"  Parsed header: {result['width']}x{result['height']}, "
              f"{result['num_frames']} frames, {result['frame_rate']}fps")
        print()
        print("Header parsing: OK")


if __name__ == "__main__":
    _demo()

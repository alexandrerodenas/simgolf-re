"""
SimGolf Sound Engine — Python translation of sound.dll
=======================================================

Based on decompiled C from ref/decompiled/ghidra/sound/ (1602 functions).

Architecture:
  - Dll_Wave_Device::create_device/delete_device — static factory for wave output
  - Dll_Midi_Device::create_device/delete_device — static factory for MIDI output
  - Dll_Wave_In_Device::create_device/delete_device — static factory for wave input
  - Sound_Manager — message-queue-driven mixer/dispatcher with circular 4096-entry queue
  - Wave_Device (0x41e0 = 16864 bytes) — large wave output device
  - Midi_Device (0x4058 = 16472 bytes) — MIDI output device via midiOutOpen/midiOutShortMsg
  - Wave_In_Device (size 0x4c = 76 bytes) — wave input via waveInOpen/waveInAddBuffer

The original DLL wraps the Windows multimedia API (waveOut*, waveIn*, midiOut*)
and RIFF WAV file parsing (mmioOpen/mmioRead).

Usage:
  from simgolf_re.sound_engine import SoundEngine, SNDERR, SoundType
  engine = SoundEngine()
  engine.create_wave_device()  # returns SNDERR.OK
  engine.load_wav("click", "sounds/click.wav")
  engine.play("click")
  engine.set_master_volume(0.75)
  engine.cleanup()
"""

from __future__ import annotations

import struct
import os
from dataclasses import dataclass, field
from typing import Optional, Callable, List, Dict, Any
from enum import IntEnum


# ═══════════════════════════════════════════════════════════════════════════════
#  SNDERR enum — return values for all sound.dll functions
# ═══════════════════════════════════════════════════════════════════════════════

class SNDERR(IntEnum):
    """Maps to the C enum returned by sound.dll functions (0 = success)."""
    OK = 0
    ERR_UNKNOWN_1 = 1
    ERR_UNKNOWN_2 = 2
    ERR_NO_DEVICE = 3         # Midi device not allocated
    ERR_ALREADY = 4
    ERR_NOT_READY = 5
    ERR_FILE_NOT_FOUND = 6
    ERR_INVALID_FILE = 7
    ERR_OPEN_FAILED = 8
    ERR_OUT_OF_MEMORY = 9
    ERR_NOT_SUPPORTED = 0xA
    ERR_BAD_PARAM = 0xB
    ALREADY_EXISTS = 0xC  # Device already created
    ALREADY_PLAYING = 0xD
    BUFFER_FULL = 0x22         # Command queue full
    NOT_FOUND = 0x24
    UNKNOWN_2F = 0x2F


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound type IDs — used in create_sound_object (FUN_100093e0)
# ═══════════════════════════════════════════════════════════════════════════════

class SoundType(IntEnum):
    """Sound object types created by the factory (FUN_100093e0)."""
    WAV_FILE = 1         # Wave file player (size 0x1450)
    MIDI_FILE = 2        # MIDI file player (size 0x948)
    CD_AUDIO = 3         # CD audio (size 0xec)
    STREAMING_WAV = 4    # Streaming wave (size 0xa60)
    TYPE_5 = 5           # (size 0xe8)
    TYPE_6 = 6           # (size 0x94)
    TYPE_7 = 7           # (size 0x10c)


# ═══════════════════════════════════════════════════════════════════════════════
#  Command IDs — message queue commands (FUN_1000a670 case switch)
# ═══════════════════════════════════════════════════════════════════════════════

class SoundCmd(IntEnum):
    """Commands posted to the internal 4096-entry ring buffer queue."""
    PLAY = 1
    STOP = 2
    STOP_SPECIFIC = 3    # Stop specific sound, notify via callback
    PAUSE = 4            # Pause / stop without notification
    SEEK = 7             # Seek to position
    SET_VOLUME = 8       # Set volume
    SET_PAN = 9          # Set pan (balance)
    SET_FREQUENCY = 10   # Set playback frequency/pitch
    SET_LOOP = 11        # Set looping mode


# ═══════════════════════════════════════════════════════════════════════════════
#  Window Messages — custom WM_ messages (FUN_10028b70 message handler)
# ═══════════════════════════════════════════════════════════════════════════════

# WM_APP = 0x8000, the DLL uses 0x7EA-0x7F0 range
WM_SOUND_DONE = 0x7EA        # Sound finished playing
WM_SOUND_DELETE = 0x7EB      # Delete a sound
WM_SOUND_STOP = 0x7EC        # Stop playback
WM_SOUND_ERROR = 0x7EE       # Playback error
WM_SOUND_END_REACHED = 0x7EF # Playback end reached
WM_WAVE_IN_DATA = 0x7F0      # WaveIn buffer ready


# ═══════════════════════════════════════════════════════════════════════════════
#  RIFF/WAV parsing constants
# ═══════════════════════════════════════════════════════════════════════════════

FOURCC_RIFF = 0x46464952       # "RIFF"
FOURCC_WAVE = 0x45564157       # "WAVE"
FOURCC_FMT = 0x20746D66        # "fmt "
FOURCC_DATA = 0x61746164       # "data"
FOURCC_CUE = 0x6575632E        # "cue "
FOURCC_LIST = 0x5453494C       # "LIST"
FOURCC_ADTL = 0x6C746461       # "adtl"
FOURCC_LABL = 0x6C62616C       # "labl"
FOURCC_LTXT = 0x7478746C       # "ltxt"
FOURCC_SMPL = 0x6C706D73       # "smpl"
FOURCC_INST = 0x74736E69       # "inst"

WAVE_FORMAT_PCM = 0x0001
WAVE_FORMAT_ADPCM = 0x0002
WAVE_FORMAT_IEEE_FLOAT = 0x0003


# ═══════════════════════════════════════════════════════════════════════════════
#  Wave Format struct
# ═══════════════════════════════════════════════════════════════════════════════

@dataclass
class WaveFormatEx:
    """WAVEFORMATEX equivalent."""
    format_tag: int = WAVE_FORMAT_PCM     # wFormatTag
    channels: int = 1                     # nChannels
    samples_per_sec: int = 22050          # nSamplesPerSec
    avg_bytes_per_sec: int = 44100        # nAvgBytesPerSec
    block_align: int = 2                  # nBlockAlign
    bits_per_sample: int = 16             # wBitsPerSample
    cb_size: int = 0                      # cbSize

    @classmethod
    def from_bytes(cls, data: bytes) -> 'WaveFormatEx':
        """Parse WAVEFORMATEX from 16+ bytes (little-endian)."""
        (fmt, ch, sps, abps, ba, bps, cb) = struct.unpack_from('<HHIIHHH', data)
        return cls(fmt, ch, sps, abps, ba, bps, cb)

    def to_bytes(self) -> bytes:
        """Serialize to 18 bytes (standard PCM header)."""
        return struct.pack(
            '<HHIIHHH',
            self.format_tag, self.channels, self.samples_per_sec,
            self.avg_bytes_per_sec, self.block_align, self.bits_per_sample,
            self.cb_size
        )


# ═══════════════════════════════════════════════════════════════════════════════
#  WAVE data chunk
# ═══════════════════════════════════════════════════════════════════════════════

@dataclass
class WaveData:
    """A loaded WAV file in memory."""
    fmt: WaveFormatEx = field(default_factory=WaveFormatEx)
    samples: bytes = b''
    name: str = ''                    # "labl" chunk content if present
    loops: List[Dict[str, int]] = field(default_factory=list)  # smpl loop points
    cue_points: List[Dict] = field(default_factory=list)

    @property
    def duration_sec(self) -> float:
        if self.fmt.avg_bytes_per_sec == 0:
            return 0.0
        return len(self.samples) / self.fmt.avg_bytes_per_sec

    @property
    def num_samples(self) -> int:
        if self.fmt.bits_per_sample == 0 or self.fmt.channels == 0:
            return 0
        frame_size = self.fmt.bits_per_sample // 8 * self.fmt.channels
        if frame_size == 0:
            return 0
        return len(self.samples) // frame_size


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound Object — represents a loaded/playing sound instance
# ═══════════════════════════════════════════════════════════════════════════════

@dataclass
class SoundObject:
    """
    Represents one sound object as created by FUN_100093e0.

    In the C code, each SoundObject has a vtable pointer at offset 0,
    format-specific data, and a 'playing' flag at offset 0xac bit 5.
    """
    sound_type: SoundType
    data: Any = None                # WaveData or MIDI bytes
    name: str = ''                  # Original filename
    state_flags: int = 0            # Offset 0xac: bit5 = playing
    volume: int = 0x7f              # Offset 0x6e (0x7f = 127 = max)
    pan: int = 0                    # 0 = center, -/+ = left/right
    loop: bool = False
    pitch: float = 1.0
    position: int = 0               # Current playback position

    @property
    def is_playing(self) -> bool:
        return bool(self.state_flags & 0x20)  # bit 5

    def mark_playing(self, playing: bool = True):
        if playing:
            self.state_flags |= 0x20
        else:
            self.state_flags &= ~0x20


# ═══════════════════════════════════════════════════════════════════════════════
#  Command Queue Entry — 16 bytes each (FUN_1000a240)
# ═══════════════════════════════════════════════════════════════════════════════

@dataclass
class CmdEntry:
    """Single command queue entry (size 0x10 = 16 bytes)."""
    cmd: int = 0          # SoundCmd value
    obj_ptr: int = 0      # Pointer/handle to SoundObject
    param1: int = 0       # Extra parameter (e.g. volume value)
    param2: int = 0       # Extra parameter (e.g. loop flag)


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound Manager — the core message-pump dispatcher
# ═══════════════════════════════════════════════════════════════════════════════

class SoundManager:
    """
    Message-queue-driven sound manager.

    In the C code this is part of the Wave_Device structure at offset 0x40+
    (a circular buffer of 4096 pointers). Commands are posted via
    FUN_1000a240 and processed by FUN_1000a670 / FUN_1000a330.
    """

    QUEUE_MASK = 0xFFF     # 4096 entries

    def __init__(self):
        # Ring buffer of command entries
        self._queue: List[Optional[CmdEntry]] = [None] * 4096
        self._read_idx: int = 0          # offset 0x4050
        self._write_idx: int = 0         # offset 0x4054

        # Active sound list (doubly-linked list in C)
        self._active_sounds: List[SoundObject] = []
        self._active_head: int = 0       # offset 0x40
        self._active_tail: int = 0       # offset 0x44
        self._active_count: int = 0      # offset 0x4c

    # ── Command posting (FUN_1000a240) ──────────────────────────────────

    def post_command(self, cmd: int, obj: int,
                     param1: int = 0, param2: int = 0) -> SNDERR:
        """
        Post a command to the ring buffer.
        Returns SNDERR.BUFFER_FULL if queue is full, SNDERR.OK otherwise.
        Corresponds to FUN_1000a240.
        """
        next_write = (self._write_idx + 1) & self.QUEUE_MASK
        if next_write == self._read_idx:
            return SNDERR.BUFFER_FULL

        entry = CmdEntry(cmd=cmd, obj_ptr=obj,
                         param1=param1, param2=param2)
        self._queue[self._write_idx] = entry
        self._write_idx = next_write
        return SNDERR.OK

    # ── Command processing (FUN_1000a330) ──────────────────────────────

    def process_commands(self) -> int:
        """
        Process all pending commands in the queue.
        Returns number of commands processed.
        Corresponds to FUN_1000a330.
        """
        processed = 0
        while self._read_idx != self._write_idx:
            entry = self._queue[self._read_idx]
            if entry is None:
                self._read_idx = (self._read_idx + 1) & self.QUEUE_MASK
                continue

            self._dispatch_command(entry)
            self._queue[self._read_idx] = None
            self._read_idx = (self._read_idx + 1) & self.QUEUE_MASK
            processed += 1

        return processed

    def _dispatch_command(self, entry: CmdEntry):
        """Handle a single command. Corresponds to the switch in FUN_1000a670."""
        cmd = entry.cmd
        obj_handle = entry.obj_ptr

        if cmd == SoundCmd.PLAY:
            # C: if obj != 0 and not already playing, mark playing + add to active list
            pass  # Playback is handled by the engine

        elif cmd == SoundCmd.STOP:
            # Stop all or specific
            if cmd == SoundCmd.STOP:
                # For all: clear active sounds list
                pass
            elif cmd == SoundCmd.STOP_SPECIFIC:
                # Find by obj_handle, remove from active list
                pass

        elif cmd == SoundCmd.PAUSE:
            pass

        elif cmd == SoundCmd.SET_VOLUME:
            # FUN_100238b0 — search active list, set volume
            pass

        elif cmd == SoundCmd.SET_PAN:
            # FUN_10023540 — search active list, set pan
            pass

        elif cmd == SoundCmd.SET_FREQUENCY:
            # FUN_10023a60
            pass

        elif cmd == SoundCmd.SET_LOOP:
            # FUN_10023c70
            pass


# ═══════════════════════════════════════════════════════════════════════════════
#  WAV File Loader — RIFF parser (FUN_100041d0)
# ═══════════════════════════════════════════════════════════════════════════════

def load_wav_file(filepath: str) -> Optional[WaveData]:
    """
    Load a WAV file by parsing RIFF chunks.
    Corresponds to FUN_100041d0: the main WAV file loading function.

    Handles: 'fmt ', 'data', 'cue ', 'LIST/adtl/labl', 'smpl', 'inst'
    """
    if not os.path.isfile(filepath):
        return None

    with open(filepath, 'rb') as f:
        raw = f.read()

    offset = 0
    file_size = len(raw)

    # RIFF header
    if file_size < 12:
        return None

    riff_id, riff_size, wave_id = struct.unpack_from('<4sI4s', raw, offset)
    if riff_id != b'RIFF' or wave_id != b'WAVE':
        return None
    offset += 12

    wave_data = WaveData()
    wave_data.name = os.path.basename(filepath)

    # Parse chunks
    while offset + 8 <= file_size:
        chunk_id, chunk_size = struct.unpack_from('<4sI', raw, offset)
        offset += 8

        if chunk_size > file_size - offset:
            chunk_size = file_size - offset

        if chunk_id == b'fmt ':
            if chunk_size >= 16:
                fmt_data = raw[offset:offset + chunk_size]
                wave_data.fmt = WaveFormatEx.from_bytes(fmt_data)

        elif chunk_id == b'data':
            wave_data.samples = raw[offset:offset + chunk_size]

        elif chunk_id == b'cue ':
            # Parse cue points
            if chunk_size >= 4:
                num_cues = struct.unpack_from('<I', raw, offset)[0]
                pos = offset + 4
                for _ in range(num_cues):
                    if pos + 24 > offset + chunk_size:
                        break
                    (ck_id, ck_pos, fcc_chunk, ck_start,
                     ck_block_start, ck_sample_offset) = struct.unpack_from(
                        '<IiiIII', raw, pos)
                    wave_data.cue_points.append({
                        'id': ck_id,
                        'position': ck_pos,
                        'chunk': fcc_chunk,
                    })
                    pos += 24

        elif chunk_id == b'LIST':
            # LIST chunk (adtl/labl)
            if chunk_size >= 4:
                list_type = raw[offset:offset + 4]
                pos = offset + 4
                end = offset + chunk_size
                if list_type == b'adtl':
                    while pos + 8 <= end:
                        sub_id, sub_size = struct.unpack_from('<4sI', raw, pos)
                        pos += 8
                        if sub_id == b'labl' and sub_size > 0:
                            label_data = raw[pos:pos + sub_size - 1]
                            wave_data.name = label_data.rstrip(b'\x00').decode(
                                'latin-1', errors='replace')
                        pos += sub_size
                        # Align to 2 bytes
                        if sub_size & 1:
                            pos += 1

        elif chunk_id == b'smpl':
            # Parse sampler loop points
            if chunk_size >= 36:
                (manufacturer, product, sample_period, midi_note,
                 midi_pitch, smpte_format, smpte_offset,
                 num_loops, sampler_data) = struct.unpack_from(
                    '<IIIiIiiII', raw, offset)
                pos = offset + 36
                for _ in range(num_loops):
                    if pos + 24 > offset + chunk_size:
                        break
                    (ck_id, ck_type, ck_start, ck_end,
                     ck_fraction, ck_play_count) = struct.unpack_from(
                        '<IIIIII', raw, pos)
                    wave_data.loops.append({
                        'start': ck_start,
                        'end': ck_end,
                        'type': ck_type,
                        'play_count': ck_play_count,
                    })
                    pos += 24

        offset += chunk_size
        if chunk_size & 1:   # Chunks are WORD-aligned
            offset += 1

    if not wave_data.samples:
        return None

    return wave_data


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound Engine — main public API
# ═══════════════════════════════════════════════════════════════════════════════

class SoundEngine:
    """
    Main sound engine — Python translation of sound.dll.

    Provides:
      - Device creation/cleanup (Dll_Wave_Device, Dll_Midi_Device, etc.)
      - WAV file loading and playback
      - Volume, pan, frequency, loop control
      - MIDI note playback
      - Audio input (waveIn)

    Uses the SoundManager for command dispatch and WaveData for sample storage.
    """

    def __init__(self):
        # Device singletons (globals in the C code)
        self._wave_device: Optional[dict] = None     # DAT_100b4a20
        self._midi_device: Optional[dict] = None     # DAT_100b4a1c
        self._wave_in_device: Optional[dict] = None  # DAT_100b4a24

        # Sound manager (embedded at offset 0x40 in Wave_Device)
        self._manager = SoundManager()

        # Sound cache: name -> SoundObject with loaded data
        self._sound_cache: Dict[str, SoundObject] = {}

        # Sound registry: id -> SoundObject for active sounds
        self._sounds: Dict[int, SoundObject] = {}
        self._next_id: int = 1

        # Callbacks
        self._on_complete: Optional[Callable] = None

        # Master volume (offset 0x1a4, bit 5 control)
        self._master_volume: float = 1.0

        # Global flags (DAT_100b49bc)
        self._global_flags: int = 0

        # Critical section refcount (DAT_100b49a8)
        self._cs_refcount: int = 0

    # ── Device Management ───────────────────────────────────────────────

    def create_wave_device(self) -> SNDERR:
        """
        Create the wave output device.
        Corresponds to Dll_Wave_Device::create_device (FUN_10001fcd).
        Returns SNDERR.ALREADY_EXISTS if device already created.
        """
        if self._wave_device is not None:
            return SNDERR.ALREADY_EXISTS
        self._wave_device = {
            'type': 'wave',
            'volume': 0x7f,
            'flags': 0,
            'manager': self._manager,
            # Wave_Device has fields at offsets:
            #   0x72-0x75: unknown
            #   0x1a4: control flags including bit 5 (enable waveIn callback)
            #   0x210: HWND for PostMessage
            #   0x214: more flags
        }
        return SNDERR.OK

    def delete_wave_device(self) -> SNDERR:
        """
        Delete the wave output device.
        Corresponds to Dll_Wave_Device::delete_device (FUN_100011c2).
        """
        if self._wave_device is not None:
            # In C: (**(code**)*device)(1) — calls vtable destructor
            self._wave_device = None
        return SNDERR.OK

    def create_midi_device(self) -> SNDERR:
        """
        Create the MIDI output device.
        Corresponds to Dll_Midi_Device::create_device (FUN_100021cb).
        Size 0x4058 in C.
        """
        if self._midi_device is not None:
            return SNDERR.ALREADY_EXISTS
        self._midi_device = {
            'type': 'midi',
            'volume': 0x7f,          # offset 0x38
            'tempo': 0xF,            # offset 0x30
            'state': 0,
            'midi_out_handle': None,  # HMIDIOUT at offset 0x3c
        }
        return SNDERR.OK

    def delete_midi_device(self) -> SNDERR:
        """
        Delete the MIDI output device.
        Corresponds to Dll_Midi_Device::delete_device (FUN_10001a5f).
        """
        if self._midi_device is not None:
            self._midi_device = None
        return SNDERR.OK

    def create_wave_in_device(self) -> SNDERR:
        """
        Create the wave input (recording) device.
        Corresponds to Dll_Wave_In_Device::create_device (FUN_100020e5).
        Size 0x4c in C.
        """
        if self._wave_in_device is not None:
            return SNDERR.ALREADY_EXISTS
        self._wave_in_device = {
            'type': 'wave_in',
            'state': 0,
            'volume': 0x7f,          # offset 0x40
            'wave_in_handle': None,  # HWAVEIN at offset 0x44
            'format': WaveFormatEx(
                format_tag=WAVE_FORMAT_PCM,
                channels=1,
                samples_per_sec=22050,
                avg_bytes_per_sec=44100,
                block_align=2,
                bits_per_sample=16,
            ),
            'buffers': [],           # WAVEHDR queue
        }
        return SNDERR.OK

    def delete_wave_in_device(self) -> SNDERR:
        """
        Delete the wave input device.
        Corresponds to Dll_Wave_In_Device::delete_device (FUN_100021fd).
        """
        if self._wave_in_device is not None:
            self._wave_in_device = None
        return SNDERR.OK

    # ── Sound Loading ──────────────────────────────────────────────────

    def load_wav(self, name: str, filepath: str) -> bool:
        """
        Load a WAV file and cache it.
        Corresponds to FUN_100041d0 (WAV file loading/parsing).

        Args:
            name: Logical name to reference the sound later.
            filepath: Path to the .wav file.

        Returns:
            True on success, False on failure.
        """
        wave_data = load_wav_file(str(filepath))
        if wave_data is None:
            return False

        obj = SoundObject(
            sound_type=SoundType.WAV_FILE,
            data=wave_data,
            name=name,
        )
        self._sound_cache[name] = obj
        return True

    def load_midi(self, name: str, filepath: str) -> bool:
        """
        Load a MIDI file into the cache.
        Corresponds to SoundType.MIDI_FILE creation (0x948 bytes in C).
        """
        if not os.path.isfile(str(filepath)):
            return False
        with open(str(filepath), 'rb') as f:
            data = f.read()
        if len(data) < 14:
            return False
        # Check MIDI header "MThd"
        if data[:4] != b'MThd':
            return False
        obj = SoundObject(
            sound_type=SoundType.MIDI_FILE,
            data=data,
            name=name,
        )
        self._sound_cache[name] = obj
        return True

    def unload(self, name: str) -> bool:
        """Remove a sound from the cache."""
        if name in self._sound_cache:
            del self._sound_cache[name]
            return True
        return False

    # ── Playback Control ───────────────────────────────────────────────

    def play(self, name: str, volume: int = 0x7f, pan: int = 0,
             loop: bool = False, priority: int = 0) -> Optional[int]:
        """
        Play a cached sound.

        Args:
            name: Sound name (must have been loaded via load_wav/load_midi).
            volume: 0..127 (0x7f = 127 = max, 0 = silent).
            pan: -64..63 (0 = center, negative = left, positive = right).
            loop: True to loop.
            priority: Higher = more important (used for voice stealing).

        Returns:
            Sound ID (int) that can be used with stop()/set_volume(),
            or None if the sound wasn't found.

        Corresponds to the PLAY command posted to the SoundManager queue
        (case 1 in FUN_1000a670).
        """
        if name not in self._sound_cache:
            return None

        sound_id = self._next_id
        self._next_id += 1

        obj = self._sound_cache[name]
        obj.volume = max(0, min(127, volume))
        obj.pan = pan
        obj.loop = loop
        obj.mark_playing(True)

        self._sounds[sound_id] = obj
        self._manager._active_sounds.append(obj)

        # Post PLAY command to the ring buffer
        self._manager.post_command(SoundCmd.PLAY, id(obj),
                                   volume, int(loop))

        return sound_id

    def stop(self, sound_id: int) -> bool:
        """
        Stop a specific sound.
        Corresponds to SoundCmd.STOP_SPECIFIC (case 3 in FUN_1000a670).
        """
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.mark_playing(False)
            if obj in self._manager._active_sounds:
                self._manager._active_sounds.remove(obj)
            self._manager.post_command(SoundCmd.STOP_SPECIFIC, id(obj))
            del self._sounds[sound_id]
            return True
        return False

    def stop_all(self) -> None:
        """
        Stop all active sounds.
        Corresponds to SoundCmd.STOP (case 2 in FUN_1000a670).
        """
        for obj in self._manager._active_sounds:
            obj.mark_playing(False)
        self._manager._active_sounds.clear()
        self._sounds.clear()
        self._manager.post_command(SoundCmd.STOP, 0)

    def pause(self, sound_id: int) -> bool:
        """
        Pause a specific sound.
        Corresponds to SoundCmd.PAUSE (case 4 in FUN_1000a670).
        """
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.mark_playing(False)
            self._manager.post_command(SoundCmd.PAUSE, id(obj))
            return True
        return False

    # ── Volume / Pan / Frequency Control ───────────────────────────────

    def set_volume(self, sound_id: int, volume: int) -> bool:
        """
        Set volume of a specific sound.
        Corresponds to FUN_10023880/FUN_100238b0 and
        SoundCmd.SET_VOLUME (case 8 in FUN_1000a670).

        Args:
            sound_id: ID returned by play().
            volume: 0..127 (0x7f = max).
        """
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.volume = max(0, min(127, volume))
            self._manager.post_command(SoundCmd.SET_VOLUME,
                                       id(obj), volume)
            return True
        return False

    def set_pan(self, sound_id: int, pan: int) -> bool:
        """
        Set pan (stereo balance) of a specific sound.
        Corresponds to SoundCmd.SET_PAN (case 9 in FUN_1000a670)
        and FUN_10023540.

        Args:
            sound_id: ID returned by play().
            pan: -64..63 (0 = center).
        """
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.pan = max(-64, min(63, pan))
            self._manager.post_command(SoundCmd.SET_PAN,
                                       id(obj), pan)
            return True
        return False

    def set_frequency(self, sound_id: int, freq: int) -> bool:
        """
        Set playback frequency of a specific sound.
        Corresponds to SoundCmd.SET_FREQUENCY (case 10 in FUN_1000a670)
        and FUN_10023a60.
        """
        if sound_id in self._sounds:
            self._manager.post_command(SoundCmd.SET_FREQUENCY,
                                       id(self._sounds[sound_id]),
                                       freq)
            return True
        return False

    def set_loop(self, sound_id: int, loop: bool) -> bool:
        """
        Set loop mode of a specific sound.
        Corresponds to SoundCmd.SET_LOOP (case 11 in FUN_1000a670)
        and FUN_10023c70.
        """
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.loop = loop
            self._manager.post_command(SoundCmd.SET_LOOP,
                                       id(obj), int(loop))
            return True
        return False

    def set_master_volume(self, volume: float) -> None:
        """
        Set master volume (0.0 = silent, 1.0 = max).
        Corresponds to the master volume control in the wave device.
        """
        self._master_volume = max(0.0, min(1.0, volume))

    # ── MIDI ───────────────────────────────────────────────────────────

    def midi_note_on(self, note: int, velocity: int = 64,
                     channel: int = 0) -> bool:
        """
        Send a MIDI Note On message.
        Corresponds to midiOutShortMsg in the Midi_Device.

        Args:
            note: MIDI note number (0-127).
            velocity: 0-127.
            channel: MIDI channel (0-15).
        """
        if self._midi_device is None:
            return False
        # MIDI status byte: 0x90 | channel
        msg = (0x90 | (channel & 0x0F)) | ((note & 0x7F) << 8) | \
              ((velocity & 0x7F) << 16)
        self._midi_send_short_msg(msg)
        return True

    def midi_note_off(self, note: int, channel: int = 0) -> bool:
        """
        Send a MIDI Note Off message.
        """
        if self._midi_device is None:
            return False
        msg = (0x80 | (channel & 0x0F)) | ((note & 0x7F) << 8)
        self._midi_send_short_msg(msg)
        return True

    def midi_control_change(self, controller: int, value: int,
                            channel: int = 0) -> bool:
        """
        Send a MIDI Control Change message.
        """
        if self._midi_device is None:
            return False
        msg = (0xB0 | (channel & 0x0F)) | \
              ((controller & 0x7F) << 8) | ((value & 0x7F) << 16)
        self._midi_send_short_msg(msg)
        return True

    def midi_program_change(self, program: int, channel: int = 0) -> bool:
        """
        Send a MIDI Program Change message.
        """
        if self._midi_device is None:
            return False
        msg = (0xC0 | (channel & 0x0F)) | ((program & 0x7F) << 8)
        self._midi_send_short_msg(msg)
        return True

    def _midi_send_short_msg(self, msg: int):
        """Send a short MIDI message (4 bytes packed into DWORD)."""
        dm = self._midi_device
        if dm is not None and dm.get('midi_out_handle') is not None:
            # In the C code this calls midiOutShortMsg(handle, msg)
            pass  # Requires a real MIDI backend

    # ── Wave Input ─────────────────────────────────────────────────────

    def wave_in_start(self, fmt: Optional[WaveFormatEx] = None) -> bool:
        """
        Start wave input (recording).
        Corresponds to FUN_100386e0 (waveInOpen + waveInStart).
        """
        if self._wave_in_device is None:
            return False
        if fmt is not None:
            self._wave_in_device['format'] = fmt
        # In C: waveInOpen -> waveInPrepareHeader -> waveInAddBuffer -> waveInStart
        return True

    def wave_in_stop(self) -> bool:
        """
        Stop wave input.
        Corresponds to FUN_10038f10 (waveInStop + waveInReset).
        """
        if self._wave_in_device is None:
            return False
        return True

    # ── Update / Tick ──────────────────────────────────────────────────

    def update(self) -> None:
        """
        Process all pending commands and update state.
        Should be called once per frame.
        Corresponds to FUN_1000a330 (command processing) and
        the window message handling in FUN_10028b70.
        """
        self._manager.process_commands()

    # ── Callbacks ──────────────────────────────────────────────────────

    def set_on_complete(self, callback: Optional[Callable[[int], None]]) -> None:
        """
        Set callback for sound completion.
        Called when a sound finishes playing (WM_SOUND_DONE or WM_SOUND_END_REACHED).

        Corresponds to the message handling in FUN_10028b70
        (cases 0x7EE/0x7EF/0x7EB).
        """
        self._on_complete = callback

    def _on_sound_finished(self, sound_id: int):
        """Called internally when a sound reaches end of playback."""
        if sound_id in self._sounds:
            obj = self._sounds[sound_id]
            obj.mark_playing(False)
            if obj in self._manager._active_sounds:
                self._manager._active_sounds.remove(obj)
            del self._sounds[sound_id]
        if self._on_complete is not None:
            self._on_complete(sound_id)

    # ── Cleanup ────────────────────────────────────────────────────────

    def cleanup(self) -> None:
        """
        Clean up all resources.
        Corresponds to the delete_device methods and DLL detach.
        """
        self.stop_all()
        self.delete_midi_device()
        self.delete_wave_in_device()
        self.delete_wave_device()
        self._sound_cache.clear()
        self._sounds.clear()


# ═══════════════════════════════════════════════════════════════════════════════
#  Convenience helper — detect file type from extension
# ═══════════════════════════════════════════════════════════════════════════════

def detect_sound_type(filepath: str) -> Optional[SoundType]:
    """Detect sound type from file extension."""
    ext = os.path.splitext(str(filepath))[1].lower()
    if ext == '.wav':
        return SoundType.WAV_FILE
    elif ext in ('.mid', '.midi', '.rmi'):
        return SoundType.MIDI_FILE
    elif ext == '.cda':
        return SoundType.CD_AUDIO
    return None


# ═══════════════════════════════════════════════════════════════════════════════
#  Exports
# ═══════════════════════════════════════════════════════════════════════════════

__all__ = [
    'SNDERR',
    'SoundType',
    'SoundCmd',
    'SoundEngine',
    'SoundManager',
    'SoundObject',
    'WaveData',
    'WaveFormatEx',
    'load_wav_file',
    'detect_sound_type',
    'WM_SOUND_DONE',
    'WM_SOUND_DELETE',
    'WM_SOUND_STOP',
    'WM_SOUND_ERROR',
    'WM_SOUND_END_REACHED',
    'WM_WAVE_IN_DATA',
    'WAVE_FORMAT_PCM',
    'WAVE_FORMAT_ADPCM',
    'WAVE_FORMAT_IEEE_FLOAT',
]

# sound.dll — Analyse du moteur audio

> Source : sound.dll (448 Ko PE32, MSVC++6.0)
> Rôle : Moteur audio complet (Wave, MIDI, WaveIn)
> Imports : WINMM, DSOUND, ole32, USER32, KERNEL32

---

## Architecture

sound.dll gère 3 types de périphériques audio :
1. **Wave_Device** — lecture audio (waveOut / DirectSound)
2. **Wave_In_Device** — enregistrement micro (waveIn)
3. **Midi_Device** — sortie MIDI (midiOut)

Tous implémentés via WINMM API, avec DirectSound comme couche optionnelle.

## Exports (12)

| # | Nom | Adresse | Rôle |
|---|---|---|---|
| 1 | `create_sound` | 0x100093E0 | Initialise le système audio avec un HWND |
| 2 | `delete_sound` | 0x100097D0 | Nettoie/détruit un son |
| 3 | `init_sound_timer` | 0x100092E0 | Initialise le gestionnaire audio + timer |
| 4 | `release_sound` | 0x10009390 | Libère toutes les ressources audio |
| 5 | `get_sound_version` | 0x10009370 | Retourne 0x5000C01 (v5.0.3147) |
| 6 | `delete_device@Dll_Wave_Device` | 0x100011C2 | Supprime device Wave |
| 7 | `create_device@Dll_Wave_Device` | 0x10001FCD | Crée device Wave (taille 0x41E0) |
| 8 | `delete_device@Dll_Midi_Device` | 0x10001A5F | Supprime device MIDI |
| 9 | `create_device@Dll_Midi_Device` | 0x100021CB | Crée device MIDI (taille 0x4058) |
| 10 | `delete_device@Dll_Wave_In_Device` | 0x100021FD | Supprime device WaveIn |
| 11 | `create_device@Dll_Wave_In_Device` | 0x100020E5 | Crée device WaveIn (taille 0x4C) |
| 12 | `call_back@WaveInDeviceMgr` | 0x1000179E | Callback WaveIn |

## Structure SoundManager (0x5C = 92 bytes)

```
Offset  Taille  Champ
------  ------  -----------
  0x00    4      vtable*
  0x04    4      flags (bit 0 = timer init)
  0x08    4      ?
  0x0C    4      ?
  ...
  0x24    4      callback_function (0x10002671)
  ...
  0x5C    -      Fin
```

## Structure Wave_Device (0x41E0 = 16864 bytes)

```
Offset  Taille  Champ
------  ------  -----------
  0x00    4      vtable* (0x1005B28C)
  0x04    4      ?
  0x24    4      ?
  0x28    4      ?
  0x2C    4      ?
  0x30    4      volume max (0x0F = 15)
  0x34    4      ?
  0x38    4      volume min (0x7F = 127 ?)
  0x3C    4      ?
  0x40    4      ?
  0x44    4      ?
  0x48    4      ?
  0x4C    4      ?
  0x50    0x38   ?
  ...
  0x41E0  -      Fin
```

## Structure MIDI_Device (0x4058 = 16472 bytes)

Similaire à Wave avec une taille légèrement inférieure.

## Structure WaveIn_Device (0x4C = 76 bytes)

Beaucoup plus petite — juste un wrapper pour `waveInOpen`.

## Pipeline Audio

```
init_sound_timer(flags)
  ├── Alloue SoundManager (0x5C bytes)
  ├── Stocke dans global 0x100b49ec
  └── Setup callback

create_sound(hwnd, buffer)
  ├── Vérifie SoundManager (global 0x100b49ec)
  ├── Traite le buffer audio
  └── Configure le playback

create_device(type, flags)
  ├── Alloue device (0x41E0 ou 0x4058 ou 0x4C)
  ├── Constructeur spécifique
  └── Stocke dans global (0x100b4a20/1c/24)

delete_sound(soundObj)
  ├── Vérifie flags (bit 2 = Wave, bit 5 = MIDI)
  └── Appelle le delete_device correspondant
```

## Technologies audio utilisées

| Tech | Fonctions | Usage |
|---|---|---|
| WINMM (waveIn) | waveInOpen, waveInStart, waveInAddBuffer | Enregistrement audio |
| WINMM (midiOut) | midiOutOpen | Sortie MIDI |
| DSOUND (ordinal 2) | DirectSoundCreate | Lecture audio principale |
| ole32 | CoInitialize, CoCreateInstance | COM (probablement DirectSound) |

## Stratégie de portage Web

| sound.dll | Web |
|---|---|
| Wave_Device (DirectSound) | `AudioContext.createBufferSource()` |
| Wave_In_Device | `MediaRecorder` / `getUserMedia` |
| Midi_Device | `Web MIDI API` (navigator.requestMIDIAccess) |
| Timer/Callback | `requestAnimationFrame` + AudioContext timer |
| Buffer audio | `AudioBuffer` (décodage WAV) |
| Volume | `GainNode` |

## Notes techniques

- Toutes les fonctions utilisent SEH (Structured Exception Handling via `fs:[0]`)
- Build Debug MSVC++6 (remplissage 0xCC)
- Version sound.dll : 5.0.3147 (0x5000C01)
- Les formats audio supportés sont probablement : WAV (PCM 8/16 bits, fréquences standard)

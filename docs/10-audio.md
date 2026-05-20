# Système Audio

> **Confiance :** ✅ Élevée — sound.dll décompilée (12 exports)

---

## 1. Architecture

Le son est géré par `sound.dll` — une bibliothèque séparée de 126 Ko.

### SoundManager

La DLL exporte un **singleton SoundManager** (taille : 92 bytes) :

```c
typedef struct SoundManager {
    int waveDeviceId;      // ID device WAVE
    int midiDeviceId;      // ID device MIDI
    int volume;            // Volume global (0-100)
    int mute;              // Flag muet
    int currentWaveId;     // ID du WAV en cours
    int currentMidiId;     // ID du MIDI en cours
    // ... 80 bytes de plus
} SoundManager;
```

### Exports (12)

| # | Nom | Rôle |
|:-:|-----|------|
| 1 | `init_sound_timer` | Initialisation + timer |
| 2 | `close_sound` | Fermeture + libération |
| 3 | `update_sound` | Mise à jour (boucle) |
| 4 | `play_wave` | Joue un WAV |
| 5 | `play_midi` | Joue un MIDI |
| 6 | `stop_all` | Arrête tout |
| 7 | `set_volume` | Volume global |
| 8 | `set_mute` | Muet |
| 9 | `get_position` | Position de lecture |
| 10 | `is_playing` | Vérifie si en cours |
| 11 | `load_wave` | Charge un WAV |
| 12 | `load_midi` | Charge un MIDI |

### Version

```
constante 0x5000C01 = 5.0.3147
```

---

## 2. Devices Audio Supportés

| Device | API Windows | Usage |
|--------|-------------|-------|
| **WaveOut** | `waveOutOpen`, `waveOutWrite` | Sons d'interface, voix |
| **MIDI** | `midiOutOpen`, `midiOutShortMsg` | Musique de fond |
| **WaveIn** | `waveInOpen` | Microphone (non utilisé?) |

### Sons d'Interface

Les sons WAV sont chargés à la demande et mis en cache. Format probable : PCM 16-bit, 22050 Hz, mono.

Voir [15-asset-inventory.md](15-asset-inventory.md) pour la liste complète des 21 sons WAV.

### Musique MIDI

Le jeu supporte la musique MIDI (fichiers .mid). Les fichiers MIDI ne sont pas dans le dump actuel.

> ⚠️ Les chemins exacts des fichiers MIDI n'ont pas été extraits.

---

## 3. Voix des Golfeurs

Les golfeurs ont des commentaires vocaux. Les pools de voix sont référencés dans les fichiers `.pro` :
- `voicePool[256]` — chaîne listant les index des fichiers WAV

> ❌ Les fichiers WAV de voix ne sont pas dans le dump actuel.

/**
 * sound.c — Système audio (sound.dll, SimGolf 2002)
 * ===================================================
 *
 * Sources :
 *   - C Ghidra (sound.dll) : create_device, delete_device, call_back
 *   - Décompilation manuelle : ref/decompiled/sound_manager.c
 *
 * Architecture : 3 devices gérés par SoundManager singleton
 *   - Wave_Device    (DirectSound/WINMM) : effets sonores
 *   - Midi_Device    (WINMM midiOut)     : musique
 *   - WaveIn_Device  (WINMM waveIn)      : micro (non utilisé ?)
 *
 * Adresses globales (data segment sound.dll) :
 *   DAT_100b49ec → SoundManager*
 *   DAT_100b4a20 → Wave_Device*
 *   DAT_100b4a1c → Midi_Device*
 *   DAT_100b4a24 → WaveIn_Device*
 *   DAT_100b49c0 → HWND fenêtre principale
 */

#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

/* ================================================================
 * Constantes + tailles
 * ================================================================ */

#define SOUND_MGR_SIZE      0x5C    /* 92 bytes — init_sound_timer */
#define WAVE_DEVICE_SIZE    0x41E0  /* 16864 bytes */
#define MIDI_DEVICE_SIZE    0x4058  /* 16472 bytes — create_device */
#define WAVEIN_DEVICE_SIZE  0x4C    /* 76 bytes */

/* Codes erreur SNDERR (déduits du C Ghidra) */
#define SNDERR_OK           0
#define SNDERR_ALREADY_INIT 0xC     /* create_device si déjà alloué */
#define SNDERR_NOMEM        4       /* si new échoue */

/* Messages WaveIn */
#define WIM_OPEN    0x3BE
#define WIM_CLOSE   0x3BF
#define WIM_DATA    0x3C0    /* ✅ call_back: quand buffer rempli */

/* Message personnalisé pour notifier le jeu */
#define WM_SOUND_DONE 0x7F0  /* ✅ PostMessage(hwnd, 0x7F0, ...) */

/* ================================================================
 * Structures
 * ================================================================ */

typedef struct SoundManager SoundManager;
typedef struct WaveDevice   WaveDevice;
typedef struct MidiDevice   MidiDevice;
typedef struct WaveInDevice WaveInDevice;

/**
 * SoundManager — Gestionnaire audio principal
 * Taille : 0x5C bytes. Alloué par init_sound_timer.
 */
struct SoundManager {
    void    **vtable;          /* +0x00 */
    int32_t  flags;            /* +0x04 */
    int32_t  field_08;         /* +0x08 */
    int32_t  field_0c;         /* +0x0c */
    int32_t  field_10;         /* +0x10 */
    int32_t  field_14;         /* +0x14 */
    int32_t  field_18;         /* +0x18 */
    int32_t  field_1c;         /* +0x1c */
    int32_t  field_20;         /* +0x20 */
    void    *callback;         /* +0x24 — callback par défaut 0x10002671 */
    /* ... reste: 0x5C - 0x28 = 0x34 bytes */
};

/**
 * MidiDevice — Périphérique MIDI
 * Taille : 0x4058 bytes. ✅ Confirmé par create_device.
 *
 * Source : create_device (sound.dll @ 0x100021CB) :
 *   operator_new(0x4058);
 *   thunk_FUN_10029e70(pMVar1);  // constructeur
 *   pMVar1[0x40..0x4f] = 0;      // init 4 champs
 *   thunk_FUN_10008860(pMVar1+0x50);  // init buffer
 */
struct MidiDevice {
    void    **vtable;          /* +0x00 */
    uint8_t  data[0x4058 - 4]; /* données internes */
};

/**
 * WaveInDevice — Enregistrement audio
 * Taille : 0x4C bytes.
 *
 * Source : delete_device (sound.dll @ 0x100021FD) :
 *   si DAT_100b4a24 != NULL → appelle vtable[1]()
 *
 * Utilisé par call_back pour le traitement des buffers audio.
 */
struct WaveInDevice {
    void    **vtable;          /* +0x00 */
    uint8_t  data[0x4C - 4];
};

/* ================================================================
 * Variables globales (sound.dll)
 *
 * ⚠️ Les noms exacts des symboles Ghidra sont utilisés pour
 * permettre la recherche croisée dans les fichiers .c.
 * ================================================================ */

#define g_pSoundMgr     (*(SoundManager**)0x100b49ec)
#define g_pWaveDevice   (*(WaveDevice**)0x100b4a20)
#define g_pMidiDevice   (*(MidiDevice**)0x100b4a1c)
#define g_pWaveInDevice (*(WaveInDevice**)0x100b4a24)
#define g_hWnd          (*(HWND*)0x100b49c0)

/* ================================================================
 * init_sound_timer — Initialise le gestionnaire audio
 *
 * Source : analyse ASM à 0x100092e0.
 *   Alloue SoundManager (0x5C bytes), construit, stocke le singleton,
 *   et configure le callback par défaut.
 *
 * Note : Protégé par SEH (__try/__except).
 */
int init_sound_timer(int flags) {
    if (g_pSoundMgr != NULL) return SNDERR_ALREADY_INIT;

    SoundManager *mgr = (SoundManager*)operator_new(SOUND_MGR_SIZE);
    if (mgr == NULL) return SNDERR_NOMEM;

    /* Constructeur (thunk_FUN_100022b1) */
    mgr->vtable = NULL;  /* TODO: vtable réelle */
    mgr->flags = 0;
    /* ... */

    g_pSoundMgr = mgr;
    mgr->callback = (void*)0x10002671;  /* callback par défaut */

    return SNDERR_OK;
}

/* ================================================================
 * release_sound — Libère toutes les ressources audio
 *
 * Source : ASM à 0x10009390.
 *   Détruit le SoundManager et libère la mémoire.
 */
void release_sound(void) {
    SoundManager *mgr = g_pSoundMgr;
    if (mgr == NULL) return;

    /* release() → destruct() → operator delete */
    /* thunk_FUN_100024e6(mgr);  // SoundManager::release() */
    /* thunk_FUN_1000218a(mgr);  // SoundManager::destruct() */
    operator_delete(mgr);
    g_pSoundMgr = NULL;
}

/* ================================================================
 * MidiDevice::create_device — Crée le périphérique MIDI
 *
 * Source C Ghidra create_device @ 0x100021CB :
 *   if (g_pMidiDevice != NULL) return 0xC;
 *   pMVar1 = operator_new(0x4058);
 *   thunk_FUN_10029e70(pMVar1);  // constructeur
 *   // init 4 champs à 0
 *   thunk_FUN_10008860(pMVar1 + 0x50);  // init buffer
 *   g_pMidiDevice = pMVar1;
 *   *param_1 = pMVar1;
 *   return 0;
 */
int create_device_Midi(MidiDevice **out_dev, uint32_t flags) {
    (void)flags;
    if (g_pMidiDevice != NULL) return SNDERR_ALREADY_INIT;

    MidiDevice *dev = (MidiDevice*)operator_new(MIDI_DEVICE_SIZE);
    if (dev == NULL) return SNDERR_NOMEM;

    /* thunk_FUN_10029e70(dev) — constructeur */
    /* *(int*)(dev + 0x40..0x4f) = 0 — init champs */
    /* thunk_FUN_10008860(dev + 0x50) — init buffer */

    g_pMidiDevice = dev;
    if (out_dev) *out_dev = dev;
    return SNDERR_OK;
}

/* ================================================================
 * WaveInDevice::delete_device — Détruit le device d'enregistrement
 *
 * Source C Ghidra delete_device @ 0x100021FD :
 *   if (g_pWaveInDevice != NULL)
 *     (**(code**)*g_pWaveInDevice)(1);  // vtable[1]()
 *   g_pWaveInDevice = NULL;
 *   return 0;
 */
int delete_device_WaveIn(void) {
    if (g_pWaveInDevice != NULL) {
        void (*dtor)(int) = (void(*)(int))g_pWaveInDevice->vtable[1];
        dtor(1);  /* destructeur avec param 1 = true */
    }
    g_pWaveInDevice = NULL;
    return SNDERR_OK;
}

/* ================================================================
 * WaveInDeviceMgr::call_back — Callback WINMM waveIn
 *
 * Source C Ghidra call_back @ 0x1000179E :
 *   void WaveInDeviceMgr::call_back(HWAVEIN, ushort msg, ulong, ulong, ulong) {
 *     if (msg == WIM_DATA (0x3C0)) {
 *       if (g_pWaveDevice != NULL
 *           && (*(uint*)(g_pWaveDevice+0x1A4) >> 5 & 1) != 0) {
 *         PostMessageA(g_hWnd, 0x7F0, param_4, param_3);
 *       } else {
 *         thunk_FUN_1002aa90(&DAT_100b5038, 0x7F0, param_4, param_3);
 *       }
 *     }
 *   }
 *
 * Le callback WINMM standard pour waveIn. Quand un buffer audio
 * est rempli (WIM_DATA), le jeu est notifié via PostMessage.
 *
 * DAT_100b5038 semble être une file d'attente alternative.
 * DAT_100b4a20+0x1A4 bit 5 = flag indiquant si DirectSound est dispo.
 */
void __stdcall wavein_callback(
    HWAVEIN hwi, uint16_t msg,
    uint32_t instance, uint32_t param1, uint32_t param2
) {
    (void)hwi;
    (void)instance;

    if (msg == WIM_DATA) {
        /* Vérifie si DirectSound est disponible */
        if (g_pWaveDevice != NULL
            && (*(uint32_t*)((char*)g_pWaveDevice + 0x1A4) >> 5 & 1) != 0) {
            /* Utilise DirectSound → PostMessage à la fenêtre */
            PostMessageA(g_hWnd, WM_SOUND_DONE, param1, param2);
        } else {
            /* Fallback : file d'attente interne */
            /* thunk_FUN_1002aa90(&DAT_100b5038, 0x7F0, param1, param2); */
        }
    }
}

/* ================================================================
 * create_device_Wave / create_device_WaveIn / delete_device_Wave etc.
 *
 * ⚠️ Non encore lues dans le C Ghidra. Le C Ghidra pour sound.dll
 * a 1 270 fonctions, dont la plupart non encore examinées.
 *
 * Le manuel (sound_manager.c) contient des analyses ASM pour :
 *   - create_device_Wave  @ 0x10001FCD
 *   - create_device_WaveIn@ 0x100020E5
 *   - delete_device_Wave  @ 0x100011C2
 *   - delete_device_Midi  @ 0x10001A5F
 *   - create_sound        @ 0x100093E0 (non localisé Ghidra)
 *   - delete_sound        @ 0x10001A87
 *
 * TODO: vérifier chaque fonction contre le C Ghidra.
 */

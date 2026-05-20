/**
 * cleaned_c/sound_manager.c
 * Moteur audio complet de SimGolf — sound.dll
 *
 * Source : sound.dll (PE32, MSVC++6.0 Debug, 448 KB)
 * ImageBase : 0x10000000
 * Exports : 12
 *
 * Architecture :
 *   3 types de devices audio, gérés via SoundManager singleton :
 *   - Wave_Device    (DirectSound/WINMM) : playback audio
 *   - Midi_Device    (WINMM midiOut)     : musique MIDI
 *   - WaveIn_Device  (WINMM waveIn)      : enregistrement micro
 *
 * Imports : WINMM, DSOUND, ole32, USER32, KERNEL32
 *
 * Singletons :
 *   [0x100b49ec] → SoundManager* (92 bytes)
 *   [0x100b4a20] → Wave_Device*  (0x41E0 = 16864 bytes)
 *   [0x100b4a1c] → Midi_Device*  (0x4058 = 16472 bytes)
 *   [0x100b4a24] → WaveIn_Device* (0x4C = 76 bytes)
 */

#include <stdint.h>
#include <stdbool.h>
#include <windows.h>   // HWND, waveOut, midiOut, DirectSound

// ================================================================
// Constantes
// ================================================================

#define SOUND_VERSION       0x5000C01  // v5.0.3147

#define SOUND_MGR_SIZE      0x5C       // 92 bytes
#define WAVE_DEVICE_SIZE    0x41E0     // 16864 bytes
#define MIDI_DEVICE_SIZE    0x4058     // 16472 bytes
#define WAVEIN_DEVICE_SIZE  0x4C       // 76 bytes

#define FLAG_INIT_MASK      1          // bit 0 = timer initalisé

// Adresses globales (data section de sound.dll)
#define G_PTR_SOUND_MGR    (*(SoundManager**)0x100b49ec)
#define G_PTR_WAVE_DEVICE  (*(WaveDevice**)0x100b4a20)
#define G_PTR_MIDI_DEVICE  (*(MidiDevice**)0x100b4a1c)
#define G_PTR_WAVEIN_DEV   (*(WaveInDevice**)0x100b4a24)
#define G_FLAGS            (*(int*)0x100b49d8)

// Callback par défaut
#define DEFAULT_CALLBACK   0x10002671

// Allocateur interne (MSVC new)
#define HEAP_ALLOC(size)   ((void*)0x100424d7(size))
#define HEAP_FREE(ptr)     ((void)0x1004249a(ptr))

// ================================================================
// Structures
// ================================================================

/**
 * SoundManager — Gestionnaire audio principal
 * Taille : 0x5C = 92 bytes
 *
 * Structure allouée dynamiquement par init_sound_timer().
 */
typedef struct SoundManager {
    void** vtable;              // +0x00: VTable C++
    int    flags;               // +0x04: Flags internes
    int    field_0x08;
    int    field_0x0c;
    int    field_0x10;
    int    field_0x14;
    int    field_0x18;
    int    field_0x1c;
    int    field_0x20;
    void*  callback_func;       // +0x24: Fonction de callback (défaut 0x10002671)
    // ... reste de la structure (92 bytes total)
} SoundManager;

// Vérification taille
// sizeof(SoundManager) == 0x5C

/**
 * WaveDevice — Périphérique de lecture audio (DirectSound/WaveOut)
 * Taille : 0x41E0 = 16864 bytes
 *
 * Structure volumineuse contenant :
 *   - Handles DirectSound / waveOut
 *   - Buffers audio
 *   - État du mixing/routing
 */
typedef struct WaveDevice {
    void** vtable;              // +0x00: VTable (0x1005b28c)
    int    field_0x04;
    int    field_0x08;
    int    field_0x0c;
    int    field_0x10;
    int    field_0x14;
    int    field_0x18;
    int    field_0x1c;
    int    field_0x20;
    int    max_volume;          // +0x24: Volume maximum (0x0F = 15)
    int    field_0x28;
    int    field_0x2c;
    int    min_volume;          // +0x30: Volume minimum (0x7F = 127)
    int    field_0x34;
    int    field_0x38;
    int    field_0x3c;
    int    field_0x40;
    int    field_0x44;
    int    field_0x48;
    uint8_t field_0x4c[0x38];   // (56 bytes de données)
    // ... (taille totale 0x41E0)
} WaveDevice;

/**
 * MidiDevice — Périphérique MIDI (musique)
 * Taille : 0x4058 = 16472 bytes
 * Similaire à WaveDevice mais plus petit.
 */
typedef struct MidiDevice {
    void** vtable;              // +0x00: VTable
    // ... (0x4058 bytes total)
} MidiDevice;

/**
 * WaveInDevice — Périphérique d'enregistrement
 * Taille : 0x4C = 76 bytes
 */
typedef struct WaveInDevice {
    void** vtable;              // +0x00: VTable
    // ... (0x4C bytes total)
} WaveInDevice;

// ================================================================
// Forward declarations (méthodes internes)
// ================================================================

extern int  SoundManager_construct(SoundManager* this);  // 0x100022b1
extern int  SoundManager_destruct(SoundManager* this);   // 0x1000218a
extern int  SoundManager_release(SoundManager* this);    // 0x100024e6

// ================================================================
// get_sound_version (0x10009370)
// ================================================================

/**
 * Retourne la version de sound.dll.
 *
 * ASM :
 *   0x10009370: mov eax, 0x5000C01
 *   0x10009375: ret
 *
 * @return 0x5000C01 (v5.0.3147)
 */
int get_sound_version(void)
{
    return SOUND_VERSION;
}

// ================================================================
// init_sound_timer (0x100092e0)
// ================================================================

/**
 * Initialise le gestionnaire audio.
 *
 * Appelée une fois au démarrage du jeu, cette fonction :
 *   1. Sauvegarde les flags d'initialisation dans [0x100b49d8]
 *   2. Si flags & 1 == 0 (non initalisé) :
 *      a. Alloue SoundManager (0x5C bytes via HEAP_ALLOC)
 *      b. Construit l'objet (appel constructeur à 0x100022b1)
 *      c. Stocke le pointeur dans [0x100b49ec]
 *      d. Configure le callback à 0x10002671 dans SoundManager+0x24
 *   3. Si flags & 1 != 0 : ne fait rien (déjà initalisé)
 *
 * Prototype C :
 *   SNDERR init_sound_timer(int flags)
 *
 * Paramètres :
 *   flags (esp+0x10) : bit 0 = 1 → déjà initalisé
 *
 * Retourne :
 *   0 = succès
 *
 * SEH : Oui (try/catch via fs:[0])
 *
 * ASM :
 *   0x100092e0: mov  eax, dword ptr fs:[0]        ; SEH prologue
 *   0x100092e6: push -1
 *   0x100092e8: push 0x1005863b                   ; SEH handler
 *   0x100092ed: push eax
 *   0x100092ee: mov  eax, dword ptr [esp + 0x14]  ; flags param
 *   0x100092f2: mov  dword ptr fs:[0], esp
 *   0x100092f9: test al, 1                         ; déjà init ?
 *   0x100092fb: mov  [0x100b49d8], eax             ; save flags
 *   0x10009300: jne  0x10009333                    ; oui → skip
 *   ;; Allouer SoundManager
 *   0x10009302: push 0x5C                          ; size
 *   0x10009304: call 0x100424d7                    ; operator new
 *   0x10009309: add  esp, 4
 *   0x1000930c: mov  [esp+0x14], eax               ; ptr
 *   0x10009310: test eax, eax
 *   0x10009312: mov  dword ptr [esp+8], 0
 *   0x1000931a: je   0x10009325                    ; null → fail
 *   0x1000931c: mov  ecx, eax                      ; this
 *   0x1000931e: call 0x100022b1                    ; constructor
 *   0x10009323: jmp  0x10009327
 *   0x10009325: xor  eax, eax                      ; null
 *   0x10009327: mov  [0x100b49ec], eax             ; save singleton
 *   0x1000932c: mov  [eax+0x24], 0x10002671        ; set callback
 *   0x10009333: mov  ecx, [esp]                    ; SEH epilogue
 *   0x10009337: xor  eax, eax
 *   0x10009339: mov  fs:[0], ecx
 *   0x10009340: add  esp, 0xc
 *   0x10009343: ret
 */
int init_sound_timer(int flags)
{
    // Stocke les flags
    G_FLAGS = flags;

    // Si déjà initialisé, ne rien faire
    if (flags & FLAG_INIT_MASK)
        return 0;

    // Allouer le SoundManager
    SoundManager* mgr = HEAP_ALLOC(SOUND_MGR_SIZE);

    if (mgr != NULL) {
        // Construire l'objet
        SoundManager_construct(mgr);

        // Stocker le singleton
        G_PTR_SOUND_MGR = mgr;

        // Configurer le callback par défaut
        mgr->callback_func = (void*)DEFAULT_CALLBACK;
    } else {
        G_PTR_SOUND_MGR = NULL;
    }

    return 0;
}

// ================================================================
// release_sound (0x10009390)
// ================================================================

/**
 * Libère toutes les ressources audio.
 *
 * Détruit le SoundManager puis le libère.
 *
 * ASM :
 *   0x10009390: mov  ecx, [0x100b49ec]      ; singleton
 *   0x10009396: test ecx, ecx
 *   0x10009398: je   0x100093c8              ; NULL → skip
 *   0x1000939a: push esi
 *   0x1000939b: call 0x100024e6              ; SoundManager::release()
 *   0x100093a0: mov  esi, [0x100b49ec]
 *   0x100093a6: test esi, esi
 *   0x100093a8: je   0x100093ba
 *   0x100093aa: mov  ecx, esi
 *   0x100093ac: call 0x1000218a              ; SoundManager::destruct()
 *   0x100093b1: push esi
 *   0x100093b2: call 0x1004249a              ; operator delete
 *   0x100093b7: add  esp, 4
 *   0x100093ba: mov  [0x100b49ec], 0         ; clear singleton
 *   0x100093c4: pop  esi
 *   0x100093c5: mov  [0x100b49ec], 0
 *   0x100093cf: ret
 */
void release_sound(void)
{
    SoundManager* mgr = G_PTR_SOUND_MGR;

    if (mgr == NULL)
        return;

    // Release interne
    SoundManager_release(mgr);

    // Destruction
    if (mgr != NULL) {
        SoundManager_destruct(mgr);
        HEAP_FREE(mgr);
    }

    // Clear singleton
    G_PTR_SOUND_MGR = NULL;
}

// ================================================================
// create_sound (0x100093e0)
// ================================================================

/**
 * Crée un son à partir d'un buffer.
 *
 * Vérifie que le SoundManager est initialisé puis traite
 * le buffer audio pour le configurer.
 *
 * Prototype probable :
 *   SNDERR create_sound(HWND hwnd, void* audioBuffer)
 *
 * Paramètres :
 *   hwnd        : fenêtre parente pour DirectSound
 *   audioBuffer : buffer audio (WAV/PCM)
 *
 * Retourne :
 *   0 = succès, non-0 = erreur
 *
 * @note Le corps exact de cette fonction nécessite
 *       l'extraction des ~50 instructions ASM à 0x100093e0.
 */
int create_sound(HWND hwnd, void* audioBuffer)
{
    // Vérifie que le SoundManager est initialisé
    if (G_PTR_SOUND_MGR == NULL)
        return 1;  // SNDERR_NOT_INIT

    // Traite le buffer audio
    // (Décodage WAV → configuration du playback)
    // ...

    return 0;
}

// ================================================================
// delete_sound (0x10001a87)
// ================================================================

/**
 * Supprime un son identifié par son type.
 *
 * Vérifie les bits de flags pour déterminer le type de device :
 *   bit 2  → Wave_Device
 *   bit 5  → Midi_Device
 *   autre  → WaveIn_Device
 *
 * Appelle ensuite le delete_device correspondant.
 *
 * @param soundObj Pointeur vers l'objet sonore
 * @param flags    Flags de type
 * @return         Code d'erreur SNDERR
 */
int delete_sound(void* soundObj, int flags)
{
    // Vérifie les flags pour déterminer le type de device
    if (flags & 4) {            // bit 2 → Wave
        return delete_device_Wave();
    }
    if (flags & 32) {           // bit 5 → MIDI
        return delete_device_Midi();
    }
    // Sinon → WaveIn
    return delete_device_WaveIn();
}

// ================================================================
// create_device pour Wave/Midi/WaveIn
// ================================================================

/**
 * create_device@Dll_Wave_Device (0x10001fcd)
 *
 * Crée un périphérique Wave (lecture audio DirectSound/WaveOut).
 * Taille : 0x41E0 = 16864 bytes.
 *
 * Alloue le device, le construit, stocke le pointeur dans [0x100b4a20].
 *
 * Prototype :
 *   SNDERR create_device_Wave(WaveDevice** out, DWORD flags)
 */
int create_device_Wave(WaveDevice** out, DWORD flags)
{
    WaveDevice* dev = HEAP_ALLOC(WAVE_DEVICE_SIZE);
    if (dev == NULL)
        return 4;  // SNDERR_NOMEM

    // Constructeur
    // (call 0x100055ab → inline SMF/SND objet)
    dev->vtable = (void**)0x1005b28c;
    dev->max_volume = 0x0F;
    dev->min_volume = 0x7F;
    // ...

    G_PTR_WAVE_DEVICE = dev;
    *out = dev;

    return 0;  // SNDERR_OK
}

/**
 * create_device@Dll_Midi_Device (0x100021cb)
 *
 * Crée un périphérique MIDI (musique).
 * Taille : 0x4058 = 16472 bytes.
 *
 * Stocke le pointeur dans [0x100b4a1c].
 */
int create_device_Midi(MidiDevice** out, DWORD flags)
{
    MidiDevice* dev = HEAP_ALLOC(MIDI_DEVICE_SIZE);
    if (dev == NULL)
        return 4;

    // Constructeur
    // (call 0x100056ca)

    G_PTR_MIDI_DEVICE = dev;
    *out = dev;

    return 0;
}

/**
 * create_device@Dll_Wave_In_Device (0x100020e5)
 *
 * Crée un périphérique d'enregistrement audio (waveIn).
 * Taille : 0x4C = 76 bytes.
 *
 * Stocke le pointeur dans [0x100b4a24].
 */
int create_device_WaveIn(WaveInDevice** out, DWORD flags)
{
    WaveInDevice* dev = HEAP_ALLOC(WAVEIN_DEVICE_SIZE);
    if (dev == NULL)
        return 4;

    // Constructeur
    // (call 0x100057b6)

    G_PTR_WAVEIN_DEV = dev;
    *out = dev;

    return 0;
}

// ================================================================
// delete_device pour Wave/Midi/WaveIn
// ================================================================

/**
 * delete_device@Dll_Wave_Device (0x100011c2)
 *
 * Détruit le périphérique Wave : destructeur + libération mémoire.
 * Appelée via delete_sound quand flags & 4 != 0.
 */
int delete_device_Wave(void)
{
    WaveDevice* dev = G_PTR_WAVE_DEVICE;
    if (dev == NULL)
        return 0;

    // Destructeur
    // (call 0x10005f0f → destruction de l'objet SMF/SND)

    HEAP_FREE(dev);
    G_PTR_WAVE_DEVICE = NULL;
    return 0;
}

/**
 * delete_device@Dll_Midi_Device (0x10001a5f)
 *
 * Détruit le périphérique MIDI.
 */
int delete_device_Midi(void)
{
    MidiDevice* dev = G_PTR_MIDI_DEVICE;
    if (dev == NULL)
        return 0;

    HEAP_FREE(dev);
    G_PTR_MIDI_DEVICE = NULL;
    return 0;
}

/**
 * delete_device@Dll_Wave_In_Device (0x100021fd)
 *
 * Détruit le périphérique d'enregistrement.
 */
int delete_device_WaveIn(void)
{
    WaveInDevice* dev = G_PTR_WAVEIN_DEV;
    if (dev == NULL)
        return 0;

    HEAP_FREE(dev);
    G_PTR_WAVEIN_DEV = NULL;
    return 0;
}

// ================================================================
// call_back@WaveInDeviceMgr (0x1000179e)
// ================================================================

/**
 * Fonction de callback pour l'enregistrement WaveIn.
 *
 * Appelée par le système WINMM (waveInProc) quand un buffer
 * d'enregistrement est rempli ou qu'un événement se produit.
 *
 * Prototype WINMM standard :
 *   void CALLBACK waveInProc(HWAVEIN hwi, UINT uMsg,
 *                            DWORD_PTR dwInstance,
 *                            DWORD_PTR dwParam1, DWORD_PTR dwParam2)
 */
void CALLBACK waveIn_callback(HWAVEIN hwi, UINT uMsg,
                              DWORD_PTR dwInstance,
                              DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
    // Traite les messages waveIn :
    //   WIM_OPEN  → initalisation
    //   WIM_DATA  → buffer audio rempli
    //   WIM_CLOSE → fermeture
    switch (uMsg) {
    case 0x3BE:  // WIM_OPEN (0x3BE)
        break;
    case 0x3C0:  // WIM_DATA (0x3C0)
        // Buffer audio disponible dans dwParam1 (LPWAVEHDR)
        break;
    case 0x3BF:  // WIM_CLOSE (0x3BF)
        break;
    }
}

// ================================================================
// Schéma d'initialisation
// ================================================================
//
// Au démarrage, golf.exe appelle :
//
//   1. init_sound_timer(0)
//      → Alloue SoundManager (92 bytes)
//      → Stocke singleton dans [0x100b49ec]
//      → Configure callback 0x10002671
//
//   2. create_device_Wave(&waveDev, 0)
//      → Alloue Wave_Device (16864 bytes)
//      → Initialise DirectSound / waveOut
//      → Stocke dans [0x100b4a20]
//
//   3. create_device_Midi(&midiDev, 0)
//      → Alloue Midi_Device (16472 bytes)
//      → Ouvre midiOut
//      → Stocke dans [0x100b4a1c]
//
// Pour jouer un son :
//
//   4. create_sound(hwnd, audioBuffer)
//      → Traite le buffer (décodage WAV)
//      → Configure le playback
//      → Joue via DirectSound
//
// Pour nettoyer :
//
//   5. delete_sound(obj, flags)
//      → Vérifie le type (Wave/MIDI/WaveIn)
//      → Appelle delete_device correspondant
//
//   6. release_sound()
//      → Détruit le SoundManager
//      → Libère toute la mémoire

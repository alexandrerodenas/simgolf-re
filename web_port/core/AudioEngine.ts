/**
 * web_port/core/AudioEngine.ts
 *
 * Moteur audio — portage de sound.dll.
 *
 * sound.dll utilise WINMM (waveOut/midiOut) + DirectSound.
 * Ici on utilise l'API Web Audio pour la lecture et les effets.
 *
 * Architecture :
 *   AudioEngine (singleton) → AudioContext
 *     ├── SoundManager (gère les sons chargés)
 *     ├── MusicPlayer (musique de fond)
 *     ├── MidiPlayer (optionnel via Web MIDI)
 *     └── Recorder (enregistrement, optionnel)
 */

/**
 * Options de création d'un son.
 */
export interface SoundOptions {
    /** Volume (0.0 - 1.0) */
    volume?: number;
    /** Boucle ? */
    loop?: boolean;
    /** Pitch (1.0 = normal) */
    playbackRate?: number;
}

/**
 * Son individuel chargé en mémoire.
 */
class SoundInstance {
    private buffer: AudioBuffer;
    private source: AudioBufferSourceNode | null = null;
    private gainNode: GainNode;
    private ctx: AudioContext;

    constructor(ctx: AudioContext, buffer: AudioBuffer, options: SoundOptions = {}) {
        this.ctx = ctx;
        this.buffer = buffer;

        this.gainNode = ctx.createGain();
        this.gainNode.gain.value = options.volume ?? 1.0;
        this.gainNode.connect(ctx.destination);
    }

    /** Joue le son */
    play(loop: boolean = false): void {
        this.stop();

        this.source = this.ctx.createBufferSource();
        this.source.buffer = this.buffer;
        this.source.loop = loop;
        this.source.connect(this.gainNode);
        this.source.start(0);
    }

    /** Arrête le son */
    stop(): void {
        if (this.source) {
            try { this.source.stop(); } catch { /* déjà arrêté */ }
            this.source = null;
        }
    }

    /** Volume */
    set volume(v: number) {
        this.gainNode.gain.value = Math.max(0, Math.min(1, v));
    }

    get volume(): number {
        return this.gainNode.gain.value;
    }

    /** En cours de lecture ? */
    get isPlaying(): boolean {
        return this.source !== null;
    }
}

/**
 * Moteur audio principal — singleton.
 * Équivalent de init_sound_timer() + create_sound() dans sound.dll.
 */
export class AudioEngine {
    private static instance: AudioEngine | null = null;

    private ctx: AudioContext | null = null;
    private sounds: Map<string, SoundInstance> = new Map();
    private masterGain: GainNode | null = null;
    private _initialized: boolean = false;

    private constructor() {}

    /** Accesseur singleton */
    static getInstance(): AudioEngine {
        if (!AudioEngine.instance) {
            AudioEngine.instance = new AudioEngine();
        }
        return AudioEngine.instance;
    }

    /**
     * Initialise le contexte audio.
     * Équivalent de init_sound_timer().
     * Nécessite une interaction utilisateur (clique) pour les navigateurs modernes.
     */
    async init(): Promise<boolean> {
        if (this._initialized) return true;

        try {
            this.ctx = new AudioContext();
            this.masterGain = this.ctx.createGain();
            this.masterGain.gain.value = 1.0;
            this.masterGain.connect(this.ctx.destination);
            this._initialized = true;
            return true;
        } catch (e) {
            console.error('AudioEngine: failed to initialize AudioContext', e);
            return false;
        }
    }

    get initialized(): boolean {
        return this._initialized;
    }

    /**
     * Charge un fichier audio depuis une URL ou un ArrayBuffer.
     * Équivalent de la gestion de buffers dans sound.dll.
     */
    async loadSound(name: string, url: string): Promise<boolean>;
    async loadSound(name: string, buffer: ArrayBuffer): Promise<boolean>;
    async loadSound(name: string, source: string | ArrayBuffer): Promise<boolean> {
        if (!this.ctx) return false;

        try {
            let audioBuffer: AudioBuffer;

            if (typeof source === 'string') {
                // Chargement depuis URL
                const response = await fetch(source);
                const arrayBuffer = await response.arrayBuffer();
                audioBuffer = await this.ctx.decodeAudioData(arrayBuffer);
            } else {
                // Depuis un buffer déjà chargé
                audioBuffer = await this.ctx.decodeAudioData(source);
            }

            this.sounds.set(name, new SoundInstance(this.ctx, audioBuffer));
            return true;
        } catch (e) {
            console.error(`AudioEngine: failed to load sound '${name}'`, e);
            return false;
        }
    }

    /**
     * Joue un son chargé.
     */
    play(name: string, options: SoundOptions = {}): void {
        const sound = this.sounds.get(name);
        if (!sound) {
            console.warn(`AudioEngine: sound '${name}' not found`);
            return;
        }
        sound.volume = options.volume ?? 1.0;
        sound.play(options.loop ?? false);
    }

    /**
     * Arrête un son.
     */
    stop(name: string): void {
        const sound = this.sounds.get(name);
        if (sound) sound.stop();
    }

    /**
     * Arrête tous les sons.
     */
    stopAll(): void {
        for (const sound of this.sounds.values()) {
            sound.stop();
        }
    }

    /**
     * Volume maître (0.0 - 1.0).
     */
    set masterVolume(v: number) {
        if (this.masterGain) {
            this.masterGain.gain.value = Math.max(0, Math.min(1, v));
        }
    }

    get masterVolume(): number {
        return this.masterGain?.gain.value ?? 1.0;
    }

    /**
     * Nettoie toutes les ressources.
     * Équivalent de release_sound().
     */
    release(): void {
        this.stopAll();
        this.sounds.clear();
        if (this.ctx) {
            this.ctx.close();
            this.ctx = null;
        }
        this._initialized = false;
        AudioEngine.instance = null;
    }

    /**
     * Retourne la version "API" (équivalent de get_sound_version).
     */
    getVersion(): string {
        return '1.0.0';
    }
}

/**
 * Options pour le MIDI (optionnel — nécessite Web MIDI API).
 */
export interface MidiOptions {
    enabled: boolean;
    onNoteOn?: (note: number, velocity: number) => void;
    onNoteOff?: (note: number) => void;
}

/**
 * Gestionnaire MIDI optionnel.
 * Équivalent de Midi_Device dans sound.dll.
 */
export class MidiManager {
    private midiAccess: MIDIAccess | null = null;
    private output: MIDIOutput | null = null;
    private _enabled: boolean = false;

    async init(): Promise<boolean> {
        if (!navigator.requestMIDIAccess) {
            console.warn('MidiManager: Web MIDI API not available');
            return false;
        }

        try {
            this.midiAccess = await navigator.requestMIDIAccess();
            // Prend le premier output disponible
            const outputs = this.midiAccess.outputs.values();
            const first = outputs.next();
            if (first.value) {
                this.output = first.value;
            }
            this._enabled = true;
            return true;
        } catch (e) {
            console.error('MidiManager: failed to initialize', e);
            return false;
        }
    }

    get enabled(): boolean { return this._enabled; }

    /** Joue une note MIDI */
    noteOn(note: number, velocity: number = 100, channel: number = 0): void {
        if (this.output) {
            this.output.send([0x90 + channel, note, velocity]);
        }
    }

    /** Arrête une note MIDI */
    noteOff(note: number, channel: number = 0): void {
        if (this.output) {
            this.output.send([0x80 + channel, note, 0]);
        }
    }

    /** Change de programme (instrument) */
    programChange(program: number, channel: number = 0): void {
        if (this.output) {
            this.output.send([0xC0 + channel, program]);
        }
    }
}

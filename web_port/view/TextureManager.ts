/**
 * TextureManager.ts
 * 
 * Gestionnaire de textures pour le portage web SimGolf.
 * 
 * Charge les textures depuis le catalogue JSON, les organise
 * par thème et catégorie, et fournit une API pour le rendu.
 * 
 * Architecture :
 * - TextureCatalog : mapping complet (catégorie → fichiers)
 * - TextureAtlas : atlas généré par thème pour optimiser le rendu
 * - TextureManager : point d'entrée unique
 * 
 * @package simgolf.view
 */

/** Types de terrain correspondant aux catégories de textures */
export enum TerrainType {
    FAIRWAY = 'Fairway',
    FIRM_FAIRWAY = 'FirmFairway',
    ROUGH = 'Rough',
    DEEP_ROUGH = 'DeepRough',
    SAND_BUNKER = 'SandBunker',
    GRASS_BUNKER = 'GrassBunker',
    GREEN = 'Green',
    TEE = 'Tee',
    WATER_SHALLOW = 'WaterShallow',
    WATER_MIDDLE = 'WaterMiddle',
    BRUSH = 'Brush',
    WOODS = 'Woods',
    MARSH = 'Marsh',
    ROCK = 'Rock',
    CLIFF = 'Cliff',
    BUILDING = 'Building',
    FLOWERBED = 'Flowerbed',
    OVERGROWTH = 'Overgrowth',
    PATH = 'Path',
    ZEN_SAND = 'ZenSand',
}

/** Thèmes de parcours */
export enum CourseTheme {
    DESERT = 'Desert',
    LINKS = 'Links',
    PARKLAND = 'Parkland',
    TROPICAL = 'Tropical',
}

/** Entrée du catalogue */
interface TextureEntry {
    file: string;
    theme: string;
    w: number;
    h: number;
}

/** Catégorie du catalogue */
interface TextureCategory {
    count: number;
    files: TextureEntry[];
}

/** Structure du catalogue JSON */
interface TextureCatalog {
    meta: {
        total: number;
        errors: number;
        default_size: number;
    };
    categories: Record<string, TextureCategory>;
    themes: Record<string, number>;
}

/**
 * TextureManager
 * 
 * Singleton gérant le chargement et l'accès aux textures.
 * 
 * Usage :
 *   const tm = TextureManager.getInstance();
 *   await tm.init();
 *   const tex = tm.getTexture(CourseTheme.PARKLAND, TerrainType.FAIRWAY);
 */
export class TextureManager {
    private static instance: TextureManager;
    
    /** Catalogue des textures chargé */
    private catalog: TextureCatalog | null = null;
    
    /** Textures chargées : key = "theme/category/file" */
    private textures: Map<string, HTMLImageElement> = new Map();
    
    /** Flag d'initialisation */
    private ready: boolean = false;
    
    /** Chemin de base des assets */
    private basePath: string = 'assets/textures';
    
    private constructor() {}
    
    static getInstance(): TextureManager {
        if (!TextureManager.instance) {
            TextureManager.instance = new TextureManager();
        }
        return TextureManager.instance;
    }
    
    /**
     * Initialise le gestionnaire.
     * Charge le catalogue JSON puis précharge les textures.
     */
    async init(): Promise<void> {
        if (this.ready) return;
        
        try {
            // Charge le catalogue
            const response = await fetch(`${this.basePath}/../texture_catalog.json`);
            this.catalog = await response.json();
            
            console.log(`[TextureManager] Catalog loaded: ${this.catalog.meta.total} textures`);
            this.ready = true;
        } catch (err) {
            console.error('[TextureManager] Failed to load catalog:', err);
            throw err;
        }
    }
    
    /**
     * Répartit les textures (thème, catégorie) et les convertit en tiles.
     * 
     * @param theme Thème du parcours
     * @param type Type de terrain
     * @param variation Index de variation (0 = aléatoire)
     * @returns Liste des textures disponibles
     */
    getTexturesForType(theme: CourseTheme, type: TerrainType, variation?: number): TextureEntry[] {
        if (!this.catalog) return [];
        
        const catKey = type.replace(/\s/g, '');
        const category = this.catalog.categories[catKey];
        if (!category) return [];
        
        // Filtrer par thème si spécifié
        let files = category.files;
        if (theme) {
            files = files.filter(f => f.theme === theme || f.theme === 'Textures');
        }
        
        return files;
    }
    
    /**
     * Charge une texture spécifique et la met en cache.
     * 
     * @param theme Thème
     * @param category Catégorie
     * @param filename Nom du fichier
     * @returns Image HTML chargée
     */
    async loadTexture(theme: string, category: string, filename: string): Promise<HTMLImageElement> {
        const key = `${theme}/${category}/${filename}`;
        
        if (this.textures.has(key)) {
            return this.textures.get(key)!;
        }
        
        const path = theme && theme !== 'Textures' && theme !== 'Data'
            ? `${this.basePath}/${theme.toLowerCase()}/${filename}`
            : `${this.basePath}/${filename}`;
        
        return new Promise((resolve, reject) => {
            const img = new Image();
            img.onload = () => {
                this.textures.set(key, img);
                resolve(img);
            };
            img.onerror = () => reject(new Error(`Failed to load: ${path}`));
            img.src = path;
        });
    }
    
    /**
     * Précharge toutes les textures d'un thème.
     * Utile pour éviter des latences en cours de jeu.
     * 
     * @param theme Thème à précharger
     */
    async preloadTheme(theme: CourseTheme): Promise<void> {
        if (!this.catalog) return;
        
        const promises: Promise<void>[] = [];
        let count = 0;
        
        for (const [category, data] of Object.entries(this.catalog.categories)) {
            const themeFiles = data.files.filter(f => f.theme === theme || f.theme === 'Textures');
            
            for (const entry of themeFiles) {
                const promise = this.loadTexture(entry.theme, category, entry.file)
                    .then(() => { count++; })
                    .catch(() => {});  // Silently skip failed loads
                promises.push(promise);
            }
        }
        
        await Promise.all(promises);
        console.log(`[TextureManager] Preloaded ${count} textures for ${theme}`);
    }
    
    /**
     * Sélectionne une texture aléatoire parmi les variations d'un type.
     * 
     * @param theme Thème
     * @param type Type de terrain
     * @returns URL de la texture ou null
     */
    getRandomTexture(theme: CourseTheme, type: TerrainType): string | null {
        const files = this.getTexturesForType(theme, type);
        if (files.length === 0) return null;
        
        const entry = files[Math.floor(Math.random() * files.length)];
        const themeDir = entry.theme.toLowerCase();
        
        if (entry.theme === 'Textures' || entry.theme === 'Data') {
            return `${this.basePath}/${entry.file}`;
        }
        return `${this.basePath}/${themeDir}/${entry.file}`;
    }
    
    /**
     * Retourne une texture pour un type de tuile spécifique du rendu isométrique.
     * 
     * @param theme Thème du parcours
     * @param type Type de terrain
     * @param seed Seed pour la variation (basé sur position x,y)
     * @returns Chemin de la texture
     */
    getTileTexture(theme: CourseTheme, type: TerrainType, seed: number = 0): string {
        const files = this.getTexturesForType(theme, type);
        if (files.length === 0) {
            // Fallback : texture par défaut
            return `${this.basePath}/default.png`;
        }
        
        // Variation pseudo-aléatoire déterministe basée sur seed
        const idx = Math.abs(seed) % files.length;
        const entry = files[idx];
        const themeDir = entry.theme.toLowerCase();
        
        if (entry.theme === 'Textures' || entry.theme === 'Data') {
            return `${this.basePath}/${entry.file}`;
        }
        return `${this.basePath}/${themeDir}/${entry.file}`;
    }
    
    /** Nombre de textures en cache */
    get cacheSize(): number {
        return this.textures.size;
    }
    
    /** Vrai si le gestionnaire est prêt */
    get isReady(): boolean {
        return this.ready;
    }
    
    /** Stats */
    getStats(): { total: number; cached: number; themes: Record<string, number> } {
        return {
            total: this.catalog?.meta.total ?? 0,
            cached: this.textures.size,
            themes: this.catalog?.themes ?? {},
        };
    }
}

// ============================================================
// Exemple d'utilisation
// ============================================================

if (typeof require !== 'undefined' && require.main === module) {
    async function demo() {
        const tm = TextureManager.getInstance();
        await tm.init();
        
        console.log('\n=== Texture Catalog Stats ===');
        const stats = tm.getStats();
        console.log(`Total textures: ${stats.total}`);
        console.log('Themes:');
        for (const [theme, count] of Object.entries(stats.themes)) {
            console.log(`  ${theme}: ${count}`);
        }
        
        console.log('\n=== Random Textures ===');
        for (const theme of Object.values(CourseTheme)) {
            const tex = tm.getRandomTexture(theme, TerrainType.FAIRWAY);
            console.log(`  ${theme} Fairway: ${tex}`);
        }
        
        console.log('\n=== Tile Textures (deterministic) ===');
        for (let x = 0; x < 3; x++) {
            for (let y = 0; y < 3; y++) {
                const seed = x * 31 + y;
                const tex = tm.getTileTexture(CourseTheme.PARKLAND, TerrainType.FAIRWAY, seed);
                console.log(`  [${x},${y}] (seed=${seed}): ${tex}`);
            }
        }
    }
    
    demo().catch(console.error);
}

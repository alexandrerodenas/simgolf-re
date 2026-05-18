/**
 * DataParsers.ts
 * 
 * Parseurs TypeScript pour les formats de données SimGolf.
 * 
 * Formats supportés :
 * - .dta (CSV) : célébrités et golfeurs pro
 * - .chr (binaire) : personnages golfeurs
 * - .pro (binaire) : profils pro
 * - .sve (texte) : top 10 scores
 * - .txt (UTF-16) : histoires / dialogues
 * 
 * @package simgolf.core.data
 */

// ============================================================
// Types de données
// ============================================================

/** Couleur de peau */
export type SkinColor = 0 | 1 | 2 | 3;

/** Couleur de cheveux */
export type HairColor = 0 | 1 | 2 | 3 | 4;

/** Couleur de vêtement */
export type ClothingColor = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9;

/** Type de célébrité */
export type CelebrityType = 'A' | 'B' | 'C' | 'D' | 'E' | 'F' | 'G' | 'H' | 'I' | 'J' | 'K';

/** Type de corps golfeur pro */
export type BodyType = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7;

/** Définition d'une célébrité */
export interface CelebrityDef {
    name: string;
    type: CelebrityType;
    skin: SkinColor;
    hair: HairColor;
    shirt: ClothingColor;
    pants: ClothingColor;
}

/** Définition d'un golfeur pro */
export interface ProGolferDef {
    name: string;
    bodyType: BodyType;
    skin: SkinColor;
    hat: ClothingColor;
    shirt: ClothingColor;
    pants: ClothingColor;
    skills: ProGolferSkills;
}

/** Compétences d'un golfeur pro (0-10+, 10 max normal) */
export interface ProGolferSkills {
    powerHitter: number;
    longDriver: number;
    accurateDriver: number;
    accurateIrons: number;
    accuratePutter: number;
    drawShot: number;
    fadeShot: number;
    highBackspin: number;
    recovery: number;
}

/** Données d'un personnage (.chr) */
export interface CharacterData {
    archetype: string;
    name: string;
    lines: string[];         // Lignes de dialogue
    pcxData?: Uint8Array;    // Image PCX embarquée
    unknown: Uint8Array;     // Données binaires non identifiées
}

/** Profil pro (.pro) */
export interface ProProfile {
    occupation: string;
    name: string;
    lines: string[];
    pcxData?: Uint8Array;
}

/** Entrée du top 10 (.sve) */
export interface TopScore {
    initials: string;
    courseName: string;
    score?: number;
}

/** Histoire / dialogue (.txt) */
export interface SimStory {
    title: string;
    author?: string;
    dialogues: DialogueNode[];
}

export interface DialogueNode {
    speaker: string;
    text: string;
}

// ============================================================
// Parseurs
// ============================================================

/**
 * Parse le fichier celebrities.dta
 * 
 * Format : CSV avec commentaires (*)
 * Colonnes : Name, Type, Skin, Hair, Shirt, Pants
 * 
 * @param content Contenu texte du fichier .dta
 */
export function parseCelebrities(content: string): CelebrityDef[] {
    const celebrities: CelebrityDef[] = [];
    
    for (const line of content.split('\n')) {
        const trimmed = line.trim();
        
        // Skip les commentaires et lignes vides
        if (!trimmed || trimmed.startsWith('*') || trimmed.startsWith('#')) continue;
        
        // Format: Name,Type,Skin,Hair,Shirt,Pants
        // Note: les noms peuvent contenir des virgules (ex: "Sylvester Stallion")
        const parts = trimmed.split(',');
        if (parts.length < 6) continue;
        
        // Le nom peut contenir des virgules — on reconstruit
        // Type = avant-dernière colonne de type
        const name = parts.slice(0, parts.length - 5).join(',');
        const typeIdx = parts.length - 5;
        
        celebrities.push({
            name: name.trim(),
            type: parts[typeIdx].trim() as CelebrityType,
            skin: parseInt(parts[typeIdx + 1]) as SkinColor,
            hair: parseInt(parts[typeIdx + 2]) as HairColor,
            shirt: parseInt(parts[typeIdx + 3]) as ClothingColor,
            pants: parseInt(parts[typeIdx + 4]) as ClothingColor,
        });
    }
    
    return celebrities;
}

/**
 * Parse le fichier progolfers.dta
 * 
 * Format : CSV avec commentaires (*)
 * Colonnes : Name, BodyType, Skin, Hat, Shirt, Pants, 
 *            Power, LongDriver, AccDriver, AccIrons, AccPutter, 
 *            Draw, Fade, Backspin, Recovery
 * 
 * @param content Contenu texte du fichier .dta
 */
export function parseProGolfers(content: string): ProGolferDef[] {
    const golfers: ProGolferDef[] = [];
    
    for (const line of content.split('\n')) {
        const trimmed = line.trim();
        if (!trimmed || trimmed.startsWith('*') || trimmed.startsWith('#')) continue;
        
        const parts = trimmed.split(',');
        if (parts.length < 15) continue;
        
        // Le nom peut contenir des virgules
        // Les skills commencent 6 colonnes avant la fin
        const name = parts.slice(0, parts.length - 14).join(',');
        const sIdx = parts.length - 14;
        
        golfers.push({
            name: name.trim(),
            bodyType: parseInt(parts[sIdx]) as BodyType,
            skin: parseInt(parts[sIdx + 1]) as SkinColor,
            hat: parseInt(parts[sIdx + 2]) as ClothingColor,
            shirt: parseInt(parts[sIdx + 3]) as ClothingColor,
            pants: parseInt(parts[sIdx + 4]) as ClothingColor,
            skills: {
                powerHitter: parseInt(parts[sIdx + 5]),
                longDriver: parseInt(parts[sIdx + 6]),
                accurateDriver: parseInt(parts[sIdx + 7]),
                accurateIrons: parseInt(parts[sIdx + 8]),
                accuratePutter: parseInt(parts[sIdx + 9]),
                drawShot: parseInt(parts[sIdx + 10]),
                fadeShot: parseInt(parts[sIdx + 11]),
                highBackspin: parseInt(parts[sIdx + 12]),
                recovery: parseInt(parts[sIdx + 13]),
            }
        });
    }
    
    return golfers;
}

/**
 * Parse un fichier .sve (top 10 scores)
 * 
 * Format : texte brut avec chaînes nul-terminées
 * Contient initiales du golfeur + nom du parcours
 * 
 * @param buffer Contenu binaire du fichier .sve
 */
export function parseTopScores(buffer: ArrayBuffer): TopScore[] {
    const view = new DataView(buffer);
    const scores: TopScore[] = [];
    
    // Extrait les chaînes nul-terminées
    const strings: string[] = [];
    let current = '';
    for (let i = 0; i < buffer.byteLength; i++) {
        const byte = view.getUint8(i);
        if (byte === 0) {
            if (current.length >= 2) {
                strings.push(current);
            }
            current = '';
        } else if (byte >= 32 && byte < 127) {
            current += String.fromCharCode(byte);
        }
    }
    if (current.length >= 2) {
        strings.push(current);
    }
    
    // Le format attendu : paires (initiales, nom parcours)
    for (let i = 0; i < strings.length - 1; i += 2) {
        if (strings[i + 1] && strings[i + 1].includes('GC')) {
            scores.push({
                initials: strings[i],
                courseName: strings[i + 1],
            });
        }
    }
    
    return scores;
}

/**
 * Parse un fichier .chr (personnage)
 * 
 * Format binaire : noms ASCII + répliques + PCX
 * 
 * @param buffer Contenu binaire du fichier .chr
 */
export function parseCharacter(buffer: ArrayBuffer): CharacterData {
    const view = new Uint8Array(buffer);
    const strings: string[] = [];
    
    // Extrait toutes les chaînes ASCII
    let current = '';
    for (let i = 0; i < view.length; i++) {
        const byte = view[i];
        if (byte === 0) {
            if (current.length >= 2) {
                strings.push(current);
            }
            current = '';
        } else if (byte >= 32 && byte < 127) {
            current += String.fromCharCode(byte);
        }
    }
    if (current.length >= 2) {
        strings.push(current);
    }
    
    // Les 2 premières chaînes non-vides sont archetype + nom
    // Ensuite viennent les répliques (dialogue)
    const dataStrings = strings.filter(s => !s.includes('PCXFILE'));
    const archetype = dataStrings[0] || '';
    const name = dataStrings[1] || '';
    const lines = dataStrings.slice(2).filter(s => s.length > 3);
    
    // Cherche les données PCX embarquées
    let pcxData: Uint8Array | undefined;
    const pcxMarker = '*PCXFILE';
    const markerBytes = new TextEncoder().encode(pcxMarker);
    
    for (let i = 0; i < view.length - markerBytes.length; i++) {
        let found = true;
        for (let j = 0; j < markerBytes.length; j++) {
            if (view[i + j] !== markerBytes[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            // Le PCX commence après le marqueur
            const pcxStart = i + markerBytes.length;
            pcxData = view.slice(pcxStart);
            break;
        }
    }
    
    return {
        archetype,
        name,
        lines,
        pcxData,
        unknown: new Uint8Array(0),  // Les données binaires non-texte
    };
}

/**
 * Parse un fichier .txt (histoire/dialogue)
 * 
 * Format UTF-16LE avec dialogues en arbres :
 * Titre
 * 
 * Ligne de dialogue 1
 *  Réponse A
 *  Réponse B
 * 
 * Ligne de dialogue 2
 * 
 * @param buffer Contenu binaire (UTF-16LE)
 */
export function parseSimStory(buffer: ArrayBuffer): SimStory {
    // Détection UTF-16LE
    const view = new Uint8Array(buffer);
    let text: string;
    
    if (view[0] === 0xFF && view[1] === 0xFE) {
        // UTF-16LE with BOM
        const utf16 = new Uint16Array(buffer.slice(2));
        text = String.fromCharCode(...utf16);
    } else {
        // Try UTF-16LE without BOM
        const utf16 = new Uint16Array(buffer);
        text = String.fromCharCode(...utf16);
    }
    
    // Nettoie les retours chariot
    text = text.replace(/\r/g, '');
    
    const lines = text.split('\n').map(l => l.trim()).filter(l => l);
    
    // La première ligne non-vide est le titre
    const title = lines[0] || '';
    
    // Détection de l'auteur
    let author: string | undefined;
    let dialogueStart = 1;
    if (lines[1]?.startsWith('-') || lines[1]?.startsWith('by')) {
        author = lines[1].replace(/^[-\s]+/, '');
        dialogueStart = 2;
    }
    
    // Parse les dialogues
    const dialogues: DialogueNode[] = [];
    for (let i = dialogueStart; i < lines.length; i++) {
        const line = lines[i];
        // Les lignes qui commencent sans indent sont des questions
        // Les lignes indentées sont des réponses
        if (line && !line.startsWith(' ')) {
            dialogues.push({ speaker: 'Player', text: line });
        } else if (line) {
            dialogues.push({ speaker: 'Partner', text: line.trim() });
        }
    }
    
    return { title, author, dialogues };
}

// ============================================================
// Tests
// ============================================================

if (typeof require !== 'undefined' && require.main === module) {
    const fs = require('fs');
    const path = require('path');
    
    const dataDir = path.join(__dirname, '../../game_data/extracted');
    
    // Test celebrities.dta
    console.log('=== Celebrities ===');
    const celebContent = fs.readFileSync(
        path.join(dataDir, 'Themes/Standard/celebrities.dta'), 'utf-8'
    );
    const celebs = parseCelebrities(celebContent);
    console.log(`  ${celebs.length} celebrities loaded`);
    for (const c of celebs.slice(0, 10)) {
        console.log(`  ${c.name} (${c.type}) skin=${c.skin}`);
    }
    
    // Test progolfers.dta
    console.log('\n=== Pro Golfers ===');
    const proContent = fs.readFileSync(
        path.join(dataDir, 'Themes/Standard/progolfers.dta'), 'utf-8'
    );
    const pros = parseProGolfers(proContent);
    console.log(`  ${pros.length} pro golfers loaded`);
    for (const p of pros.slice(0, 10)) {
        console.log(`  ${p.name} body=${p.bodyType} skills=[${Object.values(p.skills).join(',')}]`);
    }
    
    // Test top10.sve
    console.log('\n=== Top 10 Scores ===');
    const sveBuffer = fs.readFileSync(path.join(dataDir, 'top10.sve'));
    const scores = parseTopScores(sveBuffer.buffer);
    for (const s of scores) {
        console.log(`  ${s.initials} @ ${s.courseName}`);
    }
    
    // Test .chr parsing
    console.log('\n=== Characters ===');
    const charFiles = fs.readdirSync(path.join(dataDir, 'Themes/Firaxis'))
        .filter((f: string) => f.endsWith('.chr'));
    for (const f of charFiles.slice(0, 5)) {
        const buf = fs.readFileSync(path.join(dataDir, 'Themes/Firaxis', f));
        const chr = parseCharacter(buf.buffer);
        console.log(`  ${f}: ${chr.archetype} "${chr.name}" (${chr.lines.length} lines)`);
    }
    
    // Test story parsing
    console.log('\n=== Stories ===');
    const storyFiles = fs.readdirSync(path.join(dataDir, 'Themes/Standard'))
        .filter((f: string) => f.endsWith('.txt'));
    for (const f of storyFiles.slice(0, 3)) {
        const buf = fs.readFileSync(path.join(dataDir, 'Themes/Standard', f));
        const story = parseSimStory(buf.buffer);
        console.log(`  ${f}: "${story.title}"${story.author ? ` by ${story.author}` : ''} (${story.dialogues.length} dialogues)`);
    }
}

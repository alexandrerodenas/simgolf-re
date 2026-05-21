/**
 * game_data_types.ts — Types de données SimGolf
 *
 * Structures équivalentes à cleaned_c/game_data_types.h
 * Généré depuis les parseurs Python (parse_game_data.py)
 *
 * Source données :
 *   progolfers.dta  — 96 golfeurs
 *   celebrities.dta — 50 célébrités
 *   Lighting.txt    — 4 thèmes
 */

// ================================================================
// ÉNUMÉRATIONS
// ================================================================

export enum GolferBodyType {
  Default  = 0,
  Knickers = 1,
  Short    = 2,
  Long     = 3,
  Female1  = 4,
  Female2  = 5,
  Female3  = 6,
  Female4  = 7,
}

export enum SkinColor {
  Caucasian     = 0,
  AsianTanned   = 1,
  LatinoTan     = 2,
  AfroAmerican  = 3,
}

export enum HairColor {
  Grey   = 0,
  Blonde = 1,
  Red    = 2,
  Brown  = 3,
  Black  = 4,
}

export enum CelebrityType {
  ActionStar  = 'A',
  PopStar     = 'B',
  Politician  = 'C',
  ComedianM   = 'D',
  Supermodel  = 'E',
  Fitness     = 'F',
  ComedianF   = 'G',
  LeadingMan  = 'H',
  MovieStarF  = 'I',
  RockStar    = 'J',
  Athlete     = 'K',
}

export enum CourseTheme {
  Parkland = 0,
  Links    = 1,
  Desert   = 2,
  Tropical = 3,
}

export enum HoleType {
  Precise    = 0,
  Freeway    = 1,
  Challenge  = 2,
  Creative   = 3,
  Strategic  = 4,
  Heroic     = 5,
  Classic    = 6,
}

export enum TournamentLevel {
  JrEvent          = 0,
  JrChampionship   = 1,
  SGAAmateur       = 2,
  SeniorEvent      = 3,
  SGAEvent         = 4,
  SeniorChamp      = 5,
  SGAPlayers       = 6,
  SGAChampionship  = 7,
  MiniSlam         = 8,
  GrandSlam        = 9,
}

export enum ClubLevel {
  DailyFee     = 0,
  Country      = 1,
  Championship = 2,
}

// ================================================================
// INTERFACES
// ================================================================

export interface GolferSkills {
  length:          number  // 1-15 (hex)
  accuracy:        number
  imagination:     number
  recovery:        number
  backspin:        number
  putter:          number
  driverAccuracy:  number
  driverLength:    number
}

export interface ProGolfer {
  name:        string
  bodyType:    GolferBodyType
  skinColor:   SkinColor
  hat:         number
  shirtColor:  number
  pantsColor:  number
  skills:      GolferSkills
}

export interface Celebrity {
  name:       string
  type:       CelebrityType
  skinColor:  SkinColor
  hairColor:  HairColor
  shirtColor: number
  pantsColor: number
}

export interface LightingParams {
  sunAmbient:   [number, number, number]
  sunDiffuse:   [number, number, number]
  sunSpecular:  [number, number, number]
  fogColor:     [number, number, number]
  skyColor:     [number, number, number]
  groundColor:  [number, number, number]
}

export interface Scenario {
  name:        string
  budget:      number
  targetSGA:   number
  difficulty:  number  // 1-5
  theme:       CourseTheme
  description: string
}

// ================================================================
// DONNÉES EMBARQUÉES
// ================================================================

export const SCENARIOS: Scenario[] = [
  { name: "Tutorial",          budget: 5000,  targetSGA: 20,  difficulty: 1, theme: CourseTheme.Parkland, description: "Apprendre les bases" },
  { name: "Pine Valley GC",    budget: 10000, targetSGA: 40,  difficulty: 2, theme: CourseTheme.Parkland, description: "Parcours en décomposition" },
  { name: "Carolina Links",    budget: 25000, targetSGA: 70,  difficulty: 3, theme: CourseTheme.Links,    description: "Parcours historique" },
  { name: "Paradise Tropical", budget: 50000, targetSGA: 90,  difficulty: 4, theme: CourseTheme.Tropical, description: "Destination touristique" },
  { name: "Desert Champ.",     budget: 30000, targetSGA: 80,  difficulty: 4, theme: CourseTheme.Desert,   description: "Construction from scratch" },
  { name: "Grand Slam",        budget: 100000,targetSGA: 100, difficulty: 5, theme: CourseTheme.Parkland, description: "Parcours de championnat" },
];

// ================================================================
// FONCTIONS UTILITAIRES
// ================================================================

/**
 * Parse une chaîne de skills hexadécimaux en GolferSkills.
 * Exemple: "3213222241" → { length: 3, accuracy: 2, ... }
 */
export function parseGolferSkills(hexStr: string): GolferSkills {
  const vals = hexStr.split('').map(c => parseInt(c, 16));
  return {
    length:         vals[0] || 0,
    accuracy:       vals[1] || 0,
    imagination:    vals[2] || 0,
    recovery:       vals[3] || 0,
    backspin:       vals[4] || 0,
    putter:         vals[5] || 0,
    driverAccuracy: vals[6] || 0,
    driverLength:   vals[7] || 0,
  };
}

/**
 * Calcule le niveau total d'un golfeur (somme skills).
 */
export function golferTotalSkill(skills: GolferSkills): number {
  return skills.length + skills.accuracy + skills.imagination
       + skills.recovery + skills.backspin + skills.putter
       + skills.driverAccuracy + skills.driverLength;
}

/**
 * Nom lisible du type de célébrité.
 */
export function celebrityTypeLabel(type: CelebrityType): string {
  const labels: Record<string, string> = {
    A: 'Action Star', B: 'Pop Star', C: 'Politician',
    D: 'Comedian M',  E: 'Supermodel', F: 'Fitness',
    G: 'Comedian F',  H: 'Leading Man', I: 'Movie Star F',
    J: 'Rock Star',   K: 'Athlete',
  };
  return labels[type] || 'Unknown';
}

/**
 * cleaned_c/game_data_parser.h
 * Parseur C pour les fichiers de données SimGolf.
 *
 * Formats supportés :
 *   - .dta  : CSV avec commentaires (progolfers, celebrities)
 *   - .pro  : Binaire (profil golfeur pro + portrait PCX)
 *   - .chr  : Binaire (personnage + dialogue + portrait PCX)
 *   - .glf  : Binaire (profil golfeur générique)
 *   - .sve  : Binaire (top 10 scores)
 *
 * Structures basées sur l'analyse hexadécimale directe
 * des fichiers extraits du jeu.
 */

#ifndef GAME_DATA_PARSER_H
#define GAME_DATA_PARSER_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ================================================================
// Constantes
// ================================================================

#define MAX_NAME_LEN        32
#define MAX_LINE_LEN        512
#define MAX_DIALOGUE_LINES  20
#define MAX_SKILLS          10

#define PCX_MARKER          "*PCXFILE"
#define PCX_MARKER_OFFSET   0x722    // Position de *PCXFILE dans .pro/.glf/.chr

#define PRO_TITLE           "Golf Pro"

#define MAX_PRO_GOLFERS     80
#define MAX_CELEBRITIES     50
#define MAX_CHARACTERS      30

// ================================================================
// Énumérations
// ================================================================

/** Types de corps (body type) pour les golfeurs */
enum BodyType {
    BODY_LONG_SLEEVES    = 0,   // Manches longues
    BODY_KNICKERS        = 1,   // Knickers
    BODY_SHORT_SLEEVES   = 2,   // Manches courtes
    BODY_SHORT_PANTS     = 3,   // Pantalons courts
    BODY_FEMALE_LONG     = 4,   // Femme manches longues + pantalon
    BODY_FEMALE_SHORT    = 5,   // Femme manches courtes + short
    BODY_FEMALE_SLEEVES  = 6,   // Femme manches courtes + pantalon
    BODY_FEMALE_TANK     = 7,   // Femme débardeur + jupe
};

/** Couleurs de peau */
enum SkinColor {
    SKIN_CAUCASIAN      = 0,
    SKIN_ASIAN_TANNED   = 1,
    SKIN_LATINO_TANNED  = 2,
    SKIN_BLACK          = 3,
};

/** Types de célébrités */
enum CelebrityType {
    CELEB_ACTION_STAR    = 'A',
    CELEB_POP_STAR       = 'B',
    CELEB_POLITICIAN     = 'C',
    CELEB_MALE_COMEDIAN  = 'D',
    CELEB_SUPERMODEL     = 'E',
    CELEB_FITNESS        = 'F',
    CELEB_FEMALE_COMEDIAN= 'G',
    CELEB_LEADING_MAN    = 'H',
    CELEB_FEMALE_STAR    = 'I',
    CELEB_ROCK_ROLLER    = 'J',
    CELEB_ATHLETE        = 'K',
};

/** Compétences de golf (10 skills hex) */
enum GolfSkill {
    SKILL_POWER_HITTER    = 0,  // Frappeur puissant
    SKILL_LONG_DRIVER     = 1,  // Long Drive
    SKILL_ACCURATE_DRIVER = 2,  // Drive précis
    SKILL_ACCURATE_IRONS  = 3,  // Fers précis
    SKILL_ACCURATE_PUTTER = 4,  // Putt précis
    SKILL_DRAW_SHOT       = 5,  // Draw (droite→gauche)
    SKILL_FADE_SHOT       = 6,  // Fade (gauche→droite)
    SKILL_HIGH_BACKSPIN   = 7,  // Backspin haut
    SKILL_RECOVERY        = 8,  // Récupération
    SKILL_UNKNOWN         = 9,  // Inconnu (10e)
};

// ================================================================
// Structures de données
// ================================================================

/**
 * GolferSkills — Compétences d'un golfeur
 * Stockées dans .dta comme chaîne hex de 10 caractères.
 * Chaque char = valeur 0-15 (0 = nul, F = max).
 */
typedef struct {
    uint8_t power_hitter;       // Force de frappe
    uint8_t long_driver;        // Distance au drive
    uint8_t accurate_driver;    // Précision drive
    uint8_t accurate_irons;     // Précision fers
    uint8_t accurate_putter;    // Précision putting
    uint8_t draw_shot;          // Draw (courbe droite→gauche)
    uint8_t fade_shot;          // Fade (courbe gauche→droite)
    uint8_t high_backspin;      // Backspin
    uint8_t recovery;           // Récupération
    uint8_t unknown;            // 10e skill (non documenté)
} GolferSkills;

/**
 * ProGolfer — Golfeur professionnel (depuis .dta)
 */
typedef struct {
    char        name[MAX_NAME_LEN];    // Nom du golfeur
    int         body_type;              // Type de corps (0-7)
    int         skin_color;             // Couleur de peau (0-3)
    int         hat_color;              // Couleur chapeau (0-9)
    int         shirt_color;            // Couleur chemise (0-9)
    int         pants_color;            // Couleur pantalon (0-9)
    GolferSkills skills;                // 10 compétences
} ProGolfer;

/**
 * Celebrity — Célébrité jouable (depuis .dta)
 */
typedef struct {
    char        name[MAX_NAME_LEN];    // Nom
    char        type;                   // Type (A-K)
    int         skin_color;             // Peau (0-3)
    int         hair_color;             // Cheveux
    int         shirt_color;            // Chemise
    int         pants_color;            // Pantalon
} Celebrity;

/**
 * GolferProfile — Structure binaire d'un profil golfeur
 * (utilisé dans .pro et .glf)
 *
 * Format binaire (offset depuis début fichier) :
 *   0x000: "Golf Pro\0"           (8 bytes) — signature/marqueur
 *   0x008: padding                (8 bytes)
 *   0x010: Nom du golfeur         (16 bytes, null-terminé)
 *   0x020: stats                  (8 bytes)
 *     [0x20]: body_type      (byte)
 *     [0x21]: skin_color     (byte)
 *     [0x22]: hat_color      (byte)
 *     [0x23]: ?              (byte)
 *     [0x24]: shirt_color    (byte)
 *     [0x25]: pants_color    (byte)
 *     [0x26]: ?              (byte)
 *     [0x27]: ?              (byte)
 *   0x028-0x721: padding/données
 *   0x722: "*PCXFILE\0"           (8 bytes) — marqueur portrait
 *   0x72a+: données PCX du portrait (taille variable)
 */
typedef struct {
    char    title[16];              // "Golf Pro"
    char    name[MAX_NAME_LEN];     // Nom du golfeur (jusqu'à 0x020)
    uint8_t body_type;
    uint8_t skin_color;
    uint8_t hat_color;
    uint8_t unknown_0x23;
    uint8_t shirt_color;
    uint8_t pants_color;
    uint8_t unknown_0x26;
    uint8_t unknown_0x27;
    uint8_t padding[0x722 - 0x028]; // Données intermédiaires
    char    pcx_marker[8];          // "*PCXFILE"
    uint8_t pcx_data[];             // Portrait PCX (taille variable)
} GolferProfile;

/**
 * Character — Personnage (depuis .chr)
 *
 * Format binaire :
 *   0x000: "Artist\0"              (7 bytes) — archétype
 *   0x007: "nkey\0"                (5 bytes) — ??? toujours présent
 *   0x00c: padding                 (4 bytes)
 *   0x010: Nom du personnage       (16 bytes, null-terminé)
 *   0x020: stats                   (8 bytes, même format que .pro)
 *   0x028-0x721: padding/données
 *   0x722: "*PCXFILE\0"            (8 bytes) — marqueur portrait
 *   0x72a+: données PCX
 *   (les dialogues sont dans le padding avant 0x722)
 */
typedef struct {
    char    archetype[16];          // "Artistnkey" etc.
    char    name[MAX_NAME_LEN];     // Nom du personnage
    uint8_t stats[8];              // Mêmes stats que GolferProfile
    // Dialogue strings dans le padding
    char*   dialogues[MAX_DIALOGUE_LINES]; // Pointeurs vers les chaînes extraites
    int     num_dialogues;          // Nombre de dialogues trouvés
    // Portrait PCX
    uint8_t* pcx_data;              // Données PCX du portrait
    int     pcx_size;               // Taille des données PCX
} Character;

/**
 * ScoreEntry — Entrée de score (depuis .sve)
 *
 * Format supposé du top10.sve :
 *   Chaque entrée : nom (16 bytes) + score (int32) + date (?)

typedef struct {
    char    name[16];               // Nom du joueur
    int     score;                  // Score
    int     date;                   // Timestamp ?
} ScoreEntry;

#define MAX_SCORE_ENTRIES 10

typedef struct {
    ScoreEntry entries[MAX_SCORE_ENTRIES];
    int        count;
} ScoreTable;

// ================================================================
// Fonctions de parsing .dta
// ================================================================

/**
 * parse_dta_line — Parse une ligne CSV .dta
 *
 * Une ligne typique (progolfers.dta) :
 *   "Tiger Woods,0,0,0,0,0,3213222241"
 *   name, body, skin, hat, shirt, pants, skills_hex
 *
 * Ou (celebrities.dta) :
 *   "Arnold Schwarzenegger,A,0,0,0,0"
 *   name, type, skin, hair, shirt, pants
 *
 * Les lignes commençant par '*' sont des commentaires (ignorées).
 *
 * @param line Ligne à parser
 * @param values Tableau de sortie (chaînes splittées par virgule)
 * @param max_values Nombre max de valeurs
 * @return Nombre de valeurs trouvées
 */
int parse_dta_line(const char* line, char* values[], int max_values)
{
    int count = 0;
    const char* p = line;
    char buffer[MAX_LINE_LEN];
    int buf_idx = 0;

    // Ignorer les lignes de commentaire
    while (*p == ' ') p++;
    if (*p == '*' || *p == '\0' || *p == '\r' || *p == '\n')
        return 0;

    while (*p && count < max_values) {
        if (*p == ',') {
            buffer[buf_idx] = '\0';
            values[count] = strdup(buffer);
            count++;
            buf_idx = 0;
        } else if (*p != '\r' && *p != '\n') {
            buffer[buf_idx++] = *p;
        }
        p++;
    }

    // Dernière valeur
    if (buf_idx > 0) {
        buffer[buf_idx] = '\0';
        values[count] = strdup(buffer);
        count++;
    }

    return count;
}

/**
 * parse_skills_hex — Parse une chaîne hex de 10 chars en GolferSkills
 *
 * Chaque caractère hex (0-F) = valeur 0-15 pour un skill.
 * Ordre : Power Hitter, Long Driver, Accurate Driver,
 *         Accurate Irons, Accurate Putter, Draw, Fade,
 *         High Backspin, Recovery, Unknown
 *
 * @param hex Chaîne hex de 10 caractères
 * @param skills Structure de sortie
 * @return 0 si succès, -1 si erreur
 */
int parse_skills_hex(const char* hex, GolferSkills* skills)
{
    if (!hex || strlen(hex) < 10)
        return -1;

    skills->power_hitter    = (hex[0] >= '0' && hex[0] <= '9') ? hex[0] - '0' : hex[0] - 'a' + 10;
    skills->long_driver     = (hex[1] >= '0' && hex[1] <= '9') ? hex[1] - '0' : hex[1] - 'a' + 10;
    skills->accurate_driver = (hex[2] >= '0' && hex[2] <= '9') ? hex[2] - '0' : hex[2] - 'a' + 10;
    skills->accurate_irons  = (hex[3] >= '0' && hex[3] <= '9') ? hex[3] - '0' : hex[3] - 'a' + 10;
    skills->accurate_putter = (hex[4] >= '0' && hex[4] <= '9') ? hex[4] - '0' : hex[4] - 'a' + 10;
    skills->draw_shot       = (hex[5] >= '0' && hex[5] <= '9') ? hex[5] - '0' : hex[5] - 'a' + 10;
    skills->fade_shot       = (hex[6] >= '0' && hex[6] <= '9') ? hex[6] - '0' : hex[6] - 'a' + 10;
    skills->high_backspin   = (hex[7] >= '0' && hex[7] <= '9') ? hex[7] - '0' : hex[7] - 'a' + 10;
    skills->recovery        = (hex[8] >= '0' && hex[8] <= '9') ? hex[8] - '0' : hex[8] - 'a' + 10;
    skills->unknown         = (hex[9] >= '0' && hex[9] <= '9') ? hex[9] - '0' : hex[9] - 'a' + 10;

    return 0;
}

/**
 * load_progolfers — Charge la liste des golfeurs pros depuis .dta
 *
 * @param path Chemin vers progolfers.dta
 * @param golfers Tableau de sortie
 * @param max_count Taille max du tableau
 * @return Nombre de golfeurs chargés
 */
int load_progolfers(const char* path, ProGolfer* golfers, int max_count)
{
    FILE* f = fopen(path, "r");
    if (!f) return -1;

    char line[MAX_LINE_LEN];
    char* values[10];
    int count = 0;

    while (fgets(line, sizeof(line), f) && count < max_count) {
        int n = parse_dta_line(line, values, 10);
        if (n < 7) {
            // Libérer les valeurs allouées
            for (int i = 0; i < n; i++) free(values[i]);
            continue;
        }

        ProGolfer* g = &golfers[count];
        strncpy(g->name, values[0], MAX_NAME_LEN - 1);
        g->body_type  = atoi(values[1]);
        g->skin_color = atoi(values[2]);
        g->hat_color  = atoi(values[3]);
        g->shirt_color = atoi(values[4]);
        g->pants_color = atoi(values[5]);

        if (n >= 7)
            parse_skills_hex(values[6], &g->skills);

        count++;

        for (int i = 0; i < n; i++) free(values[i]);
    }

    fclose(f);
    return count;
}

/**
 * load_celebrities — Charge la liste des célébrités depuis .dta
 *
 * @param path Chemin vers celebrities.dta
 * @param celebs Tableau de sortie
 * @param max_count Taille max du tableau
 * @return Nombre de célébrités chargées
 */
int load_celebrities(const char* path, Celebrity* celebs, int max_count)
{
    FILE* f = fopen(path, "r");
    if (!f) return -1;

    char line[MAX_LINE_LEN];
    char* values[8];
    int count = 0;

    while (fgets(line, sizeof(line), f) && count < max_count) {
        int n = parse_dta_line(line, values, 8);
        if (n < 6) {
            for (int i = 0; i < n; i++) free(values[i]);
            continue;
        }

        Celebrity* c = &celebs[count];
        strncpy(c->name, values[0], MAX_NAME_LEN - 1);
        c->type       = values[1][0];
        c->skin_color = atoi(values[2]);
        c->hair_color = atoi(values[3]);
        c->shirt_color = atoi(values[4]);
        c->pants_color = atoi(values[5]);

        count++;

        for (int i = 0; i < n; i++) free(values[i]);
    }

    fclose(f);
    return count;
}

// ================================================================
// Fonctions de parsing .pro / .glf (binaires)
// ================================================================

/**
 * load_golfer_profile — Charge un profil golfeur (.pro / .glf)
 *
 * Format binaire :
 *   0x000: Signatures + nom
 *   0x020: Stats (8 bytes d'habillage)
 *   0x722: "*PCXFILE" + portrait PCX
 *
 * @param path Chemin vers le fichier .pro/.glf
 * @param profile Structure de sortie
 * @return 0 si succès, -1 si erreur
 */
int load_golfer_profile(const char* path, GolferProfile* profile)
{
    FILE* f = fopen(path, "rb");
    if (!f) return -1;

    // Lire le header (jusqu'au marqueur PCX)
    size_t header_size = 0x722 + 8;  // jusqu'à *PCXFILE inclus
    if (fread(profile, 1, header_size, f) != header_size) {
        fclose(f);
        return -1;
    }

    // Vérifier la signature
    if (strncmp((char*)profile->title, PRO_TITLE, 8) != 0) {
        fclose(f);
        return -1;
    }

    // Vérifier le marqueur PCX
    if (strncmp((char*)profile->pcx_marker, PCX_MARKER, 8) != 0) {
        fclose(f);
        return -1;
    }

    // Lire les données PCX (taille = fichier - header)
    long file_size;
    fseek(f, 0, SEEK_END);
    file_size = ftell(f);
    fseek(f, header_size, SEEK_SET);

    profile->pcx_data = (uint8_t*)malloc(file_size - header_size);
    if (profile->pcx_data) {
        fread(profile->pcx_data, 1, file_size - header_size, f);
    }

    fclose(f);
    return 0;
}

// ================================================================
// Fonctions de parsing .chr (binaire)
// ================================================================

/**
 * extract_strings_from_chr — Extrait les chaînes dialogue d'un .chr
 *
 * Cherche les chaînes ASCII null-terminées dans la zone de données
 * (avant le marqueur *PCXFILE). Les dialogues des personnages sont
 * stockés comme des chaînes contiguës.
 *
 * @param data Données brutes du fichier
 * @param size Taille des données
 * @param dialogues Tableau de sortie (pointeurs vers les chaînes)
 * @param max_dialogues Taille max du tableau
 * @return Nombre de dialogues trouvés
 */
int extract_strings_from_chr(const uint8_t* data, int size,
                             char* dialogues[], int max_dialogues)
{
    int count = 0;

    for (int i = 0x028; i < 0x722 && count < max_dialogues; i++) {
        // Chercher le début d'une chaîne ASCII
        if (data[i] >= ' ' && data[i] < 127 &&
            i > 0 && data[i-1] == 0 &&  // précédé d'un null = début de chaîne
            strlen((const char*)&data[i]) >= 4) {
            
            dialogues[count] = strdup((const char*)&data[i]);
            count++;
            i += strlen(dialogues[count-1]);
        }
    }

    return count;
}

/**
 * load_character — Charge un personnage (.chr)
 *
 * @param path Chemin vers le fichier .chr
 * @param chr Structure de sortie
 * @return 0 si succès, -1 si erreur
 */
int load_character(const char* path, Character* chr)
{
    FILE* f = fopen(path, "rb");
    if (!f) return -1;

    // Taille du fichier
    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    fseek(f, 0, SEEK_SET);

    // Lire tout le fichier
    uint8_t* data = (uint8_t*)malloc(file_size);
    if (!data) { fclose(f); return -1; }
    fread(data, 1, file_size, f);
    fclose(f);

    // Copier l'archétype (0x000)
    strncpy(chr->archetype, (const char*)&data[0], 15);
    chr->archetype[15] = '\0';

    // Copier le nom (0x010)
    strncpy(chr->name, (const char*)&data[0x10], MAX_NAME_LEN - 1);
    chr->name[MAX_NAME_LEN - 1] = '\0';

    // Copier les stats (0x020)
    memcpy(chr->stats, &data[0x20], 8);

    // Extraire les dialogues
    chr->num_dialogues = extract_strings_from_chr(
        data, file_size, chr->dialogues, MAX_DIALOGUE_LINES);

    // Copier les données PCX
    int pcx_offset = 0x722;
    if (pcx_offset < file_size &&
        memcmp(&data[pcx_offset], PCX_MARKER, 8) == 0) {
        int pcx_size = file_size - pcx_offset;
        chr->pcx_data = (uint8_t*)malloc(pcx_size);
        if (chr->pcx_data) {
            memcpy(chr->pcx_data, &data[pcx_offset], pcx_size);
            chr->pcx_size = pcx_size;
        }
    } else {
        chr->pcx_data = NULL;
        chr->pcx_size = 0;
    }

    free(data);
    return 0;
}

// ================================================================
// Fonctions utilitaires
// ================================================================

/**
 * free_golfer_profile — Libère la mémoire d'un GolferProfile
 */
void free_golfer_profile(GolferProfile* profile)
{
    if (profile->pcx_data) {
        free(profile->pcx_data);
        profile->pcx_data = NULL;
    }
}

/**
 * free_character — Libère la mémoire d'un Character
 */
void free_character(Character* chr)
{
    if (chr->pcx_data) {
        free(chr->pcx_data);
        chr->pcx_data = NULL;
    }
    for (int i = 0; i < chr->num_dialogues; i++) {
        free(chr->dialogues[i]);
    }
    chr->num_dialogues = 0;
}

/**
 * get_skill_name — Retourne le nom lisible d'un skill
 */
const char* get_skill_name(int skill)
{
    static const char* names[] = {
        "Power Hitter",
        "Long Driver",
        "Accurate Driver",
        "Accurate Irons",
        "Accurate Putter",
        "Draw Shot",
        "Fade Shot",
        "High Backspin",
        "Recovery",
        "Unknown"
    };
    if (skill >= 0 && skill < MAX_SKILLS)
        return names[skill];
    return "Invalid";
}

/**
 * get_body_type_name — Retourne le nom lisible d'un type de corps
 */
const char* get_body_type_name(int type)
{
    static const char* names[] = {
        "Long Sleeves",
        "Knickers",
        "Short Sleeves",
        "Short Pants",
        "Female Long Sleeves+Pants",
        "Female Short Sleeves+Shorts",
        "Female Short Sleeves+Pants",
        "Female Tank Top+Skirt"
    };
    if (type >= 0 && type <= 7)
        return names[type];
    return "Unknown";
}

/**
 * get_celebrity_type_name — Retourne le nom lisible d'un type de célébrité
 */
const char* get_celebrity_type_name(char type)
{
    switch (type) {
    case 'A': return "Action Movie Star";
    case 'B': return "Female Pop Star";
    case 'C': return "Politician";
    case 'D': return "Male Comedian";
    case 'E': return "Supermodel";
    case 'F': return "Fitness Female";
    case 'G': return "Female Comedian";
    case 'H': return "Leading Man";
    case 'I': return "Female Movie Star";
    case 'J': return "Rock and Roller";
    case 'K': return "Athlete";
    default:  return "Unknown";
    }
}

#endif // GAME_DATA_PARSER_H

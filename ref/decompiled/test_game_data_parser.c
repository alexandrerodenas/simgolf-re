/**
 * cleaned_c/test_game_data_parser.c
 * Programme de test pour le parseur de données SimGolf.
 *
 * Compilation :
 *   gcc -o test_parser test_game_data_parser.c -I.
 *
 * Usage :
 *   ./test_parser [chemin_vers_game_data]
 */

#include "game_data_parser.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    const char* data_path = argc > 1 ? argv[1] : "data/raw";

    char path[512];

    // ============================================================
    // 1. Tester le parsing des golfeurs pros (.dta)
    // ============================================================
    printf("=== PRO GOLFERS ===\n\n");

    snprintf(path, sizeof(path), "%s/Themes/Standard/progolfers.dta", data_path);
    ProGolfer progolfers[MAX_PRO_GOLFERS];
    int n = load_progolfers(path, progolfers, MAX_PRO_GOLFERS);

    if (n > 0) {
        printf("Loaded %d pro golfers:\n\n", n);
        for (int i = 0; i < n && i < 5; i++) {
            ProGolfer* g = &progolfers[i];
            printf("  %-25s | body=%d skin=%d hat=%d shirt=%d pants=%d\n",
                   g->name, g->body_type, g->skin_color,
                   g->hat_color, g->shirt_color, g->pants_color);
            printf("  Skills: PH=%d LD=%d AD=%d AI=%d AP=%d "
                   "DW=%d FD=%d BS=%d RV=%d UN=%d\n\n",
                   g->skills.power_hitter, g->skills.long_driver,
                   g->skills.accurate_driver, g->skills.accurate_irons,
                   g->skills.accurate_putter, g->skills.draw_shot,
                   g->skills.fade_shot, g->skills.high_backspin,
                   g->skills.recovery, g->skills.unknown);
        }
    } else {
        printf("Failed to load progolfers from %s (n=%d)\n", path, n);
    }

    // ============================================================
    // 2. Tester le parsing des célébrités (.dta)
    // ============================================================
    printf("=== CELEBRITIES ===\n\n");

    snprintf(path, sizeof(path), "%s/Themes/Standard/celebrities.dta", data_path);
    Celebrity celebs[MAX_CELEBRITIES];
    n = load_celebrities(path, celebs, MAX_CELEBRITIES);

    if (n > 0) {
        printf("Loaded %d celebrities:\n\n", n);
        for (int i = 0; i < n && i < 5; i++) {
            Celebrity* c = &celebs[i];
            printf("  %-25s | type=%c (%s) skin=%d hair=%d shirt=%d pants=%d\n",
                   c->name, c->type,
                   get_celebrity_type_name(c->type),
                   c->skin_color, c->hair_color,
                   c->shirt_color, c->pants_color);
        }
    } else {
        printf("Failed to load celebrities from %s (n=%d)\n", path, n);
    }

    // ============================================================
    // 3. Tester le parsing d'un profil golfeur (.pro)
    // ============================================================
    printf("\n=== GOLFER PROFILE (.pro) ===\n\n");

    snprintf(path, sizeof(path), "%s/Themes/Championship/Gary Golf.pro", data_path);
    GolferProfile profile;

    if (load_golfer_profile(path, &profile) == 0) {
        printf("  Title: %s\n", profile.title);
        printf("  Name:  %s\n", profile.name);
        printf("  Stats: body=%d skin=%d hat=%d shirt=%d pants=%d\n",
               profile.body_type, profile.skin_color,
               profile.hat_color, profile.shirt_color, profile.pants_color);
        printf("  PCX data: %s (%zu bytes)\n",
               profile.pcx_data ? "present" : "missing",
               profile.pcx_data ? strlen((char*)profile.pcx_data) : 0);
        free_golfer_profile(&profile);
    } else {
        printf("  Failed to load %s\n", path);
    }

    // ============================================================
    // 4. Tester le parsing d'un personnage (.chr)
    // ============================================================
    printf("\n=== CHARACTER (.chr) ===\n\n");

    snprintf(path, sizeof(path), "%s/Themes/Firaxis/Bonus.chr", data_path);
    Character chr;

    if (load_character(path, &chr) == 0) {
        printf("  Archetype: %s\n", chr.archetype);
        printf("  Name:      %s\n", chr.name);
        printf("  Dialogues: %d lines\n", chr.num_dialogues);
        for (int i = 0; i < chr.num_dialogues && i < 5; i++) {
            printf("    [%d] \"%s\"\n", i, chr.dialogues[i]);
        }
        printf("  PCX data: %s (%d bytes)\n",
               chr.pcx_data ? "present" : "missing", chr.pcx_size);
        free_character(&chr);
    } else {
        printf("  Failed to load %s\n", path);
    }

    // ============================================================
    // 5. Tester un profil golfeur générique (.glf)
    // ============================================================
    printf("\n=== GOLFER PROFILE (.glf) ===\n\n");

    snprintf(path, sizeof(path), "%s/Themes/Standard/Joe Pro.glf", data_path);

    if (load_golfer_profile(path, &profile) == 0) {
        printf("  Title: %s\n", profile.title);
        printf("  Name:  %s\n", profile.name);
        free_golfer_profile(&profile);
    } else {
        printf("  Failed to load %s\n", path);
    }

    // ============================================================
    // Résumé
    // ============================================================
    printf("\n=== SUMMARY ===\n\n");
    printf("  Formats supported:\n");
    printf("    .dta  → CSV with * comments (progolfers, celebrities)\n");
    printf("    .pro  → Binary profile + PCX portrait\n");
    printf("    .glf  → Binary profile + PCX portrait (generic)\n");
    printf("    .chr  → Binary character + dialogue strings + PCX\n");
    printf("    .sve  → Binary save game (top 10)\n");

    return 0;
}

# Sid Meier's SimGolf — Reverse Engineering & Web Port

Repo de rétro-ingénierie de SimGolf (Firaxis/Maxis 2002) vers un remake Web Mobile-First.

## Structure

- `raw_decomp/` — Sortie Ghidra/désassembleur brute
- `cleaned_c/` — Code C nettoyé et documenté
- `web_port/` — Portage TypeScript (core/view/ui)
- `game_data/` — Binaires et données originales

## Phases

1. **Phase 1** — Reverse engineering des binaires PE32
2. **Phase 2** — Nettoyage C (brut → propre avec commentaires)
3. **Phase 3** — Portage Web TypeScript (Phaser/PixiJS)

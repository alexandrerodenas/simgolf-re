#!/bin/bash
# analyse_simgolf.sh — Analyse complète des binaires SimGolf via ghidra-cli
# Usage: bash tools/shell/analyse_simgolf.sh

set -e
GHIDRA_CLI="$(which ghidra 2>/dev/null || echo '/tmp/ghidra-cli/target/release/ghidra')"
PROJECT="simgolf"
DATA_DIR="$HOME/simgolf-re/data"

echo "=== Analyse SimGolf via Ghidra CLI ==="
date

# 0. Doctor check
echo "---"
echo "0. Vérification Ghidra..."
$GHIDRA_CLI doctor

# 1. Créer le projet
echo "---"
echo "1. Création du projet '$PROJECT'..."
$GHIDRA_CLI project create "$PROJECT" 2>/dev/null || echo "  (existe déjà)"

# 2. Importer tous les binaires
import_binary() {
    local bin="$1"
    local name="$2"
    local path="$DATA_DIR/$bin"
    if [ ! -f "$path" ]; then
        echo "  ⚠️ Fichier introuvable : $path"
        return 1
    fi
    echo "---"
    echo "2. Import de $bin → $name..."
    $GHIDRA_CLI import "$path" --project "$PROJECT" --program "$name" --json 2>/dev/null || {
        echo "  ℹ️  Déjà importé ou erreur, on continue..."
    }
    echo "---"
    echo "3. Analyse de $name..."
    $GHIDRA_CLI analyze --project "$PROJECT" --program "$name" 2>&1 | tail -3
}

import_binary "exe_unpacked/golf.exe" "golf_exe"
import_binary "raw/Terrain.dll" "Terrain_dll"
import_binary "raw/jgld.dll" "jgld_dll"
import_binary "raw/sound.dll" "sound_dll"

# 4. Démarrer le bridge sur golf.exe (le binaire principal)
echo "---"
echo "4. Démarrage du bridge..."
$GHIDRA_CLI start --project "$PROJECT" --program "golf_exe" --json 2>/dev/null || true

# 5. Stats générales
echo "---"
echo "5. Statistiques du programme..."
$GHIDRA_CLI stats --project "$PROJECT"

# 6. Lister toutes les fonctions
echo "---"
echo "6. Liste des fonctions principales..."
$GHIDRA_CLI function list --project "$PROJECT" --filter "size > 500" --json -o /tmp/ghidra/functions_large.json 2>/dev/null || true
echo "   (sauvegardé dans /tmp/ghidra/functions_large.json)"

# 7. Fonctions par nom connu (mots-clés terrain, render, physics, etc.)
echo "---"
echo "7. Recherche de fonctions clés..."
for kw in terrain render tile physics golf ball camera init create update tick sim; do
    echo "  ▶ $kw..."
    $GHIDRA_CLI find function "*$kw*" --project "$PROJECT" --json -o "/tmp/ghidra/func_${kw}.json" 2>/dev/null || true
done

# 8. Types C
echo "---"
echo "8. Types et structures..."
$GHIDRA_CLI type list --project "$PROJECT" --json -o /tmp/ghidra/types.json 2>/dev/null || true

# 9. Chaînes intéressantes
echo "---"
echo "9. Recherche de chaînes..."
for pat in "Terrain" "OpenGL" "Direct3D" "Golf" "SimGolf" "shader" "texture" "vertex"; do
    $GHIDRA_CLI find string "$pat" --project "$PROJECT" --json -o "/tmp/ghidra/str_${pat}.json" 2>/dev/null || true
done

# 10. Recherche de constantes crypto
echo "---"
echo "10. Constantes crypto..."
$GHIDRA_CLI find crypto --project "$PROJECT" --json -o /tmp/ghidra/crypto.json 2>/dev/null || true

# 11. Recherche de patterns intéressants
echo "---"
echo "11. Patterns intéressants..."
$GHIDRA_CLI find interesting --project "$PROJECT" --json -o /tmp/ghidra/interesting.json 2>/dev/null || true

# 12. Graphe d'appels complet
echo "---"
echo "12. Graphe d'appels..."
$GHIDRA_CLI graph calls --project "$PROJECT" --json -o /tmp/ghidra/callgraph.json 2>/dev/null || echo "  (trop grand, skip)"

# 13. Résumé
echo "---"
echo "13. Résumé du programme..."
$GHIDRA_CLI summary --project "$PROJECT"

# 14. Arrêter le bridge
echo "---"
echo "14. Arrêt du bridge..."
$GHIDRA_CLI stop --project "$PROJECT" 2>/dev/null || true

echo "=== Analyse terminée ==="
echo "Résultats dans /tmp/ghidra/"
ls -lh /tmp/ghidra/ 2>/dev/null | head -20

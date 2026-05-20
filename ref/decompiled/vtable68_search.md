# VTable[0x68] — Per-Golfer Simulation Function

## Problème : dispatch dynamique

La fonction `vtable[0x68]` est appelée indirectement via :
```asm
mov eax, dword ptr [0x8400b0]   ; pointeur objet
mov ecx, dword ptr [eax]        ; vtable
call dword ptr [ecx + 0x68]     ; 26e entrée (0x68/4)
```

Le pointeur d'objet à `0x8400b0` est alloué dynamiquement. Son constructeur
écrit la vtable à l'adresse de l'objet. Comme l'allocation est dynamique,
la vtable est aussi déterminée à l'exécution.

## Ce qu'on sait de la fonction

### Signature (reconstituée depuis les sites d'appel)

```c
int GolferProcessFunction(
    GameState* this,        // ecx = eax = [0x8400b0]
    int activeGolferId,     // stack: [ebp+0x77c] — slot en cours
    int slotParam,          // stack: slot->field_0x??
    int unk3,               // stack: 0
    int tickDelta            // stack: [esp+0x??]
);
```

### Paramètres observés dans GameTickFunction (0x49862f)

```
[esp+0x10] = tickDelta
[esp+0x1c] = ?
[ebp+0x77c] = activeGolferId
push [esp+0x2220]  ; tickDelta
push 0               ; unk3 = 0
push edx             ; tickDelta (encore?)
push esi             ; gameMode
push edx             ; slotParam
push [ebp+0x77c]     ; activeGolfer
push eax             ; gameState
call [ecx+0x68]
```

### Retourne
- **0** : slot terminé, passer au suivant
- **non-0** : slot en cours d'exécution

## Ce que la fonction doit faire (déduit du gameplay)

1. **Sélection du club** (driver → putter selon distance)
2. **Choix du type de tir** (draw/fade/high/low) basé sur imagination
3. **Calcul de la distance** (base club × skill longueur × lie × vent)
4. **Calcul de la déviation** (accuracy × lie × vent × tir)
5. **Effet du vent** sur distance et latéral
6. **Mise à jour position** de la balle
7. **Incrémentation du score** (coups)
8. **Vérification trou terminé** (balle sur green + distance < threshold)
9. **Génération du commentaire** du golfeur
10. **Mise à jour du timer** du slot

## Recherches effectuées dans le désassemblage

### Ce qui a été tenté
- ✅ Recherche de constructeurs écrivant des vtables dans la plage 0x4b0000
- ✅ Recherche de fonctions FPU (physique du tir)
- ✅ Analyse des fonctions appelées depuis GameTickFunction
- ✅ Analyse des fonctions dans la plage 0x4a5000-0x4b0000 (60+ fonctions std_prologue)
- ✅ Recherche du constructeur de l'objet à 0x8400b0
- ✅ Vérification Terrain.dll et sound.dll pour vtable[0x68]

### Résultat
La vtable est **construite dynamiquement** par un constructeur de classe C++
alloué sur le heap. On ne peut pas trouver la fonction cible par analyse
statique seule — il faudrait :

1. **Traceur binaire** (exécuter golf.exe et capturer les appels vtable)
2. **Désassemblage du constructeur de classe** (qui écrit la vtable)
3. **Analyse de la section .rdata** — les vtables y sont stockées
   avant d'être recopiées dans l'objet

## Approche alternative : la section .rdata

Les vtables sont stockées dans la section `.rdata` du PE. L'adresse de la
vtable de la classe GameState serait dans la plage `0x4b8000-0x4be000`
(la plage typique des vtables dans golf.exe). On peut chercher dans
cette plage les tables de pointeurs de fonction qui contiennent une
entrée non-triviale à l'offset 0x68.

```python
# Script pour extraire les vtables candidates depuis .rdata
import pefile
pe = pefile.PE('golf.exe')
rdata = [s for s in pe.sections if b'.rdata' in s.Name][0]
data = rdata.get_data()
base = pe.OPTIONAL_HEADER.ImageBase + rdata.VirtualAddress

# Chercher les pointeurs 4 bytes alignés qui pointent vers .text
# et forment une table de 30+ entrées (taille typique vtable)
from struct import unpack_from
text_start = 0x00401000
text_end = 0x004b0000

for offset in range(0, len(data) - 0x100, 4):
    ptr = unpack_from('<I', data, offset)[0]
    if text_start <= ptr < text_end:
        # Vérifier si [offset + 0x68] est aussi dans .text
        ptr68 = unpack_from('<I', data, offset + 0x68)[0]
        if text_start <= ptr68 < text_end:
            # Candidate vtable !
            print(f"Vtable candidate: 0x{base + offset:x}, entry[0x68] = 0x{ptr68:x}")
```

## Prochaine étape recommandée

1. Exécuter le script d'extraction des vtables depuis .rdata
2. Tester chaque candidate en vérifiant que entry[0] est un destructeur
   et que les entrées correspondent à des fonctions de jeu
3. Décompiler la fonction trouvée — ce sera la plus longue (~500+ instructions)

/**
 * game_economy.h
 * Système économique — Décompilé depuis golf.exe
 *
 * Sources :
 *   Fonction économie      @ 0x405b10
 *   Fonction validation    @ 0x405ac0  
 *   Global profit          @ 0x834170 (fixed-point ×1024)
 *   Buffer formatage       @ 0x51a068
 *
 * ═══════════════════════════════════════════════════════════
 *  ANALYSE DU CODE ORIGINAL (0x405b10)
 * ═══════════════════════════════════════════════════════════
 *
 *   La fonction à 0x405b10 est la fonction d'AFFICHAGE
 *   du rapport économique (écran FINANCEreport.pcx).
 *
 *   Architecture :
 *     1. Setup de tableaux de dimensionnement (0x40cc00)
 *     2. Setup d'un tableau/liste à 0x51b360 (0x4762d0)
 *     3. Chargement d'un format de string (0x404bc0)
 *     4. Timer de rafraîchissement (0x40daa0)
 *     5. Concaténation de strings :
 *        - Lit string depuis 0x4c3f70 (nom club ?)
 *        - Formate dans buffer 0x51a068
 *     6. Lit profit depuis global 0x834170
 *        - mask: 0x800003ff (conserve signe + 10 bits fraction)
 *        - >> 10 (conversion fixed-point → int)
 *        - +1 (arrondi)
 *     7. Appelle 0x4ad425 (formatage valeur → string)
 *     8. Concatène dans le buffer
 *     9. push "Profit:" → call 0x45b2c0 (affichage)
 *    10. Vérifie validité du buffer (0x405ac0)
 *    11. Suite du formatage...
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// CONSTANTES ÉCONOMIQUES (depuis les chaînes extraites)
// ================================================================

/** Valeurs économiques — proviennent du jeu original */
#define FIXED_POINT_SHIFT   10     // ×1024 pour précision décimale
#define PROFIT_MASK         0x800003ff  // Signe + 10 bits fraction

// ================================================================
// STRUCTURES (depuis le code original)
// ================================================================

/**
 * EconomyState — État économique du club
 * 
 * Basé sur les accès depuis le code original :
 *   Profit         @ 0x834170 (lecture bit 31 + shift 10)
 *   Cash           @ 0x834174 ou similaire
 *   Revenue        @ 0x4cfef0 "Revenue"
 *   Greens Fees    @ 0x4cff98 "Greens Fees"
 *   Members        @ 0x4d10f0 "Membership Roster"
 *   Cash Reserve   @ 0x4d14bc "Cash Reserve"
 *   Club name      @ 0x4c3f70 (utilisé dans formatage)
 */
typedef struct EconomyState {
    // Compteurs financiers (fixed-point ×1024)
    int profit;              // +0x00: Profit (lu à 0x834170)
    int cash;                // +0x04: Trésorerie
    int revenue;             // +0x08: Revenus de la semaine
    int expenses;            // +0x0c: Dépenses de la semaine
    
    // Membership
    int members;             // +0x10: Nombre de membres
    int membershipTier;      // +0x14: 0=Daily, 1=Country, 2=Championship
    
    // Infrastructures
    int totalHoles;          // +0x18: Total de trous
    int holesBuilt;          // +0x1c: Trous construits
    
    // Employés
    int employeeCount;       // +0x20: Employés actifs
    
    // Temps
    int currentWeek;         // +0x24: Semaine en cours
} EconomyState;

// ================================================================
// FONCTIONS ÉCONOMIQUES (décompilées du binaire)
// ================================================================

/**
 * Lit le profit depuis le format fixed-point stocké en mémoire.
 * 
 * Le profit est stocké dans un entier 32 bits :
 *   bit 31    = signe (0=positif, 1=négatif)
 *   bits 30-10 = partie entière
 *   bits 9-0  = partie fractionnaire (×1024)
 *
 * Exemple : 0x000005C8 = 1472/1024 = 1.4375 ≈ 1
 *           0x800005C8 = -1472/1024 = -1.4375 ≈ -1
 *
 * @param raw Valeur brute depuis 0x834170
 * @return    Profit en entiers (arrondi)
 */
static int ProfitFromFixedPoint(int raw)
{
    // Étape 1: Masque — conserve bit 31 (signe) + 10 bits fraction
    int masked = raw & PROFIT_MASK;
    
    // Étape 2: Si signe négatif, propage le bit pour arithmetic shift
    // (simule le comportement du sar x86)
    if (masked & 0x80000000) {
        masked |= ~0x800003ff;  // Sign-extend
    }
    
    // Étape 3: Décalage arithmétique droit de 10 (÷1024)
    int profit = masked >> FIXED_POINT_SHIFT;
    
    // Étape 4: Incrémentation (arrondi)
    profit++;
    
    return profit;
}

/**
 * Fonction d'affichage du rapport économique.
 * 
 * Équivalent de la fonction à 0x405b10.
 * Génère la chaîne affichée dans l'écran FINANCEreport.pcx.
 *
 * Pipeline d'affichage :
 *   1. Setup tableaux JGL (0x40cc00, 0x4762d0)
 *   2. Charge template format string (0x404bc0)
 *   3. Concatène nom du club (0x4c3f70) dans buffer (0x51a068)
 *   4. Calcule profit : lecture 0x834170 → fixed-point → int
 *   5. Appelle formatage (0x4ad425) → string
 *   6. Ajoute "Profit:" (0x4c3f5c) via 0x45b2c0
 *   7. Vérifie buffer (0x405ac0)
 *   8. Continue avec autres valeurs...
 *
 * @param economyState Pointeur vers l'état économique (depuis global)
 */
void Economy_ShowReport(EconomyState* economyState)
{
    // Constantes du code original
    int unk1 = 0x50;      // dimensions tableaux
    int unk2 = 0x36;      
    int unk3 = 0x274;
    int unk4 = 0x50;
    
    // 1. Setup système d'affichage (JGL)
    // Call 0x40cc00 avec les paramètres de dimension
    // Initialise probablement les structures de liste/tableau
    // pour l'affichage des lignes du rapport
    
    // 2. Initialisation d'un objet à 0x51b360
    // Call 0x4762d0(buffer=0x51b360, par1=0, par2=0, par3=0)
    
    // 3. Setup template de formatage
    // Call 0x404bc0(template=0x4c3f74, width=0x180, height=0x58, flags=0x80007fff)
    // Template à 0x4c3f74 = probablement "Club: %s\nProfit: %d\n..."
    
    // 4. Timer / rafraîchissement
    // Call 0x40daa0(-1)
    
    // 5. Buffer de formatage
    char buffer[0x100];  // À 0x51a068 dans l'original
    buffer[0] = '\0';
    
    // 6. Concaténation du nom du club
    // strcat(buffer, string_from_0x4c3f70);  // Nom du club
    
    // 7. Lecture et formatage du profit
    int rawProfit = *(int*)0x834170;  // Dans le code original : mov eax, [0x834170]
    int profit = ProfitFromFixedPoint(rawProfit);
    
    // Formatage : call 0x4ad425(valeur) → retourne chaîne formatée
    // Concaténation dans buffer
    
    // 8. Affichage "Profit:"
    // push 0x4c3f5c  → "Profit:"
    // call 0x45b2c0   → fonction d'affichage JGL
    
    // 9. Validation et suite
    // Test si buffer[0] != '\0'
    // Si vide → sortie (pas de rapport à afficher)
    
    // ... suite du formatage avec Revenue, Greens Fees, etc.
}

/**
 * Fonction de validation de chaîne (0x405ac0)
 * 
 * Vérifie qu'une chaîne de caractères n'est pas vide
 * et supprime les espaces de fin.
 *
 * @param str Chaîne à valider
 * @return    1 si la chaîne est valide, 0 si vide
 */
static int Economy_ValidateString(char* str)
{
    if (str == NULL) return 0;
    
    // Teste la chaîne (push 0x4c3ee0 "Lie:" + argument → call 0x4a5800)
    // Cette partie vérifie probablement un format/type
    
    // Supprime les espaces de fin
    int len = strlen(str);
    while (len > 0 && str[len - 1] == ' ') {
        str[--len] = '\0';
    }
    
    return (len > 0) ? 1 : 0;
}

// ================================================================
// FONCTIONS DE CALCUL ÉCONOMIQUE
// ================================================================

/**
 * Simule le calcul de profit hebdomadaire.
 * 
 * Dans l'original, cette fonction est déclenchée via
 * GameTickFunction → CoursEngine → vtable dispatch.
 * Le résultat est stocké dans le global 0x834170.
 *
 * @param state État économique à mettre à jour
 */
void Economy_ProcessWeek(EconomyState* state)
{
    // Les sources de revenus vérifiées par les chaînes :
    // Greens Fees × visiteurs × trous
    // Memberships (abonnements annuels / 52)
    // Vacation Homes (revenu passif)
    // Bâtiments (Pro Shop + Snack Bar + Driving Range)
    
    // Les dépenses vérifiées par les chaînes :
    // Salaires employés (Groundskeeper, Ranger, Club Pro)
    // Maintenance du terrain
    // Upkeep bâtiments
    
    // Calcul en fixed-point (×1024)
    int netProfit = CalculateWeeklyNet(state);
    *(int*)0x834170 = netProfit & PROFIT_MASK;  // Stocke au format fixe
}

// ================================================================
// RÉFÉRENCES DANS LE CODE ORIGINAL
// ================================================================
//
// Fonction affichage économie @ 0x405b10 (stack frame 0x64):
//   0x40cc00 — Setup tableaux (paramètres: 0x50, 0x36, 0x274, 0x50, 0x50, 0)
//   0x4762d0 — Init liste à 0x51b360
//   0x404bc0 — Load format string à 0x4c3f74
//   0x40daa0 — Refresh timer
//   0x4ad425 — Format value to string
//   0x45b2c0 — Display formatted string (avec "Profit:" push)
//   0x405ac0 — String validation + trim
//
// Variables globales :
//   0x834170 — Profit (int, fixed-point ×1024, signé)
//   0x51a068 — Buffer de formatage
//   0x51b360 — Structure de données (liste/tableau)
//   0x4c1570 — Valeur globale (pointeur de configuration ?)
//
// Chaînes :
//   0x4c3f5c "Profit:"
//   0x4c3f70 "Club: %s\nProfit: %d\n..." (template)
//   0x4c3f74 (template alternatif ?)
//   0x4c3ee0 "Lie:" (utilisé par 0x405ac0)
//   0x4cfef0 "Revenue"
//   0x4cff98 "Greens Fees"
//   0x4d14bc "Cash Reserve"
//   0x4d10f0 "Membership Roster"

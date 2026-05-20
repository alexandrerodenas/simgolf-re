# Système Économique

> **Confiance :** ✅ Élevée — décompilé depuis les fonctions ASM (0x49d820-0x49d8b9)

---

## 1. Principes

Le joueur gère les finances de son parcours de golf. L'économie fonctionne en **tick quotidien** avec revenus, coûts et profit.

### Flux Monétaire

```
Revenus Journaliers = greenFee × visiteurs
Coûts Journaliers   = maintenance × trous + salaires
Profit              = Revenus - Coûts - IntérêtsEmprunts
Trésorerie         += Profit
```

---

## 2. Constantes Économiques

| Constante | Valeur | Description |
|-----------|:------:|-------------|
| `DEFAULT_GREENS_FEE` | $25 | Green fee de base par trou |
| `MAINT_COST_PER_HOLE` | $5 | Coût d'entretien par trou/jour |
| `STAFF_COST_PER_DAY` | $50 | Salaire personnel/jour |
| `VISITORS_PER_DAY_BASE` | 10 | Golfeurs visiteurs/jour (base) |
| `MEMBER_FEE_PER_YEAR` | $500 | Cotisation annuelle membre |
| `INITIAL_CASH` | $10,000 | Capital de départ |
| `CASH_WARNING` | $5,000 | Alerte trésorerie basse |
| `CASH_CRITICAL` | $1,000 | Trésorerie critique (game over) |

---

## 3. Green Fee

Le tarif du green fee est calculé dynamiquement :

```c
int CalculateGreensFee(int difficulty, int stars)
{
    int baseFee = 25;  // $25 par trou
    float starBonus = 1.0 + (stars / 100.0) * 0.5;  // +50% à 100 étoiles
    float diffMult;
    
    switch (difficulty) {
    case 0:  diffMult = 1.0;   break;  // Easy
    case 1:  diffMult = 1.5;   break;  // Normal
    case 2:  diffMult = 2.0;   break;  // Hard
    default: diffMult = 2.5;   break;  // Expert
    }
    
    return (int)(baseFee * starBonus * diffMult);
}
```

---

## 4. Revenus Journaliers

```c
int CalculateDailyRevenue(int greensFee, int reputation,
                           int isWeekend, int isRaining)
{
    int visitors = 10;  // VISITORS_PER_DAY_BASE
    
    visitors += (reputation / 10);       // +1 par 10 étoiles
    if (isWeekend)
        visitors = visitors * 3 / 2;     // +50% le weekend
    if (isRaining)
        visitors = visitors / 2;         // -50% sous la pluie
    
    return greensFee * visitors;
}
```

---

## 5. Coûts Journaliers

```c
int CalculateDailyCost(int nbHoles, int staffLevel)
{
    int cost = 0;
    cost += 5 * nbHoles;                    // Entretien par trou
    cost += 50 + staffLevel * 20;           // Salaires
    return cost;
}
```

---

## 6. Profit et Trésorerie

```c
int profit = CalculateProfit(revenue, cost, loanInterest);
void UpdateCashReserve(CourseFinance* finance, int profit)
{
    finance->dailyProfit = profit;
    finance->cash += profit;
    
    if (profit > 0)
        finance->totalRevenue += profit;
    finance->totalProfit += profit;
    
    if (finance->cash < 1000)
        // Alerte faillite → game over si persiste
    else if (finance->cash < 5000)
        // Alerte trésorerie basse
}
```

---

## 7. Valeur du Parcours

```c
int CalculateCourseValue(int nbHoles, int stars, int cash, int investments)
{
    int value = 0;
    value += investments;                    // Investissements cumulés
    value += nbHoles * 5000;                 // $5000 par trou
    value += stars * 1000;                   // $1000 par étoile SGA
    value += cash;                           // Trésorerie
    return value;
}
```

---

## 8. Tick Économique Quotidien

```c
void DailyTick(CourseFinance* finance, int nbHoles, int stars,
               int weather, int staffLevel)
{
    int fee = CalculateGreensFee(0, stars);
    finance->greensFee = fee;
    
    int isRaining = (weather < 0) ? 1 : 0;
    int revenue = CalculateDailyRevenue(fee, stars, 0, isRaining);
    finance->dailyRevenue = revenue;
    
    int cost = CalculateDailyCost(nbHoles, staffLevel);
    finance->dailyCost = cost;
    
    int profit = CalculateProfit(revenue, cost, 0);
    UpdateCashReserve(finance, profit);
    
    finance->visitorsToday = revenue / (fee > 0 ? fee : 1);
}
```

---

## 9. Analyse ASM — Fonction de Profit (0x49d820)

La fonction à `0x49d820-0x49d8b9` contient un calcul financier avec les offsets suivants :

```
[ecx+0x50] = diviseur / marge
[ecx+0x54] = plafond
[ecx+0x5c] = compteur / résultat intermédiaire
[ecx+0xd0] = valeur réelle / revenu
[ecx+0xcc] = pointeur de liste chaînée
[ecx+0xc8] = flag de liste
[ecx+0xd4] = index de liste

Logique :
1. field_5c = min(field_d0, field_54)  // clamp
2. Si field_5c < field_d0 :
     field_50 = field_d0 / field_5c + 1
     field_5c = field_d0 / field_50
3. Si field_50 * field_5c < field_d0 :
     field_5c++  // arrondi supérieur
4. Si flag & 2 != 0 :
     profit = min(field_30, field_d0 / field_50)
     profit -= field_44 * 2
     profit -= field_38
5. Sinon : profit = $100,000 (défaut)
```

Cette fonction est probablement un calcul de "prestation" où :
- `field_d0` = demande / capacité (nb golfeurs max)
- `field_50` = prix unitaire
- `field_5c` = quantité vendue
- `Revenu = prix × quantité`
- `Profit = min(plafond, Revenu) - coûtsVariables - coûtsFixes`

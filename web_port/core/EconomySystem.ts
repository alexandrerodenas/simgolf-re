/**
 * EconomySystem.ts
 *
 * Moteur économique du club de golf.
 *
 * Sources de revenus :
 * - Greens Fees (par trou joué)
 * - Memberships (abonnements)
 * - Vacation Homes (terrains résidentiels)
 * - Tournois (prize money)
 * - Boutique / Snack Bar
 *
 * Dépenses :
 * - Employés (Groundskeeper, Ranger, Pro, etc.)
 * - Maintenance du terrain
 * - Construction
 * - Améliorations
 *
 * @package simgolf.core
 */

export type MembershipTier = 'daily_fee' | 'country_club' | 'championship';

export interface Employee {
    type: 'groundskeeper' | 'ranger' | 'club_pro' | 'greeter' | 'vendor';
    name: string;
    salary: number;       // Par semaine
    skill: number;        // 1-10
    hiredWeek: number;
}

export interface EconomyState {
    week: number;
    cash: number;
    revenue: number;       // Revenu de la semaine
    expenses: number;      // Dépenses de la semaine
    profit: number;        // Résultat net
    totalRevenue: number;
    totalExpenses: number;

    // Membership
    membershipTier: MembershipTier;
    members: number;
    greensFeePerHole: number;
    membershipFee: number;

    // Infrastructure
    holesCompleted: number;
    totalHoles: number;
    buildings: Record<string, number>;  // type → count
    employees: Employee[];

    // Vacations homes
    vacationHomeSlots: number;
    vacationHomeRevenue: number;
}

const GREENS_FEE_BASE = 5;
const MEMBERSHIP_FEE_DAILY = 50;
const MEMBERSHIP_FEE_COUNTRY = 200;
const MEMBERSHIP_FEE_CHAMPIONSHIP = 500;

const EMPLOYEE_SALARIES: Record<Employee['type'], number> = {
    groundskeeper: 150,
    ranger: 120,
    club_pro: 200,
    greeter: 100,
    vendor: 130,
};

export class EconomySystem {
    state: EconomyState;

    constructor(startingCash: number = 50000) {
        this.state = {
            week: 1,
            cash: startingCash,
            revenue: 0,
            expenses: 0,
            profit: 0,
            totalRevenue: 0,
            totalExpenses: 0,

            membershipTier: 'daily_fee',
            members: 0,
            greensFeePerHole: GREENS_FEE_BASE,
            membershipFee: MEMBERSHIP_FEE_DAILY,

            holesCompleted: 0,
            totalHoles: 18,
            buildings: {},
            employees: [],

            vacationHomeSlots: 0,
            vacationHomeRevenue: 0,
        };
    }

    /** Tick hebdomadaire */
    processWeek(): void {
        const s = this.state;
        s.week++;

        // Revenus
        const greensRevenue = this.calcGreensFees();
        const membershipRevenue = this.calcMembershipRevenue();
        const buildingRevenue = this.calcBuildingRevenue();
        const employeeProd = this.calcEmployeeProductivity();

        s.revenue = greensRevenue + membershipRevenue + buildingRevenue;
        s.expenses = this.calcEmployeeCosts() + this.calcMaintenance();

        // Application des effets des employés
        const efficiency = 1 + (employeeProd / 100);
        s.revenue = Math.floor(s.revenue * efficiency);

        s.profit = s.revenue - s.expenses;
        s.cash += s.profit;
        s.totalRevenue += s.revenue;
        s.totalExpenses += s.expenses;

        // Évolution des membres
        this.updateMembership();
    }

    /** Revenus des greens fees */
    private calcGreensFees(): number {
        const s = this.state;
        const visitors = Math.max(0, Math.floor(s.holesCompleted * 3 + s.members * 0.1));
        const rounds = visitors + s.members;
        return rounds * s.holesCompleted * s.greensFeePerHole;
    }

    /** Revenus des abonnements */
    private calcMembershipRevenue(): number {
        const s = this.state;
        return Math.floor(s.members * s.membershipFee / 52); // Par semaine
    }

    /** Revenus des bâtiments (snack, pro shop, etc.) */
    private calcBuildingRevenue(): number {
        const s = this.state;
        let rev = 0;
        if (s.buildings['proshop']) rev += s.buildings['proshop'] * 200;
        if (s.buildings['snack']) rev += s.buildings['snack'] * 150;
        if (s.buildings['driving']) rev += s.buildings['driving'] * 300;
        if (s.buildings['pool']) rev += s.buildings['pool'] * 100;
        return rev;
    }

    /** Coûts salariaux */
    private calcEmployeeCosts(): number {
        return this.state.employees.reduce((sum, e) => sum + e.salary, 0);
    }

    /** Maintenance du terrain */
    private calcMaintenance(): number {
        const s = this.state;
        return Math.floor(50 + s.holesCompleted * 20 + s.totalHoles * 10);
    }

    /** Productivité des employés (0-50% bonus) */
    private calcEmployeeProductivity(): number {
        return this.state.employees.reduce((sum, e) => sum + e.skill * 2, 0);
    }

    /** Met à jour le nombre de membres */
    private updateMembership(): void {
        const s = this.state;
        const satisfaction = this.calcSatisfaction();

        // Nouveaux membres basés sur satisfaction et infrastructure
        const newMembers = Math.floor(satisfaction * 2 + s.holesCompleted * 0.5);
        const churn = Math.max(0, Math.floor(s.members * 0.02 * (1 - satisfaction / 100)));

        s.members = Math.max(0, s.members + newMembers - churn);

        // Upgrade de membership
        if (s.members > 50 && s.membershipTier === 'daily_fee') {
            s.membershipTier = 'country_club';
            s.membershipFee = MEMBERSHIP_FEE_COUNTRY;
        }
        if (s.members > 200 && s.membershipTier === 'country_club') {
            s.membershipTier = 'championship';
            s.membershipFee = MEMBERSHIP_FEE_CHAMPIONSHIP;
        }
    }

    /** Satisfaction générale (0-100) basée sur le parcours */
    private calcSatisfaction(): number {
        const s = this.state;
        let score = 30; // Base

        score += s.holesCompleted * 3;              // Plus de trous = plus de satisfaction
        score += Math.min(20, s.employees.length * 3); // Employés aident
        score += Math.min(15, (s.buildings['bench'] || 0) * 2);   // Bancs
        score += Math.min(10, (s.buildings['snack'] || 0) * 3);   // Snack
        score += Math.min(10, (s.buildings['flower'] || 0) * 2);  // Fleurs

        return Math.min(100, Math.max(0, score));
    }

    // ============================================================
    // Actions joueur
    // ============================================================

    /** Construit un trou (coût) */
    buildHole(): boolean {
        const cost = this.getHoleCost();
        if (this.state.cash < cost) return false;
        this.state.cash -= cost;
        this.state.holesCompleted++;
        return true;
    }

    getHoleCost(): number {
        const n = this.state.holesCompleted;
        return 5000 + n * 1000; // 5000 + 1000/trou
    }

    /** Embauche un employé */
    hireEmployee(type: Employee['type']): boolean {
        const cost = this.getHireCost(type);
        if (this.state.cash < cost) return false;

        this.state.cash -= cost;
        this.state.employees.push({
            type,
            name: this.generateEmployeeName(type),
            salary: EMPLOYEE_SALARIES[type],
            skill: Math.floor(Math.random() * 5) + 3,
            hiredWeek: this.state.week,
        });
        return true;
    }

    getHireCost(type: Employee['type']): number {
        const costs: Record<Employee['type'], number> = {
            groundskeeper: 1000,
            ranger: 800,
            club_pro: 1500,
            greeter: 600,
            vendor: 700,
        };
        return costs[type];
    }

    /** Construit un bâtiment */
    buildBuilding(type: string, cost: number): boolean {
        if (this.state.cash < cost) return false;
        this.state.cash -= cost;
        this.state.buildings[type] = (this.state.buildings[type] || 0) + 1;
        return true;
    }

    /** Ajoute un terrain à bâtir (vacation home) */
    addVacationHomeSlot(): boolean {
        const cost = 3000;
        if (this.state.cash < cost) return false;
        this.state.cash -= cost;
        this.state.vacationHomeSlots++;
        this.state.vacationHomeRevenue += 200; // Revenu passif
        return true;
    }

    /** Résumé financier */
    getSummary(): string {
        const s = this.state;
        return [
            `Semaine ${s.week}`,
            `💰 $${s.cash.toLocaleString()}`,
            `📈 Revenus: $${s.revenue.toLocaleString()}/sem`,
            `📉 Dépenses: $${s.expenses.toLocaleString()}/sem`,
            `🏢 Membres: ${s.members}`,
            `⛳ Trous: ${s.holesCompleted}/${s.totalHoles}`,
            `👥 Employés: ${s.employees.length}`,
            `⭐ Niveau: ${s.membershipTier}`,
        ].join(' · ');
    }

    private generateEmployeeName(type: Employee['type']): string {
        const firstNames = ['Alex', 'Sam', 'Jordan', 'Morgan', 'Casey', 'Riley', 'Taylor', 'Avery'];
        const lastNames = ['Green', 'Hills', 'Fairway', 'Putter', 'Driver', 'Links', 'Sands'];
        return `${firstNames[Math.floor(Math.random() * firstNames.length)]} ${lastNames[Math.floor(Math.random() * lastNames.length)]}`;
    }
}

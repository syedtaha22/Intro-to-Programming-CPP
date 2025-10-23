/******************************************************************************************************
 * @file epidemic.cpp
 *
 * @brief Epidemics often spread through populations in ways that can be modeled step by step.
 *        Individuals may recover and develop immunity, worsen to severe illness, or die.
 *        Over time, a disease may evolve and become more dangerous, making worsening outcomes
 *        increasingly likely. In this assignment, you will simulate such an epidemic in a closed
 *        population arranged as a rectangular grid. Each grid cell represents one individual
 *        whose state changes with time. By following defined probabilistic rules, the simulation
 *        demonstrates how the outbreak spreads, evolves, and resolves. At the conclusion, you
 *        will compute lethality measures to evaluate the epidemic’s severity.
 *
 * @paragraph States of Individuals
 * Each individual can be in one of the following states, represented by an integer:
 *   - Healthy (0):    Susceptible to infection.
 *   - Infected (1–9): Actively infected with a severity value. Larger numbers indicate
 *                     more severe illness.
 *   - Recovered (-1): Fully immune and no longer susceptible.
 *   - Dead (10):      Permanently deceased.
 *
 * @paragraph Rules of Simulation
 * At every step of the simulation, the following processes occur:
 *   - Progression:
 *          For each infected individual (state 1–9), a probability of worsening, denoted by N(t),
 *          determines whether the individual’s state becomes more severe or improves.
 *              - With probability N(t), severity increases by 1. If the severity reaches 10, the
 *                individual dies.
 *              - With probability 100 - N(t), severity decreases by 1. If severity reaches 0, the
 *                individual transitions to the recovered state (-1).
 *   - Infection:
 *          After progression, every infected individual (still in state 1–9) attempts to infect its
 *          neighbors.
 *              - Only healthy individuals (0) may be infected.
 *              - A newly infected individual receives a random severity between 1 and the infector’s
 *                severity +1, capped at 9.
 *              - If multiple infected neighbors target the same healthy individual, the highest resulting
 *                severity is applied.
 *              - Recovered (-1) and dead (10) individuals are never infected again.
 *   - Evolution of the Disease
 *          The worsening probability N(t) increases with time to reflect the evolving danger of the disease.
 *          One model is a linear increase:
 *              N(t) = min(100, N0 + k * t)
 *          where N0 is the initial probability at step 0, k is the rate of increase, and t is the step number.
 *   - Termination of the Simulation
 *         The simulation stops when one of the following occurs:
 *             - No infected individuals remain; all individuals are either healthy or recovered.
 *             - Every individual is dead.
 *
 * @paragraph Required Output
 * During the simulation you must:
 *   - Display the entire grid at each step, showing the state of each individual.
 *   - Report the counts of healthy, infected, recovered, dead, and alive individuals after
 *     each step.
 * At the end of the simulation you must:
 *   - Report the total number of steps taken.
 *   - Identify the peak number of infected individuals and the step at which it occurred.
 *   - Report the total number of deaths and the total number of confirmed cases.
 *   - Compute and display the Case Fatality Rate (CFR) and Infection Fatality Rate (IFR).
 *
 * @paragraph Definitions and Metrics
 * Let P denote the total population (grid size), C the number of individuals who were ever
 * infected (entered states 1–9 at any point), and D the number of individuals whose final state
 * is 10 (dead).
 * The two lethality measures are:
 *     CFR = (D / C) * 100      and     IFR = (D / P) * 100
 *
 * @paragraph Task Summary
 * Initialize the grid with all individuals healthy (0). Randomly select one individual to begin
 * the outbreak with a random severity between 1 and 9. Apply the rules of progression, infection,
 * and evolution step by step until the simulation terminates. At every step display the state of
 * the grid and report the required counts. At the end, compute and present the summary statistics
 * and lethality metrics.
 *
 ******************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define GRID_SIZE 10
#define N0 50.0         // Initial worsening probability (%)
#define K 0.5           // Increase per step (%)
#define STEP_LIMIT 1000 // Max number of steps
#define USE_8_NEIGH 1   // 1 = use 8-neighborhood, 0 = use 4-neighborhood
#define RNG_SEED 0      // 0 = time-based seed, >0 = fixed seed

int main() {
    const int R = GRID_SIZE;
    const int C = GRID_SIZE;

    unsigned int seed = (RNG_SEED == 0) ? (unsigned int)time(NULL) : RNG_SEED;
    srand(seed);

    // Grids
    static int grid[GRID_SIZE][GRID_SIZE];
    static int nextg[GRID_SIZE][GRID_SIZE];
    static int ever_infected[GRID_SIZE][GRID_SIZE];
    static int candidate[GRID_SIZE][GRID_SIZE];

    // initialize
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j) {
            grid[i][j] = 0;       // healthy
            nextg[i][j] = 0;
            ever_infected[i][j] = 0;
            candidate[i][j] = 0;
        }

    // pick random initial infected
    int r0 = rand() % R;
    int c0 = rand() % C;
    int s0 = 1 + (rand() % 9); // severity 1–9
    grid[r0][c0] = s0;
    ever_infected[r0][c0] = 1;

    // neighbor offsets
    int dr4[4] = { -1, 1, 0, 0 };
    int dc4[4] = { 0, 0, -1, 1 };
    int dr8[8] = { -1,-1,-1,0,0,1,1,1 };
    int dc8[8] = { -1,0,1,-1,1,-1,0,1 };

    // tracking
    int peak_infected = 0;
    int peak_step = 0;

    std::cout << "Epidemic Simulation Start (Seed=" << seed << ")\n";
    std::cout << "Initial infected at (" << r0 << "," << c0 << ") severity=" << s0 << "\n\n";


    // print summary for step 0
    std::cout << "Step " << 0 << "  N(t)=" << N0 << "%\n";
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j)
            std::cout << std::setw(3) << grid[i][j];
        std::cout << '\n';
    }

    // initial counts: everything healthy except the one infected
    std::cout << "Healthy: " << (R * C - 1)
        << "  Infected: " << 1
        << "  Recovered: " << 0
        << "  Dead: " << 0
        << "  Alive: " << (R * C) << "\n\n";

    std::cout << "Press Enter to start simulation...";
    std::cin.get();

    int step = 1;
    for (step = 1; step <= STEP_LIMIT; ++step) {
        double Nt = N0 + K * step;
        if (Nt > 100.0) Nt = 100.0;

        // copy grid to nextg
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j) {
                nextg[i][j] = grid[i][j];
                candidate[i][j] = 0;
            }

        // progression
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                int s = grid[i][j];
                if (s >= 1 && s <= 9) {
                    double x = (rand() % 10000) / 100.0; // 0.00–99.99
                    if (x < Nt) {
                        int s2 = s + 1;
                        nextg[i][j] = (s2 >= 10) ? 10 : s2;
                    }
                    else {
                        int s2 = s - 1;
                        nextg[i][j] = (s2 <= 0) ? -1 : s2;
                    }
                }
            }
        }

        // infection
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                int s = nextg[i][j];
                if (s >= 1 && s <= 9) {
                    int neigh = USE_8_NEIGH ? 8 : 4;
                    for (int ni = 0; ni < neigh; ++ni) {
                        int rr = i + (USE_8_NEIGH ? dr8[ni] : dr4[ni]);
                        int cc = j + (USE_8_NEIGH ? dc8[ni] : dc4[ni]);
                        if (rr < 0 || rr >= R || cc < 0 || cc >= C) continue;
                        if (nextg[rr][cc] != 0) continue;
                        int max_sev = (s + 1 > 9) ? 9 : s + 1;
                        int newsev = 1 + (rand() % max_sev);
                        if (newsev > candidate[rr][cc]) candidate[rr][cc] = newsev;
                    }
                }
            }
        }

        // apply candidates
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                if (candidate[i][j] > 0) {
                    nextg[i][j] = candidate[i][j];
                    ever_infected[i][j] = 1;
                }

        // update grid
        int healthy = 0, infected = 0, recovered = 0, dead = 0, alive = 0;
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j) {
                grid[i][j] = nextg[i][j];
                int v = grid[i][j];

                if (v >= 1 && v <= 9) infected++;
                else if (v == 10) dead++;
                else {
                    healthy++;
                    if (v == -1) recovered++;
                }

                if (v != 10) alive++;
            }

        if (infected > peak_infected) {
            peak_infected = infected;
            peak_step = step;
        }

        // print summary
        std::cout << "Step " << step << "  N(t)=" << Nt << "%\n";
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j)
                std::cout << std::setw(3) << grid[i][j];
            std::cout << '\n';
        }
        std::cout << "Healthy: " << healthy
            << "  Infected: " << infected
            << "  Recovered: " << recovered
            << "  Dead: " << dead
            << "  Alive: " << alive << "\n\n";
        if (infected == 0 || dead == R * C) break;

        std::cout << "Press Enter to continue...";
        std::cin.get();
    }

    // final metrics
    int confirmed = 0, deaths = 0;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j) {
            if (ever_infected[i][j]) confirmed++;
            if (grid[i][j] == 10) deaths++;
        }
    int P = R * C;
    double CFR = (confirmed == 0) ? 0.0 : (100.0 * deaths / (double)confirmed);
    double IFR = 100.0 * deaths / (double)P;

    std::cout << "Simulation ended at step " << step << ".\n";
    std::cout << "Peak infected: " << peak_infected << " at step " << peak_step << ".\n";
    std::cout << "Total deaths: " << deaths << "\n";
    std::cout << "Confirmed cases: " << confirmed << "\n";
    std::cout << "CFR (%) = " << std::fixed << std::setprecision(4) << CFR << "\n";
    std::cout << "IFR (%) = " << std::fixed << std::setprecision(4) << IFR << "\n";
}

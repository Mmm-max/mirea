#include <iostream>
#include <vector>
#include <random>

using namespace std;

// Fitness function
float fitness(float x, float y) {
    return x * x + y * y - x * y + y + x;
}

// Genetic algorithm to find extremum
vector<float> findExtremum(int n, int m, int k, float p) {
    // 1. Generate random population
    vector<vector<float>> population(n, vector<float>(m));
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(0.0, k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            population[i][j] = dis(gen);
        }
    }

    // 2. Calculate fitness function for each individual
    vector<float> fitnessValues(n);
    for (int i = 0; i < n; i++) {
        float x = population[i][0];
        float y = population[i][1];
        fitnessValues[i] = fitness(x, y);
    }

    // 3. Choose parents
    vector<vector<float> > parents(n, vector<float>(m));
    for (int i = 0; i < n; i++) {
        // Randomly select two parents
        int parent1Index = rand() % n;
        int parent2Index = rand() % n;
        parents[i] = population[parent1Index];
    }

    // 4. Crossover
    vector<vector<float> > offspring(n, vector<float>(m));
    for (int i = 0; i < n; i += 2) {
        // Perform crossover between two parents
        int crossoverPoint = rand() % m;
        for (int j = 0; j < crossoverPoint; j++) {
            offspring[i][j] = parents[i][j];
            offspring[i + 1][j] = parents[i + 1][j];
        }
        for (int j = crossoverPoint; j < m; j++) {
            offspring[i][j] = parents[i + 1][j];
            offspring[i + 1][j] = parents[i][j];
        }
    }

    // 5. Mutation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rand() < p) {
                // Perform mutation on the offspring
                offspring[i][j] = dis(gen);
            }
        }
    }


    // 7. Return best individual
    int bestIndex = 0;
    float bestFitness = fitnessValues[0];
    for (int i = 1; i < n; i++) {
        if (fitnessValues[i] < bestFitness) {
            bestIndex = i;
            bestFitness = fitnessValues[i];
        }
    }

    return population[bestIndex];
}

int main() {
    int n, m, k;
    float p;
    cin >> n >> m >> k >> p;
    // 6. Repeat 2-5 until convergence
    vector<float> bestIndividual = findExtremum(n, m, k, p);
    cout << "Best individual: " << bestIndividual[0] << " " << bestIndividual[1] << endl;
    cout << "Fitness: " << fitness(bestIndividual[0], bestIndividual[1]) << endl;
    return 0;
}
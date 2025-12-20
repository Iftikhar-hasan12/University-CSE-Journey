import random

N = 4
POP_SIZE = 6
MAX_GEN = 1000


# -------------------------
# Create chromosome
# -------------------------
def create_chromosome():
    chromosome = []
    for i in range(N):
        chromosome.append(random.randint(0, N - 1))
    return chromosome


# -------------------------
# Fitness function
# -------------------------
def fitness(chromosome):
    non_attacks = 0
    for i in range(N):
        for j in range(i + 1, N):
            if chromosome[i] != chromosome[j] and abs(chromosome[i] - chromosome[j]) != abs(i - j):
                non_attacks += 1
    return non_attacks


# -------------------------
# Initial population
# -------------------------
population = []
for i in range(POP_SIZE):
    population.append(create_chromosome())


# -------------------------
# Genetic Algorithm
# -------------------------
generation = 0
MAX_FITNESS = N * (N - 1) // 2

while generation < MAX_GEN:

    # Find best chromosome
    best = population[0]
    best_fit = fitness(best)

    for c in population:
        if fitness(c) > best_fit:
            best = c
            best_fit = fitness(c)

    print("Generation:", generation, "Best fitness:", best_fit)

    if best_fit == MAX_FITNESS:
        print("Solution found:", best)
        break

    # Selection (best two)
    parent1 = best
    parent2 = population[random.randint(0, POP_SIZE - 1)]

    # Crossover
    point = random.randint(1, N - 1)
    child = parent1[:point] + parent2[point:]

    # Mutation
    if random.random() < 0.3:
        row = random.randint(0, N - 1)
        child[row] = random.randint(0, N - 1)

    # Replace worst chromosome
    population[random.randint(0, POP_SIZE - 1)] = child

    generation += 1

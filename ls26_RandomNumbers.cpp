#include <iostream>
#include <ctime>

int main() {
    // Pseudo-random number generator setup using computer time as a seed
    srand(time(NULL));

    // Generate a random number between 1 and 6 (like rolling a die)
    int diceRoll = (rand() % 6) + 1;

    std::cout << "You rolled a: " << diceRoll << "\n";

    return 0;
}
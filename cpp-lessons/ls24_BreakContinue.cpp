#include <iostream>

int main() {
    // Example 1: Continue (Skip 13 because it's unlucky)
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skips printing 3
        }
        std::cout << i << "\n";
    }

    std::cout << "-----------\n";

    // Example 2: Break (Eject out of the loop early)
    for (int i = 1; i <= 5; i++) {
        if (i == 4) {
            break; // Breaks the loop entirely when reaching 4
        }
        std::cout << i << "\n";
    }

    return 0;
}
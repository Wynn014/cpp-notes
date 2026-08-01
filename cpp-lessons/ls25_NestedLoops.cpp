#include <iostream>

int main() {
    int rows = 3;
    int columns = 4;

    // The outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        // The inner loop handles the columns
        for (int j = 1; j <= columns; j++) {
            std::cout << "* ";
        }
        std::cout << "\n"; // New line after each row finishes
    }

    return 0;
}
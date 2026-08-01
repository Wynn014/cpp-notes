#include <iostream>
#include <string>

int main() {
    // Syntax: type name[rows][columns];
    std::string cars[3][3] = {
        {"Mustang", "Escape", "F-150"},
        {"Corvette", "Equinox", "Silverado"},
        {"Challenger", "Durango", "Ram"}
    };

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    // To print a 2D array, you need nested loops!
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n'; // New line after printing a full row
    }

    return 0;
}
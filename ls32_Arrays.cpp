#include <iostream>

int main() {
    // Creating and initializing an array
    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // Modifying an element using its index (0-indexed)
    cars[2] = "Camry";

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";

    // Creating an empty array but pre-allocating its fixed size
    double prices[2];
    prices[0] = 5.99;
    prices[1] = 12.50;
    prices[2] = 24.99;

    std::cout << "Price 1: $" << prices[0] << "\n";
    std::cout << "Price 2: $" << prices [1] << "\n";

    return 0;
}
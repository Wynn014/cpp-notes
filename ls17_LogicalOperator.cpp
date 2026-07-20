#include <iostream>

int main() {
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // 1. AND Operator (&&) - Both conditions must be true
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!\n";
    } else {
        std::cout << "The temperature is bad!\n";
    }

    // 2. OR Operator (||) - At least one condition must be true
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is extreme!\n";
    }

    // 3. NOT Operator (!) - Reverses the logical state of its operand
    if (!sunny) {
        std::cout << "It is cloudy outside!\n";
    } else {
        std::cout << "It is sunny outside!\n";
    }

    return 0;
}
#include <iostream>

int main() {
    // Example 1: Finding if a grade passes
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    // Example 2: Checking if a number is even or odd
    int number = 9;
    number % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    // Example 3: Assigning a value based on a condition
    bool hungry = true;
    std::string action = hungry ? "Go eat food" : "Keep coding";
    std::cout << action << '\n';

    return 0;
}
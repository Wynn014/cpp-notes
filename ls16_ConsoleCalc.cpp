#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************** CALCULATOR *****************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            // A simple check to prevent division by zero errors
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "result: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero is undefined.\n";
            }
            break;
        default:
            std::cout << "That was not a valid operator\n";
            break;
    }

    std::cout << "**********************************************\n";

    return 0;
}
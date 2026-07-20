#include <iostream>

int myNum = 3; // Global variable

void printNum();

int main() {
    int myNum = 1; // Local variable (shadows/hides the global variable)

    std::cout << "Local main variable: " << myNum << "\n";
    
    // The double colon (scope resolution operator) forces C++ to look at the global scope
    std::cout << "Forced global variable: " << ::myNum << "\n";
    
    printNum();

    return 0;
}

void printNum() {
    int myNum = 2; // Local to printNum()
    std::cout << "Local function variable: " << myNum << "\n";
}
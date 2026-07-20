#include <iostream>

int main() {
    // A pointer is a variable that stores the memory address of another variable.
    // Think of it like a shortcut or a GPS coordinate pointing to where the data lives.
    // Use '*' to declare a pointer, and match the data type of the variable it points to.

    std::string name = "Bro";
    int age = 21;

    // 1. Assigning memory addresses to our pointers
    std::string* pName = &name;
    int* pAge = &age;

    // 2. Printing the pointers (This outputs the raw hexadecimal memory addresses)
    std::cout << "Memory address stored in pName: " << pName << '\n';
    std::cout << "Memory address stored in pAge: " << pAge << "\n\n";

    // 3. Dereferencing (Using '*' in front of an existing pointer to "go to" that address and read the value)
    std::cout << "Value at pName address: " << *pName << '\n';
    std::cout << "Value at pAge address: " << *pAge << "\n\n";

    // 4. Changing the value using the pointer
    *pAge = 22; // Go to the address stored in pAge and overwrite the value to 22
    std::cout << "New age value via variable: " << age << '\n';
    std::cout << "New age value via pointer: " << *pAge << '\n';

    return 0;
}
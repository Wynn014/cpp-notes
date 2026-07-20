#include <iostream>

int main() {
    // 1. Integer (whole numbers)
    int age = 17;
    int year = 2026;
    int days = 7;

    // 2. Double (numbers including a decimal point)
    double price = 10.99;
    double gpa = 3.5;
    double temperature = 25.1;

    // 3. Char (a single character)
    char grade = 'A';
    char initial = 'W';
    char currency = '$';

    // 4. Boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // 5. String (a sequence of characters/text)
    std::string name = "Wynn";
    std::string day = "Sunday";
    std::string food = "Pizza";

    // Displaying variables with text literals
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}
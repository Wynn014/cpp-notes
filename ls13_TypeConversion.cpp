#include <iostream>

int main() {
    // Implicit conversion
    double x = (int) 3.14; // x becomes 3.0
    char myChar = 100; // ASCII character for 100 is 'd'

    std::cout << x << '\n';
    std::cout << myChar << '\n';

    // Explicit conversion example (Fixing integer truncation in division)
    int correctQuestions = 8;
    int totalQuestions = 10;
    
    // Explicitly casting correctQuestions as a double to preserve the decimal
    double score = (double)correctQuestions / totalQuestions * 100;

    std::cout << score << "%" << '\n'; // Outputs 80%

    return 0;
}
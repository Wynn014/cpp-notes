#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // and tells the compiler to prevent the programmer from modifying it.
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    // PI = 2.9; // This would cause a compiler error

    std::cout << PI << '\n';

    return 0;
}
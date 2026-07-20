#include <iostream>

double square(double length);
double cube(double length);

int main() {
    double length = 5;
    
    // Storing the returned values from our functions into local variables
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Volume: " << volume << " cm^3\n";

    return 0;
}

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}
#include <iostream>

int main() {
    double gpa = 3.8;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << "Size of a double: " << sizeof(gpa) << " bytes\n";
    
    // Array total size divided by single element size gives the total element count
    std::cout << "Total array bytes: " << sizeof(grades) << " bytes\n";
    std::cout << "Number of elements: " << sizeof(grades) / sizeof(char) << " elements\n";

    return 0;
}
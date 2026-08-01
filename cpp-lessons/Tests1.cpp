#include <iostream>

int main() {
    // Declaring an array of 5 integers
    int scores[5] = {85, 92, 78, 90, 88};

    // Using a for loop to print every element
    for(int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << " is: " << scores[i] << "\n";
    }

    return 0;
}
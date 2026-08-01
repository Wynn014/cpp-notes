#include <iostream>
#include <string>

int main() {
    // std::fill() = fills a range of elements with a specified value
    // syntax: std::fill(begin, end, value);

    const int SIZE = 100;
    std::string foods[SIZE];

    // Let's fill the first 50 slots with "pizza"
    std::fill(foods, foods + 50, "pizza");

    // Let's fill the remaining 50 slots with "hamburger"
    std::fill(foods + 50, foods + 100, "hamburger");

    // Display the elements to verify
    for(int i = 0; i < SIZE; i++) {
        std::cout << foods[i] << '\n';
    }

    return 0;
}
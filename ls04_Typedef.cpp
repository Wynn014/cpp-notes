#include <iostream>
#include <vector>

// Traditional typedef syntax
typedef std::string text_t;
typedef int number_t;

// Modern 'using' keyword syntax (preferred)
using pair_t = std::string;

int main() {
    text_t firstName = "Wynn";
    number_t age = 17;
    pair_t hobby = "Coding";

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    std::cout << hobby << '\n';

    return 0;
}
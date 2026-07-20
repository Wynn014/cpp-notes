#include <iostream>
#include <string>

int main() {

    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++) {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);

        if(temp == "q") {
            break; // Exit the loop early if they type 'q'
        }
        else {
            foods[i] = temp;
        }
    }

    std::cout << "\nYou like the following food:\n";

    // Only print elements that aren't empty strings
    for(int i = 0; !foods[i].empty() && i < size; i++) {
        std::cout << foods[i] << '\n';
    }

    return 0;
}
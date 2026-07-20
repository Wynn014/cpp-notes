#include <iostream>

int main() {
    std::string students[] = {"Dwarf", "dog", "deer"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int reps;
    int comboPower = 0;   // running total, starts at 0

    std::cout << "How many training reps? ";
    std::cin >> reps;

    for (int i = 1; i <= reps; i++) {
        std::cout << "Rep " << i << std::endl;
        comboPower += 15;   // add 15 each rep
    }

    std::cout << "Final total combo power: " << comboPower << std::endl;

    return 0;
}
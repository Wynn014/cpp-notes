#include <iostream>
using namespace std;
int main() {
    std::string name;
    double age;

    std::cout << "what is your full name";
    std::getline(std::cin, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello! " << name << endl;
    std::cout << "You are " << age << " year's old" << endl;

    return 0;
}
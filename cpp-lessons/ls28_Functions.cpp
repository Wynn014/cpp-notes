#include <iostream>

// You must declare the function above main() so the compiler knows it exists
void happyBirthday(std::string name, int age);

int main() {
    std::string user = "Wynn";
    int currentAge = 19;

    // Calling our function and passing variables into it
    happyBirthday(user, currentAge);
    happyBirthday("Bro", 21);

    return 0;
}

// Defining the function logic below main()
void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "You are " << age << " years old!\n\n";
}
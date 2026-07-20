#include <iostream>

int main() {
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    
    int size = sizeof(students) / sizeof(std::string);

    for (int i = 0; i < size; i++) {
        std::cout << "Student " << i + 1 << ": " << students[i] << "\n";
    }

    return 0;
}
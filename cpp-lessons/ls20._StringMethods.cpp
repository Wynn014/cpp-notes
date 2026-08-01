#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // 1. name.length() - Returns the total number of characters in the string
    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters!\n";
    }

    // 2. name.empty() - Returns true if the string is completely blank
    if (name.empty()) {
        std::cout << "You didn't enter your name!\n";
    }

    // 3. name.clear() - Wipes out all text characters stored in the variable
    name.clear();
    std::cout << "Hello " << name << " (Your name was cleared)\n";

    // Re-assigning text for the remaining examples
    name = "Wynn";

    // 4. name.append() - Attaches another string directly to the end of the variable
    name.append("@gmail.com");
    std::cout << "Your username email is now: " << name << '\n';

    // 5. name.at() - Returns a character at a specified index position (Starts at 0)
    std::cout << "The first character of your name is: " << name.at(0) << '\n';

    // 6. name.insert() - Injects a character/string at a specific index position
    name.insert(0, "#");
    std::cout << "Tagged name: " << name << '\n';

    // 7. name.find() - Looks up the first index position of a character or substring
    std::cout << "Position of the '@' symbol: " << name.find('@') << '\n';

    // 8. name.erase() - Removes characters across a range of indices (start position, count)
    name.erase(0, 1); // Erases the injected '#' character
    std::cout << "Restored name: " << name << '\n';

    return 0;
}
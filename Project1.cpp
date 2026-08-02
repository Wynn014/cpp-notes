#include <iostream>
int main()
{
    std::cout << "Welcome to the System!\n";

    std::cout << "click enter to start: ";
    std::string start1;
    std::getline(std::cin, start1);

    if (start1.empty())
    {
        std::cout << "option 1 - calculator\n";
        std::cout << "option 2 - Difficulty program\n";
        std::cout << "Enter your choice (1-2): ";
        int option;
        std::cin >> option;
        switch (option)
        {
        case 1:
        {
            char calculator;
            std::cout << "------CALCULATOR PROGRAM-----\n";
            std::cout << "click y to start: ";
            std::cin >> calculator;

            if (calculator == 'Y' || calculator == 'y')
            {
                float num1, num2;
                std::string op;
                std::cout << "1st number: ";
                std::cin >> num1;

                std::cout << "2nd number: ";
                std::cin >> num2;

                std::cout << "enter operator: ";
                std::cin >> op;

                if (op == "Add" || op == "add")
                {
                    std::cout << "The result is: " << num1 + num2 << std::endl;
                }
                else if (op == "Subtract" || op == "subtract")
                {
                    std::cout << "The result is: " << num1 - num2 << std::endl;
                }
                else if (op == "Multiply" || op == "multiply")
                {
                    std::cout << "The result is: " << num1 * num2 << std::endl;
                }
                else if (op == "Divide" || op == "divide")
                {
                    std::cout << "The result is: " << num1 / num2 << std::endl;
                }
                else if (op == "exit")
                {
                    std::cout << "Exiting program...\n";
                }
                else
                {
                    std::cout << "please try again\n";
                }
            }
            else
            {
                std::cout << "Please try again\n";
            }
            break;
        }

        case 2:
        {
            char value;
            std::string level;
            std::cout << "would you like to play? (Y/n): ";
            std::cin >> value;

            if (value == 'Y' || value == 'y')
            {
                std::cout << "pick level (easy, medium, hard): ";
                std::cin >> level;

                if (level == "easy")
                {
                    std::cout << "level is easy" << std::endl;
                }
                else if (level == "medium")
                {
                    std::cout << "level is medium" << std::endl;
                }
                else if (level == "hard")
                {
                    std::cout << "level is hard" << std::endl;
                }
                else
                {
                    std::cout << "invalid difficulty, please try again" << std::endl;
                }
            }
            else if (value == 'n' || value == 'N')
            {
                std::cout << "You may now leave\n";
            }
            else
            {
                std::cout << "try again" << '\n';
            }
        }
        break;
        }
    }
    return 0;
}
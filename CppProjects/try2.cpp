#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string CorrectPassword = "Mayumi";
    std::string password;

    int attempts = 0;
    const int maxAttempts = 3;

    std::cout << "Please enter your password: ";
    std::cin >> password;
    attempts++;

    while (password != CorrectPassword && attempts < maxAttempts){
        std::cout << "Incorrect Password\n";
        std::cout << "Please enter your password: ";
        std::cin >> password;
        attempts++;
    }
    if (password != CorrectPassword)
    {
        std::cout << "Reached Maximum Attempts, Access Denied. \n";
        return 0;
    }

    std::cout << "Access granted!\n";

    {

        char again = 'y';
        while (again == 'y' || again == 'Y')
        {
            std::cout << "Welcome to my calculator program! \n";
            double num1, num2;
            char op1;
            std::cout << "Please enter your 1st number: ";
            std::cin >> num1;
            std::cout << "Please enter 2nd number: ";
            std::cin >> num2;
            std::cout << "Please enter operator: ";
            std::cin >> op1;

            switch (op1)
            {
            case '+':
                std::cout << "result: " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "result: " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "result: " << num1 * num2 << std::endl;
                break;
            case '/':
                std::cout << "result: " << num1 / num2 << std::endl;
                break;
            default:
                std::cout << "Please try again\n";
                break;
            }

            std::cout << "Do another calculation? (y/n): ";
            std::cin >> again;
        }
    }
    
    return 0;
}
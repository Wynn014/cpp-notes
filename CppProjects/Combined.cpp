#include <iostream>
int main()
{
    std::cout << "--------Welcome to the System, Wynn---------\n";

    std::cout << "click enter to start: ";
    std::string start1;
    std::getline(std::cin, start1);

    if (start1.empty())
    {
        std::cout << "option 1 - Calculator\n";
        std::cout << "option 2 - Difficulty Program\n";
        std::cout << "option 3 - ATM Machine\n";
        std::cout << "Enter your choice (1-3): ";
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
            std::cout << "--------Difficulty Program----------\n";
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
            break;
        }
        case 3:
            std::string Password;
            std::cout << "Please Login to your Account \n";
            std::cout << "Password: ";
            std::cin >> Password;

            double balance = 5000.0;
            double deposit = 0;
            double withdraw = 0;
            int choice;

            if (Password == "Pass01")
            {

                std::cout << "---------Welcome to the ATM Machine!---------\n";
                std::cout << "Option 1 - Check Balance\n";
                std::cout << "Option 2 - Withdraw\n";
                std::cout << "Option 3 - Deposit\n";
                std::cout << "select your option: ";
                std::cin >> choice;
                switch (choice)
                {
                case 1:
                    std::cout << "Your balance is: " << balance << std::endl;
                    break;
                case 2:
                    std::cout << "Enter amount to withdraw: ";
                    std::cin >> withdraw;
                    balance = balance - withdraw;
                    if (balance <= 0)
                    {
                        std::cout << "Insufficient please try again \n";
                    }
                    else if (withdraw > 5000)
                    {
                        std::cout << "You have reached your daily withdrawal limit\n";
                    }
                    else
                    {
                        std::cout << "Your new balance is: " << balance << "\n";
                    }
                    break;
                case 3:
                    std::cout << "Enter amount to deposit: ";
                    std::cin >> deposit;
                    balance = deposit + balance;
                    std::cout << "Your new balance is: " << balance << "\n";
                    break;
                default:
                    std::cout << "please try again \n";
                }
                break;
            }
            else
            {
                std::cout << "Incorrect password, please try again.\n";
            }
        }
    }
    return 0;
}
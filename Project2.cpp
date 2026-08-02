#include <iostream>
using namespace std;
int main(){
   double balance = 1000.0;
   double deposit = 0;
   double withdraw = 0;
   int choice;

   std::cout << "Welcome to the ATM Machine!\n";
   std::cout << "Option 1 - Check Balance\n";
   std::cout << "Option 2 - Withdraw\n";
   std::cout << "Option 3 - Deposit\n";
   std::cout << "select your option: ";
   std::cin >> choice;
    
   switch (choice){
       case 1:
       std::cout << "Your balance is: " << balance << std::endl;
    break;
       case 2:
       std::cout << "Enter amount to withdraw: ";
       std::cin >> withdraw;
       balance = balance - withdraw;
        std::cout << "Your new balance is: " << balance << '\n';
    break;
       case 3:
       std::cout << "Enter amount to deposit: ";
       std::cin >> deposit;
       balance = deposit + balance;
         std::cout << "Your new balance is: \n" << balance << '\n';
       break;
    default:
       std::cout << "please try again \n";
   }

    return 0;
}
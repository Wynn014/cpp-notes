#include <iostream>
int main(){
   double balance = 5000;
   double withdraw;
  
   std::cout << "your balance is " << balance << '\n';
   std::cout << "withdraw any amount: ";

   std::cin >> withdraw;
   double result = balance - withdraw;

   std::cout << "remaining balance is: " << result << std::endl;

   std::cout << "would you like to withdraw again?" << std::endl;
    

    return 0;
}
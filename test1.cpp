#include <iostream>
int main(){
   double x;
   double y;
   
   std::cout << "enter first number: ";
   std::cin >> x;
   std::cout << "enter second number: ";
   std::cin >> y;

   double result1 = x + y;
   double result2 = x - y;
   double result3 = x * y;
   double result4 = x / y;

   std::cout << "\nAddition: " << result1;
   std::cout << "\nSubtraction: " << result2; 
   std::cout << "\nMultiplication: " << result3; 
   std::cout << "\nDivision: " << result4 << '\n';

    return 0;
}
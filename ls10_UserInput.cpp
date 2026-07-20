#include <iostream>

int main(){

   int age;

   std::cout << "enter your age: ";
   std::cin >> age;

   if(age >= 100){
    std::cout << "ano to joke time, patay ka na e" << '\n';
  }

   else if(age >= 18){
    std::cout << "welcome to the site!" << '\n';
   }

   else if(age < 0){
    std::cout << "di ka pa pinanganak pre" << '\n';
   }
  
   else{
    std::cout << "Bye Site " << std::endl;
   }

    return 0;
}
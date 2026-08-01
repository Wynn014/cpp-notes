#include <iostream>

int main(){
    int num;

   do{
        std::cout << "enter  number: ";
        std::cin >> num;
   }while( num < 1);
    
    std::cout << "Th num is: " << num << '\n';

    return;
 }
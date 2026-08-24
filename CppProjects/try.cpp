#include <iostream>
int main (){

    std::cout << "--- CINEMA ni WYN ---\n"; 
    std::cout << "[1] Oddysey (7:00AM) - 250 Pesos\n";
    std::cout << "[2] Spiderman (9:00AM)- 300 Pesos\n";
    std::cout << "[3] Eternals (12:00PM) - 275 Pesos\n";
    std::cout << "[4] Toy Story (3:00PM)- 325 Pesos\n";

      int choice;

    std::cout << "Select your choice(1-4)";
    std::cin >> choice;
     
    int amount;
    std::cout << "Category";
    std::cout << "[1] Adult - 0 Percent Discount \n";
    std::cout << "[2] Student - 25 Percent Discount \n";
    std::cout << "[3] Senior - 50 Percent Discount \n";

    int category;
    std::cin >> category;


    std::cout << "enter amount";
    double price = 0.0;

    switch(choice){
        case 1:
        std::cout << "You selected Oddysey";
        price = 250;
        break;
        
        case 2:
          std::cout << "You selected Spiderman";
        price = 300;
        break;

          case 3:
          std::cout << "You selected Eternals";
        price = 275;
        break;
          case 4:
          std::cout << "You selected Toy Story";
        price = 325;
        break;
    }

    double price = 0.0;
    double discount1 = 1, discount2 = 3;
    switch (category){
       case 1:
       double discount = 0.0;
       break;

       case 2:
       double discount = 0.25;
       break;

       case 3:
       double discount = 0.50;
       default:
       std::cout << "invalid choice";
        break;
    }
   

    return 0;
}
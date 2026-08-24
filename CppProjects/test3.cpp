#include <iostream>
int main (){
    std::cout << "--- CINEMA ni WYN ---\n"; 
    std::cout << "[1] Oddysey (7:00AM) - 250 Pesos\n";
    std::cout << "[2] Spiderman (9:00AM)- 300 Pesos\n";
    std::cout << "[3] Eternals (12:00PM) - 275 Pesos\n";
    std::cout << "[4] Toy Story (3:00PM)- 325 Pesos\n";

    int choice, quantity;
    double price;

    std::cout << "Select your choice(1-4): ";
    std::cin >> choice;

        switch(choice){
        case 1:
         std::cout << "You selected Oddysey\n";
        price = 250;
        break;
        
        case 2:
          std::cout << "You selected Spiderman\n";
        price = 300;
        break;

          case 3:
          std::cout << "You selected Eternals\n";
        price = 275;
        break;
          case 4:
          std::cout << "You selected Toy Story\n";
        price = 325;
        break;
    }

    std::cout << "Enter Quantity: ";
    std::cin >> quantity;

    int category;
    double discount;

    std::cout << "Category\n";
    std::cout << "[1] Adult - 0 Percent Discount \n";
    std::cout << "[2] Student - 25 Percent Discount \n";
    std::cout << "[3] Senior - 50 Percent Discount \n";

     switch (category){
       case 1:
       discount = 0.0;
       break;

       case 2:
       discount = 0.25;
       break;

       case 3:
       discount = 0.50;
       default:
       std::cout << "invalid choice";
        break;

    std::cout << "Select Category: ";
    std::cin >> category;

    }

     double total = price * discount;

    return 0;
}
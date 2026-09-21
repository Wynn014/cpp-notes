#include <iostream> 
int main (){
    double subtotal;
    char ifmember;

    std::cout << "Enter Final Price: ";
    std::cin >> subtotal;
    std::cout << "Are you a member? Y/n: ";
    std::cin >> ifmember;

    if (subtotal > 5000){
        subtotal = subtotal * 0.85;
        std::cout << "the subtotal is: " << subtotal << std::endl;
    }
    else if(subtotal < 2500){
        std::cout << "the subtotal is: " << subtotal << std::endl;
    }

    if (ifmember == 'Y' || ifmember == 'y'){
        subtotal = subtotal * 0.90;
        std::cout << "the subtotal if member is: " << subtotal << std::endl;
    }

    double finalTotal = subtotal * 1.12;
    std::cout << "Final Price to Pay: " << finalTotal << std::endl;
    return 0;
}
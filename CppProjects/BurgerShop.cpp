#include <iostream>
#include <string>
using namespace std;

int main(){
    
    std::cout << "---BURGER SHOP NI WYN---\n";
    std::cout << "1 - BURGER - $5.50\n";
    std::cout << "2 - FRIES - $2.25\n";
    std::cout << "3 - SODA - $1.75\n";
    std::cout << "4 - ICE CREAM - $3.00\n";
    
    int choice;
    std::cout << "enter your choice: ";
    std::cin >> choice;
    
    double price = 0.0;
    string name;
    
    int amount;
    std::cout << "Enter amount: ";
    std::cin >> amount;
    
    switch (choice){
        case 1:
            name = "BURGER";
            price = 5.50;
            break;
        case 2:
            name = "FRIES";
            price = 2.25;
            break;
        case 3:
            name = "SODA";
            price = 1.75;
            break;
        case 4:
            name = "ICE CREAM";
            price = 3.00;
            break;
     
        default:
            std::cout << "Invalid selection\n";
            return 0; 
    }
    
    double subtotal = price * amount;
    double discount = 0.0;
    
  
    if (subtotal > 20.0) {
        discount = subtotal * 0.10;
        subtotal = subtotal - discount; 
    }
    
    double taxAmount = subtotal * 0.08;
    double finalTotal = subtotal + taxAmount;
    
    std::cout << "\n--- RECEIPT ---\n";
    std::cout << "Item: " << name << "\n";
    std::cout << "Quantity: " << amount << "\n";
    
    if (discount > 0.0) {
        std::cout << "Discount (10%): -$" << discount << "\n";
    }
    
    std::cout << "Subtotal: $" << subtotal << "\n";
    std::cout << "Tax (8%): $" << taxAmount << "\n";
    std::cout << "-----------------------\n";
    std::cout << "Final Total: $" << finalTotal << "\n";
    
    return 0;
}
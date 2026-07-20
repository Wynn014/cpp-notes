#include <iostream>
#include <string>

using namespace std;

int main() {

    string item;
    double Magkano;
    int IlanBa;
    
    double discountRate = 0.10; 
    double taxRate = 0.12;      
    double ShippingFeeRequirement = 50.0; 

    cout << "--- Bili naa ---" << endl;
    cout << "1. Sushi    - 1800 yen" << endl;
    cout << "2. Ramen    - 1000 yen" << endl;
    cout << "3. Tonkatsu - 1500 yen" << endl;
    cout << "4. Takoyaki - 500 yen" << endl;
    cout << "5. Tempura  - 1200 yen" << endl;
    cout << "------------" << endl;

    cout << "Please select your choice: ";

    cin >> item;

    cout << "Price of the item: ";

    cin >> Magkano;

    cout << "Quantity for the item: ";

    cin >> IlanBa;

    double subtotal = Magkano * IlanBa;

    double discount = subtotal * discountRate; 

    double priceAfterNgDiscount = subtotal - discount;

    double salesTax = priceAfterNgDiscount * taxRate;

    double retailPrice = priceAfterNgDiscount + salesTax; 

    cout << "\n--- RECEIPT ---" << endl;
    cout << "Product: " << item << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Discount: " << discount << endl;
    cout << "Tax: " << salesTax << endl;
    cout << "Retail Price: " << retailPrice << endl; 
    cout << "----------------" << endl;

    bool qualifies = (retailPrice >= ShippingFeeRequirement);

    cout << "(1 = Yun oh Discounted! / 0 = Ay Bawal)\n";
    cout << "Free Shipping: " << qualifies << endl;

    return 0;
}
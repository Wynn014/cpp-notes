#include <iostream>
using namespace std;

int main() {

    //login stuff
    std::string CorrectUsername = "Admin";
    std::string CorrectPassword = "Group 1";
    std::string password, username;

    int attempts;
    for(attempts = 1; attempts <= 3; attempts++) {
        cout << "Attempts: " << attempts << endl;

        cout << "please enter your username: ";
        cin >> username;
        std::cout << "please enter your password: ";
        std::cin >> password;

        if (username == CorrectUsername && password == CorrectPassword) {

            string n1 = "Apple", n2 = "Banana", n3 = "Milk";

            // p = price, s = stock
            double p1 = 15.00, p2 = 10.00, p3 = 85.00;
            int s1 = 50, s2 = 30, s3 = 20;

            int choice;
            cout << "POS & INVENTORY SYSTEM\n";
            cout << "1. View Inventory\n";
            cout << "2. Make a Sale\n";
            cout << "3. Restock Product\n";
            cout << "4. Exit" << endl;
            cout << "Choice: ";
            cin >> choice;

            switch(choice) {
                case 1: //view inventory
                    cout << "\nINVENTORY LIST\n";
                    cout << n1 << " - P" << p1 << " (Stock: " << s1 << ")\n";
                    cout << n2 << " - P" << p2 << " (Stock: " << s2 << ")\n";
                    cout << n3 << " - P" << p3 << " (Stock: " << s3 << ")" << endl;
                break;

                case 2: { //sale
                    cout << "\nSELECT ITEM\n";
                    cout << "1. " << n1 << "\n";
                    cout << "2. " << n2 << "\n";
                    cout << "3. " << n3 << endl;

                    int item, qty;
                    cout << "Item number: ";
                    cin >> item;

                    switch(item) {
                        case 1:
                            cout << "Quantity: ";
                            cin >> qty;
                            if(qty > 0 && qty <= s1) {
                                s1 = s1 - qty;
                                cout << "Total: P" << p1*qty << "\nSale Successful!" << endl;
                            }
                            else {
                                cout << "Invalid quantity or out of stock!\n";
                            }
                        break;

                        case 2:
                            std::cout << "Quantity: ";
                            std::cin >> qty;
                            if(qty > 0 && qty <= s2) {
                                s2 = s2 - qty;
                                cout << "Total: P" << p2*qty << "\nSale Successful!\n";
                            } else {
                                cout << "Invalid quantity or out of stock!" << endl;
                            }
                        break;

                        case 3:
                            cout << "Quantity: ";
                            cin >> qty;
                            if (qty > 0 && qty <= s3){
                                s3 = s3 - qty;
                                cout << "Total: P" << p3 * qty << "\nSale Successful!\n";
                            }
                            else{
                                cout << "Invalid quantity or out of stock!\n";
                            }
                        break;

                        default:
                            cout << "Invalid item." << endl;
                    }
                break;
                }

                case 3: { //restock
                    cout << "\nRESTOCK ITEM\n";
                    cout << "1. " << n1 << "\n";
                    cout << "2. " << n2 << "\n";
                    cout << "3. " << n3 << "\n";

                    int item, add;
                    cout << "Item number: ";
                    cin >> item;

                    switch (item){
                        case 1:
                            cout << "Add quantity: ";
                            cin >> add;
                            s1 += add;
                            cout << "New stock for " << n1 << ": " << s1 << endl;
                        break;

                        case 2:
                            cout << "Add quantity: ";
                            cin >> add;
                            s2 = s2 + add;
                            cout << "New stock for " << n2 << ": " << s2 << "\n";
                        break;

                        case 3:
                            cout << "Add quantity: ";
                            cin >> add;
                            s3 = s3 + add;
                            cout << "New stock for " << n3 << ": " << s3 << "\n";
                        break;

                        default:
                            cout << "Invalid item.\n";
                    }
                break;
                }

                case 4:
                    cout << "Goodbye!" << endl;
                break;

                default:
                    cout << "Invalid choice.\n";
            }

            break;
        }
        else{
            cout << "Incorrect Username and Password" << endl;
        }
    }

    if(attempts > 3){
        cout << "Too many failed attempts. Access denied.\n";
    }

    return 0;
}
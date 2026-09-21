
#include <iostream>
#include <string>


using namespace std;


// Function prototypes based on syllabus (Void, Returning, Call by Value, Call by Reference)
void displayInventory(const string names[], const double inventory[][2], int size);
void processSale(string names[], double inventory[][2], int size, int &transCount, double &revCount);
void restockProduct(string names[], double inventory[][2], int size);
double computeSubtotal(double price, int qty); // Returning function
void deductStock(double &stockQty, int qty);    // Call by reference


int main() {
    string username;
    string password;
    int attempts = 0;
    string role = "";


    // Login loop (max 3 tries)
    while (attempts < 3) {
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;


        if (username == "Group1Owner" && password == "OwnerPass") {
            role = "Owner";
            std::cout << "\nLogin successful! Logged in as OWNER." << std::endl << "\n";
            break;
        } else if(username == "Group1InventoryManager" && password == "InventoryPass") {
            role = "InventoryManager";
            std::cout << "\nLogin successful! Logged in as INVENTORY MANAGER." << std::endl << "\n";
            break;
        } else if (username == "Group1Cashier" && password == "CashierPass") {
            role = "Cashier";
            std::cout << "\nLogin successful! Logged in as CASHIER." << std::endl << "\n";
            break;
        } else if (username == "Group1Customer" && password == "CustomerPass") {
            role = "Customer";
            std::cout << "\nLogin successful! Logged in as CUSTOMER." << std::endl << "\n";
            break;
        } else {
            attempts++;
            std::cout << "Wrong username or password!\n";
            std::cout << "Attempts left: " << (3 - attempts) << std::endl << std::endl;
        }
    }


    if (attempts == 3) {
        std::cout << "Attempts left: " << (3 - attempts) << std::endl << std::endl;
    }


    // 1D array for item names
    string names[3] = {"Mech Keyboard", "Gaming Mouse", "1TB SSD"};


    // 2D array: column 0 = price, column 1 = stock
    double inventory[3][2] = {
        {2500.00, 4},   // Low stock test case
        {1200.00, 30},
        {3500.00, 0}    // Out of stock test case
    };


    int choice;
    char repeat;
    int totalTransactions = 0;
    double totalRevenue = 0.0;


    // Main program loop
    do {
        std::cout << "=== TIP Gaming Shop POS ===" << std::endl;
        std::cout << "1. View Inventory\n";
        std::cout << "2. Checkout / Buy Item\n";
        std::cout << "3. Restock Product\n";
        std::cout << "4. Daily Sales Report\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;


        switch (choice) {
            case 1:
                if(role == "InventoryManager" || role == "Cashier" || role == "Owner") {
                    displayInventory(names, inventory, 3);
                } else {
                    std::cout << "Access denied. Only Inventory Manager, Cashier, and Owner can view inventory.\n";
                }
                break;


            case 2:
                if(role == "Owner" || role == "Customer") {
                    processSale(names, inventory, 3, totalTransactions, totalRevenue);
                } else {
                    std::cout << "Access denied. Only Customer and Owner can process sales.\n";
                }
                break;


            case 3:
                 if (role == "InventoryManager" || role == "Owner") {
                    restockProduct(names, inventory, 3);
                 } else {
                    std::cout << "Access denied. Only Inventory Manager and Owner can restock products.\n";
                 }
                 break;


            case 4: {
                std::cout << "\n--- DAILY REPORT ---\n";
                std::cout << "Total Transactions: " << totalTransactions << std::endl;
                std::cout << "Total Revenue: P" << totalRevenue << "\n";
               
                std::cout << "Out of Stock Items:\n";
                bool outCheck = false;
                for(int i = 0; i < 3; i++) {
                    if(inventory[i][1] == 0) {
                        std::cout << "- " << names[i] << std::endl;
                        outCheck = true;
                    }
                }
                if(!outCheck) {
                    std::cout << "None. All items have stock.\n";
                }
                break;
            }


            case 5:
                std::cout << "Exiting program...\n";
                break;


            default:
                std::cout << "Invalid choice, try again.\n";
        }


        if (choice != 5) {
            std::cout << "\nDo you want to run again? (y/n): ";
            std::cin >> repeat;
            std::cout << std::endl;
        } else {
            repeat = 'n';
        }


    } while (repeat == 'y' || repeat == 'Y');


    std::cout << "Thank you for using our system!" << std::endl;
    return 0;
}


// Void function using call by value for arrays
void displayInventory(const std::string names[], const double inventory[][2], int size) {
    std::cout << "\n--- CURRENT INVENTORY ---\n";
    for (int i = 0; i < size; i++) {
        std::cout << (i + 1) << ". " << names[i]
                  << " | Price: P" << inventory[i][0]
                  << " | Stock: " << inventory[i][1];
             
        if (inventory[i][1] == 0) {
            std::cout << " [OUT OF STOCK]";
        } else if (inventory[i][1] <= 5) {
            std::cout << " [LOW STOCK]";
        }
        std::cout << "\n";
    }
}


// Function handling transaction with call by reference for tallies
void processSale(std::string names[], double inventory[][2], int size, int &transCount, double &revCount) {
    displayInventory(names, inventory, size);
   
    int itemNum, qty;
    std::cout << "\nEnter item number to buy: ";
    std::cin >> itemNum;
   
    int index = itemNum - 1;


    if (index >= 0 && index < size) {
        if (inventory[index][1] == 0) {
            std::cout << "Sorry, this item is out of stock.\n";
            return;
        }


        std::cout << "Enter quantity: ";
        std::cin >> qty;


        if (qty <= 0) {
            std::cout << "Invalid quantity entered.\n";
            return;
        }
        if (qty > inventory[index][1]) {
            std::cout << "Error: Not enough stock available.\n";
            return;
        }


        double subtotal = computeSubtotal(inventory[index][0], qty);
        double cash;
       
        std::cout << "Subtotal: P" << subtotal << std::endl;
        std::cout << "Enter cash tendered: P";
        std::cin >> cash;


        if (cash < subtotal) {
            std::cout << "Cash is not enough! Transaction failed.\n";
            return;
        }


        double change = cash - subtotal;


        // Call by reference to update stock
        deductStock(inventory[index][1], qty);


        transCount++;
        revCount += subtotal;


        std::cout << "\n--- RECEIPT ---\n";
        std::cout << "Item: " << names[index] << "\n";
        std::cout << "Quantity: " << qty << std::endl;
        std::cout << "Total: P" << subtotal << "\n";
        std::cout << "Cash: P" << cash << "\n";
        std::cout << "Change: P" << change << std::endl;
        std::cout << "Transaction Successful!\n";


    } else {
        std::cout << "Invalid item selection.\n";
    }
}


void restockProduct(string names[], double inventory[][2], int size) {
    displayInventory(names, inventory, size);
   
    int itemNum, add;
    std::cout << "\nEnter item number to restock: ";
    std::cin >> itemNum;
   
    int index = itemNum - 1;


    if (index >= 0 && index < size) {
        std::cout << "Enter amount to add: ";
        std::cin >> add;
       
        if (add > 0) {
            inventory[index][1] += add;
            std::cout << "Restock success! New stock: " << inventory[index][1] << std::endl;
        } else {
            std::cout << "Invalid add amount.\n";
        }
    } else {
        std::cout << "Invalid item number.\n";
    }
}


// Returning value function
double computeSubtotal(double price, int qty) {
    return price * qty;
}


// Call by reference function using &
void deductStock(double &stockQty, int qty) {
    stockQty -= qty;
}


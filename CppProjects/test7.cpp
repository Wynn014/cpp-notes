#include <iostream>
#include <string>

using namespace std;

const int MAX = 10; // 10 slots, extra space is for the new products we add later

// Function prototypes based on syllabus (Void, Returning, Call by Value, Call by Reference)
void displayMenu();

void displayInventory(
    const int ids[],
    const string names[],
    const double inventory[][2],
    int size
);

void addProduct(
    int ids[],
    string names[],
    double inventory[][2],
    int &count
);

void processSale(
    int ids[],
    string names[],
    double inventory[][2],
    int size,
    int &transCount,
    double &revCount
);

void restockProduct(
    int ids[],
    string names[],
    double inventory[][2],
    int size
);

void dailyReport(
    string names[],
    double inventory[][2],
    int size,
    int transCount,
    double revCount
);

// Returning function, -1 if the ID is not on the list
int findIndex(int ids[], int size, int searchId);

// Returning function
double computeSubtotal(double price, int qty);

// Call by reference
void deductStock(double &stockQty, int qty);

int main() {
    string username;
    string password;
    int attempts = 0;
    string role = "";
    int userType;

    // ask first if staff or customer before going into the login part
    do {
        std::cout << "Are you a (1) Staff/Owner or (2) Customer? ";
        std::cin >> userType;
        if (userType != 1 && userType != 2) {
            std::cout << "Invalid input, enter 1 or 2 only.\n";
        }
    } while (userType != 1 && userType != 2);

    if (userType == 1) {
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
            } else {
                attempts++;
                std::cout << "Wrong username or password!\n";
                std::cout << "Attempts left: " << (3 - attempts) << std::endl << std::endl;
            }
        }

        // no role means all 3 tries were used up, so stop here instead of letting them in
        if (role == "") {
            std::cout << "3 failed attempts. System locked, please run the program again.\n";
            return 0;
        }
    } else {
        // customer walks in straight, no username/password needed
        role = "Customer";
        std::cout << "\nWelcome, Customer! You may now view products and checkout.\n\n";
    }


    // 1D array for item names
    string names[MAX] = {"Mech Keyboard", "Gaming Mouse", "1TB SSD"};

    // 1D array for the product IDs, same position = same item as the names array
    int ids[MAX] = {101, 102, 103};

    // 2D array: column 0 = price, column 1 = stock
    double inventory[MAX][2] = {
        {2500.00, 4},   // Low stock test case
        {1200.00, 30},
        {3500.00, 0}    // Out of stock test case
    };

    int itemCount = 3; // how many slots have items in them right now
    int choice;
    char repeat;
    int totalTransactions = 0;
    double totalRevenue = 0.0;

    // Main program loop
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                // all four roles can view the inventory so there is no role check here
                displayInventory(ids, names, inventory, itemCount);
                break;

            case 2:
                if(role == "Owner" || role == "Cashier" || role == "Customer") {
                    processSale(ids, names, inventory, itemCount, totalTransactions, totalRevenue);
                } else {
                    std::cout << "Access denied. Only Cashier, Customer, and Owner can process sales.\n";
                }
                break;

            case 3:
                 if (role == "InventoryManager" || role == "Owner") {
                    restockProduct(ids, names, inventory, itemCount);
                 } else {
                    std::cout << "Access denied. Only Inventory Manager and Owner can restock products.\n";
                 }
                 break;

            case 4:
                if (role == "InventoryManager" || role == "Owner") {
                    addProduct(ids, names, inventory, itemCount);
                } else {
                    std::cout << "Access denied. Only Inventory Manager and Owner can add new products.\n";
                }
                break;

            case 5:
                if (role == "Owner" || role == "InventoryManager" || role == "Cashier") {
                    dailyReport(names, inventory, itemCount, totalTransactions, totalRevenue);
                } else {
                    std::cout << "Access denied. Customers cannot view the daily sales report.\n";
                }
                break;

            case 6:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice, try again.\n";
        }

        if (choice != 6) {
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

// menu is its own function now so main does not get too long
void displayMenu() {
    std::cout << "=== TIP Gaming Shop POS ===" << std::endl;
    std::cout << "1. View Inventory\n";
    std::cout << "2. Checkout / Buy Item\n";
    std::cout << "3. Restock Product\n";
    std::cout << "4. Add New Product\n";
    std::cout << "5. Daily Sales Report\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter choice: ";
}

// Void function using call by value for arrays
void displayInventory(
    const int ids[],
    const string names[],
    const double inventory[][2],
    int size
) {
    std::cout << "\n--- CURRENT INVENTORY ---\n";
    std::cout << "ID\tITEM NAME\t\tPRICE\tSTOCK\tSTATUS" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << ids[i] << "\t" << names[i];

        // short names need an extra tab or the price column shifts to the left
        if (names[i].length() < 8) {
            std::cout << "\t\t\t";
        } else if (names[i].length() < 16) {
            std::cout << "\t\t";
        } else {
            std::cout << "\t";
        }

        std::cout << inventory[i][0] << "\t" << inventory[i][1] << "\t";

        if (inventory[i][1] == 0) {
            std::cout << "[OUT OF STOCK]";
        } else if (inventory[i][1] <= 5) {
            std::cout << "[LOW STOCK]";
        }
        std::cout << "\n";
    }
}

// checks which slot the typed ID belongs to, -1 if it is not on the list
int findIndex(int ids[], int size, int searchId) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == searchId) {
            return i;
        }
    }
    return -1;
}

// puts the new product on the last empty slot of the arrays
void addProduct(
    int ids[],
    string names[],
    double inventory[][2],
    int &count
) {
    if (count >= MAX) {
        std::cout << "Product list is already full (max " << MAX << " items).\n";
        return;
    }

    int newId;
    double newPrice, newStock;

    std::cout << "\n--- ADD NEW PRODUCT ---\n";
    std::cout << "Enter product ID: ";
    std::cin >> newId;

    if (findIndex(ids, count, newId) != -1) {
        std::cout << "That ID is already used by another item.\n";
        return;
    }

    std::cin.ignore(); // clear the enter first or getline will grab a blank name
    std::cout << "Enter product name: ";
    getline(std::cin, names[count]);

    std::cout << "Enter price: P";
    std::cin >> newPrice;
    std::cout << "Enter starting stock: ";
    std::cin >> newStock;

    if (newPrice <= 0 || newStock < 0) {
        std::cout << "Invalid price or stock. Product was not added.\n";
        return;
    }

    ids[count] = newId;
    inventory[count][0] = newPrice;
    inventory[count][1] = newStock;
    count++;

    std::cout << names[count - 1] << " added! Total products now: " << count << std::endl;
}

// Function handling transaction with call by reference for tallies
void processSale(
    int ids[],
    string names[],
    double inventory[][2],
    int size,
    int &transCount,
    double &revCount
) {
    displayInventory(ids, names, inventory, size);

    int itemId, qty;
    std::cout << "\nEnter item ID to buy: ";
    std::cin >> itemId;

    int index = findIndex(ids, size, itemId);

    if (index != -1) {
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

        if (cash < 0) {
            std::cout << "Negative cash is not allowed.\n";
            return;
        }
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
        std::cout << "Item ID: " << ids[index] << "\n";
        std::cout << "Item: " << names[index] << "\n";
        std::cout << "Price: P" << inventory[index][0] << " x " << qty << std::endl;
        std::cout << "Total: P" << subtotal << "\n";
        std::cout << "Cash: P" << cash << "\n";
        std::cout << "Change: P" << change << std::endl;
        std::cout << "Stock left: " << inventory[index][1] << std::endl;
        std::cout << "Transaction Successful!\n";

        // alert goes here too so the cashier sees it right after the receipt
        if (inventory[index][1] <= 5) {
            std::cout << "LOW STOCK ALERT: only 5 or fewer left of " << names[index] << "!\n";
        }

    } else {
        std::cout << "No item matched that ID.\n";
    }
}

void restockProduct(
    int ids[],
    string names[],
    double inventory[][2],
    int size
) {
    displayInventory(ids, names, inventory, size);

    int itemId, add;
    std::cout << "\nEnter item ID to restock: ";
    std::cin >> itemId;

    int index = findIndex(ids, size, itemId);

    if (index != -1) {
        std::cout << "Enter amount to add: ";
        std::cin >> add;

        if (add > 0) {
            inventory[index][1] += add;
            std::cout << "Restock success! " << names[index] << " new stock: " << inventory[index][1] << std::endl;
        } else {
            std::cout << "Invalid add amount.\n";
        }
    } else {
        std::cout << "No item matched that ID.\n";
    }
}

// this used to be inside case 4, moved it out so it matches the other functions
void dailyReport(
    string names[],
    double inventory[][2],
    int size,
    int transCount,
    double revCount
) {
    std::cout << "\n--- DAILY REPORT ---\n";
    std::cout << "Total Transactions: " << transCount << std::endl;
    std::cout << "Total Revenue: P" << revCount << "\n";

    std::cout << "Out of Stock Items:\n";
    int outCheck = 0; // 0 means no zero-stock item found yet, becomes 1 once there is one
    for(int i = 0; i < size; i++) {
        if(inventory[i][1] == 0) {
            std::cout << "- " << names[i] << std::endl;
            outCheck = 1;
        }
    }
    if(outCheck == 0) {
        std::cout << "None. All items have stock.\n";
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
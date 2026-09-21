#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void showCategories();
double computeFine(int days, double rate);
double applySurcharge(int days, double baseFine);
void printReceipt(string name, string category, int days, double total, string status);

int main() {
    int numStudents = 0;

    cout << "========================================\n";
    cout << "   SCHOOL LIBRARY FINE CALCULATOR SYSTEM\n";
    cout << "========================================\n";
    
    cout << "Enter the number of students to process: ";
    cin >> numStudents;

    // FOR LOOP: Process multiple students
    for (int i = 1; i <= numStudents; ++i) {
        cout << "\n----------------------------------------\n";
        cout << "Processing Student " << i << " of " << numStudents << "\n";
        cout << "----------------------------------------\n";

        string name;
        int id;
        
        // This cin.ignore() is only here to fix the getline bug when mixing cin >> and getline
        cin.ignore();
        cout << "Enter student name: ";
        getline(cin, name);
        
        cout << "Enter student ID: ";
        cin >> id;

        // Display categories
        showCategories();

        int categoryChoice = 0;
        cout << "Enter book category (1-4): ";
        cin >> categoryChoice;

        // WHILE LOOP: Simple validation for category range
        while (categoryChoice < 1 || categoryChoice > 4) {
            cout << "Invalid category! Please enter a number between 1 and 4: ";
            cin >> categoryChoice;
        }

        string categoryName = "";
        double rate = 0.0;

        // SWITCH STATEMENT: Assign category name and rate
        switch (categoryChoice) {
            case 1:
                categoryName = "Fiction";
                rate = 8.0;
                break;
            case 2:
                categoryName = "Science";
                rate = 10.0;
                break;
            case 3:
                categoryName = "History";
                rate = 12.0;
                break;
            case 4:
                categoryName = "Reference";
                rate = 15.0;
                break;
        }

        int daysOverdue = -1;
        cout << "Enter days overdue: ";
        cin >> daysOverdue;

        // WHILE LOOP: Simple validation for negative numbers
        while (daysOverdue < 0) {
            cout << "Invalid days! Days overdue cannot be negative. Enter again: ";
            cin >> daysOverdue;
        }

        // Call functions for fine computation
        double baseFine = computeFine(daysOverdue, rate);
        double finalFine = applySurcharge(daysOverdue, baseFine);

        // Determine status using nested conditional logic
        string status = "CLEARED";
        if (daysOverdue > 7) {
            status = "SUSPENDED";
        }

        // Call function to print the fine slip
        printReceipt(name, categoryName, daysOverdue, finalFine, status);
    }

    cout << "All students processed successfully. Exiting program.\n";
    return 0;
}

// --- FUNCTION DEFINITIONS ---

void showCategories() {
    cout << "\n--- Book Categories ---\n";
    cout << "1 = Fiction    — ₱8.00 per day overdue\n";
    cout << "2 = Science    — ₱10.00 per day overdue\n";
    cout << "3 = History    — ₱12.00 per day overdue\n";
    cout << "4 = Reference  — ₱15.00 per day overdue\n";
}

double computeFine(int days, double rate) {
    if (days == 0) {
        return 0.0;
    }
    return days * rate;
}

double applySurcharge(int days, double baseFine) {
    // IF/ELSE and NESTED IF/ELSE for fine tiers & surcharges
    if (days == 0) {
        return 0.0; 
    } else {
        if (days >= 1 && days <= 3) {
            return baseFine; 
        } else {
            if (days >= 4 && days <= 7) {
                return baseFine + 20.0; 
            } else {
                return baseFine + 50.0; 
            }
        }
    }
}

void printReceipt(string name, string category, int days, double total, string status) {
    cout << "\n==============================\n";
    cout << "      SCHOOL LIBRARY SLIP     \n";
    cout << "==============================\n";
    cout << "Student Name  : " << name << "\n";
    cout << "Book Category : " << category << "\n";
    cout << "Days Overdue  : " << days << "\n";
    if (days == 0) {
        cout << "Remarks       : No fine. Thank you for returning on time!\n";
    }
    cout << "Total Fine    : ₱" << total << "\n";
    cout << "Account Status: " << status << "\n";
    cout << "==============================\n";
}
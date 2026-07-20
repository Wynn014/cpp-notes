#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void showMenu() {
    cout << "\n--- Scientific Calculator ---" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Power (x^y)" << endl;
    cout << "6. Square Root (sqrt)" << endl;
    cout << "7. Sine (sin)" << endl;
    cout << "8. Cosine (cos)" << endl;
    cout << "9. Tangent (tan)" << endl;
    cout << "10. Natural Log (ln)" << endl;
    cout << "11. Exit" << endl;
    cout << "Enter choice: ";
}

int main() {
    int choice;
    double num1, num2, result;

        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6: // Square Root
                cout << "Enter number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Negative input for square root!" << endl;
                break;
            case 7: // Sine
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << sin(num1) << endl;
                break;
            case 8: // Cosine
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << cos(num1) << endl;
                break;
            case 9: // Tangent
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << tan(num1) << endl;
                break;
            case 10: // Logarithm
                cout << "Enter number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Logarithm of non-positive number!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }


    return 0;

    }
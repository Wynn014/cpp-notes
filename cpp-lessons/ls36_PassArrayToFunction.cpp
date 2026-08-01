#include <iostream>

// Function declaration expects an array parameter and a size parameter
double getTotal(double prices[], int size);

int main() {
    double prices[] = {10.00, 15.49, 23.00, 5.25};
    int size = sizeof(prices) / sizeof(double);

    double total = getTotal(prices, size);
    std::cout << "Total Price: $" << total << "\n";

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}
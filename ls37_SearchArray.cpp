#include <iostream>

// Function declaration
int searchArray(int array[], int size, int element);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    // Call the function and store the result in 'index'
    index = searchArray(numbers, size, myNum);

    if(index != -1) {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else {
        std::cout << myNum << " is not in the array" << std::endl;
    }

    return 0;
}

// Function definition
int searchArray(int array[], int size, int element) {
    
    // Loop through every single spot in the array sequentially
    for(int i = 0; i < size; i++) {
        // If the current element matches what we are looking for, return its position
        if(array[i] == element) {
            return i;
        }
    }
    
    // If the loop finishes and we found nothing, return -1 (sentinel value)
    return -1;
}
#include <iostream>

// Function declaration - we pass the array and its size
void sort(int array[], int size);

int main() {
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the sort function to rearrange the elements
    sort(array, size);

    // Print out the sorted array using a foreach-style loop
    for(int element : array) {
        std::cout << element << " ";
    }

    return 0;
}

// Function definition for Bubble Sort
void sort(int array[], int size) {
    int temp;
    
    // Outer loop: controls how many passes we make through the array
    for(int i = 0; i < size - 1; i++) {
        
        // Inner loop: step through the array and compare adjacent elements
        for(int j = 0; j < size - i - 1; j++) {
            
            // If the left element is larger than the right element, swap them!
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
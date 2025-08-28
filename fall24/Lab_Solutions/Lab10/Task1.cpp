/*
    Task 1:
        Write a function maxInEachRow that takes a 2D array of integers of
        dimensions 4x4 and returns a 1D array containing the maximum element
        from each row. In the main function, print the returned array to check
        the maximum values from each row.
*/

// Include the required libraries
#include <iostream>

constexpr int ROWS = 4;
constexpr int COLS = 4;

// Function to find the maximum element in each row of a 2D array
int* maxInEachRow(int arr[ROWS][COLS]) {
    static int maxArr[ROWS];  // Declare a new array to store the maximum elements

    // Find the maximum element in each row
    for (int i = 0; i < ROWS; i++) {
        int max = arr[i][0];
        for (int j = 1; j < COLS; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        maxArr[i] = max;
    }
    return maxArr;  // Return a pointer to the first element
}

// Function to print a 1D array
void printArray(int arr[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print2DArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main() {
    // Declare a 2D array of integers
    int arr[ROWS][COLS] = {
        { 21, 12, 32, 10 },
        { 32, 54, 12, 11 },
        { 50, 21, 23, 12 },
        { 33, 23, 25, 90 }
    };

    // Print the original 2D array
    std::cout << "Original 2D Array:" << std::endl;
    print2DArray(arr);

    // Call maxInEachRow to get the maximum elements from each row
    int* maxArr = maxInEachRow(arr);

    // Print the array of maximum elements
    std::cout << "Maximum elements in each row: ";
    printArray(maxArr);

    return 0;
}
/********************************************************************************************
 * @file    task2.cpp
 *
 * @details Write a function that computes the sums of each row and each column of a 2D array.
 *          The function should:
 *            - Take a 2D integer array `arr` with fixed number of columns, number of rows `rows`,
 *              and number of columns `cols`.
 *            - Take two integer arrays `rowSum[]` and `colSum[]` to store the sums of rows and
 *              columns, respectively.
 *            - Fill `rowSum` and `colSum` with the computed sums.
 *
 *         Prototype:
 *              void rowColSum(int arr[][3], int rows, int cols, int rowSum[], int colSum[]);
 *
 *          Call this function from `main()` with a sample 2D array to test its behavior.
 *
 ********************************************************************************************/

#include <iostream>

 /**
  * @brief   Computes the sums of each row and each column of a 2D array
  *
  * @param   arr         Input 2D integer array with fixed number of columns
  * @param   rows        Number of rows in the array
  */

void rowColSum(int arr[][3], int rows, int cols, int rowSum[], int colSum[]) {
    // Initialize sums to zero
    for (int i = 0; i < rows; ++i)
        rowSum[i] = 0;
    for (int j = 0; j < cols; ++j)
        colSum[j] = 0;

    // Compute sums
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }
}


/**
  * @brief   Prints a 2D array
  *
  * @param   arr     Input 2D integer array
  * @param   rows    Number of rows
  * @param   cols    Number of columns
  */
void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

/**
  * @brief   Prints a 1D array
  *
  * @param   arr     Input integer array
  * @param   size    Size of the array
  */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int sample_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    const int rows = 3;
    const int cols = 3;
    int rowSum[rows];
    int colSum[cols];

    rowColSum(sample_array, rows, cols, rowSum, colSum);

    std::cout << "2D Array:" << std::endl;
    printArray(sample_array, rows, cols);

    std::cout << "Row Sums: ";
    printArray(rowSum, rows);

    std::cout << "Column Sums: ";
    printArray(colSum, cols);

    return 0;
}

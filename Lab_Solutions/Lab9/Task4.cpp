/*
    Task 4:
        Write a function `transposeMatrix` that takes a 3x3 matrix of characters. This
        function should modify the matrix in place to become its transpose. Use nested
        loops to swap elements at positions `(i, j)` and `(j, i)`. In the main function,
        declare a 3x3 matrix, call `transposeMatrix`, and print the matrix before and
        after transposition to verify the results. Additionally, write and use the following
        helper functionn:
            - `printMatrix` to display the elements of the matrix
            - `swap` to swap two elements in the matrix
*/

// Include the iostream library
#include <iostream>

// Function to swap two elements in a matrix
void swap(char& a, char& b) {
    // Temporary variable to store the value of a
    char temp = a;
    // Swap the values of a and b
    a = b;
    b = temp;
}

// Function to transpose a 3x3 matrix
void transposeMatrix(char matrix[3][3]) {
    // Loop through the rows of the matrix
    for (int i = 0; i < 3; i++) {
        // Loop through the columns of the matrix
        for (int j = i + 1; j < 3; j++) {
            // Swap the elements at positions (i, j) and (j, i)
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to print the elements of a 3x3 matrix
void printMatrix(char matrix[3][3]) {
    // Loop through the rows of the matrix
    for (int i = 0; i < 3; i++) {
        // Loop through the columns of the matrix
        for (int j = 0; j < 3; j++) {
            // Print the element at position (i, j)
            std::cout << matrix[i][j] << " ";
        }
        // Move to the next line after printing each row
        std::cout << std::endl;
    }
}

// Main function
int main() {
    // Initialize a 3x3 matrix of characters
    char matrix[3][3] = {
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' }
    };

    // Display the original matrix
    std::cout << "Original matrix:" << std::endl;
    printMatrix(matrix);

    // Transpose the matrix
    transposeMatrix(matrix);

    // Display the transposed matrix
    std::cout << "Transposed matrix:" << std::endl;
    printMatrix(matrix);

    // Return 0 to indicate successful completion
    return 0;
}
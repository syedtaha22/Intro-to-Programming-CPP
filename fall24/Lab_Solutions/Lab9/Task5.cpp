/*
    Task 6:
        Write a C++ program to manage student scores. Each student is represented by an ERP
        (roll number) and a score in a 2D integer array, where each sub-array contains exactly
        two elements:
            - The first element is the ERP of the student.
            - The second element is the student's score.
        For example, the array might look like this:

            {
                {101, 85},
                {102, 90},
                {103, 75},
                {104, 95}
            }

        Part 1:
            Write a function sortByScore that takes the 2D array of [ERP, score] pairs. and its size
            and sorts it in place in descending order based on the scores.

        Part 2:
            Write another function searchByERP that takes  the 2D array, it's size and an integer erp as
            input parameters, searches the array for this ERP, and returns the associated score if found,
            or -1 if not found.

        Part 3:
            In the main function:
                1. Initialize the array of [ERP, score] pairs.
                2. Print the original list of [ERP, score] pairs.
                3. Call sortByScore to sort the array, then print the sorted array.
                4. Prompt the user to enter an ERP number to search for and pass it as input to
                searchByERP. Display the score if found or indicate if the ERP was not found.
*/

// Include the iostream library
#include <iostream>

// Helper function to swap two element pairs in the 2D array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to sort the 2D array in descending order based on scores using Selection Sort
void sortByScore(int arr[][2], const int size) {
    // Loop through the array
    for (int i = 0; i < size - 1; i++) {
        // Find the maximum element in the unsorted part of the array
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j][1] > arr[maxIndex][1]) {
                maxIndex = j;
            }
        }
        // Swap the maximum element with the first element of the unsorted part
        if (maxIndex != i) {
            swap(arr[i][0], arr[maxIndex][0]);
            swap(arr[i][1], arr[maxIndex][1]);
        }
    }
}

// Function to search for a specific ERP and return the associated score
int searchByERP(int arr[][2], const int size, int erp) {
    // Loop through the array to find the ERP
    for (int i = 0; i < size; i++) {
        if (arr[i][0] == erp) {
            return arr[i][1];
        }
    }
    // Return -1 if the ERP is not found
    return -1;
}

// Function to print the elements of a 2D array
void printArray(int arr[][2], const int size) {
    // Loop through the array and print each [ERP, score] pair
    for (int i = 0; i < size; i++) {
        std::cout << "ERP: " << arr[i][0] << ", Score: " << arr[i][1] << "\n";
    }
    std::cout << std::endl;
}

// Main function
int main() {


    int studentScores[][2] = {
        {101, 85},
        {102, 90},
        {103, 75},
        {104, 95}
    };

    // Calculate the size of the array
    int size = sizeof(studentScores) / sizeof(studentScores[0]);

    // Display the original list of [ERP, score] pairs
    std::cout << "Original list of [ERP, score] pairs:\n";
    printArray(studentScores, size);

    // Sort the array in descending order based on scores
    sortByScore(studentScores, size);

    // Display the sorted list of [ERP, score] pairs
    std::cout << "Sorted list of [ERP, score] pairs:\n";
    printArray(studentScores, size);

    // Prompt the user to enter an ERP number to search for
    int erp;
    std::cout << "Enter an ERP number to search for: ";
    std::cin >> erp;

    // Search for the ERP and display the associated score
    int score = searchByERP(studentScores, size, erp);
    if (score != -1) {
        std::cout << "Score for ERP " << erp << " is: " << score << std::endl;
    }
    else {
        std::cout << "ERP " << erp << " not found." << std::endl;
    }

    // Add space
    std::cout << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}
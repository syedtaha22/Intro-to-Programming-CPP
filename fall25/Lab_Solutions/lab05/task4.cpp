/*************************************************************************************
 * @file    task4.cpp
 *
 * @details Given an array of integers and a target value, return how many times the
 *          target appears
 *************************************************************************************/

#include <iostream>

int main() {
    constexpr int SIZE = 10;
    int arr[SIZE];
    int target;

    // Input array elements
    std::cout << "Enter " << SIZE << " integers:\n";

    for (int i = 0; i < SIZE; ++i) std::cin >> arr[i];

    // Input target value
    std::cout << "Enter the target value: ";
    std::cin >> target;

    // Count occurrences of target in the array
    int count = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == target) count++;
    }

    // Output the result
    std::cout << "The target value " << target << " appears " << count << " times in the array.\n";

    return 0; // Indicate successful completion
}
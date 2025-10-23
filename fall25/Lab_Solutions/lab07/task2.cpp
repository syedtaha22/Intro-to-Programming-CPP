/*************************************************************************************
 * @file    task2.cpp
 *
 * @details Write a program that performs left or right rotations on a fixed-size
 *          array of 10 integers. The program should take the following inputs:
 *            - 10 integer values to fill the array.
 *            - A character input ('L' for left or 'R' for right) representing
 *              the rotation direction.
 *            - An integer N representing how many positions to rotate the array.
 *          The rotation must be done in place, i.e. without using any additional
 *          arrays. Use a switch statement to handle both rotation directions.
 *
 *          Each left rotation moves the first element to the end, shifting all other
 *          elements one position to the left.
 *
 *          Each right rotation moves the last element to the beginning, shifting all
 *          other elements one position to the right.
 *
 ************************************************************************************/

#include <iostream>

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    // Input array elements
    std::cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; ++i) std::cin >> arr[i];

    // Input rotation direction
    char direction;
    std::cout << "Enter rotation direction (L/R): ";
    std::cin >> direction;

    // Input number of rotations
    int N;
    std::cout << "Enter number of rotations: ";
    std::cin >> N;
    N = N % SIZE; // Normalize N to avoid unnecessary full rotations

    switch (direction) {
    case 'L': // Left rotation
    case 'l':
        for (int r = 0; r < N; ++r) {
            int first = arr[0];
            for (int i = 0; i < SIZE - 1; ++i) arr[i] = arr[i + 1];
            arr[SIZE - 1] = first;
        }
        std::cout << "Array after " << N << " left rotations:\n";
        break;

    case 'R': // Right rotation
    case 'r':
        for (int r = 0; r < N; ++r) {
            int last = arr[SIZE - 1];
            for (int i = SIZE - 1; i > 0; --i) arr[i] = arr[i - 1];
            arr[0] = last;
        }
        std::cout << "Array after " << N << " right rotations:\n";
        break;
    default:
        std::cout << "Invalid direction. Please enter 'L' or 'R'.\n";
        return 1;
    }

    // Output the rotated array
    for (int i = 0; i < SIZE; ++i) std::cout << arr[i] << ' ';
    std::cout << '\n';

    return 0;
}

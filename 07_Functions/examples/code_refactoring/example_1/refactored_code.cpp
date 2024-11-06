/*********************************************************************************
 *
 * Example 1: Refactored code
 *      Program to calculate the area and perimeter of rectangles using functions.
 *
 *********************************************************************************/


#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

// Function to print area and perimeter
void printRectangleProperties(int length, int width) {
    int area = calculateArea(length, width);
    int perimeter = calculatePerimeter(length, width);
    cout << "Rectangle (" << length << "x" << width << "): Area = " << area
        << ", Perimeter = " << perimeter << endl;
}

int main() {
    int length1 = 5, width1 = 3;
    int length2 = 7, width2 = 4;
    int length3 = 6, width3 = 2;
    int length4 = 9, width4 = 5;
    int length5 = 8, width5 = 6;

    // Using functions to handle calculations and printing
    printRectangleProperties(length1, width1);
    printRectangleProperties(length2, width2);
    printRectangleProperties(length3, width3);
    printRectangleProperties(length4, width4);
    printRectangleProperties(length5, width5);

    return 0;
}

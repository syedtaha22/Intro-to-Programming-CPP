/*****************************************************************
 *
 * Example 1: Bad Code
 *      Program to calculate the area and perimeter of rectangles.
 *
 *****************************************************************/

#include <iostream>
using namespace std;

int main() {
    int length1 = 5, width1 = 3;
    int length2 = 7, width2 = 4;
    int length3 = 6, width3 = 2;
    int length4 = 9, width4 = 5;
    int length5 = 8, width5 = 6;


    // Calculating area and perimeter for rectangle 1
    int area1 = length1 * width1;
    int perimeter1 = 2 * (length1 + width1);
    cout << "Rectangle 1: Area = " << area1 << ", Perimeter = " << perimeter1 << endl;

    // Calculating area and perimeter for rectangle 2
    int area2 = length2 * width2;
    int perimeter2 = 2 * (length2 + width2);
    cout << "Rectangle 2: Area = " << area2 << ", Perimeter = " << perimeter2 << endl;

    // Calculating area and perimeter for rectangle 3
    int area3 = length3 * width3;
    int perimeter3 = 2 * (length3 + width3);
    cout << "Rectangle 3: Area = " << area3 << ", Perimeter = " << perimeter3 << endl;

    // Calculating area and perimeter for rectangle 4
    int area4 = length4 * width4;
    int perimeter4 = 2 * (length4 + width4);
    cout << "Rectangle 4: Area = " << area4 << ", Perimeter = " << perimeter4 << endl;

    // Calculating area and perimeter for rectangle 5
    int area5 = length5 * width5;
    int perimeter5 = 2 * (length5 + width5);
    cout << "Rectangle 5: Area = " << area5 << ", Perimeter = " << perimeter5 << endl;

    return 0;
}

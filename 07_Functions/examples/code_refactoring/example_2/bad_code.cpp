/****************************************************************************************
 *
 * Example 2: Bad Code
 *      Program to calculate the average of exam scores and assign a grade to a student.
 *
 ****************************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string student1_name = "Alice";
    int student1_exam1 = 78;
    int student1_exam2 = 84;
    int student1_exam3 = 90;
    int student1_exam4 = 85;
    int student1_exam5 = 95;
    double student1_average = 0;
    student1_average += student1_exam1;
    student1_average += student1_exam2;
    student1_average += student1_exam3;
    student1_average += student1_exam4;
    student1_average += student1_exam5;
    student1_average /= 5;
    string student1_grade;
    if (student1_average >= 90) student1_grade = "A";
    else if (student1_average >= 80) student1_grade = "B";
    else if (student1_average >= 70) student1_grade = "C";
    else student1_grade = "F";
    cout << "Student: " << student1_name << ", Average: " << student1_average << ", Grade: " << student1_grade << endl;

    string student2_name = "Bob";
    int student2_exam1 = 88;
    int student2_exam2 = 76;
    int student2_exam3 = 82;
    int student2_exam4 = 80;
    int student2_exam5 = 88;
    double student2_average = 0;
    student2_average += student2_exam1;
    student2_average += student2_exam2;
    student2_average += student2_exam3;
    student2_average += student2_exam4;
    student2_average += student2_exam5;
    student2_average /= 5;
    string student2_grade;
    if (student2_average >= 90) student2_grade = "A";
    else if (student2_average >= 80) student2_grade = "B";
    else if (student2_average >= 70) student2_grade = "C";
    else student2_grade = "F";
    cout << "Student: " << student2_name << ", Average: " << student2_average << ", Grade: " << student2_grade << endl;

    string student3_name = "Carol";
    int student3_exam1 = 92;
    int student3_exam2 = 89;
    int student3_exam3 = 94;
    int student3_exam4 = 88;
    int student3_exam5 = 90;
    double student3_average = 0;
    student3_average += student3_exam1;
    student3_average += student3_exam2;
    student3_average += student3_exam3;
    student3_average += student3_exam4;
    student3_average += student3_exam5;
    student3_average /= 5;
    string student3_grade;
    if (student3_average >= 90) student3_grade = "A";
    else if (student3_average >= 80) student3_grade = "B";
    else if (student3_average >= 70) student3_grade = "C";
    else student3_grade = "F";
    // Additional students would follow the same pattern, creating an unmanageable amount of repeated code.

    return 0;
}

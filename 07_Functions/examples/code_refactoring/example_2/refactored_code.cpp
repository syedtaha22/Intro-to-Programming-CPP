/***************************************************************************************
 *
 * Example 2: Refactored Code
 *      Program to calculate the average of exam scores and assign a grade to a student.
 *
 ***************************************************************************************/


#include <iostream>
using namespace std;

constexpr int NUM_STUDENTS = 3;
constexpr int NUM_SUBJECTS = 5;

// Function to calculate average score
double getAverage(const int scores[NUM_SUBJECTS]) {
    double total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) total += scores[i];
    return total / NUM_SUBJECTS;
}

// Function to determine grade based on average score
string calculateGrade(double average) {
    if (average >= 90) return "A";
    else if (average >= 80) return "B";
    else if (average >= 70) return "C";
    else return "F";
}

// Function to print the result for each student
void printStudentResult(const string& name, const int scores[NUM_SUBJECTS]) {
    double average = getAverage(scores);
    string grade = calculateGrade(average);
    cout << "Student: " << name << ", Average: " << average << ", Grade: " << grade << endl;
}

int main() {
    // Student names and scores
    string student_names[NUM_STUDENTS] = { "Alice", "Bob", "Carol" };
    int student_scores[NUM_STUDENTS][NUM_SUBJECTS] = {
        {78, 84, 90, 85, 95}, // Alice's scores
        {88, 76, 82, 80, 88}, // Bob's scores
        {92, 89, 94, 88, 90}  // Carol's scores
    };

    // Print results for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printStudentResult(student_names[i], student_scores[i]);
    }

    return 0;
}

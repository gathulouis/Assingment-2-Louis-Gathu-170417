#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, course;
    int score;

    // Input student detail
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    cout << "Enter the course: ";
    getline(cin, course);

    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade based on  score
    char grade;
    
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid score entered." << endl;
        return 1; // Exit the program with  error code
    }
    // Output student details and grade
    cout << "Student Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

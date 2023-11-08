#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, course;
    int score;
    // Input student details
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    cout << "Enter the course: ";
    getline(cin, course);

    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade based on the score using switch statement
    char grade;

    switch (score) {
        case 70 ... 100:
            grade = 'A';
            break;
        case 60 ... 69:
            grade = 'B';
            break;
        case 50 ... 59:
            grade = 'C';
            break;
        case 40 ... 49:
            grade = 'D';
            break;
        case 0 ... 39:
            grade = 'F';
            break;
        default:
            cout << "Invalid score entered." << endl;
            return 1; // Exit  program with an error code
    
    // Output student details and grade
    cout << "Student Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

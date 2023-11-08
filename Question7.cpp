#include <iostream>

using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine = 0.0;

    // Input the number of days late and  type of book
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (regular, children's, reference): ";
    cin >> bookType;

    // Calculate the late fee based on the type of book and days late
    if (bookType == "regular") {
        if (daysLate <= 7) {
            fine = daysLate * 0.5;
        } else {
            fine = 7 * 0.5 + (daysLate - 7) * 1.0;
        }
    } else if (bookType == "children's") {
        if (daysLate <= 7) {
            fine = daysLate * 0.25;
        } else {
            fine = 7 * 0.25 + (daysLate - 7) * 0.5;
        }
    } else if (bookType == "reference") {
        fine = daysLate * 1.0;
    } else {
        cout << "Invalid book type.  enter 'regular,' 'children's,' or 'reference'." << endl;
        return 1; // Exit with  error code
    }
    // Output the late fee
    cout << "Late Fee: $" << fine << endl;
    return 0;
}

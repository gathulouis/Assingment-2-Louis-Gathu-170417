#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    // Input customer's age
    cout << "Enter your age: ";
    cin >> age;

    // Input movie type (regular or 3D)
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movieType;

    // Calculate  ticket price based on age and movie type
    if (age < 12) {
        if (movieType == "3D") {
            ticketPrice = 7.5; // Children under 12 get a discount for 3D movies
        } else {
            ticketPrice = 5.0; // Children under 12 get a discount for regular movies
        }
    } else if (age >= 12 && age < 65) {
        if (movieType == "3D") {
            ticketPrice = 10.0; // Adults pay standard price for 3D movies
        } else {
            ticketPrice = 8.0; // Adults pay standard price for regular movies
        }
    } else {
        if (movieType == "3D") {
            ticketPrice = 8.0; // Seniors get  discount for 3D movies
        } else {
            ticketPrice = 6.0; // Seniors get  discount for regular movies
        }
    }

    // Output  ticket price
    cout << "Ticket Price: $" << ticketPrice << endl;

    return 0;
}

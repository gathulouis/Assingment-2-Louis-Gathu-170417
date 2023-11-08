#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int choice;
    
    while (true) {
        // Display the menu
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of  circle" << endl;
        cout << "2. Calculate the area of  rectangle" << endl;
        cout << "3. Calculate the area of triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Calculate the area of  circle
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Invalid radius. Please enter a non-negative value." << endl;
                } else {
                    double area = M_PI * pow(radius, 2); // Area of a circle
                    cout << "The area of the circle is: " << area << endl;
                }
                break;

            case 2: // Calculate the area of  rectangle
                double length, width;
                cout << "Enter the length of  rectangle: ";
                cin >> length;
                cout << "Enter the width of  rectangle: ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Invalid dimensions. Please enter non-negative values." << endl;
                } else {
                    double area = length * width; // Area of a rectangle
                    cout << "The area of  rectangle is: " << area << endl;
                }
                break;

            case 3: // Calculate the area of a triangle
                double base, height;
                cout << "Enter the base of triangle: ";
                cin >> base;
                cout << "Enter the height of  triangle: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Invalid dimensions. enter non-negative values." << endl;
                } else {
                    double area = 0.5 * base * height; // Area of  triangle
                    cout << "The area of  triangle is: " << area << endl;
                }
                break;

            case 4: // Quit  program
                cout << "Exiting the program. " << endl;
                return 0;

            default:
                cout << "Invalid choice.select valid option (1-4)." << endl;
        }
    }
    return 0;
}

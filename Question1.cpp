#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    // Input customer details
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your bank balance: KSH";
    cin >> bankBalance;
    
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;

    cout << "Enter the number of months as a customer: ";
    cin >> monthsAsCustomer;

    // Check loan eligibility based on conditions
    bool eligible = (age > 22) &&
   (bankBalance > 50000.0) &&
   (crbStatus == "good") &&
   (monthsAsCustomer > 6);
    // Output the result
    if (eligible) {
        cout << "Congratulations, " << name << "! You are eligible for a loan." << endl;
    } else {
        cout << "Sorry, " << name << ". You are not eligible for a loan." << endl;
    }

    return 0;
}

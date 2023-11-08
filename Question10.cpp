#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.0;  // Example account balance
    double withdrawalAmount;
    double dailyWithdrawalLimit = 500.0;  // Example daily withdrawal limit

    // Input the withdrawal amount
    cout << "Enter the withdrawal amount: KSH";
    cin >> withdrawalAmount;

    // Verify if  withdrawal is within daily limits
    if (withdrawalAmount > dailyWithdrawalLimit) {
        cout << "Withdrawal amount exceeds the daily limit. Please try a lower amount." << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is KSH" << accountBalance << endl;
    } else {
        accountBalance -= withdrawalAmount;  
        cout << "Withdrawal of KSH" << withdrawalAmount << " successful." << endl;
        cout << "Updated account balance: KSH" << accountBalance << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    double totalCost;

    // Input the purchase amount
    cout << "Enter the purchase amount: KSH";
    cin >> purchaseAmount;

    // Calculate the total cost with discounts
    if (purchaseAmount < 50) {
        totalCost = purchaseAmount; // No discount for purchases less than KSH50
    } else if (purchaseAmount < 100) {
        totalCost = purchaseAmount * 0.9; // 10% discount for purchase between KSH50 and KSH99.99
    } else if (purchaseAmount < 200) {
        totalCost = purchaseAmount * 0.8; // 20% discount for purchase between KSH100 and KSH199.99
    } else {
        totalCost = purchaseAmount * 0.7; // 30% discount for purchase of KSH200 or more
    }

    // Output  total cost
    cout << "Total Cost: KSH" << totalCost << endl;

    return 0;
}

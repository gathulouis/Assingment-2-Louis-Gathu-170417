#include <iostream>

using namespace std;

int main() {
    int timer = 0;

    while (true) {
        switch (timer % 12) {
            case 0:
            case 1:
            case 2:
                cout << "Traffic Light: RED" << endl;
                break;
            case 3:
            case 4:
            case 5:
                cout << "Traffic Light: GREEN" << endl;
                break;
            case 6:
            case 7:
                cout << "Traffic Light: YELLOW" << endl;
                break;
            case 8:
            case 9:
            case 10:
            case 11:
                cout << "Traffic Light: RED" << endl;
                break;
        }
    }

    return 0;
}

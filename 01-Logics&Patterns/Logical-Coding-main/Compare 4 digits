//C++ program that reads a four- digit and checks if the first two digits of the number is 19 and the last two digits of the number is between 30 and 60
#include <iostream>
using namespace std;

int main() {
    int data;
    cout << "Enter a 4-digit number: ";
    cin >> data;

    if (data >= 1000 && data <= 9999) {
        int firstTwoDigits = data / 100;
        int lastTwoDigits = data % 100;

        if (firstTwoDigits == 19 && lastTwoDigits >= 30 && lastTwoDigits <= 60) {
            cout << "true";
        } else {
            cout << "false";
        }
    } else {
        cout << "false";
    }

    return 0;
}

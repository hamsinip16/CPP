//Program to convert Given year to the century it is in

#include <iostream>
using namespace std;

int yearToCentury(int year) {
    int century = (year - 1) / 100 + 1;
    return century;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    int century = yearToCentury(year);
    cout << year << " is in the " << century << " century" << endl;

    return 0;
}

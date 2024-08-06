// C++ program that reads a 3 digit number and checks if each digit is greater than 4 or the first digit is equal to 6.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int data;
    cout << "Enter a 3-digit number";
    std::cin >> data;
    if (data >= 100 && data <= 999) {
        int unitDigit = data % 10;
        int tensDigit= (data - unitDigit)/10;
        int hundredsDigit= (data - tensDigit - unitDigit)/100;
        
        if((unitDigit > 4 && tensDigit > 4 && hundredsDigit > 4) || (hundredsDigit == 6)){
                cout << "true";
            }
    }    
    else{
        cout << "false";
    }
    return 0;
}

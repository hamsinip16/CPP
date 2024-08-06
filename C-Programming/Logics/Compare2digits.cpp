// C++ program to print true if the number is greater than 25 and the first digit is greater than the 2nd digit.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int data;
    cout << "Enter a 2-digit number";
    std::cin >> data;
    if(data >= 10 && data <=99){
        int unitDigit = data % 10;
        int tensDigit= (data - unitDigit)/10;
        
        if(data > 25){
            if(tensDigit > unitDigit){
                cout << "true";
            }
            else{
                cout << "false";
            }
        }
    }
    else{
        cout << "false";
    }
    return 0;
}

//To check if the given string is a palindrome or not

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool solution(string inputString) {
    string reversedStr = inputString;
    reverse(reversedStr.begin(), reversedStr.end());
    return inputString == reversedStr;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool isPalindromeFlag = solution(input);

    cout << "The string is a palindrome: " << std::boolalpha << isPalindromeFlag << endl;

    return 0;
}

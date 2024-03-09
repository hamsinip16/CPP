/* FUNCTION OVERLOADING - to define multiple functions with the same name but with different parameters or parameter types. 
This enables you to use the same function name for different behaviors based on the types and number of arguments passed to the function.
*/

#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of 3 and 5 is: " << add(3, 5) << endl;          // Calls the first add() function
    cout << "Sum of 3, 5, and 7 is: " << add(3, 5, 7) << endl;  // Calls the second add() function
    cout << "Sum of 3.5 and 2.5 is: " << add(3.5, 2.5) << endl; // Calls the third add() function

    return 0;
}

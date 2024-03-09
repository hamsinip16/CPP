/*OPERATOR OVERLOADING - Operator overloading in C++ allows you to redefine the behavior of operators when they are used with user-defined types (classes and structs). 
This enables you to extend the functionality of operators beyond their predefined meanings for built-in types.
Common Operators to Overload:
Arithmetic operators: +, -, *, /, %
Comparison operators: ==, !=, <, >, <=, >=
Assignment operators: =, +=, -=, *=, /=
Increment/decrement operators: ++, --
Stream insertion/extraction operators: <<, >>
Function call operator: ()
Guidelines:
1. Overload operators only for natural or intuitive meanings in your class.
2. Maintain consistency with the behavior of built-in types to avoid confusion.
3. Avoid overloading operators to perform non-intuitive or non-standard operations.
4. Overloaded operators must be member functions or friend functions.
5. Some operators, like assignment (=) and function call (()), can only be overloaded as member functions.
6. Some operators, like stream insertion (<<) and stream extraction (>>), must be overloaded as friend functions.
7. You cannot create new operators or change the precedence and associativity of operators.
8. Most operators keep their original precedence and associativity.
*/

#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }

    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);
    Complex sum = c1 + c2;
    sum.display();
    return 0;
}

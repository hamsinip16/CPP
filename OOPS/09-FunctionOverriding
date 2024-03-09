/*FUNCTION OVERRIDING - when a derived class provides a specific implementation for a function that is already defined in its base class.
When derived class and base class both contain a function having the same name, same number of arguments as well as the same return type. ​
1. It allows a derived class to replace or augment the implementation of a function inherited from its base class.
2. It must have the same name, return type, and parameter list as the virtual function in the base class.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    void makeSound() {
        cout << "Some generic sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overridden function
    void makeSound() {
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    // Overridden function
    void makeSound()  {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal a;
    Cat c;
    Dog d;
    a.makeSound();
    d.makeSound();
    c.makeSound();
    return 0;
}

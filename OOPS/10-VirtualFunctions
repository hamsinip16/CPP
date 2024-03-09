/* VIRTUAL FUNCTIONS - The ability to call derived class function using base class pointer or reference.
1. When a function is called using a pointer or reference to the base class, the virtual function is called and the derived class’s function gets invoked.​
2. Virtual functions are functions declared in a base class using the virtual keyword and not in the derived class.
3. They allow dynamic dispatch (function to be called is determined at runtime) based on the actual type of the object rather than the type of the pointer or reference used to access the object.
4. It enable polymorphism, where a derived class can provide its own implementation of a function defined in the base class.
5. Derived classes can choose to override a virtual function by providing their own implementation of the function with the same signature.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
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
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Calls Dog's makeSound()
    animal2->makeSound(); // Calls Cat's makeSound()

    delete animal1;
    delete animal2;

    return 0;
}

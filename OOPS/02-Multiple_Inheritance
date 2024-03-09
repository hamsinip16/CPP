/*Multiple Inheritance : A derived class with multiple base classes.
1. It allows a class to combine features from multiple sources.
2. It can lead to issues like the diamond problem, where ambiguity arises due to multiple inheritance paths to a common ancestor.
3. It requires careful design to avoid ambiguity and maintain code clarity.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class 1
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) : brand(brand) {}

    void showBrand(){
        cout << "Brand: " << brand << endl;
    }
};

// Base class 2
class Wheel {
protected:
    int numWheels;

public:
    Wheel(int numWheels) : numWheels(numWheels) {}

    void showWheels(){
        cout << "Number of wheels: " << numWheels << endl;
    }
};

// Derived class
class Car : public Vehicle, public Wheel {
public:
    Car(string brand, int numWheels) : Vehicle(brand), Wheel(numWheels) {}

    void showDetails(){
        showBrand(); // Accessing base class member function
        showWheels(); // Accessing base class member function
    }
};

int main() {
    Car myCar("Toyota", 4);
    myCar.showDetails();

    return 0;
}

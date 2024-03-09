/*SINGLE INHERITANCE - A derived class which has only 1 base class.
1. It forms a simple parent-child relationship between classes.
2. Single inheritance is straightforward and easy to understand.
3. It promotes code reusability by allowing derived classes to inherit properties and behavior from a single base class.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle( string brand) : brand(brand) {}

    void showBrand()  {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numWheels;

public:
    Car( string brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

    void showDetails()  {
        showBrand(); // Accessing base class member function
        cout << "Number of wheels: " << numWheels << endl; // Fixed variable name
    }
};

int main() {
    Car myCar("Toyota", 4);
    myCar.showDetails(); // Fixed function name

    return 0;
}

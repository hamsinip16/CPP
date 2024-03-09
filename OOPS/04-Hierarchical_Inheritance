/*HIERARCHICAL INHERITANCE : Multiple derived inherit from a single classes  base class.
1. It allows for specialization, where each derived class can add its own features while sharing common characteristics from the base class.
2. It is useful when multiple classes share common functionality but have their own unique characteristics.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) : brand(brand) {}

    void showBrand() const {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
private:
    int numWheels;

public:
    Car(string brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

    void showDetails() const {
        showBrand(); // Accessing base class member function
        cout << "Number of wheels: " << numWheels << endl;
    }
};

// Derived class 2 (Hierarchical Inheritance)
class Bike : public Vehicle {
private:
    int numSeats;

public:
    Bike(string brand, int numSeats) : Vehicle(brand), numSeats(numSeats) {}

    void showBikeDetails() const {
        showBrand(); // Accessing base class member function
        cout << "Number of seats: " << numSeats << endl;
    }
};

int main() {
    Car myCar("Toyota", 4);
    myCar.showDetails();

    cout << endl;

    Bike myBike("Honda", 2);
    myBike.showBikeDetails();

    return 0;
}

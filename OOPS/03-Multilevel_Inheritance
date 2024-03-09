/*Multilevel Inheritance : A derived class inherits from a base class, and then another class inherits from this derived class, forming a chain of inheritance.
1. It creates a hierarchy of classes where each derived class inherits properties and behavior from its ancestor classes.
2. It is often used to represent real-world relationships where entities have hierarchical structures.
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

    void showBrand()  {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
private:
    int numWheels;

public:
    Car(string brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

    void showDetails()  {
        showBrand(); // Accessing base class member function
        cout << "Number of wheels: " << numWheels << endl;
    }
};

// Derived class 2 (Multilevel Inheritance)
class RacingCar : public Car {
private:
    int maxSpeed;

public:
    RacingCar(string brand, int numWheels, int maxSpeed) : Car(brand, numWheels), maxSpeed(maxSpeed) {}

    void showRacingInfo() {
        showDetails(); // Accessing base class member function
        cout << "Max Speed: " << maxSpeed << " mph" << endl;
    }
};

int main() {
    RacingCar myRacingCar("Ferrari", 4, 200);
    myRacingCar.showRacingInfo();

    return 0;
}

/*Multipath inheritance : occurs when a class inherits from multiple base classes, and those base classes have a common ancestor class.
1. It creates multiple paths from the derived class to the common ancestor class.
2. It can lead to the diamond problem if not handled properly, as there can be ambiguity in accessing members of the common ancestor class through different paths.
3. Virtual inheritance is often used to resolve the diamond problem by ensuring that there's only one instance of the common ancestor class shared among the derived classes.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class (common base class)
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) : brand(brand) {}

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// First intermediate class
class Engine : virtual public Vehicle {
protected:
    string engineType;

public:
    Engine(string brand, string engineType) : Vehicle(brand), engineType(engineType) {}

    void showEngineType() {
        cout << "Engine Type: " << engineType << endl;
    }
};

// Second intermediate class
class Wheels : virtual public Vehicle {
protected:
    int numWheels;

public:
    Wheels(string brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

    void showNumWheels(){
        cout << "Number of wheels: " << numWheels << endl;
    }
};

// Derived class
class Car : public Engine, public Wheels {
private:
    int maxSpeed;

public:
    Car(string brand, int numWheels,string engineType, int maxSpeed)
        : Vehicle(brand), Engine(brand, engineType), Wheels(brand, numWheels), maxSpeed(maxSpeed) {}

    void showCarDetails(){
        showBrand(); // Accessing base class member function from Vehicle
        showEngineType(); // Accessing base class member function from Engine
        showNumWheels(); // Accessing base class member function from Wheels
        cout << "Max Speed: " << maxSpeed << " mph" << endl;
    }
};

int main() {
    Car myCar("Toyota", 4, "V6", 200);
    myCar.showCarDetails();

    return 0;
}


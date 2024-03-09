/*HYBRID INHERITANCE : A combination of mulitple and hierarchical inheritance
1. Hybrid inheritance is a combination of multiple types of inheritance, such as: single, multiple, or multilevel inheritance, within the same inheritance hierarchy.
2. It uses virtual inheritance to avoid issues like the diamond problem.
3. Hybrid inheritance allows for more complex inheritance structures, where different inheritance types can be used for different parts of the hierarchy based on design requirements.
4. The goal of hybrid inheritance is to leverage the strengths of different inheritance types to achieve the desired class relationships and behavior.
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

    void showBrand(){
        cout << "Brand: " << brand << endl;
    }
};

// Intermediate class
class Engine {
protected:
    string engineType;

public:
    Engine(string engineType) : engineType(engineType) {}

    void showEngineType(){
        cout << "Engine Type: " << engineType << endl;
    }
};

// Derived class
class Car : public virtual Vehicle, public Engine {
private:
    int numWheels;

public:
    Car(string brand, int numWheels, string engineType) : Vehicle(brand), Engine(engineType), numWheels(numWheels) {}

    void showCarDetails(){
        showBrand(); // Accessing base class member function from Vehicle
        showEngineType(); // Accessing base class member function from Engine
        cout << "Number of wheels: " << numWheels << endl;
    }
};

int main() {
    Car myCar("Toyota", 4, "V6");
    myCar.showCarDetails();

    return 0;
}

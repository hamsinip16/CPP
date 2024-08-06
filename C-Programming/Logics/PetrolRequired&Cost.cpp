//To calculate the petrol required to complete a journey as well as the cost of petrol to complete the journey

#include <iostream>
using namespace std;

int main() {
    float mileage, petrolPrice, distanceToTravel;
    cout << "Enter mileage of the vehical in km per litre\n";
    cin >> mileage;

    cout << "Enter petrol price per litre\n";
    cin >> petrolPrice;
    
    cout << "Enter the total distance of the journey\n";
    cin >> distanceToTravel;

    //To calculate the total amount of petrol required
    float totalPetrolRequired = distanceToTravel / mileage;
    cout << "Total petrol required: " << totalPetrolRequired << " liters" << endl;
    
    // To calculate the total petrol cost
    float totalPetrolCost = totalPetrolRequired * petrolPrice;
    cout << "Total petrol cost: " << totalPetrolCost << " rupees" << endl;

    return 0;
}

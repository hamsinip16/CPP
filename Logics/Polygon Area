/* to calculate the area of a polygon of size n */

#include <iostream>
using namespace std;


int areaOfPolygon(int n) {
    if (n == 1) {
        return 1;
    }
    
    return (n - 1) * 4 + areaOfPolygon(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int area = areaOfPolygon(n);
    cout << "The area of the " << n << " - polygon is: " << area << endl;

    return 0;
}

// Program to multiply 2 numbers without using arithmetic operators

#include <iostream>
using namespace std;
int multiplication(int a, int b) {
   int result = 0;
      if(a == 0 || b == 0){
       result = 0;
   }
   
   while (b > 0) {  
      if (b & 1) {  //if odd number
         result += a;   
         }
      a = a << 1;  // multiplies by 2 
      b = b >> 1;  // divides by 2 
   }
   return result;
}
int main() {
   cout << "\nA: "<< multiplication(75, 9) << endl;
   cout << "\nB: "<< multiplication(90, 0) << endl;
   cout << "\nC: "<< multiplication(83, 66) << endl;
   return 0;
}

// using static member function and non static member function in a class

#include <iostream>
#include<chrono>
#include<thread>
#include<unistd.h>
using namespace std;

unsigned int evenSum;
unsigned int oddSum;

//non static memeber function
class Base1{
    public:
    void findEvenSum(unsigned int start, unsigned int end){
        for(unsigned int i = start; i < end; i++){
            if((i & 1) == 1){
                evenSum += i;
            }
        }
    }
};

//static member function
class Base2{    
    public:
    static void findOddSum(unsigned int start, unsigned int end){
        for(unsigned int i = start; i < end; i++){
            if((i & 1) == 0){
                oddSum += i;
            }
        }
    }
};

int main(){
    cout << "Hi Hamsini" << endl;
    unsigned int begin = 0, end = 50000;
    auto startTime = chrono::high_resolution_clock::now();

    Base1 b1;
    
    thread t1(&Base1::findEvenSum, &b1, begin, end);
    //for declared static functions, object of the class is not required.
    thread t2(&Base2::findOddSum, begin, end);
    
    t1.join();
    t2.join();
    
    cout << "even sum = " << evenSum << endl;
    cout << "odd sum = " << oddSum << endl;
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime);
    cout << "duration: " << duration.count() << endl;
    
    return 0;
}

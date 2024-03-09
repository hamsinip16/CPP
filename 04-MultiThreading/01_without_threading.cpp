//Threading concepts without the use of threading

#include <iostream>
#include<chrono>
#include<unistd.h>
using namespace std;

unsigned int evenSum;
unsigned int oddSum;

void findEvenSum(unsigned int start, unsigned int end){
    for(unsigned int i = start; i < end; i++){
        if((i & 1) == 1){
            evenSum += i;
        }
    }
}

void findOddSum(unsigned int start, unsigned int end){
    for(unsigned int i = start; i < end; i++){
        if((i & 1) == 0){
            oddSum += i;
        }
    }
}

int main(){
    cout << "Hi Hamsini" << endl;
    unsigned int begin = 0, end = 50000;
    auto startTime = chrono::high_resolution_clock::now();
    findEvenSum(begin, end);
    findOddSum(begin, end);
    cout << "even sum = " << evenSum << endl;
    cout << "odd sum = " << oddSum << endl;
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
    cout << "duration: " << duration.count() << endl;
}

/* 
Hi Hamsini
even sum = 6250000
odd sum = 6247500
duration: 36
*/

// threading using lambda functions >> 2 ways of using lambda : by using lambda object as function call and by replacing lambda function in thread().
Lambda - defining an anonymous function object that is used in place of a function pointer.
allows you to define a function on the fly and pass it as a parameter to another function or use it directly

SYNTAX- 
[capture_list](parameter_list)->return_type {
    function_body
}

*/

#include <iostream>
#include<chrono>
#include<thread>
#include<unistd.h>
using namespace std;

unsigned int evenSum;
unsigned int oddSum;

// void findEvenSum(unsigned int start, unsigned int end){
auto lambdaSum1 = [](unsigned int start, unsigned int end){
    for(unsigned int i = start; i < end; i++){
        if((i & 1) == 1){
            evenSum += i;
        }
    }
};

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
    // findEvenSum(begin, end);
    // findOddSum(begin, end);
    
    // thread t1(findEvenSum, begin, end);
    thread t1(lambdaSum1, begin, end);
    
    // thread t2(findOddSum, begin, end);
    thread t2([](unsigned int start, unsigned int end){
        for(unsigned int i = start; i < end; i++){
            if((i & 1) == 0){
                oddSum += i;
            }
        }   
    }, begin, end);
    
    
    t1.join();
    t2.join();
    
    cout << "even sum = " << evenSum << endl;
    cout << "odd sum = " << oddSum << endl;
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime);
    cout << "duration: " << duration.count() << endl;
    
    return 0;
}

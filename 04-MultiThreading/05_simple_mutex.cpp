/* Either t1 or t2 thread can get the mutex lock on first come basis. 
Once the critical region is locked, the next thread gets blocked until the critical region gets unlocked.
*/

#include <iostream>
#include <mutex>
#include<thread>

using namespace std;

int myAmount = 0;
mutex m;

void addMoney(){
    m.lock();
    ++myAmount;   // critical region - code which is being used by 2 threads
    m.unlock();
}

int main(){
    thread t1(addMoney);
    thread t2(addMoney);
    
    t1.join();
    t2.join();
    cout << myAmount;
    return 0;
}

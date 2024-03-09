//Timed mutex try_lock_for() is blocked till timeout time or the lock is acquired and returns true if success else false is returned.

#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

using namespace std;

int myAmount = 0;
timed_mutex m;

void increment(int i){
    if(m.try_lock_for(chrono::seconds(1))){
        ++myAmount;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "thread - " << i << " entered." << endl;
        m.unlock();
    }
    else{
        cout << "thread - " << i << " couldn't enter." << endl;
    }
}

int main(){
    thread t1(increment, 1);
    thread t2(increment, 2);
    
    t1.join();
    t2.join();
    cout << myAmount;
    return 0;
}

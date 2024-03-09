/*Singleton design pattern: A singleton pattern is a design pattern that ensures that only one instance of a class can exist in the entire program. 
 If you try to create another instance of the class, it will return the same instance that was created earlier.
*/
//The Singleton pattern ensures that a class has only ONE INSTANCE and provides a GLOBAL POINT OF ACCESS to it, optimizing resource usage and consistency.

#include<iostream>
using namespace std;

class Singleton{
    private:
    static Singleton* instance;
    
    public:
    static Singleton* getInstance(){
        if(!instance){
            instance = new Singleton();
        }
        return instance;
    }
    void print(){
        cout << "Singleton created" << endl;
    }
};

Singleton* Singleton:: instance = nullptr;

int main(){
    Singleton* s = Singleton::getInstance();
    s->print();
    Singleton* s2 = Singleton::getInstance();
    s2->print();

    return 0;
}

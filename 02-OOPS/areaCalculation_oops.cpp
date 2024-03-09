//C++ code using all OOPs concepts

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;

class Shape{                        //abstraction
    public:
    virtual double area() const = 0; //pure VF   -- abstract class
    virtual ~Shape(){}              //virtual destructor
};

class Circle : public Shape{        //inheritance
    private:                        //access specifiers - encapsulation
    double radius;
    
    public: 
    Circle(double r) : radius(r){}   //constructor
    double area() const override{       
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape{
    private:
    double width, height;
    
    public: 
    Rectangle(double w, double h) : width(w), height(h){}
    double area() const override{
        return width * height;
    }
};

int main(){
    vector<unique_ptr<Shape>>shapes;                            //smart pointers, stl-vectors
    shapes.push_back(unique_ptr<Circle>(new Circle(5.0)));
    shapes.push_back(unique_ptr<Rectangle>(new Rectangle(5.0, 3.0)));
    
    for(const auto& num : shapes){
        cout << "Area = " << num ->area() << endl;
    }
    
    
    return 0;
}

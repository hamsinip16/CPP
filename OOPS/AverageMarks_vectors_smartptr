/*WAP c++ program to calculate the total marks of each student of a class in Physics, Chemistry, and Mathematics and the average marks of the class. 
The number of students in the class is entered by the user. Create a class named Marks with data members for roll number, name, and marks. 
Create three other classes inheriting the Marks class, namely Physics, Chemistry, and Mathematics, which are used to define marks in individual subjects of each student. 
The roll number of each student will be generated automatically.*/
//USING SMART POINTERS AND CONTAINERS

#include <iostream>
#include <vector>
#include <string>
#include <memory> // for smart pointers
#include <cstdlib> // for random value generation

using namespace std;

class Marks {
protected:
    static int nextRollNumber;
    int rollNumber;
    string name;
    double physicsMarks;
    double chemistryMarks;
    double mathematicsMarks;

public:
    Marks(const std::string& studentName)
        : rollNumber(++nextRollNumber), name(studentName), physicsMarks(0), chemistryMarks(0), mathematicsMarks(0) {}

    int getRollNumber() const {
        return rollNumber;
    }

    string getName() const {
        return name;
    }

    void setPhysicsMarks(double marks) {
        physicsMarks = marks;
    }

    void setChemistryMarks(double marks) {
        chemistryMarks = marks;
    }

    void setMathematicsMarks(double marks) {
        mathematicsMarks = marks;
    }

    double getPhysicsMarks() const {
        return physicsMarks;
    }

    double getChemistryMarks() const {
        return chemistryMarks;
    }

    double getMathematicsMarks() const {
        return mathematicsMarks;
    }
};

int Marks::nextRollNumber = 0;

class Physics : public Marks {
public:
    Physics(const string& studentName) : Marks(studentName) {
        setPhysicsMarks(rand() % 101); // Generates a random value between 0 and 100 
    }
};

class Chemistry : public Marks {
public:
    Chemistry(const string& studentName) : Marks(studentName) {
        setChemistryMarks(rand() % 101); 
    }
};

class Mathematics : public Marks {
public:
    Mathematics(const string& studentName) : Marks(studentName) {
        setMathematicsMarks(rand() % 101); 
    }
};

int main() {
    srand(time(0)); // seed for random number generation
//By using the current time as the initial value, rand() generats unpredictable 
sequence of random numbers with respect to the changing time continuously.  
    
    int numStudents;
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    vector<unique_ptr<Marks>> students;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> name;

         //unique_ptr is used for C++ before c++11
        students.push_back(unique_ptr<Physics>(new Physics(name)));      
        students.push_back(unique_ptr<Chemistry>(new Chemistry(name)));
        students.push_back(unique_ptr<Mathematics>(new Mathematics(name)));

        //make_unique function template creates a unique_ptr with dynamic memory allocation in c++11
        // students.push_back(std::make_unique<Physics>(name));

    }

    double totalPhysicsMarks = 0, totalChemistryMarks = 0, totalMathematicsMarks = 0;

    for (const auto& student : students) {
        totalPhysicsMarks += student->getPhysicsMarks();
        totalChemistryMarks += student->getChemistryMarks();
        totalMathematicsMarks += student->getMathematicsMarks();
    }

    double averagePhysicsMarks = totalPhysicsMarks / numStudents;
    double averageChemistryMarks = totalChemistryMarks / numStudents;
    double averageMathematicsMarks = totalMathematicsMarks / numStudents;

    cout << "Average Physics Marks: " << averagePhysicsMarks << endl;
    cout << "Average Chemistry Marks: " << averageChemistryMarks << endl;
    cout << "Average Mathematics Marks: " << averageMathematicsMarks << endl;

    return 0;
}

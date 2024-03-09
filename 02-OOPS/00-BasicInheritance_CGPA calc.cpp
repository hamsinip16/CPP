/* Read Student Information to calculate percentage and print student details using INHERITANCE*/ 

#include<iostream> 
using namespace std; 

class Student { 
public: 
   string name; 
   int regNo; 
   void read(); 
}; 

void Student:: read() { 
      cout << "Enter Name :"; 
      cin >> name; 
      cout << "Enter Registration Number :"; 
      cin >> regNo; 
   } 

class gpa : public Student { 
       float total, perc; 
public: 
       void percentage(); 
       void print(); 
}; 

void gpa :: percentage() { 
      cout << "Enter Total Marks for 500 :"; 
      cin >> total; 
      perc = (total / 500)*100; 
} 

void gpa :: print() { 
  cout << "Name :" << name << endl; 
  cout << "Registration Number :" << regNo << endl; 
  cout << "Total Marks:" << total << endl; 
  cout << "Percentage :" << perc << endl; 
  if(perc < 20){ 
      cout << "gpa : D" << endl; 
  } 
  else if(perc >21 && perc < 50){ 
      cout << "gpa : C" << endl; 
  } 
  else if (perc > 51 && perc < 80){ 
      cout << "gpa : B" << endl; 
  } 
  else 
      cout << "gpa : A" << endl; 
} 

int main() { 
    int i, n; 
    gpa s[10]; 
    cout << "Enter the number of students:"; 
    cin>>n; 
    for (i = 0; i < n; i++) { 
        s[i].read(); 
        s[i].percentage(); 
    } 
    cout << "Display Information\n"; 
    for (i = 0; i < n; i++) { 
         s[i].print(); 
    } 

    return 0; 
} 

#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){    //constructor
        this->name = name;
        cgpaptr = new double; // give heap double type memory
        *cgpaptr = cgpa;    
    }

     // destructor

    ~Student() {
        cout << " i am delete everything\n";
        delete cgpaptr;     // memory leak
    }

    void getinfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
     
};

int main() {
    Student s1("ramesh kumr", 9.2);

    s1.getinfo();
}
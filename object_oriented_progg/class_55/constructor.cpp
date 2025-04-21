#include<iostream>
#include<string>
using namespace std;

class Teacher {

private:
        double salary;
public:
      string name;
       string dept;
       string subject;
      
    //  non-paramaterzied constructor
      
    Teacher(){
        cout << "i am constructor\n";
        dept = "computer science";
    }
    
    // paramaterzied constructor

    Teacher(string name, string dept, string subject, double salary) {

        this->name = name;    // this poninter for current object
        this->dept = dept; 
        this->subject = subject;
        this->salary = salary;
    }
    
    // copy constructor
    Teacher(Teacher &orgobj) {
        cout << "i am custom copy constructor...\n";
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }
      
void changeDept(string newDept) {
        dept = newDept;
    }

     //setter
void setSalary(double s) {
        salary = s;
    }
    // getter
double getsalary() {
        return salary ;
    }

   void getinfo() {
      cout << "name: " << name << endl;
      cout << "dept: " << dept << endl;
   }
};

class Student {
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double; // give heap double type memory
        *cgpaptr = cgpa;    
    }

    Student(Student &obj) {         // deep copy constructor
        this->name = obj.name;
        cgpaptr = new double; 
        *cgpaptr = *obj.cgpaptr;

    }
    void getinfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
     
};

int main() {

   Teacher t1; // constructor default call      => ek baar call hoti object creation ke time
   Teacher t2("Nisha", "electrical", "physics", 290000);  // pramaterzied con.

   Teacher t3(t2);  // deafault copy constructor call
   
   t1.name = "priyansh";
   t1.subject = "physics";
   t1.setSalary(25000);

   cout << t1.name << endl;
   cout << t1.dept << endl;
   cout << t1.getsalary() << endl;

//    t2.getinfo();  
   t3.getinfo();  
  
  // second class ke object

  Student s1("prince", 9.9);
  Student s2(s1);  // neha kumari
  
  s1.getinfo();
  *(s2.cgpaptr) = 8.9;
  s1.getinfo();

 s2.name = "neha";
  s2.getinfo();
}
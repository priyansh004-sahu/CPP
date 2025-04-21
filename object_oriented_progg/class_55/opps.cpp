#include<iostream>
#include<string>
using namespace std;

class Teacher {
    //  properties/attribute
    private:
       double salary;
     public:
         string name;
       string dept;
       string subject;
      // method => are declare under the class // member function

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
};

class Account() {
    private: 
       double balance;
       string password;  // data hiding
    public:
       string username;
       string accountId;
}
int main() {
   Teacher t1;
   Teacher t2;
   Teacher t3;
   Teacher t4;
   Teacher t5;
 
   t1.name = "priyansh";
   t1.dept = "computer science";
   t1.subject = "physics";
   t1.setSalary(25000);
//    t1.salary = 25000;

   cout << t1.name << endl;
   cout << t1.dept << endl;
   cout << t1.getsalary() << endl;
}
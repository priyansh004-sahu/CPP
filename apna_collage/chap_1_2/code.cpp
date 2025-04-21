#include<iostream>
using namespace std;

int main() {
    cout << " Priyansh" << "\n"<< " sahu"<< endl;

    int age = 21;
    cout << age;
    char grade = 'A';
    cout << grade;
    float PI = 3.14f;
    cout << PI;
    bool issafe = true;
     cout << issafe;
     double Price = 100.99;
     cout << Price << "\n";
     
        //  type casting -> small data to big data
       char marks= 'B';
       int value = grade;
       cout << value << endl;

        // big data to small data it done by manually

        double price = 100.99;
        int newprice = (int)price;
        cout << newprice << endl;
        // Input
    int number;
    cout << "Enter your age:";
    cin >> number;
    cout <<  "your age is:" << number <<endl;

                  //   operators
        //   1.arithmetic
        int a = 10, b = 5;
             int sum = a + b;
             cout << sum << endl;
        cout << "sum =" << (a+b) << endl;

       int Differnce = a - b;
        cout << "diff = " << Differnce << endl;

         int product = a * b;
        cout <<  "pro = " << product << endl;

         int division = a / b;
        cout << "div = " << division << endl;

        int modulo = a % b;
        cout << "modulo = " << modulo << endl;

        //Relational operators

        cout << (3 < 5) << endl;
        cout << (3 > 5) << endl;
        cout << (3 <= 5) << endl;
        cout << (3 >= 5) << endl;
        cout << (3 == 5) << endl;
        cout << (3 != 5) << endl;

       // Logical operators

       cout << ((3 > 1) || (3 > 5)) << endl; // or ek sahi hona chaiye
       cout << ((3 > 1) && (3 > 5)) << endl; // AND dono sahi hona chaiye
       cout <<  !(3>4) << endl; // NOT ans ulta hojayega

        //       unary operator
        //    1. increment ++a , ++a

        int c = 10;
        int d = c++;  // kaam <- update
        cout         << "value of d: " << d << endl; // 10
        cout << "value of c: " << c << endl; // 11
                  // post increment
        int C = 10;
        int D = ++C;  //update <-- kaam
        cout << "value of D" << D << endl; //11
        cout << "value of C" << C << endl; //10

        // 2. decrement

//          int c = 10;
//         int d = c--;  // kaam <- update
//         cout << "value of d: " << d << endl; // 10
//         cout << "value of c: " << c << endl; // 9

//  int C = 10;
//    int D = --C;  //update <-- kaam
//         cout << "value of D " << D << endl; //9
//         cout << "value of C " << C << endl; //9
    return 0;
}
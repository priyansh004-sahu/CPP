#include<iostream>
using namespace std;
int main() {
   cout << (4 & 8) << endl;
   cout << (4 | 8) << endl;
   cout << (4 & 8) << endl;
   cout << (10 << 2) << endl;  //left shift operator
   cout << (10 >> 2) << endl;  //right shift operator
   
     int number = 16; // Example number
    int divisionResult = number >> 1; // Divide by 2
    cout << "Number: " << number << endl;
    cout << "Divided by 2 using bit manipulation: " << divisionResult << endl;

    divisionResult = number >> 3; // Divide by 4
    cout << "Divided by 4 using bit manipulation: " << divisionResult << endl;

}
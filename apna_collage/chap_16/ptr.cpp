#include<iostream>
using namespace std;
 
int main() {
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    cout << &a << endl;
                         //pointer to pointer
   int** ptr2 = &ptr;
   cout << ptr2 << endl;
   cout << &ptr << endl;
                         // deference operator <--> value at address
   cout << *(&a) << endl;
   cout << *(&ptr) << endl;
   cout << ***(&ptr2) << endl;

   }

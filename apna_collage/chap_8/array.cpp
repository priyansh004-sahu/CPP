#include<iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    //  marks[0] = {400};   // also change inital value
    // cout << marks[0] << endl;
    // cout << marks[1]  << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] <<endl;
                       //for loop <--> 0 to size -1 in array 
// int  sz = sizeof(marks);
// cout << sizeof(marks) / sizeof(int);   find size of array through 

 for(int i = 0; i < size; i++) {
    cin >> marks[i];
 }
for(int i=0; i<size; i++) {
    cout << marks[i] << endl;
  }
}
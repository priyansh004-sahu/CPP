#include<iostream>
using namespace std;

int main() {

int arr[] = {1, 2, 3, 4, 5};

int* ptr2;  //100
    int* ptr1 = ptr2 + 2; //108
    cout << ptr1 - ptr2 <<endl;

    int* ptr3;
    int*ptr4 = ptr3;

    cout << ptr3 << endl;
    cout << ptr4 << endl;
    cout << (ptr3 == ptr4) << endl;   //compare
}
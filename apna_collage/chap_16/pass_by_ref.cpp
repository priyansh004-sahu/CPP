#include<iostream>
using namespace std;
int changeA(int* ptr, int &c) {     //pass by refernce by pointer and alias
    *ptr = 20;
    c = 30;
}
int main()  {
    int a = 10, b = 20;
    changeA(&a, b);
    cout << "inside the main function: " << a << endl;
    cout << "inside the main function: " << b << endl;

    int arr[] = {1, 2, 3, 4, 5};

    int d = 10;
    int* ptr = &d;
    cout <<"before: " << ptr <<endl;;
    //ptr--;
    ptr += 2;  // 2  int => 8
    cout <<"after + 4:- " << ptr;   //+8

    int* ptr2;  //100
    int* ptr1 = ptr2 + 2; //108
    cout << ptr1 - ptr2 <<endl;


}
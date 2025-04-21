#include<iostream>
using namespace std;

int main() {
            //    number are +ve or -ve
    int n;
    cout << "enter a number: ";
    cin >> n;

    if (n >= 0) {
            cout << "n is positive\n";
    } else {
        cout << "n is negative\n";
    }
           // age checker
    int age = n;
    cout << "enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "your are eligible\n";
    } else {
           cout << "not eligible\n";
    }
                //  Even or odd
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (num % 2 == 0) {
           cout << "number is even\n";
    } else {
           cout << "number is odd\n";
    }
        //while loop 1 to 5

        int count = 1;
        while(count <= 5) {
             cout << count<< " ";
             count++;
        }
        cout << "endl";

        //1 to N
         int cont = 1;
         int N = 10;
        while(cont <= N) {
             cout << cont<< " ";
             cont++;
        }
        cout << " ";

        //for loop
        
        for (int i = 1; i <= 15; i++) {
            cout << i << " ";
        }
      cout << endl;
                // nested loop
        for(int i = 1; i <= 5; i++) {
            int m  = 5;
            for(int i = 1; i <=m; i++) {
               cout << "*";
            }
             cout << endl;
        }
}
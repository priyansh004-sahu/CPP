#include<iostream>
using namespace std;

int main() {
    //check number is prime or not

          //  int n = 8;
          //  bool isPrime = true;
          //  for(int i = 2; i <= n-1; i++) {
          //       if(n%1 == 0) {
          //           isPrime = false;
          //           break;
          //       }
          //  }
          //    if (isPrime == true) {
          //   cout << " prime" << endl;
          // }else {
          //   cout << " non";
          // }

          //check number is prime or not,  optimzation

           int n = 8;
           bool isPrime = true;
           for(int i = 2; i*i <= n; i++) {
                if(n%1 == 0) {
                    isPrime = false;
                    break;
                }
           }
             if (isPrime == true) {
            cout << " prime" << endl;
          }else {
            cout << " non";
          }
}

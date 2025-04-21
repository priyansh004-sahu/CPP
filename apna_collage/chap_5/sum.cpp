#include<iostream>
using namespace std;
     
     // function defination
int sum(int a, int b) {
       int s = a + b;
       return s;
  } 

int minoftwo(int a, int b) {     //parameter
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int sumN(int n) {
    int sum = 0;
    for(int i=0; i<=n; i++) {
        sum += i;
    }
    return sum;
}
            //   factorial 1 to N
int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *=i;
    }
    return fact;
}
int main() {
    // function  call / invoke karna
     int total = sum(10, 5);    //always store value
      cout << total << "\n";

      int value = minoftwo(10, 5);   // argument
      cout << value << "\n";

      cout << sumN(10) << endl;

      cout << factorial(3) << endl;
}
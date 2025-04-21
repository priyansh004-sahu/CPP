#include <iostream>
using namespace std;

// Function to compute x^n using recursion
int powerfun(int x, int n) {        // 0(n)
    if (n == 0) return 1;           // Base case: x^0 = 1
    return x * powerfun(x, n - 1);   // Recursive step
}

int pow(int x, int n) {    // 0(logn)
  if(n == 0) return 1;

  int halfpow = pow(x, n/2);
  int halfpowSquare = halfpow * halfpow;

  if(n % 2 != 0) {   // check for odd
    return x * halfpowSquare;
  }
  return halfpowSquare;
}

int main() {
    int x = 2, n = 5; // Example: x = 2, n = 10
    cout << x << " to the power " << n << " is: " << powerfun(x, n) << endl;

    cout << x << " to the power " << n << " is: " << pow(2, 5) << endl;
    return 0;
}


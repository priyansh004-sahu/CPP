#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

bool primecheck(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true;  // 2 and 3 are prime numbers

    if (n % 2 == 0 || n % 3 == 0) return false; // Divisible by 2 or 3

    // Check for factors from 5 to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int number = 8;
    cout << number << (primecheck(number) ? " is prime" : " is not prime") << endl;
    return 0;
}

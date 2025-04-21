                      //204. Count Primes using:->   Sieve of Eratosthenes
#include <iostream>
#include <vector>

int countPrimes(int n) {
    // Create a boolean vector "isPrime" and initialize all entries as true
    std::vector<bool> isPrime(n, true); // n primes less than 'n'
    int count = 0;

    // Sieve of Eratosthenes
    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            // Mark multiples of i, starting from i * i
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Count the number of primes
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            ++count;
        }
    }

    return count;
}

int main() {
    int n = 50;
    std::cout << "Number of primes less than " << n << ": " << countPrimes(n) << std::endl;
    return 0;
}

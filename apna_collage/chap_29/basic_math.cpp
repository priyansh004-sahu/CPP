#include<iostream>
using namespace std;

string isPrime(int n) {
    for(int i=2; i*i<=n; i++) {
       if(n % i == 0) {
        return "Non-prime";
       }
    }
        return "prime";

}

void printDigit(int n) {
    int count = 0, sum = 0;
    while(n != 0) {
        int digit = n % 10;  // digit extract
        count++;             // digit count
        sum += digit;       // digit sum

        cout << digit << " ";
        n = n / 10;
        cout << endl;
    }
        
   cout << "count is:- " << count << endl;
   cout << "sum is:- " << sum << endl;
}
bool isArmstrong(int n) {
      int copy = n;
      int sumofcubes = 0;

      while(n!=0) {
         int digit = n % 10;
         sumofcubes += (digit * digit * digit);
         n = n / 10;
      }
      return sumofcubes == copy;
}
int main() {
    int n = 153;
    cout << isPrime(n) << endl;
    printDigit(n);

    if(isArmstrong(n)) {
        cout << "is an armstrong number\n";
    } else{ 
        cout << "Not an armstrong number\n";
    }
}
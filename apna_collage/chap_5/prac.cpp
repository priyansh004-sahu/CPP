            //practise question
#include<iostream>
using namespace std;
     
     // function defination    // sum of digit
int sumofdigit(int num) {
       int digitsum = 0;

       while(num > 0) {
     int lastdigit = num % 10;
        num = num / 10;    // smaller num
        digitsum += lastdigit;
       }
       return digitsum;
}

int factorial(int n) {
   int fact = 1;
   for (int i = 1; i<=n; i++) {
      fact *= i;
   }
   return fact;
}

int nCr(int n, int r) {
   int fact_n = factorial(n);
   int fact_r = factorial(r);
   int fact_nmr = factorial(n-r);

   return fact_n / (fact_r * fact_nmr);
}

int main() {
   cout << "sum = " << sumofdigit(2356) << endl;


   int n = 6, r = 2;
   cout << nCr(n, r) << endl;;
}
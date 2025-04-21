#include<iostream>
using namespace std;

int sumNums(int n) {        
    if(n == 1) {
          return 1;
    }
    
     return  n + sumNums(n-1);
    // return N;
}
    

int main() { 
    int n = 4;
   cout << sumNums(n) << endl;
}
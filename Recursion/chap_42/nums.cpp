#include<iostream>
using namespace std;

void printNums(int n) {        
    if(n == 0) {
          cout << "1\n";
          return;
    }
        cout << n << " ";   // Print the current number
        printNums(n-1);    // Recursive call with n-1
}
    

int main() { 
    int n = 1;
    printNums(n);
}
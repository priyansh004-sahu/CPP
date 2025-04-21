#include<iostream>
using namespace std;

int main() {
  int n=5;
    for(int i=1; i<=n; i++) {
        for(int k =1; k<=n; k++) {
              cout << k;
        }
        cout << endl;
    }
        // character
    // int n=6;
    for(int i=0; i<n; i++) {
      char ch = 'A';
        for(int k =0; k<n; k++) {  //inner loop 
              cout << ch;
              ch += 1;
        }
        cout << endl;
    }
    
    
}
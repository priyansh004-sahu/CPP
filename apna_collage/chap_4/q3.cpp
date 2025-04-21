#include<iostream>
using namespace std;
int main() {
    int n = 6;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
        cout << " *";
    }
     cout << endl;
}
   
  
   for(int i = 0; i < n; i++) {
    //  int num = 1;
    for(int j=0; j< i+1; j++) {
        cout << i + 1;

    }
    cout << endl;
   }
        // star pattern
   char ch = 'A';
   for(int i = 0; i < n; i++ ) {
    for (int j=0; j< i + 1; j++) {
       cout << ch << " "; 
    }
     ch++;

    cout << endl;
   }
   
   for(int i=0; i<n; i++) {
    for(int j=1; j<i+1; j++) {
        cout << j;
    }
    cout << endl;
}
}
//   sum numbers divisible by 3 from 1 to n.
#include<iostream> 
using namespace std;

int main() {
    int n = 10;
     int sum = 0;

    for(int i = 1; i<=n; i++) {
        if(i % 3 == 0) {
             sum = sum + i;
        }
    }
    cout <<  "it is divisible by 3 is: " << sum << "\n";
     
     
     for(int i = 1; i<=n; i++) {
        sum = sum*i;
    }
    cout << sum << endl;
       
}
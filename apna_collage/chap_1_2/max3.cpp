#include<iostream>
using namespace std;

int main() {
    int a, b ,c;
    int ans;
    cout << "enter three number: ";
    cin >> a >> b >> c;
    
    if(a > b) {
        if(a > c) {
            ans = a;
        } else {
            ans = c;
        }
    } else{
        if(b > c) {
            ans = b;
        }
        else {
            ans = c;
        }
    }
   
    cout << "max number is: " << ans << endl;

}
#include<iostream>
using namespace std;

int GCD(int a, int b) {
    while (a > 0 && b > 0) {
       if(a>b) {
        a = a % b;
    } else {
        b = b % a;
    }
    }
    if(a==0) return b;
    return a;
}
int GCDREC(int a, int b) {    // recursion se kiya  ha
    if(b == 0) return a;
    return GCDREC(b, a % b);
}
int LCM(int a, int b) {
    int gcd = GCD(a,b);
     return (a * b) / gcd;
}
int main() {
    cout << GCD(0, 28) << endl;
    cout << GCDREC(20, 28) << endl;
    cout << LCM(20, 28) << endl;
}
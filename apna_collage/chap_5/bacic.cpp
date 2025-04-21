#include<iostream>
using namespace std;
     
     // function defination
void changeX(int x) {
     x = 2*x;
     cout << " x = " << x << endl;
}
 

int main() {
    int x = 5;
    changeX(x);
    cout << "X = " << x << endl;
    return 0;
}
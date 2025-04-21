#include<iostream>
using namespace std;

int main() {
   int fact = 1;
    for(int i = 1; i <= 9; i++) {
       fact = fact * i;
    }
    cout << fact << endl;
}
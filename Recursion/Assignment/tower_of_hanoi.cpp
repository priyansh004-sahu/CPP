#include<iostream>
using namespace std;

void TowerOfHanoi(int n, string src, string helper, string dest) {

    if(n == 1) {
        cout << " transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    //   transfer top n-1 from src to helper using dest as 'helper'

    TowerOfHanoi(n-1, src, dest, helper);
        cout << " transfer disk " << n << " from " << src << " to " << dest << endl;
    
    // /transfer n-1 from helper to dest using src as 'helper'

    TowerOfHanoi(n-1, helper, src, dest);
     
}

int main() {
    int n = 3;
    TowerOfHanoi(n, "A", "B", "c");
}
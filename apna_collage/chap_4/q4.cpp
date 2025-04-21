// backward - star pattern

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    
    // for(int i = n; i>0; i--)  {
    //     cout << i << endl;     it backward loop
    // }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j>0; j--) {
            cout << j <<" ";
    }
    cout << endl;
    }
}

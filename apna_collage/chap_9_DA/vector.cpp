#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int>vec = {1, 4, 5};
    // cout << vec[0];
    
    vector<int>vec(5,3);
    for(int val : vec) {    //using for vector for each loop
        cout << val << endl;
    }
}
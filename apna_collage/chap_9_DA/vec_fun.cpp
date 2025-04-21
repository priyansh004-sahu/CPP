#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec;
    cout << "before " << vec.size() << endl;

    vec.push_back(34);
    vec.push_back(54);
    vec.push_back(96);
    vec.push_back(24);
    cout << "after change " << vec.size() << endl;

    vec.pop_back();   // delete 24 in last of array
    
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout << vec.at(0) << endl;    // print 1 index value
    
}

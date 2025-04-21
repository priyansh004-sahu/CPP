#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
    vector<> vec = {1, 2, 3, 4, 5};


    //  vec.erase(vec.begin()  + 1, vec.begin() + 3);   // when +2 means delete 3
    // vec.insert(vec.begin() + 3, 100);

    // iterators
    cout << *(vec.begin()) << endl;
    cout << *(vec.end()) << endl;

    // for(int val : vec) {
    //     cout << val << " ";
    // }
    
    // iterators uses
    vector<int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    for( auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *(it) << " ";
    }
    cout < endl;

    
}
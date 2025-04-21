#include <iostream>
#include <algorithm>
#include <vector>
#include <utility> // For std::pair
#include <functional>
using namespace std;


bool comprator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second)  return true;
    if(p1.second > p2.second)  return false;
    
    if(p1.first < p2.first) return true;
    else return false;
}
void use_sort() { 
    int arr[5] = {8, 9, 4, 1, 3};
    
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    vector<int> vec = {6, 9, 10, 78, 1};
    sort(vec.begin(), vec.end(), greater<int>());
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    vector<pair<int,int>> vec1 = {{6, 9}, {10, 78}, {6, 8}, {90, 100}};

    sort(vec1.begin(), vec1.end(), comprator);
    for(auto p : vec1) {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    cout << endl;
}
void  use_Reverse() {
    vector<int> vec = {1, 2, 4, 5, 6};

    reverse(vec.begin(), vec.end());
    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;
}
void use_Next_permutation() {
    vector<int> vec = {1, 2, 3};
    next_permutation(vec.begin(), vec.end());
    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << " ";
    cout << endl;

     string s1 = "acb";
    prev_permutation(s1.begin(), s1.end());
    cout << s1 << " ";
    cout << endl;

    cout << max(5,10) << " " << min(6, 67) << endl;
    int a = 5, b = 34;
    swap(b, a);
    cout << " a= " << b << endl;
}
int main() {
    use_sort(); 
    use_Reverse();
    use_Next_permutation();
}


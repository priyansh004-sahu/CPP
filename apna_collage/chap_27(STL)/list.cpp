#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

void List() { // 1st function {4, 6, 7, 8, 10}
    list<int> l;

    l.push_back(8);
    l.emplace_back(10);
    l.push_front(7);
    l.push_front(6);

    l.pop_back();   // removes 10
    l.pop_front();  // removes 6

    for(int val : l) {
        cout << val << " "; // should print 7 8
    }
    cout << endl;
}

void Deque() { // 2nd function
    deque<int> q;

    q.push_back(1);
    q.emplace_back(2);
    q.push_front(4);
    q.push_front(1);

    q.pop_back();   // removes 2
    q.pop_front();  // removes 1

    for(int val : q) {
        cout << val << " "; // should print 4 1
    }
    cout << endl;
}

void Pair() {
    pair<int, int> p = {2, 4};

       cout << p.first << endl; 
       cout << p.second << endl; 
    pair<string, int> p1 = {"priyansh", 73};

       cout << p1.first << endl; 
       cout << p1.second << endl;
     pair<int, pair<char, int>> p2 = {2, {'P', 6}};

       cout << p2.first << endl; 
       cout << p2.second.first << endl; 
       cout << p2.second.second << endl; 
    cout << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
      
      vec.push_back({5,6});
      vec.emplace_back(6,7);    // in-place object create
    for(auto p3: vec) {
        cout << p3.first << " " << p3.second << endl;
    }
}

int main() {
    List();
    Deque();
    Pair();
}

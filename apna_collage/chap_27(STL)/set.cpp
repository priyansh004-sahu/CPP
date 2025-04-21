#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

void use_set() { 
     set<int> S;

     S.insert(1);
     S.insert(2);
     S.insert(3);
     S.insert(4);
     S.insert(5);
     S.insert(6);
    cout << "lower bound = " << *(S.lower_bound(4)) << endl;  // 4
    cout << "upper bound = " << *(S.upper_bound(0)) << endl;  // 1


     for(auto val : S) {
        cout << val << " ";
     }
   cout << endl;
}
  void  use_multi_set() {
      multiset<int>S;
      
      S.insert(1);
     S.insert(2);
     S.insert(3);
     S.insert(4);
     S.insert(5);
     S.insert(6);

     S.insert(1);
     S.insert(2);
     S.insert(3);

      for(auto val : S) {
        cout << val << " ";
     }
   cout << endl;
}
void use_unordered_set() {
    unordered_set<int> S;

    S.insert(1);
     S.insert(2);
     S.insert(3);
     S.insert(4);
     S.insert(5);
     S.insert(6);

     S.insert(1);
     S.insert(2);
     S.insert(3);

      for(auto val : S) {
        cout << val << " ";
     }
   cout << endl;
}

int main() {
    use_set();
    use_multi_set();
    use_unordered_set();
}

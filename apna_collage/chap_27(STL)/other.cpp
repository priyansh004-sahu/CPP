#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void use_min_max_element() {
    vector<int> vec = {2, 4, 6, 7, 10};

   cout << *(max_element(vec.begin(), vec.end())) << endl;
   cout << *(min_element(vec.begin(), vec.end())) << endl;
  
}
 void use_binary_search() {
          vector<int> vec = {2, 4, 6, 7, 10, 10};

   cout << binary_search(vec.begin(), vec.end(), 10) << endl;
   cout << endl;   // output in bool 1 or 0 
}
void use_count_Bits() {
          vector<int> vec = {2, 4, 6, 7, 10, 10};
         int n = 15;
        long int n2 = 15;
        long long int n3 = 15;
         cout << __builtin_popcount(n) << endl;
         cout << __builtin_popcountl(n2) << endl;
         cout << __builtin_popcountll(n3) << endl;
}

int main() {
    use_min_max_element();
    use_binary_search();
    use_count_Bits();
}

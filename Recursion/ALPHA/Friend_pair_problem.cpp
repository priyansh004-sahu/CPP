#include<iostream>
using namespace std;

int FriendPairProblem(int n) {            
    if(n == 1 || n == 2) {        // base case
          return n;
    } 
      //single
   int ans1 = FriendPairProblem(n-1); // fun(n-1)

      //pair with friend
    int ans2 = (n - 1) * FriendPairProblem(n-2); // (n-1) * fun(n-2)  ==> (n-1) are possible solution

    return ans1 + ans2;
}
    

int main() { 
    int n = 4;
   cout << FriendPairProblem(n) << endl;
}
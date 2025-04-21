#include<iostream>
using namespace std;

int TilingProblem(int n) {       // 2xn    
    if(n == 0 || n == 1) {
          return 1;
    }
      //vertical
   int ans1 = TilingProblem(n-1); // 2x(n-1)

      //horizontal
    int ans2 = TilingProblem(n-2); // 2x(n-2)

    return ans1 + ans2;

}
    

int main() { 
    int n = 6;
   cout << TilingProblem(n) << endl;
}
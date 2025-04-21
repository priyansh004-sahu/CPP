#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int MinAllowedDis) {
       int cows = 1, LastStallPos = arr[0];

       for(int i = 0; i < N; i++) {
          if(arr[i] - LastStallPos >= MinAllowedDis) {
                cows++;
                LastStallPos = arr[i];
          }
          if(cows == C) {
            return true;
          }
       }
       return false;
}
int getDistance(vector<int> &arr, int N, int C) {
   sort(arr.begin(), arr.end());

   int st = 1, end = arr[N-1]-arr[0], ans = -1;

   while(st <= end) {
       int mid = st + (end - st) / 2;

    if(isPossible(arr, N, C, mid)) {   //right
        ans = mid;
        st = mid + 1;
    } else {  //left
        end = mid - 1;
    }
   }
   return ans; 
}
int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int N = 5, C = 3;
    cout << getDistance(arr, N, C) << endl;
}
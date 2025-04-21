#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BinarySearch(vector<int> arr, int tar, int st, int end) {
    if(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid] == tar)
          return mid;
        else if(arr[mid] < tar) 
           return BinarySearch(arr, tar, mid + 1, end);
        else 
          return BinarySearch(arr, tar, st, mid - 1);
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 2, 2, 4, 50}; // arr always sorted
      
    int tar = 4;
    cout << BinarySearch(arr, tar, 0, arr.size()-1) << endl;
}
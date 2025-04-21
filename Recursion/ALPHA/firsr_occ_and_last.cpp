#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int firstOcc(vector<int> arr, int tar, int i) {   // first occurance
    int n = arr.size();
    if(i == n) return -1;

    if(arr[i] == tar) {
        return i;
    }
    return firstOcc(arr, tar, i+1);
}
int LastOcc(vector<int> arr, int tar, int i) {   // last occurance
    int n = arr.size();
   if(i == n) return -1;
       int idx = LastOcc(arr, tar, i+1);

        if(idx == -1 && arr[i] == tar) {
            return i;
    }
    return idx;
}
int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4};

   cout << firstOcc(arr, 4, 0) << endl;
   cout << LastOcc(arr, 3, 0) << endl;
}

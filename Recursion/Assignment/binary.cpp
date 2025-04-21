#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int key, int st, int end) {
    if(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            return BinarySearch(arr, key, mid + 1, end);
        }
        else {
            return BinarySearch(arr, key, st, mid - 1);
             
        }
    }
    return -1;
}
int main() {
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
     cout << BinarySearch(arr, 5, 0, arr.size() - 1) << endl;
}
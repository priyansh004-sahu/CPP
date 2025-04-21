     // brute force approach of leetcode problem 560
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;

     for (int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j<n; j++) {
            sum += arr[j];
            if(sum == k) count++;
        }
     }
     
     return count;

}

int main() {
    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int k = 33;
    cout << subarraySum(arr, k) << endl;
    return 0;
}
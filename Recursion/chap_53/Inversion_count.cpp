// he inversion count of an array is the number of pairs of elements where \
(arr[i] > arr[j]\) and \(i < j\).
#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;
    int Invcount = 0;
    while(i <= mid && j <= end) {
       if(arr[i] <= arr[j]) {
         temp.push_back(arr[i]);
        i++;
       } else {
         temp.push_back(arr[j]);
         j++;
         Invcount += (mid - i + 1);
       }
    }

    while(i <= mid) {
         temp.push_back(arr[i]);
        i++;
    }
    while(j <= mid) {
         temp.push_back(arr[j]);
         j++;
    }
    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx + st] = temp[idx];
    }

    return Invcount;
}
int mergeSort(vector<int> &arr, int st, int end) {
  if(st < end) {
   int mid = st + (end - st) / 2;

   int leftInvcount = mergeSort(arr, st, mid); 
   int rightInvcount = mergeSort(arr, mid + 1, end);

   int Invcount = merge(arr, st, mid, end);

   return leftInvcount + rightInvcount + Invcount;
}
  return 0;
}

int main() {
//    vector<int> arr = {6, 3, 5, 2, 7};
 vector<int> arr = {1, 3, 5, 10, 2, 6, 8, 9};
 
 int ans = mergeSort(arr, 0, arr.size() - 1);
 cout << "Invcount :- " << ans << endl;
}
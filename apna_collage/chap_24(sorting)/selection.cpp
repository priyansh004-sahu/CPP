#include<iostream>
#include<algorithm>
using namespace std;

int selectionSort(int arr[], int n) {      //O(n^2)
   
   for(int i = 0; i < n-1; i++) {
    int smallestInx = i;               // unsorted part starting value
    for(int j = i+1; j < n; j++) {
        if(arr[j] < arr[smallestInx]) {    // for descending sign change
            smallestInx = j;
        }
    }
     swap(arr[i], arr[smallestInx]);
   }
}
int printArray(int arr[], int n) {
   for(int i = 0; i<n; i++) {
     cout << arr[i] << " ";
   }
   cout << endl;
}
int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selectionSort(arr, n);
    printArray(arr, n);
}
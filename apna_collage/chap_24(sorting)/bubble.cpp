#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {  //(O^2)
       bool isSwap = false;

     for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
               isSwap = true;

            }
        }
        if(!isSwap) {
        return;
    }
    }
}
void printArry(int arr[], int n) {
     for(int i =0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n = 6;
    int arr[] = {2,0,2,1,1,0};

    bubbleSort(arr, n);
    printArry(arr, n);
}
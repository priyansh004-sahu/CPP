#include<iostream>
#include<climits>
using namespace std;

int sumarry(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
     sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = sumarry(arr, size);
   cout <<  result <<endl;

    
}



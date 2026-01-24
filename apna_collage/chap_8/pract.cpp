#include<iostream>
#include<climits>
using namespace std;

int  LinearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int reverseArry(int arr[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;  
    } 
}

int smallestNumber(int nums[], int n) {

    int smallest = INT_MAX;
    for(int i=0; i<n; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
     return smallest;
}

int LargestNumber(int nums[], int n) {
    int largest = INT_MIN;
    for(int i=0; i<n; i++) {
        if(nums[i] > largest) {
            largest= nums[i];
        }
    }
    return largest;
}

int secondLargestNumber(int nums[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++) {
        if(nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
    }
    return secondLargest;
}
}


int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 6};
    int size = 7, target = 2;

    cout << "LinearSearch: " << LinearSearch(arr, size, target) << endl;

    reverseArry(arr, size); 
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    };

    int nums[] = {5, 15, 22, 1, -15, 24, 90};
    int n = 7;
    cout << "\nSmallest Number: " << smallestNumber(nums, n) << endl;
    cout << "Largest Number: " << LargestNumber(nums, n) << endl;
    
}
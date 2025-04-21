#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

void swapMinMax(int arr[], int size) {
   //edge case
   if(size <= 0) {
    cout << "value must be greater than 0:" << endl;
   }

    // Initialize indices and values
    int minIndex = 0, maxIndex = 0;
    int minValue = INT_MAX, maxValue = INT_MIN;

    // Find min and max values and their indices
    for (int i = 0; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    // Swap the min and max elements
    if (minIndex != maxIndex) { // Ensure min and max are not the same element
        int temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int myArray[] = {3, 5, 1, 9, 7};
    int size = 5;
    swapMinMax(myArray, size);

    cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; ++i) {
      cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
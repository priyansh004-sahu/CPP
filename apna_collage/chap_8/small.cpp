#include <iostream>
#include <climits> // Include this header for INT_MAX
using namespace std;

int main() {
    int num[] = {5, 15, 22, 1, -15, 24, 90};
    int size = 7;

    int smallest = INT_MAX;  // Initialize smallest to the maximum integer value

    for(int i = 0; i < size; i++) {
        // smallest = min(num[i], smallest);
        if (num[i] < smallest) {
            smallest = num[i];  // Update smallest to the current number
        }
    }
    cout <<"samllest value: " << smallest << endl;
    cout << sizeof(smallest) << endl;  // Output the value of smallest
    

              // largest number in the array
   int largest = INT_MIN;
   int index = 0;
   for(int i = 0; i<size; i++) {
        // largest = max(num[i], largest);
        if (num[i] > largest) {
        largest = num[i];
        index = i;
    }
   }
    cout << "largest value " << largest << endl;
   cout << "position of value " << index;
    return 0;
}
 
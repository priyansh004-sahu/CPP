#include <iostream>
#include <algorithm> // for std::swap

using namespace std;

int main() {
    int A[] = {1, 2, 3};
    int n = sizeof(A) / sizeof(A[0]); // Get the size of the array

    int pivot = -1; 
    // Step 1: Find the pivot
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) {                      // The array is in descending order, reverse it to get the smallest permutation
        //  reverse(A.begin(), A.end());
        reverse(A, A+n);
         
    } else {
        // Step 2: Find the right-most element greater than pivot
        for (int i = n - 1; i > pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Step 3: Reverse the elements after the pivot
        int i = pivot + 1;
        int j = n - 1;
        while (i < j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

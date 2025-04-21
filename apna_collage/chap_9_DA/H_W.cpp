#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector with the given values
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int target = 70;

    // Perform linear search

    int index = -1;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            index = i;
            break;  // Stop searching once the target is found
        }
    }

    // Output the result
    cout << index << endl;

    return 0;
}

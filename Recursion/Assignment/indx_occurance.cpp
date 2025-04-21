#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

void IndicesOcc(vector<int> arr, int key, int i) {   // first occurance
    int n = arr.size();
    if(i == n) {
        return;
    }

    // If the current element matches the key, print the index
    
    if(arr[i] == key) {
        cout << i << endl;
    }
    IndicesOcc(arr, key, i+1);
}

int main() {
    vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    IndicesOcc(arr, 2, 0);
}

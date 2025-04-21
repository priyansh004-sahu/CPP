#include<iostream>
#include<vector> 
using namespace std;

int reverseArry(vector<int> &arr) {
    int start = 0, end = arr.size() - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
   vector<int> arr = {4, 2, 7, 8, 1, 5, 2};
    reverseArry(arr);

    for(int i=0; i < arr.size(); i++) {    //output print
        cout << arr[i] << " ";
    }

}
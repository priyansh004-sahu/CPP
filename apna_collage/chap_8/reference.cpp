#include<iostream>
using namespace std;

void changearr(int arr[], int size) {
    cout << "in function: ";
    for(int i=0; i<size; i++) {
        arr[i] = 2* arr[i];
    }
}
int main() {
    int arr[] = {1, 2, 3};
     changearr(arr, 3); // function call
    
    cout << "in main: ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[] = {3, -4, 5, 4, -1, 7, -3};


     for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            for(int i = 0; i < end; i++) {
                cout << arr[i] <<"";
            }
            cout << " ";
        }
        cout << endl;
     }

}
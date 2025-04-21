#include<iostream>
using namespace std;
int main() {
    int indx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[indx] = A[i];
            indx--;
            i--;
        } else {
            A[indx] = A[j];
            indx--;
            j--;
        }
    }
    while(i >= 0) {
        A[indx] = B[j];
        indx--;
        j--;
    }
}
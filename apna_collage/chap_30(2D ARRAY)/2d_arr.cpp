#include<iostream>
using namespace std;

int main() {
    int matrix[4][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    cout << matrix[2][1] << endl;
    
                      //loops in 2d array
    for(int i =0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
        cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
cout << endl; 
   
}
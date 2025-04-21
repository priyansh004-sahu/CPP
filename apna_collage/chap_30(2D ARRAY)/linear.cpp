#include<iostream>
using namespace std;
bool linearSearch(int mat[4][3], int rows, int cols, int key) {
        for(int i = 0; i<rows; i++) {
           for(int j = 0; j<cols; j++) {
            if(mat[i][j] == key) {
               return true;
           }
    }
   }
   return false;
}
 pair<int, int> linearSearch2(int mat[4][3], int rows, int cols, int key) { // for index of the 2d array
       for(int i = 0; i<rows; i++) {
           for(int j = 0; j<cols; j++) {
            if(mat[i][j] == key) {
               return {i,j};
           }
    }
   }
   return {-1, -1};
}
int main() {
         int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    cout << linearSearch(matrix, rows, cols, 8);

    pair<int, int> result = linearSearch2(matrix, rows, cols, 20);
    cout << "(" << result.first << ", " << result.second << ")\n";
    
}
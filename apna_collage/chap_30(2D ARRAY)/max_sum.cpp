#include<iostream>
#include<climits>
using namespace std;

int get_Row_Sum(int mat[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;
      
    for(int i=0; i<rows; i++) {
         int rowsumI = 0;
        for(int j=0; j<cols; j++) {
            rowsumI = rowsumI + mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowsumI);
    }
     return maxRowSum;
}
int get_column_Sum(int mat[][3], int rows, int cols) {
    int maxcolSum = INT_MIN;
      
    for(int i=0; i<cols; i++) {
         int colsumI = 0;
        for(int j=0; j<rows; j++) {
            colsumI = colsumI + mat[j][i];
        }
        maxcolSum = max(maxcolSum, colsumI);
    }
     return maxcolSum;
}
int main() {
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << get_Row_Sum(matrix, rows, cols) << endl;
    cout << get_column_Sum(matrix, rows, cols) << endl;
}
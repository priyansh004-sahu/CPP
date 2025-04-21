#include<iostream>
using namespace std;
int Diagonal_Sum(int mat[4][4], int n) {  //O(n^2)
         int sum = 0;
        for(int i = 0; i<n; i++) {
           for(int j = 0; j<n; j++) {
            if(i == j) {      // primary diagonal
              sum += mat[i][j];
           } else if(j == n-1-i) {    // seconadry diagonal
               sum += mat[i][j];
           }
    }
   } 
     return sum;
}
int Diagonal_Sum2(int mat[4][4], int n) {  //O(n)
         int sum = 0;
        for(int i = 0; i<n; i++) {
                                  // primary diagonal
             sum += mat[i][i];
              if (i != n-1-i) {    // seconadry diagonal
               sum += mat[i][n-1-i];
           }
   } 
     return sum;
}
 
int main() {
       int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
       int n = 4; 
    cout << Diagonal_Sum(matrix, n) << endl;
    cout << Diagonal_Sum2(matrix, n) << endl;

    
    
}
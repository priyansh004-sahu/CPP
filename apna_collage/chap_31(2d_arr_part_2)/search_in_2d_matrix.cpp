#include<iostream>
#include <vector>
using namespace std;
bool SearchInRow(vector<vector<int>>& mat, int target, int row) {
       int n = mat[0].size();
       int st = 0, end = n-1;
       while(st <= end) {
         int mid = st + (end - st) / 2;

         if(target == mat[row][mid]) {
            return true;
         } else if(target > mat[row][mid]) {
             st = mid + 1;
         } else {
             end = mid - 1;
         }
       }
       return false;
}
bool SearchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(), n = mat[0].size();
    int startrow = 0, endrow = m-1;

    while (startrow <= endrow) {
        int midrow = startrow + (endrow - startrow) / 2;

        if(target >= mat[midrow][0] && target <= mat[midrow][n-1]) {
            // found in this row => BS on this row
            return SearchInRow(mat, target, midrow);   // function call 
        } else if(target >= mat[midrow][n-1]) {
             // down ==> right
            startrow = midrow + 1;
        } else {
             // up ==> left

            endrow = midrow - 1;
        }

    }
     
}
int main() {
    vector<vector<int>> mat = {{1, 3, 6, 8}, {10, 12, 15, 18}};
    int target = 3;
    cout << SearchMatrix(mat, target) << endl;
    
}
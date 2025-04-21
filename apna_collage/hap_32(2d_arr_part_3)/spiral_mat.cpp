#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralOrder(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    int Srow = 0, Scol = 0,
        erow = m - 1, ecol = n - 1;
    vector<int> ans;

           while(Srow <= erow && Scol <= ecol) {
              //top
            for(int j = Scol; j <= ecol; j++) {
                ans.push_back(mat[Srow][j]);
            }
            //right
            for(int i = Srow + 1; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }
            //bottom
            for (int j = ecol - 1; j >= Scol; j--) {
               if(Srow == erow) {
                     break;
                   }
                    ans.push_back(mat[erow][j]);
               }

            //left
            for(int i = erow - 1; i >= Srow + 1; i--) {
                if(Scol == ecol) {
                    break;
                }
                ans.push_back(mat[i][Scol]);
            }
             Srow++; erow--; Scol++; ecol--;
        }
    
          return ans;  
    }
   
int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = SpiralOrder(mat);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;
 
bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
    
    // check for horizontal
    for(int j=0; j<9; j++) {
        if(board[row][j] == dig) {
            return false;
        }
    }

     // check for vertical
    for(int i=0; i<9; i++) {
        if(board[i][col] == dig) {
            return false;
        }
    }

     // check for 3 x 3 grid 

     int Srow = (row / 3) * 3;
     int Scol = (col / 3) * 3;

     for(i = Srow; i <= Srow + 2; i++) {     // row
        for(j = Scol; j <= Scol + 2; j++) {
            if(board[i][j] == dig) {
                return false;
            }
        }
     }
     return true;
}

bool helper(vector<vector<char>>& board, int row, int col) {
     
    if(row == 9) return true;   // basecase

    int nextrow = row, nextcol = col + 1;
      if(nextcol == 9) {
        nextrow = row + 1;
        nextcol = 0;
    }

    if(board[row][col] != '.') {
       return helper(board, nextrow, nextcol);
    }
       
    //    place the digit in correct position

    for(char dig = '1'; dig <= '9'; dig++) {
        
        if(iSafe(board, row, col, dig)) {
        board[row][col] = dig;   // assign the number

    if(helper(board, nextrow, nextcol)) {
        return true;
    }
      board[row][col] = '.';    // backtracking
       }
      }
      return false;
}

void solveSudoku(vector<vector<char>>& board) {
    helper(board, 0, 0);

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<string>> ans = SolveNqueen(n);

    if (!ans.empty()) {
        cout << "Solutions for " << n << "-Queens problem:\n";
        for (const auto &solution : ans) {
            for (const auto &row : solution) {
                cout << row << endl;
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists for n = " << n << endl;
    }

    return 0;
}


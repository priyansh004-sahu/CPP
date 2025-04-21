#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) {
    // Check horizontally
    for (int j = 0; j < n; j++) {
        if (board[row][j] == 'Q') {
            return false;
        }
    }

    // Check vertically
    for (int i = 0; i < n; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

bool nQueen(vector<string> &board, int row, int n, vector<string> &ans) {
    if (row == n) {
        ans = board; // Store the first solution
        return true; // Stop searching after finding the first solution
    }

    for (int j = 0; j < n; j++) {
        if (isSafe(board, row, j, n)) {
            board[row][j] = 'Q';
            if (nQueen(board, row + 1, n, ans)) { // Recursive call
                return true; // Stop further backtracking
            }
            board[row][j] = '.'; // Backtracking
        }
    }

    return false;
}

vector<string> SolveNqueen(int n) {
    vector<string> board(n, string(n, '.'));
    vector<string> ans;
    nQueen(board, 0, n, ans);
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> ans = SolveNqueen(n);

    if (!ans.empty()) {
        for (auto row : ans) {
            cout << row << endl;
        }
    } else {
        cout << "No solution exists for n = " << n << endl;
    }

    return 0;
}

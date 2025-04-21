#include <iostream>
#include <vector>
using namespace std;

// Function to check if placing a queen at board[row][col] is safe
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

// Recursive function to solve N-Queens
void nQueen(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
    if (row == n) {
        ans.push_back(board); // Store the solution
        return;
    }

    for (int j = 0; j < n; j++) {
        if (isSafe(board, row, j, n)) {
            board[row][j] = 'Q';          // Place the queen
            nQueen(board, row + 1, n, ans); // Recursive call for the next row
            board[row][j] = '.';          // Backtracking
        }
    }
}

// Function to find all solutions for the N-Queens problem
vector<vector<string>> SolveNqueen(int n) {
    vector<string> board(n, string(n, '.')); // Initialize an empty board
    vector<vector<string>> ans;             // To store all solutions
    nQueen(board, 0, n, ans);
    return ans;
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


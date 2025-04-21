#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>> &grid, int r, int col, int n, int expValue) {

  // base case
   if(r < 0 || col < 0 || r >= n || col >= n || grid[r][col] != expValue) {
    return false;
   }
   if(expValue == n * n - 1) {
    return true;
   }
   


  // 8 possible moves
  int ans1 = isValid(grid, r - 2, col + 1, n, expValue + 1);
  int ans2 = isValid(grid, r - 1, col + 2, n, expValue + 1);

  int ans3 = isValid(grid, r + 1, col + 2, n, expValue + 1);
  int ans4 = isValid(grid, r + 2, col + 1, n, expValue + 1);

  int ans5 = isValid(grid, r + 2, col - 1, n, expValue + 1);
  int ans6 = isValid(grid, r + 1, col - 2, n, expValue + 1);

  int ans7 = isValid(grid, r - 1, col - 2, n, expValue + 1);
  int ans8 = isValid(grid, r - 2, col - 1, n, expValue + 1);

  return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>> &grid) {
  return isValid(grid, 0, 0, grid.size(), 0);
}


int main() {
    // Example grid
    vector<vector<int>> grid = {
        {0, 3, 6},
        {5, 8, 1},
        {2, 7, 4}
    };

    if (checkValidGrid(grid)) {
        cout << "The grid is a valid knight's tour." << endl;
    } else {
        cout << "The grid is not a valid knight's tour." << endl;
    }

    return 0;
}
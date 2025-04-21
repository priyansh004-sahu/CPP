#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans,  vector<vector<bool>> &vis) {
  int n = mat.size();
  if(row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || vis[row][col] == true ) {
    return;
  }
  if(row == n-1 && col == n-1) {   // ans 
    ans.push_back(path);
    return;
  }
    vis[row][col] = true;

    helper(mat, row + 1, col, path + 'D', ans, vis);
    helper(mat, row - 1, col, path + 'U', ans, vis);
    helper(mat, row, col - 1, path + 'L', ans, vis);
    helper(mat, row, col + 1, path + 'R', ans, vis);

    vis[row][col] = false;
  
}
vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();

    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));   // visited matrix with assign false value

    helper(mat, 0, 0, path, ans, vis);

    return ans;
}
int main() {
    vector<vector<int>> mat = { 
{3, 0, 0, 2, 1}, 
{0, 0, 0, 0, 2}, 
{0, 1, 0, 1, 0}, 
{1, 0, 0, 1, 1}, 
{3, 0, 0, 1, 1} };

    vector<string> ans = findPath(mat);
    for(string path : ans) {
        cout << path << endl;
    }
}
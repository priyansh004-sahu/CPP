#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
  int n = height.size();
  int maxwater = 0;
  int lp = 0, rp = n - 1;

  while(lp < rp) {
    int w = rp - lp;
    int ht = min(height[lp], height[rp]);
    int currwater = w * ht;

    maxwater = max(maxwater, currwater);
    height[lp] < height[rp] ? lp++ : rp--;
  }
    return maxwater;

}
int main() {
       vector<int> height = {1,8,6,2,5,4,8,3,7};
       cout << maxArea(height) << endl;
}
#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int>& prices) {
  int n = prices.size();
  int maxprofit = 0;
  int bestbuy = prices[0];

  for(int i =0; i < n; i++) {
    if(prices[i] > bestbuy) {
        maxprofit = max(maxprofit, prices[i] - bestbuy);
    }
    bestbuy = min(bestbuy, prices[i]);
  }
    return maxprofit;
}
int main() {
       vector<int> prices = {7, 6, 4, 3, 1};
     cout << maxprofit(prices) << endl;
}
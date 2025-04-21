#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
   int freq = 0, ans = 0;

   for(int i = 0; i < nums.size(); i++) {
     if(freq == 0) {
        ans = nums[i];
     }
     if(ans == nums[i]) {
        freq++;
     } else {
        freq--;
     }
   }
       int count = 0;
    for(int num : nums) {
        if(num == ans) {
            count++;
        }
    }
    if(count > nums.size() / 2) {
        return ans;
    }
       return ans;
    }

  

int main() {
     vector<int> nums = {1, 2, 2, 1, 2};
   cout <<  majorityElement(nums);
}
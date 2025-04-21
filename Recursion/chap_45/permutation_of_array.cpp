#include<iostream>
#include<string>
#include<vector>
using namespace std;

void getPerm(vector<int>& nums, int idx, vector<vector<int>> &ans) {
      if(idx == nums.size()) {
        ans.push_back({nums});
       return;
    }
     for(int i = idx; i< nums.size(); i++) {
        
        swap(nums[idx], nums[i]);   // idx place ==> ith element  choice
        getPerm(nums, idx + 1, ans);

          //Retain the Original State.
		//Backtracking
       swap(nums[idx], nums[i]);
     }
 }



int main() {
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> ans;

    // Generate permutations directly
    getPerm(nums, 0, ans);

    // Print the result
    cout << "Permutations:\n";
    for (const auto& perm : ans) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;

}
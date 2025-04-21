   // using each loop for all 3 value
#include<iostream>
#include<vector>
#include<set>
#include <algorithm> // For sort

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
     int n = nums.size();
     vector<vector<int>> ans;
     
     set<vector<int>> s;   // set<uniQueTriplate>

     for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k=j+1; k<n; k++) {
                
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triple = { nums[i], nums[j], nums[k]};
                    sort(triple.begin(), triple.end());     // Sort the triplet

                    if(s.find(triple) == s.end()) {    // Ensure the triplet is unique
                      s.insert(triple);
                      ans.push_back(triple);
                    }
                }
            }
        }
    }
    return ans;

}
int main() {
      vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);

    if (ans.empty()) {
        cout << "No triplets found." << endl;
    } else {
        for (const auto& triplet : ans) {
            cout << "[";
            for (size_t i = 0; i < triplet.size(); i++) {
                cout << triplet[i];
                if (i < triplet.size() - 1) cout << ", ";
            }
            cout << "]" << endl;
        }
    }

}



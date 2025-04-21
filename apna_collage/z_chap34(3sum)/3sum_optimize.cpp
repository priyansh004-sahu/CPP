#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Ensure the array is sorted
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for `i`
        int j = i + 1, k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++; // Skip duplicates for `j`
                while (j < k && nums[k] == nums[k + 1]) k--; // Skip duplicates for `k`
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
        cout << "Triplets that sum to zero:" << endl;
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

#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int tar) {
    sort(nums.begin(), nums.end()); // Ensure the array is sorted
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n - 3; i++) {
        // if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i

        for (int j = i + 1; j < n - 2; j++) {
            int p = j + 1, q = n - 1;

            while (p < q) {
                int sum = nums[i] + nums[j] + nums[p] + nums[q];
                if (sum < tar) {
                    p++;
                } else if (sum > tar) {
                    q--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    while(p < q && nums[p] == nums[p-1]) p++;
                }
            }
            j++;
            while(j < n && nums[j] == nums[j-1]) j++; // Skip duplicates for j

        }
         
    }
    return ans;
}

int main() {
    vector<int> nums = {-2, -1, -1, 1, 1, 2};
    int tar = 0;
    vector<vector<int>> ans = fourSum(nums, tar);

    if (ans.empty()) {
        cout << "No quadruplets found." << endl;
    } else {
        cout << "Quadruplets that sum to " << tar << ":" << endl;
        for (const auto& quadruplet : ans) {
            cout << "[";
            for (size_t i = 0; i < quadruplet.size(); i++) {
                cout << quadruplet[i];
                if (i < quadruplet.size() - 1) cout << ", ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void getAllCombination(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin, set<vector<int>> &s) {
    if (tar == 0) {
        if (s.find(combin) == s.end()) {
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }
    if (idx == arr.size() || tar < 0) {
        return;
    }

    // Include current element
    combin.push_back(arr[idx]);
    getAllCombination(arr, idx, tar - arr[idx], ans, combin, s); // Multiple includes allowed
    combin.pop_back();

    // Exclude current element
    getAllCombination(arr, idx + 1, tar, ans, combin, s);
}

vector<vector<int>> combinationSum(vector<int> &arr, int tar) {
    vector<vector<int>> ans;
    vector<int> combin;
    set<vector<int>> s;
    getAllCombination(arr, 0, tar, ans, combin, s);
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 5};
    int target = 8;
    vector<vector<int>> result = combinationSum(arr, target);

    cout << "Combinations are:" << endl;
    for (auto &vec : result) {
        cout << "[";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}


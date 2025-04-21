#include <iostream>
#include <vector>
using namespace std;

void getallSubsets(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
    if (i == arr.size()) {
        allSubsets.push_back(ans); // Corrected to use allSubsets
        return;
    }

    // Include the current element
    ans.push_back(arr[i]);
    getallSubsets(arr, ans, i + 1, allSubsets);

    // Backtrack and exclude the current element
    ans.pop_back();
    getallSubsets(arr, ans, i + 1, allSubsets);
}

vector<vector<int>> subsets(vector<int>& arr) {
    vector<vector<int>> possibleSubSet;
    vector<int> ans;
    getallSubsets(arr, ans, 0, possibleSubSet);
    return possibleSubSet;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = subset(arr); // Call the subsets function
    
   

    //Print all subsets
    cout << "All subsets:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}

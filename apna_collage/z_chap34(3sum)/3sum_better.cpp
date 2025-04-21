    // using hashing find only first value

#include<iostream>
#include<vector>
#include<set>
#include <algorithm> // For sort

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
     int n = nums.size();
    //  vector<vector<int>> ans;
     set<vector<int>> uniqueTriplates;    

     for(int i = 0; i<n; i++) {     // for 1st value a
       int tar = -nums[i];
        set<int> s;
        for(int j = i+1; j<n; j++) {   //second value b

            int third = tar - nums[j];  // third value c = A - B

            if(s.find(third)  != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplates.insert(trip);
            }
             s.insert(nums[j]);
        }  
     }
     vector<vector<int>> ans(uniqueTriplates.begin(), uniqueTriplates.end()); 
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



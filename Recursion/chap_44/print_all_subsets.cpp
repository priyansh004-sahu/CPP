#include<iostream>
#include<vector>
using namespace std;

void possibleSubSet(vector<int> &arr, vector<int> &ans, int i) {       // 2xn    
    if(i == arr.size()) {
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
     
     //include
    ans.push_back(arr[i]);
    possibleSubSet(arr, ans, i+1);
     
    
    ans.pop_back();   // backtrack
     //exclude
    possibleSubSet(arr, ans, i+1);

}
    

int main() { 
    vector<int> arr = {1, 2};
    vector<int> ans;   // store
    possibleSubSet(arr, ans, 0);
}
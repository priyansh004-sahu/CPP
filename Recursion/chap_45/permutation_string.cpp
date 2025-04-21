#include <iostream>
#include <vector>
#include <string>

using namespace std;

void getPrem(string& s, int idx, vector<string>& ans) {
    if (idx == s.size()) {
        ans.push_back(s); // Add the current permutation
        return;
    }
    for (int i = idx; i < s.size(); i++) {
        swap(s[idx], s[i]); // Swap to create different permutations
        getPrem(s, idx + 1, ans); // Recurse with the next index
        
        swap(s[idx], s[i]); // Backtrack to restore the original state
    }
}

int main() {
    string s = "abc"; // Example input string
    vector<string> ans; // Vector to store the permutations

    // Generate permutations
    getPrem(s, 0, ans);

     // Print the results
    cout << "Permutations:\n";
    for (const string& perm : ans) {
        cout << perm << endl;
    }
    return 0;
}

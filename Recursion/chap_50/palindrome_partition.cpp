#include<iostream>
#include<vector>
using namespace std;
 
bool isPalindrome(string s) {
      string s2 = s;
      reverse(s2.begin(), s2.end());

      return s==s2;
}
void getAllPart(string s, vector<string> &partition, vector<string> &ans) {   // helper
     if(s.size() == 0) {
        ans.push_back(partition);
        return;
     }
    for(int i=0; i < s.size(); i++) {

        string part = s.substr(0, i+1);

        if(isPalindrome(part)) {
            partition.push_back(part);
            getAllPart(s.substr(i+1), partition, ans);  // recursive call

            partition.pop_back();                       //backtrecking
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>>ans;
    vector<vector<string>>partition;

    getAllPart(s, partition, ans);
    return ans;
}
int main() {

}
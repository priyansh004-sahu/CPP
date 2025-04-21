#include <iostream>
#include <string>
using namespace std;

// Recursive function to count substrings
int countSubstrs(string str, int i, int j, int n) {
    // Base case: Single character is a valid substring
    if (n == 1) {
        return 1;
    }
    // Base case: Invalid substring
    if (n <= 0) {
        return 0;
    }
    
    // Recursively calculate the counts for substrings
    int res = countSubstrs(str, i + 1, j, n - 1) +
              countSubstrs(str, i, j - 1, n - 1) -
              countSubstrs(str, i + 1, j - 1, n - 2);
    
    // If the first and last characters match, add 1
    if (str[i] == str[j]) {
        res++;
    }
    
    return res;
}

int main() {
    string str = "abcab";
    int n = str.size();
    
    // Call the recursive function
    cout << "Count of substrings starting and ending with the same character: "
         << countSubstrs(str, 0, n - 1, n) << endl;
    
    return 0;
}

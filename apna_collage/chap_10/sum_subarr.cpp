#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -3};
    
    int maxsum = INT_MIN;   // for max value
     
    for(int st = 0; st < n; st++) {
       int currsum = 0;
        for(int end = st; end < n; end++) {
            currsum += arr[end];
            maxsum = max(currsum, maxsum);
        }
        // cout << currsum << endl;
    }
    cout << maxsum << endl;
}
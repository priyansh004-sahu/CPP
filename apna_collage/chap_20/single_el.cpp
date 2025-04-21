
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        if (n == 1) return arr[0];
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if mid is the single element
            if ((mid == 0 || arr[mid - 1] != arr[mid]) && (mid == n - 1 || arr[mid] != arr[mid + 1])) {
                return arr[mid];
            }

            // Move to the left half
            if (mid % 2 == 0) {
                if (mid > 0 && arr[mid - 1] == arr[mid]) {
                    end = mid - 2;  // Move left
                } else {
                    st = mid + 1;   // Move right
                }
            } else {  // Move to the right half
                if (arr[mid - 1] == arr[mid]) {
                    st = mid + 1;   // Move right
                } else {
                    end = mid - 1;  // Move left
                }
            }
        }

        return -1;  // Just to satisfy the return type; ideally shouldn't reach here
    }
};

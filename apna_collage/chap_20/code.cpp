class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        if(n == 1) return arr[0];

         int st = 0, end = n - 1;
         while(st <= end) {
           int mid = st + (end - st) / 2;

      // edge case
         if(mid == 0 && arr[0] != arr[1]) return arr[mid];
         if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

           if(arr[mid -1] != arr[mid] && arr[mid] != arr[mid + 1]) return arr[mid];
           

           if(mid % 2 == 0) {     //even
              if(arr[mid - 1] == arr[mid]) {
                end = mid - 1;       //left
              } else {
                 st = mid + 1;     //right
              }
           }
              else {                 //odd no.
                  if(arr[mid - 1] == arr[mid]) {
                     st = mid + 1;              //right
                  } else {
                     end = mid - 1;          //left 
                  }
              }
           }
         
           return -1;
    }
};
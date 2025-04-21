 #include<iostream>
 using namespace std;

 int main() {
    int nums[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = 10;

    int count0 = 0, count1 = 0, count2 = 0;  // count the value 0s , 1s, 2s
    for(int i=0; i<n; i++) {
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }
     
    //  overwrite the array

    int index = 0;
    for(int i=0; i<count0; i++) {
        nums[index++] = 0;
    }
    for(int i=0; i<count1; i++) {
        nums[index++] = 1;
    }
    for(int i=0; i<count2; i++) {
        nums[index++] = 2;
    }

    for(int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }
 }
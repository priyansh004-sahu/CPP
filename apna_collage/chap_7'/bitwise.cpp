// practise question

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;  //. Combining Conditions:
               //    - The entire expression combines both conditions using the logical AND operator (&&):
                   //      - It checks if \\( n \\) is greater than zero and that the result of the bitwise operation is equal to zero.
             //      - If both conditions are satisfied, it means \\( n \\) is a positive power of 2.
}

int reverseAninteger(int n) {

}

int main() {
    cout << isPowerOfTwo(16) << std::endl; // Output: 1 (true)
   cout << isPowerOfTwo(7) << std::endl; // Output: 0 (false)

  cout << reverseAninteger(1256) << endl;

    return 0;
}

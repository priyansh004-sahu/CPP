#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "priyansh";
    int freq[256] = {0};

    // Count frequency
    for (unsigned char ch : s) {
        freq[ch]++;
    }

    // Print in order of appearance
    for (unsigned char ch : s) {
        if (freq[ch] > 0) {
            cout << ch << " --> " << freq[ch] << endl;
            freq[ch] = 0;   // prevent re-printing
        }
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "priyansh";
    int freqArr[123] = {0};   // ASCII size up to 'z' (122)

    // Count frequency
    for (int i = 0; i < s.length(); i++) {
        int asciiVal = s[i];   // implicit char → ASCII
        freqArr[asciiVal]++;
    }

    // Print according to order of appearance
    for (int i = 0; i < s.length(); i++) {
        int asciiVal = s[i];
        if (freqArr[asciiVal] > 0) {
            cout << s[i] << " --> " << freqArr[asciiVal] << endl;
            freqArr[asciiVal] = 0;   // mark as printed
        }
    }

    return 0;
}

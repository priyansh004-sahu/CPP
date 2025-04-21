                 //567. Permutation in String
#include <iostream>
#include <string>

int main() {
    std::string s1 = "ab";
    std::string s2 = "eiabcooo";
    
    if (s1.length() > s2.length()) {
        std::cout << "False" << std::endl;
        return 0;
    }

    int s1Freq[26] = {0}, s2Freq[26] = {0};

    // Populate the frequency arrays for `s1` and the initial window in `s2`
    for (int i = 0; i < s1.length(); i++) {
        s1Freq[s1[i] - 'a']++;
        s2Freq[s2[i] - 'a']++;
    }

    // Helper function to compare frequency arrays
    auto isFreqSame = [](int a[], int b[]) -> bool {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    };

    // Check the initial window
    if (isFreqSame(s1Freq, s2Freq)) {
        std::cout << "True" << std::endl;
        return 0;
    }

    // Slide the window across `s2`
    for (int i = s1.length(); i < s2.length(); i++) {
        s2Freq[s2[i] - 'a']++;               // Add the new character to the window
        s2Freq[s2[i - s1.length()] - 'a']--; // Remove the character that slides out of the window

        if (isFreqSame(s1Freq, s2Freq)) {
            std::cout << "True" << std::endl;
            return 0;
        }
    }

    std::cout << "False" << std::endl;
    return 0;
}

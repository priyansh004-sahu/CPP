#include<iostream>
#include <cstring>
using namespace std;

void reverse_String(string &str) {
    int st = 0, end = str.length()-1;
    while(st < end) {
        swap(str[st], str[end]);
        st++;
        end--;  
    }
}

bool isAlphaNumeric(char ch) {
    if ((ch >= '0' && ch <='9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    } 
    return false;

    //return isalnum(ch);         // built in function to check if the character is alphanumeric or not 
}
bool palindromecheck(string s) {
   int st = 0, end = s.length()-1;
    while(st < end) {
        if(!isAlphaNumeric(s[st])) {
            st++; continue;
        }
        if(!isAlphaNumeric(s[end])) {
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

string RemoveAllOccurences(string &s2, string part) {
    while(s2.length() > 0 && s2.find(part) < s2.length()) {
        s2.erase(s2.find(part), part.length());
    }
    return s2;
}

void freqCounter(string s3, int freq[])  {
    
    // count frequency
    for(unsigned char ch : s3) {
        freq[ch]++;
    }
    // print in order of appearance
    for(unsigned char ch : s3) {
        if(freq[ch] > 0) {
            cout << ch << " --> " << freq[ch] << endl;
            freq[ch] = 0;   // prevent re-printing
        }
    }
}

void vowelsCounter(string s4) {
    int vowels = 0, consonants = 0;
    
     for (char ch : s4) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {   // only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string str = "Hello";
    reverse_String(str);
    cout << "Reversed string: " << str << endl;

    // char str2[] = {'a', 'b', 'c', 'd'}; string literal without null terminator
    // cout << strlen(str2) << endl;

    string s = "RACECAR";
    cout << palindromecheck(s) << endl;

    string s2 = "daabcbaabcbc", part = "abc";
    cout << RemoveAllOccurences(s2, part) << endl;

    string s3 = "priyansh";
    int freq[256] = {0};
    freqCounter(s3, freq);

    string s4 = "geeks for geeks121";
    vowelsCounter(s4);
}
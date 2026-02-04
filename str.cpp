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

void palindromecheck(string str) {
    
}

int main() {
    string str = "Hello";
    reverse_String(str);
    cout << "Reversed string: " << str << endl;

    // char str2[] = {'a', 'b', 'c', 'd'}; string literal without null terminator
    // cout << strlen(str2) << endl;
}


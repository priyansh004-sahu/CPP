#include<iostream>
using namespace std;

void reverse_String(string &str) {
    int st = 0, end = str.length()-1;
    while(st < end) {
        swap(str[st], str[end]);
        st++;
        end--;  
    }
}

int main() {
    string str = "Hello";
    reverse_String(str);
    cout << "Reversed string: " << str << endl;
}
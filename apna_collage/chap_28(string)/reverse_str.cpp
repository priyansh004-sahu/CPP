#include<iostream>
#include<cstring>
#include <algorithm> 
using namespace std;
void reverse_char() {
           string str = "hello";
           reverse(str.begin(), str.end());
    cout << "Reversed characters: " << str << endl;
           
}

void reverse_String() {
    string str;
    cout << "enter a string to get reverse:- ";
    getline(cin, str);

   int st =0, end = str.length() - 1;
    while (st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
   cout << "reverse string : " << str << endl;
}
int main() {
   reverse_String();
   reverse_char();
}
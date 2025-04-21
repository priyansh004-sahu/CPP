#include<iostream>
#include<cstring> 
using namespace std;
void use_String() {
      string str = "priyansh sahu";  // dynamic ==> runtime resize
      cout << str << endl;
      string str1 = "software"; 
      cout << str << endl;

      string str2 = str + str1;  // concatenation
      cout << str2 << endl;
      cout << (str != str1) << endl;
      cout << str.length() << endl;

      string str3;
    cout << " enter a string:- ";
      getline(cin, str3, '.');   
      cout << str3 << endl;

}
int main() {
     use_String();
     char str[] = {'a', 'b', 'c', '\0'}; // String literal 
    cout << strlen(str) << endl; // Output the length of the string
    
    char strp[] = "priyansh";
    cout << strp[5] << endl;

    char str2[100];
    cout << " enter a char array :- ";
    cin.getline(str2, 100);
    cout <<  "output :- " << str2 << endl;

    char str3[12];
    cout << " enter a char array :- ";
   cin.getline(str3, 12);
    for(char ch : str3) {
        cout << ch;
    }
    cout << endl;

     char str4[] = "apna collage";
    int len = 0;
    for(int i =0; i < str4[i] != '\0'; i++) {
        len++;
    }
    cout << "length of string:- " << len << endl;

   
}

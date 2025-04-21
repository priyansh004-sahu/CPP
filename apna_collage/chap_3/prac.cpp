#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character; ";
    cin >> ch;
    
    if (ch >= 'a' && ch <= 'z') {
        cout << "lower case\n";
    }else {
        cout << "upper case\n";
    }

    int n = 23;
    cout << (n >= 0 ? "positive" : "negative");   // condion ? stt1 : stt2;

                  //   sum of 1 to n


    int i = 1, sum = 0;
    while(i <= 3) {
        sum = sum + i;
        i++;
    }
    cout << sum << " ";
                  //  using for loop
    for (int k = 1; k <= 5; k++) {
        sum = sum + k;
        if (i == 4) {
            break;
        }
    }
     cout << sum << " ";

       //  print sum of odd no.
    int i = 1, sum = 0;
    int n = 5;
    while (i <= n)
    {
        if(i % 2 != 0) 
        sum += i;
        i++;
    }
    cout << sum << " " << "\n";

    //  using for loop
    int N = 5;
    int oddSum = 0;
    for(int k = 1; k <= N; k++) {
        if(k % 2 != 0) {
         oddSum = oddSum + k;
        }
    }
    cout << oddSum << " ";
}

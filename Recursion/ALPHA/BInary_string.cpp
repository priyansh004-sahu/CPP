#include<iostream>
using namespace std;

void BinaryString(int n, int lastPlace, string ans) {       // 2xn    
   
    if(n == 0) {
        cout << ans << endl;
        return;
    }
    if(lastPlace != 1)  {
        BinaryString(n-1, 0, ans + '0');
        BinaryString(n-1, 1, ans + '1');
    } else {
        BinaryString(n-1, 0, ans + '0');

    }
}
void BinaryString2(int n, string ans) {       //without  laST PLace
   
    if(n == 0) {
        cout << ans << endl;
        return;
    }
    if(ans[ans.size() -1] != '1')  {
        BinaryString2(n-1, ans + '0');
        BinaryString2(n-1, ans + '1');
    } else {
        BinaryString2(n-1, ans + '0');

    }
}
    

int main() {
    string ans = " ";
    BinaryString(3, 0, ans);
              cout << "----------------" << endl;
    BinaryString2(3, ans);
}
#include<iostream>
using namespace std;


int main() {
    int marks[9];
    int size = 9;

    for(int i=0; i<size; i++) {
        cin >> marks[i];
    }

    for(int i=0; i<size; i++) {
        cout << "Marks of student " << marks[i] << endl;
    }
}
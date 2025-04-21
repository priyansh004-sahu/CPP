#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void usestack() {
    cout << "use stack" << endl;
     stack<int> s;

     s.push(1);
     s.push(2);
     s.push(3);
     //cout << s.top() << endl;

     while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
     }
     cout << endl;
     
    stack<int> s2;
     s2.swap(s);
     cout << s2.size() << endl;
     cout << endl;
}
    
void useQueue() {
    cout << "useQueue" << endl;
      queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
    
     while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
     }
     cout << endl << endl;
}
void  Use_Priority_Queue() {
    cout << "Use Priority Queue" << endl;

    priority_queue<int> q;
    
    q.push(5);
    q.push(10);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
     }
     cout << endl;

      priority_queue<int, vector<int>, greater<int>> q2;
    cout << "default Use Priority Queue" << endl;
     
    q2.push(5);
    q2.push(10);
    q2.push(3);
    q2.push(4);

    while(!q2.empty()){
        cout << q2.top() << " ";
        q2.pop();
     }
     cout << endl;

   

}
int main() {
    usestack();
    useQueue();
    Use_Priority_Queue();
}
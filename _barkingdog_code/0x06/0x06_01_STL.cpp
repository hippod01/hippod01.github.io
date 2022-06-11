#include <bits/stdc++.h>
using namespace std;

int main(void){

    queue<int> q;
    
    q.push(10); // 10
    q.push(20); // 20
    q.push(30); // 30
    cout << q.size() << '\n'; // 3
    if(q.empty()) cout << "q is empty\n";
    else cout << "q is not empty\n"; // q is not empty
    q.pop(); // 20 30
    cout << q.front() << '\n'; // 20
    cout << q.back() << '\n'; // 30
    q.push(40); // 20 30 40
    q.pop(); // 30 40
    cout << q.front() << '\n'; // 30

}
#include <bits/stdc++.h>
using namespace std;

int main(void){

    stack<int> s;
    s.push(10); // 10
    s.push(20); // 10, 20
    s.push(30); // 10, 20, 30
    cout << s.size() << '\n'; // 3
    if(s.empty()) cout << "S is empty\n";
    else cout << "S is not empty\n"; // S is not empty
    s.pop(); // 10, 20
    cout << s.top() << '\n'; // 20
    s.pop(); // 10
    cout << s.top() << '\n'; // 10
    s.pop(); // empty
    if(s.empty()) cout << "S is empty\n"; // S is empty
    //cout << s.top() << '\n'; // runtime error 발생

}
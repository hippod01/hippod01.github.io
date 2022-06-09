#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int n;
    cin >> n;

    while(n--){
        string c;
        cin >> c;

        if(c == "push"){
            int val;
            cin >> val;
            s.push(val);
        } else if(c == "top") {
            if(!s.empty()) cout << s.top() << '\n';
            else cout << -1 << '\n';
        } else if (c == "size"){
            cout << s.size() << '\n';
        } else if (c == "pop"){
            if(s.empty()){
                cout << -1 << '\n';
            } else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (c == "empty"){
            cout << (int)s.empty() << '\n';
        }
            
    }

}
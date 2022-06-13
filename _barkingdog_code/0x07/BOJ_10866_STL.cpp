//https://www.acmicpc.net/problem/10866

#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        string c;
        cin >> c;
        if(c == "push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        } else if(c == "push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
        } else if(c == "pop_front"){
            if(dq.size() != 0){
                cout << dq.front() <<'\n'; 
                dq.pop_front();
            } else cout << -1 <<'\n';

        } else if(c == "pop_back"){
            if(dq.size() != 0){
                cout << dq.back() <<'\n'; 
                dq.pop_back();
            } else cout << -1 <<'\n';

        } else if(c == "size"){
            cout << dq.size() <<'\n';

        } else if(c == "empty"){
            if(dq.size() == 0) cout << 1 <<'\n';
            else cout << 0 <<'\n';

        } else if(c == "front"){    
            if(dq.size() != 0){
                cout << dq.front() <<'\n'; 
            } else cout << -1 <<'\n';

        } else if(c == "back"){
            if(dq.size() != 0){
                cout << dq.back() <<'\n'; 
            } else cout << -1 <<'\n';
        }    

    }
    

    
}
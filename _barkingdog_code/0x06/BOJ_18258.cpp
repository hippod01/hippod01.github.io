#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--){
        string c;
        cin >> c;

        if(c=="push"){
            int x;
            cin >> x;
            q.push(x);

        } else if (c=="pop"){
            if(!q.empty()){
                cout << q.front() <<'\n';
                q.pop();
            } else {
                cout << -1 <<'\n';
            }
        } else if (c=="size"){
            cout << q.size() <<'\n';

        } else if (c == "empty"){
            cout << q.empty() <<'\n';

        } else if (c == "front"){
            if(!q.empty()){
                cout << q.front() <<'\n';
            } else {
                cout << -1 <<'\n';
            }
        } else if (c == "back"){
            if(!q.empty()){
                cout << q.back() <<'\n';
            } else {
                cout << -1 <<'\n';
            }
        }

    }
    


}
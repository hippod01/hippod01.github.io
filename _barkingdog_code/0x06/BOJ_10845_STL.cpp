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
        if(c == "push"){
            int a;
            cin >> a;
            q.push(a);
        } else if (c == "pop"){
            if ( !q.empty() ) {  
                cout << q.front() << '\n';
                q.pop();
            } else {
                cout << -1 << '\n';
            }
        } else if (c == "front"){
            if ( q.empty() ) {
                cout << -1 << '\n';    
            } else {
                cout << q.front() << '\n';
            }
        } else if (c == "back"){
            if ( q.empty() ) {
                cout << -1  << '\n';
            } else {
                cout << q.back() << '\n'; 
            }
            
        } else if (c == "size"){
            cout << q.size() << '\n';
        } else { // empty
            cout << q.empty() << '\n';
        }
        
    }

}
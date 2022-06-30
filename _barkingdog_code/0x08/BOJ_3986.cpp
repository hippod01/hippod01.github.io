#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        stack<int> s;
        bool ans = true;

        string a; 
        cin >> a;
        
        for(int i=0; i<a.size(); i++){
            ans = true;
            if(a[i] == '('){
                s.push(a[i]);
                
            } else if (a[i] == ')') {
                if(s.empty()){
                    ans = false;
                    break;
                } else {
                    s.pop();
                }
            }
        }
        if(!s.empty()){
            ans = false;
        }
        
        if(ans){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}


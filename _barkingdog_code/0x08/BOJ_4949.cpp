#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
   
    
    while(true){
        
        bool tf = true;
        getline(cin, a);
        
        if(a == ".") break;
        stack<int> s;
        
        for(auto c : a){
            // cout << c[i];
            if(c == '(' || c == '['){
                s.push(c);
                
            } else if (c == ')'){
                if(s.empty() || s.top() != '('){ 
                    tf = false;
                    break;
                } else {
                    s.pop();
                }
                
            } else if (c == ']'){
                if(s.empty() || s.top() != '['){
                    tf = false;
                    break;
                } else {
                    s.pop();
                }
            } 
            
        }

        if(!s.empty()) tf = false;
        if(tf) cout << "yes" << '\n';
        else  cout << "no" << '\n';
    }
   

}
#include <bits/stdc++.h>
using namespace std;

const int MX = 10005;
int dat[MX];
int tail =0;
int head =0; 


void push(int x){
    dat[tail++] = x;
}

void pop(){
    head++;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}

int size(){
    return tail-head;
}

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
            push(a);
        } else if (c == "pop"){
            if ( size() != 0 ) {  
                cout << dat[head] << '\n';
                pop();
            } else {
                cout << -1 << '\n';
            }
        } else if (c == "front"){
            if ( size() == 0 ) {
                cout << -1 << '\n';    
            } else {
                cout << front() << '\n';
            }
        } else if (c == "back"){
            if ( size() == 0 ) {
                cout << -1  << '\n';
            } else {
                cout << back() << '\n'; 
            }
            
        } else if (c == "size"){
            cout << size() << '\n';
        } else { // empty
            if( (tail-head) != 0 ) cout << 0 << '\n';
            else cout << 1 << '\n';
        }
        
    }

}
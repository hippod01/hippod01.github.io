//https://www.acmicpc.net/problem/10866

#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int dat[2*MX+1];
int head = MX;
int tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_back(){
    tail--;
}

void pop_front(){
    head++;
}

int size(){
    return tail-head;
}


int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}


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
            push_front(x);
        } else if(c == "push_back"){
            int x;
            cin >> x;
            push_back(x);
        } else if(c == "pop_front"){
            if(size() != 0){
                cout << front() <<'\n'; 
                pop_front();
            } else cout << -1 <<'\n';

        } else if(c == "pop_back"){
            if(size() != 0){
                cout << back() <<'\n'; 
                pop_back();
            } else cout << -1 <<'\n';

        } else if(c == "size"){
            cout << size() <<'\n';

        } else if(c == "empty"){
            if(size() == 0) cout << 1 <<'\n';
            else cout << 0 <<'\n';

        } else if(c == "front"){    
            if(size() != 0){
                cout << front() <<'\n'; 
            } else cout << -1 <<'\n';

        } else if(c == "back"){
            if(size() != 0){
                cout << back() <<'\n'; 
            } else cout << -1 <<'\n';
        }    

    }
    

    
}
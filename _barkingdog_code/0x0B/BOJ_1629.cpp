//https://www.acmicpc.net/problem/1629
//b가 21억, 메모리 초과

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll func1(ll x, ll y, ll z){
    if(y==1) return x % z;
    ll val = func1(x, y/2, z);
    val = val * val % z;
    if(y%2 == 0) return val;
    return val * x % z;
}


int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a,b,c;
    cin >> a >> b >> c;
    
    cout << func1(a,b,c);
}
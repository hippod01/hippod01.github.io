//https://www.acmicpc.net/problem/1074

#include <bits/stdc++.h>
using namespace std;

int func(int n, int r, int c){
    if(n==0) return 0;
    int half = 1<<(n-1); // 2^(n-1), 한 변 길이의 절반
    
    if(r < half && c < half) return func(n-1,r,c); // 1번 사각형
    if(r < half && c>= half) return half*half + func(n-1,r,c-half); // 2번 사각형
    if(r >= half && c < half) return 2*half*half + func(n-1, r-half, c); // 3번 사각형
    return 3*half*half + func(n-1,r-half,c-half); // 4번 사각형
}

int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, r, c;
    cin >> n >> r >> c;
    
    cout << func(n,r,c);
    
}
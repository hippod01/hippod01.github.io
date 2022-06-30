#include <bits/stdc++.h>
using namespace std;

deque<int> dq;
int n = 0;
int m = 0;
int cnt = 0;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        dq.push_back(i);
    }

    while(m--){
        int t;
        cin >> t;
        int idx = find(dq.begin(), dq.end(), t) - dq.begin(); // t가 들어있는 위치
        while(dq.front() != t){
            if(idx < (int)dq.size()-idx){ // 왼쪽이동
                dq.push_back(dq.front());
                dq.pop_front();
            } else { // 오른쪽 이동
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;




}
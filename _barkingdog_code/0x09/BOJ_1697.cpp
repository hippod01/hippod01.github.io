//https://www.acmicpc.net/problem/1697

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, k;
int dist[100005];

int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k; // 수빈 위치, 동생 위치
    
    fill(dist, dist+100005, -1);
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    
    while(!q.empty()){
        
        int cur = q.front();
        q.pop();
        
        for(int nxt : {cur-1,cur+1,2*cur}){
            if(nxt < 0,  nxt > 100000) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            q.push(nxt);
            
        }
        
        
    }
    cout << dist[k];
    
    
}

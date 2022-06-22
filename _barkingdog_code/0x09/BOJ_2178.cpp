//https://www.acmicpc.net/problem/2178

#include <bits/stdc++.h>
using namespace std;

string board[105];
int dist[105][105];
int n, m;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> board[i];
    }
    for(int i=0; i<n; i++){
        fill(dist[i],dist[i]+m,-1);
    }

    queue<pair <int, int> > q;
    q.push({0,0});
    dist[0][0] = 1;

    while(!q.empty()){
        
        auto cur = q.front();
        q.pop();
        
        for(int dir=0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny > m) continue;
            if(board[nx][ny] != '1' || dist[nx][ny] >= 0) continue;
            q.push({nx,ny});
            dist[nx][ny] = dist[cur.first][cur.second] +1;
        }
    }
    cout << dist[n-1][m-1];
}
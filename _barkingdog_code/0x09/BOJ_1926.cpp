//https://www.acmicpc.net/problem/1926

#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[501][501];
int vit[501][501];
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

cin >> n >> m;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> board[i][j];
    }
}

int num = 0; // 그림의 개수
int mx = 0; // 그림의 사이즈 중 제일 큰 것

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        
        if(board[i][j] == 0 || vit[i][j] == 1) continue;
        
        queue<pair <int, int> > q;
        
        q.push({i,j});
        vit[i][j] = 1;
        num += 1;
        int size = 0;
        
        while(!q.empty()){
            
            auto cur = q.front();
            q.pop();
            size++;
            
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                
                if(nx < 0 || nx >= n || ny < 0 || ny >=m ) continue;
                if(board[nx][ny] != 1 || vit[nx][ny]) continue;
                
                vit[nx][ny] = 1;
                q.push({nx,ny});
                
            }
            
        } // 한 개의 그림 끝
        mx = max(mx, size);
        
        
    }
}

cout << num << '\n' << mx;

}
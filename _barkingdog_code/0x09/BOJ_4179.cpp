//https://www.acmicpc.net/problem/4179

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[1005];
int n, m;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int J[1005][1005]; // 지훈이 이동 시간
int f[1005][1005]; // 불의 전파 시간


int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        fill(J[i],J[i]+m, -1);
        fill(f[i],f[i]+m, -1);
    }
    
    for(int i=0; i<n; i++){
        cin >> board[i];
    }
    
    queue<pair<int, int> > q1; // 지훈이 큐
    queue<pair<int, int> > q2; // 불 큐
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 'F'){
                f[i][j] = 0;
                q2.push({i,j});
            }
            if(board[i][j] == 'J'){
                J[i][j] = 0;
                q1.push({i,j});
            }
        }
    }
    
    //불 이동
    while(!q2.empty()){
        auto cur = q2.front();
        q2.pop();
        
        for(int dir = 0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] == '#' || f[nx][ny] >= 0) continue;
            
            q2.push({nx,ny});
            f[nx][ny] = f[cur.X][cur.Y] +1;
            
            
        }
        
    }
    
    //지훈이 이동
    while(!q1.empty()){
        auto cur = q1.front();
        q1.pop();
        
        for(int dir = 0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx < 0 || ny < 0 || nx >= n || ny >= m ) {
                cout << J[cur.X][cur.Y]+1; 
                return 0;
            }
            
            if(board[nx][ny] == '#' || J[nx][ny] >= 0) continue;
            if(f[nx][ny] != -1 && f[nx][ny] <= J[cur.X][cur.Y] +1) continue;
            J[nx][ny] = J[cur.X][cur.Y] +1;
            
            q1.push({nx,ny});
            
        }
        
    }
    
     cout << "IMPOSSIBLE";
     
     cout << '\n';
     for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
             cout << f[i][j] << " ";
         }
         cout << '\n';
     }
     
     cout << '\n';
     for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
             cout << J[i][j] << " ";
         }
         cout << '\n';
     }
    
    
}
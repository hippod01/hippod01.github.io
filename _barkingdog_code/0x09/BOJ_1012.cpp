//https://www.acmicpc.net/problem/1012

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, k;
int board[55][55];
bool vit[55][55];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        
        
        cin >> m >> n >> k;
        
        while(k--){
            int y, x;
            cin >> y >> x; // 배추가 있는 위치
            board[x][y] = 1;
        }

        
        queue<pair <int, int> >  q;
        int num = 0; // 배추흰지렁이 마리 수 
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(board[i][j] != 1 || vit[i][j] ) continue;
                 
                
                q.push({i,j});
                vit[i][j] = 1;
                num++;
                
                while(!q.empty()){
                    auto cur = q.front();
                    q.pop();
                     
                    for(int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                         
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; 
                        if(vit[nx][ny] || board[nx][ny] == 0) continue;
                         
                        
                        vit[nx][ny] = 1;
                        q.push({nx,ny});
                         
                    }
                }
                 
                 
            }
        }
        
        cout << num << '\n';
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                fill(board[i],board[i]+m,0);
                fill(vit[i],vit[i]+m, false);
            }
        }
        
    }
    
    
    
}
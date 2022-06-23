//https://www.acmicpc.net/problem/10026

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
string board[105];
bool vit[105][105];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
queue<pair <int, int> > q; 
queue<pair <int, int> > q2; // 색약큐
int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> board[i];
    }
    
    int num =0;
    int num2 =0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            if(vit[i][j] == 1) continue;
            
            num++;
            q.push({i,j});
            vit[i][j] = 1;
            char color = board[i][j];
            
            while(!q.empty()){
    
                auto cur = q.front();
                q.pop();
                
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    
                    if( nx < 0 || nx >= n || ny < 0 || ny >= n ) continue;
                    if( vit[nx][ny] || board[nx][ny] != color ) continue;
                    
                    vit[nx][ny] = 1;
                    q.push({nx,ny});
                    
                }
            }
            
            
        }
    }
    
    for(int i=0; i<n; i++){
        fill(vit[i],vit[i]+n,0);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 'G'){
                board[i][j] = 'R';
            }
            
        }
    }
    
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            if(vit[i][j] == 1) continue;
            
            num2++;
            q2.push({i,j});
            vit[i][j] = 1;
            char color = board[i][j];
            
            while(!q2.empty()){
    
                auto cur = q2.front();
                q2.pop();
                
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    
                    if( nx < 0 || nx >= n || ny < 0 || ny >= n ) continue;
                    if( vit[nx][ny] || board[nx][ny] != color ) continue;
                    
                    vit[nx][ny] = 1;
                    q2.push({nx,ny});
                    
                }
            }
            
            
        }
    }
    
    cout << num << " " << num2;
    
}
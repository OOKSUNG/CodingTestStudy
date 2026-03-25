#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int N;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};


void bfs(char arr[100][100], bool visited[100][100], int& ans){
    queue<pair<int, int>> q;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(visited[i][j] == true) continue;
            q.push({i, j});
            ans++;
            visited[i][j] = true;
            while(!q.empty()){
                pair<int, int> cur = q.front();
                q.pop();
                int next_r, next_c;
                for(int k = 0; k < 4; k++){
                    next_r = cur.first + dr[k];
                    next_c = cur.second + dc[k];
                    
                    if(next_r < 0 || next_r >= N || next_c < 0|| next_c >= N) continue;
                    if(!visited[next_r][next_c] && arr[next_r][next_c] == arr[i][j]){
                        q.push({next_r, next_c});
                        visited[next_r][next_c] = true; 
                    }
                }
                
            }
            
        }
    }
}

int main() {
    char arr[100][100];
    char RGarr[100][100];
    bool visited[100][100] = {false};
    bool RGvisited[100][100] = {false};
    
    int normalAns = 0;
    int RGAns = 0;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            char x;
            cin >> x;
            arr[i][j] = x;
            RGarr[i][j] = x;
            if(x == 'G') RGarr[i][j] = 'R';
            
        }
    }
    
    bfs(arr, visited, normalAns);
    bfs(RGarr, RGvisited, RGAns);
    
    
    cout << normalAns << ' ' << RGAns;
    
    return 0;
}
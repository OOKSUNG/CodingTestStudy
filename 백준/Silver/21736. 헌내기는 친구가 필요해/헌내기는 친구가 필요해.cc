#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int N, M;
int ans = 0;
char arr[600][600];
int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void bfs(int sr, int sc){
    queue<pair<int, int>> q;
    q.push({sr, sc});
    arr[sr][sc] = 'V';
    
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nr = cur.first + dr[i];
            int nc = cur.second + dc[i];
            if(nr < 0 || nr >= N || nc < 0 || nc >= M) continue;
            if(arr[nr][nc] == 'O' || arr[nr][nc] == 'P'){
                if(arr[nr][nc] == 'P') ans++;
                q.push({nr, nc});
                arr[nr][nc] = 'V';
            }
        }
    }
}


int main() {
    int sr, sc;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'I'){
                sr = i;
                sc = j;
            }
        }
    }
    
    bfs(sr, sc);
    if(ans) cout << ans;
    else cout << "TT";
    return 0;
}

#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int N, M, r, c;
int arr[1001][1001];
int ans[1001][1001];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int sum = 0;

void bfs(int r, int c){
    queue<pair<int, int>> q;
    q.push({r, c});
    while(!q.empty()){
        pair<int, int> cur = q.front();
        arr[cur.first][cur.second] = -1;
        q.pop();
        for(int i = 0; i < 4; i++){
            int next_r = cur.first + dr[i];
            int next_c = cur.second + dc[i];
            if(next_r > 0 && next_r <= N && next_c > 0 && next_c <= M && arr[next_r][next_c] == 1){
                arr[next_r][next_c] = -1;
                q.push({next_r, next_c});
                // 원본 + 1을 한다. ans에
                ans[next_r][next_c] = ans[cur.first][cur.second] + 1;
            }
            
        }
    }
}

int main() {
    
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            ans[i][j] = -1;
            cin >> arr[i][j];
            if(arr[i][j] == 2) {
                r = i; 
                c = j;
                ans[i][j] = 0;
            }
        }
    }
    
    bfs(r, c);
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(arr[i][j] == 0){
                cout << 0 << ' ';
            }
            else{
                cout << ans[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}
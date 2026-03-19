#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int N, M;

int arr[101][101];
int ans[101][101];

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

void bfs(){
    queue<pair<int, int>> q;
    q.push({1, 1});
    arr[1][1] = -1;
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int next_r = cur.first + dr[i];
            int next_c = cur.second + dc[i];
            if(next_r < 1 || next_r > N || next_c < 1 || next_c > M ){
                continue;
            }
            if(arr[next_r][next_c] == 1){
                q.push({next_r, next_c});
                arr[next_r][next_c] = -1;
                ans[next_r][next_c] = ans[cur.first][cur.second] + 1;
            }
        }
    }
    
}

int main() {

    cin >> N >> M;
    
    ans[1][1] = 1;
    
    for(int i = 1; i <= N; i++ ){
        string s;
        cin >> s;
        for(int j = 0; j < M; j++){
           arr[i][j + 1] = s[j] -'0';
        }
    }
    
    bfs();
    
    cout << ans[N][M];
    
    return 0;
}
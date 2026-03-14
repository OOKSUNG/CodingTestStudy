#include <iostream>

using namespace std;

int N, E;
int ans = 0;
int graph[101][101] = {0};
bool visited[101];

void dfs(int node){
    visited[node] = true;
    for(int next = 1; next <= N; next++){
        if(!visited[next] && graph[node][next]){
            dfs(next);
        }
    }
}

int main() {
    cin >> N >> E;
    for(int i = 1; i <= E; i++){
        int n, e;
        cin >> n >> e;
        graph[n][e] = 1;
        graph[e][n] = 1;
    }
    dfs(1);
    
    for(int i = 1; i <= N; i++){
        if(visited[i]) ans++; 
    }
    
    cout << ans - 1;
    
    return 0;
}
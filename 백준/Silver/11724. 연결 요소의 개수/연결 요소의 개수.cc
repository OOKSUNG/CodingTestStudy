#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<vector<int>> graph(1001);
bool visited[1001];
int ans = 0;


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= M; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1; i <= N; i++){
        queue<int> q;
        if(!visited[i]){
            visited[i] = true;
            q.push(i);
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for(int j : graph[cur]){
                    if(!visited[j]){
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
            ans++;
        }
    }
    
    cout << ans;
    return 0;
}
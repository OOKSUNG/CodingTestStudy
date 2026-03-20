#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
int N;
int ans[100][100];
vector<vector<int>> v;

void bfs(){
    queue<int> q;
    for(int i = 0; i < N; i++){
        q.push(i);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            
            for(int j = 0; j < (int)v[cur].size(); j++){
                if(ans[i][v[cur][j]] != 1) {
                    q.push(v[cur][j]);
                    ans[i][v[cur][j]] = 1;
                }
            }
        }
    }
}

int main() {
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int x;
            cin >> x;
            if(x) v[i].push_back(j);
        }
    }
    
    bfs();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    
    
    return 0;
}
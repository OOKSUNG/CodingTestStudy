#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

void DFS(int x) {
    stack<int> st;
    st.push(x);

    while (!st.empty()) {
        int v = st.top();
        st.pop();

        if (!visited[v]) {
            visited[v] = true;
            cout << v << ' ';

            for (int i = graph[v].size() - 1; i >= 0; i--) {
                int next = graph[v][i];
                if (!visited[next]) {
                    st.push(next);
                }
            }


        }
    }

}

void BFS(int x) {
    queue<int> q;
    fill(visited, visited + 1001, false);

    visited[x] = true;
    q.push(x);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';

        for (int i : graph[cur]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, V;
    cin >> N >> M >> V;


    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(V);
    cout << '\n';
    BFS(V);

}
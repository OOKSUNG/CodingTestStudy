#include <iostream>
#include <stack>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--){
        int map[50][50] = {0};
        int ans = 0;
        int M, N, K;
        cin >> M >> N >> K;
        for(int i = 0; i < K; i++){
            int x, y;
            cin >> x >> y;
            map[y][x] = 1;
        }
        stack<pair<int,int>> st;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == 1){
                    map[i][j] = -1;
                    st.push({i,j});
                    //반복하면서
                    // i-1 j, i j-1, i+1 j i j+1 : 검사
                    while(!st.empty()){
                        int f = st.top().first;
                        int s = st.top().second;
                        st.pop();
                        
                        for(int d = 0; d < 4; d++){
                            int nf = f + dy[d];
                            int ns = s +dx[d];
                            if(nf < 0 || ns < 0 || nf >= N || ns >= M ) continue;
                            if(map[nf][ns] == 1){
                                map[nf][ns] = -1;
                                st.push({nf, ns});
                            }
                        }
                        
                    }
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

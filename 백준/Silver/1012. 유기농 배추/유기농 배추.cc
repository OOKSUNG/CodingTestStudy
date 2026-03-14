#include <iostream>
#include <stack>

using namespace std;

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
                        if(f > 0 && map[f - 1][s] == 1){
                            map[f - 1][s] = -1;
                            st.push({f - 1, s});
                        }
                        if(s > 0 && map[f][s - 1] == 1){
                            map[f][s - 1] = -1;
                            st.push({f, s - 1});
                        }
                        if(f < N - 1 && map[f + 1][s] == 1){
                            map[f + 1][s] = -1;
                            st.push({f + 1, s});
                        }
                        if(s < M - 1 && map[f][s + 1] == 1){
                            map[f][s + 1] = -1;
                            st.push({f, s + 1});
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
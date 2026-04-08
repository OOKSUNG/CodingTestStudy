#include <iostream>
#include <algorithm>
#define INF 5001;

using namespace std;
int N, M;
int dp[101][101];
int MIN = INF;

int main() {
    
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            dp[i][j] = INF;
            if(i == j) dp[i][j] = 0;
        }
    }
    
    
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        dp[x][y] = 1;
        dp[y][x] = 1;
    }
    
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == j) continue;
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= N; i++){
        int sum = 0;
        for(int j = 1; j <= N; j++){
            sum += dp[i][j];
        }
        if(sum < MIN) {
            MIN = sum;
            ans = i;
        }
    }
    cout << ans;
}
#include <iostream>
#include <algorithm>

using namespace std;

int dp[5001];

int main() {
    fill(dp, dp + 5001, 1e9);
    
    int N;
    cin >> N;
    dp[0] = 0;
    
    for(int i = 1; i <= N; i++){
        if (i >= 3)
            dp[i] = min(dp[i], dp[i - 3] + 1);
        if (i >= 5)
            dp[i] = min(dp[i], dp[i - 5] + 1);
    }
    if(dp[N] == 1e9) cout << -1;
    else cout << dp[N];
    return 0;
}
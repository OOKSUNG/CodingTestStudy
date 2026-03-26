#include <iostream>
#include <algorithm>

using namespace std;
int dp[5000];

int main() {
    fill(dp, dp + 5000, -1);
    
    int N;
    cin >> N;
    dp[3] = dp[5] = 1;
    
    for(int i = 6; i <= N; i++){
        if(dp[i - 3] != -1){
            dp[i] = dp[i - 3] + 1;
        }
        if(dp[i - 5] != -1){
            if(dp[i] == -1) dp[i] = dp[i - 5] + 1;
            else dp[i] = min(dp[i], dp[i - 5] + 1);
        }
    }
    
    cout << dp[N];
    return 0;
}
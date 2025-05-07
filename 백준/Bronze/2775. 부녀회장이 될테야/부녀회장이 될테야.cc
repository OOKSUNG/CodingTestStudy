#include <iostream>

long long int dp[15][15];

using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);

    dp[0][1] = 1;
    for (int i = 1; i < 15; i++) {
        dp[0][i] = i;
        dp[i][1] = 1;
        //cout << "dp[" << 0 << "][" << i << "] = " << dp[0][i] << '\n';
    }
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            //cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << '\n';
        }

    }

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << '\n';
    }
    
}
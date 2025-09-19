#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> dp(100001, vector<long long >(3, 0));

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[0] = { 0, 0, 0 };
    dp[1] = { 1, 0, 0 };
    dp[2] = { 0, 1, 0 };
    dp[3] = { 1, 1, 1 };


    for (int i = 4; i <= 100000; i++) {
        dp[i][0] = (dp[i - 1][1] + dp[i - 1][2]) % 1000000009;
        dp[i][1] = (dp[i - 2][0] + dp[i - 2][2]) % 1000000009;
        dp[i][2] = (dp[i - 3][0] + dp[i - 3][1]) % 1000000009;
    }

    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << (dp[N][0] + dp[N][1] + dp[N][2]) % 1000000009 << '\n';
    }
}

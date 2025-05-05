#include <iostream>

long long int dp[101];
using namespace std;
int main()
{
    int T;
    cin >> T;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;

    for (int i = 5; i < 101; i++) {
        dp[i] = dp[i - 5] + dp[i - 1];
    }

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << dp[N - 1] << '\n';
    }
}

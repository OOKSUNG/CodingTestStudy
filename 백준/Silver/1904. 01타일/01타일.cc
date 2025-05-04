#include <iostream>
#include <algorithm>


int dp[1000001];
using namespace std;
int main()
{
    int N;
    cin >> N;

    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < N; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= 15746;
    }
    cout << dp[N - 1] % 15746;
}

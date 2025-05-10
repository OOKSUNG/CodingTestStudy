#include <iostream>

unsigned long long int dp[1000001];
using namespace std;
int main()
{
    dp[0] = 1; dp[1] = 2; dp[2] = 4;
    for (int i = 3; i < 1000001; i++) {
        dp[i] = dp[i - 1] % 1000000009 + dp[i - 2] % 1000000009 + dp[i - 3] % 1000000009;
    }

    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int temp;
        cin >> temp;
        cout << dp[temp - 1] % 1000000009 << '\n';
    }
}
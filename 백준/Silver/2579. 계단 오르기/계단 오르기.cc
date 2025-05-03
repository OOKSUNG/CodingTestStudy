#include <iostream>
#include <algorithm>

int A[301];
int dp[301];
using namespace std;
int main()
{
    bool isSe = false;
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A[i];
    }

    dp[0] = A[0];
    dp[1] = A[0] + A[1];
    dp[2] = max(A[1] + A[2], A[0] + A[2]);

    for (int i = 3; i < T; i++) {
        dp[i] = max(dp[i - 2] + A[i], dp[i - 3] + A[i - 1] + A[i]);
    }
    if (T == 0) cout << 0;
    else cout << dp[T - 1];
}

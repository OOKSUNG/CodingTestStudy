#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> dp(N + 1, 1);
    for(int i = 1; i <= N; i++) {
        cin >> dp[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i / 2 + 1; j++) {
            dp[i] = min(dp[i], dp[i - j] + dp[j]);
        }
    }

    cout << dp[N];

}
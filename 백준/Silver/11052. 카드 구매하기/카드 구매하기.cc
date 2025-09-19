#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> dp(N + 1);
    vector<int> a(N);

    for (int i = 1; i <= N; i++) {
        cin >> dp[i];
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j < (i / 2 + 1); j++) {
            
            dp[i] = max(dp[i], dp[i - j] + dp[j]);
            
        }
    }
    cout << dp[N];
}

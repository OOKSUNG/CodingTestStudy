#include <iostream>
#include <algorithm>

using namespace std;

int sco[301];
int dp[301];

int main() {
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> sco[i];
    }
    
    dp[1] = sco[1];
    dp[2] = sco[2] + sco[1];
    
    for(int i = 3; i <= N; i++){
        dp[i] = max(dp[i - 2] + sco[i], dp[i - 3] + sco[i - 1] + sco[i]);
    }
    
    cout << dp[N];
    return 0;
}
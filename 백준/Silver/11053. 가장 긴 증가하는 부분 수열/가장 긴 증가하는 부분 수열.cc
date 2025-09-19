#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> dp(N,1);
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(),dp.end());
}
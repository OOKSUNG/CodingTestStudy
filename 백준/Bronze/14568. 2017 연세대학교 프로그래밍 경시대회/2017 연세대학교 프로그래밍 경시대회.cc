#include <iostream>

using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(n != k + j + i || i%2 != 0 || j < k + 2) continue;
                ans++;
            }
        }
    }
    cout << ans;
    
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    
    int ans = 0;
    
    for(int i = a; i <= b; i++){
        int d = i - k;
        if(d >= -x && d <= x){
            ans++;
        }
    }
    
    if (ans) cout << ans;
    else cout << "IMPOSSIBLE";
    
    return 0;
}
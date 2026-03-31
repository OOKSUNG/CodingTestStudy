#include <iostream>

using namespace std;

int N, r, s;
long long int ans = 0;

void recur(int N, int y, int x){
    int half = N/2;
    long long area = (long long)half*half;
 
    if(N == 1) {
        return;
    }
    if(r < y + half && s < x + half){
        recur(half, y, x);    
    }
    else if(r < y + half && s >= x + half){
        ans += area;
        recur(half, y, x + half);
    }
    else if(r >= y + half && s < x + half){
        ans += 2* area;
        recur(half, y + half, x);    
    }
    else{
        ans += 3*area;
        recur(half, y + half, x + half);    
    }
}


int main() {
    cin >> N >> r >> s;
    recur(1 << N, 0, 0);
    cout << ans;
    return 0;
}
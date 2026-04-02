#include <iostream>
#include <algorithm>

using namespace std;

int bin(int n, int k){
    int B[30][30];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= min(i,k); j++){
            if(j == 0 || j == i) B[i][j] = 1;
            else B[i][j] = B[i - 1][j - 1] + B[i - 1][j];
        }
    }
    return B[n][k];
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int M, N;
    cin >> M >> N;
    cout << bin(N, M) << '\n';
    }

    return 0;
}

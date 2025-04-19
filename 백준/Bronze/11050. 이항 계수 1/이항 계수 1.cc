#include <iostream>

using namespace std;
int fac(int x) {
    for (int i = x - 1; i > 0; i--) {
        x *= i;
    }
    return x;
}
int C(int N, int K) {
    if (K == 0) return 1;
    else if (N == K) return 1;
    else return fac(N) / (fac(N - K) * fac(K));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    
    cout << C(N,K);
}
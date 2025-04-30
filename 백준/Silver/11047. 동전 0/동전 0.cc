#include <iostream>

using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int* a = new int[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        if (K / a[i]) {
            sum += K / a[i];
            K = K % a[i];
        }
    }
    if (K != 0) cout << 0;
    else cout << sum;
}

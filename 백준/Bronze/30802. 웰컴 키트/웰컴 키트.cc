#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int a[6];
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    int T, P;
    cin >> T >> P;
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        if (a[i] % T && a != 0) sum += a[i] / T + 1;
        else sum += a[i] / T;
    }
    cout << sum << '\n';
    cout << N / P << ' ' << N % P;
}
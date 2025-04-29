#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    cin >> N;

    int max = round(N * 0.15);
    int sum = 0;

    int* a = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a, a + N);
    for (int i = max; i < N - max; i++) {
        sum += a[i];
    }

    if (N == 0) cout << 0;
    else cout << round( (1.0 *sum) / (N - (2 * max)));
    delete[] a;
}
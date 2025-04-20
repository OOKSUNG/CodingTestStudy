#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, sum = 0;
    cin >> N;
    int* ary = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> ary[i];
    }
    sort(ary, ary + N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            sum += ary[j];
        }
    }
    cout << sum;
}
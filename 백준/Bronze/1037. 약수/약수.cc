#include <iostream>

using namespace std;
int main()
{
    int N, min = 1000001, max = 2;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (N == 1) min = max = a;
        if (a >= max) max = a;
        if (a < min) min = a;
    }
    cout << min * max;
}
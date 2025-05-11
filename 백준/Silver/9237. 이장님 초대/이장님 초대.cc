#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int i, int j) {
    return j < i;
}

int main() {
    int N, max = 0;
    cin >> N;
    int* a = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a,a + N, compare);
    for (int i = 0; i < N; i++) {
        a[i] += i;
        if (a[i] > max) max = a[i];
    }
    cout << max + 2;
}
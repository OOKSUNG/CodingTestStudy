#include <iostream>
#include <algorithm>

using namespace std;
int fn(int x, long long *a, int n) {
    int first = 0;
    int max = n - 1;
    int mid = 0; 
    while (first < max) {
        mid = (first + max) / 2;
        if (x == a[mid]) return 1;
        else if (x > a[mid]) first = mid + 1;
        else if (x < a[mid]) max = mid - 1;
    }
    if (a[first] == x) return 1;
    else return 0;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    cin >> N;
    long long * A = new long long[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        cout << fn(x, A, N) << '\n';
    }
}
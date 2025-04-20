#include <iostream>
#include <cmath>

using namespace std;
void fn(int M, int N) {
    for (int i = M; i <= N; i++) {
        int j;
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) break;
        }
        if (i != 1 && j > sqrt(i)) cout << i << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M, N;
    cin >> M >> N;
    
    fn(M,N);
}
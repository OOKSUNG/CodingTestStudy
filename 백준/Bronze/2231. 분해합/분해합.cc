#include <iostream>

using namespace std;
int num(int x) {
    if (x < 10) return 10;
    else if (x < 100) return 100;
    else if (x < 1000) return 1000;
    else if (x < 10000) return 10000;
    else if (x < 100000) return 100000;
    else if (x < 1000000) return 1000000;
    else if (x < 10000000) return 10000000;
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int A = num(N);
        int sum = i;
        while (A >= 10) {
            int tem = 0;
            tem += (i % A) - (i % (A/10));
            sum += tem / (A/10);
            A /= 10;
        }
        if (sum == N) {
            cout << i;
            break;
        }
        else if (i == N) {
            cout << 0;
        }
    }
}
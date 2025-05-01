#include <iostream>

using namespace std;
int fib(int n, int &sum) {
    if (n == 1 or n == 2) {
        sum++;
        return 1;
    }
    else return fib(n - 1, sum) + fib(n - 2, sum);
}

int fibonacci(int n, int *f) {
    int sum = 0;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        sum++;
    }
    return sum;
}

int main()
{
    int n, sum = 0;
    cin >> n;
    int *f = new int[n + 2];
    fib(n,sum);
    cout << sum << ' ';
    cout << fibonacci(n, f);

    delete[] f;
}

#include <iostream>

using namespace std;
long long Fibo(long long x) {
    if (x == 0) return 1;
    return x * Fibo(x - 1);
}

int main()
{
    long long N;
    cin >> N;
    cout << Fibo(N);
}
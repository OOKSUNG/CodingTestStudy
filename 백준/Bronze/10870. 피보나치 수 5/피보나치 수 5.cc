#include <iostream>

using namespace std;
int Fibo(int x) {
    if (x == 0) return 0;
    else if (x == 1) return 1;
    else if (x == 2) return 1;
    return Fibo(x - 1) + Fibo(x - 2);
}

int main()
{
    int N;
    cin >> N;
    cout << Fibo(N);
}
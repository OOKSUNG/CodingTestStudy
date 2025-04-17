#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b) {
    long long int n = 0;
    if (b == 0) return a;
    else n = a % b;
    return gcd(b, n);
}

long long int lcm(long long int a,long long int b) {
    long long int n = gcd(a, b);
    return a * b / n;
}

int main()
{
    long long int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}
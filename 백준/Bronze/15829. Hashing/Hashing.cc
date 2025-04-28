#include <iostream>
#include <cmath>
#define mod 1234567891
using namespace std;
int main()
{
    unsigned long long N;
    unsigned long long  H = 0, r = 1;
    cin >> N;
    char* A = new char[N + 1];
    cin >> A;
    for (int i = 0; i < N; i++) {
        H += (A[i] - 'a' + 1) * r;
        H %= mod;        
        r = (r * 31) % mod;
    }

    cout << H;

    delete[] A;
}
#include <iostream>

using namespace std;
int main()
{
	unsigned long long int N, M, a;
	cin >> N >> M;
	if (N < M) a = N;
	else a = M;
	if (!(a % 2)) cout << a / 2;
	else cout << (a - 1) / 2;
}
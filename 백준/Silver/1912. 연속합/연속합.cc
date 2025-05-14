#include <iostream>
#include <algorithm>
using namespace std;

int Arr[100001];
int DP[100001];


int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> Arr[i];

	DP[0] = Arr[0];
	int answer = DP[0];
	for (int i = 1; i < N; i++) {
		DP[i] = max(Arr[i], Arr[i] + DP[i - 1]);
		answer = max(answer, DP[i]);
	}
	cout << answer;
}
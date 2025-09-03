#include <iostream>
#include <queue>

using namespace std;
int main() {
	int K, N, tem = 0;
	cin >> N >> K;
	queue<int> q;

	cout << '<';
	for (int i = 1; i < N + 1; i++) {
		q.push(i);
	}
	for (int i = 1; !q.empty(); i++) {
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();

		if (q.size() > 1) cout << ", ";
		q.pop();
	}
	cout << '>';
} 
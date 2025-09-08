#include <iostream>
#include <queue>

using namespace std;
int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int n, index, ans = 0;;
		cin >> n >> index;
		for (int j = 0; j < n; j++) {
			int tem;
			cin >> tem;
			q.push({ j, tem });
			pq.push(tem);
		}
		while (!q.empty()) {
			if (q.front().second == pq.top()) {
				if (q.front().first == index) {
					cout << ++ans << '\n';
					break;
				}
				else {
					q.pop();
					pq.pop();
					ans++;
				}
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
	}
} 
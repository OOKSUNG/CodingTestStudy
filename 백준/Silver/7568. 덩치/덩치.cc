#include <iostream>
#include <vector>

using namespace std;
int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> v;
	vector<int> vRate(N, 1);

	for (int i = 0; i < N; i++) {
		int w, h;
		cin >> w >> h;

		v.push_back({ w, h });
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (v[i].first > v[j].first && v[i].second > v[j].second) {
				vRate[j]++;
			}
			if (v[j].first > v[i].first && v[j].second > v[i].second) {
				vRate[i]++;
			}
		}
	}
	for (int i : vRate) {
		cout << i << ' ';
	}

} 
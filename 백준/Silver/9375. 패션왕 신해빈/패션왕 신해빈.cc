#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
	int T, n;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		map<string, int> m;
		int sum = 1;
		for (int j = 0; j < n; j++) {
			string val, key;
			cin >> val >> key;
			if (m.find(key) != m.end()) (m.find(key)->second)++;
			else m.insert({ key, 1 });
		}
		for (auto it = m.begin(); it != m.end(); it++) {
			sum *= ((it->second) + 1);
		}
		cout << sum - 1 << "\n";
	}
} 
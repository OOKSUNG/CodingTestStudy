#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;
int main() {
	int N, M;
	map<string, string> m;
	vector<string> ans;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string key, value;
		cin >> key >> value;
		m.insert({key, value});
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		if (m.find(str) != m.end()) {
			ans.push_back((m.find(str)->second));
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
} 
#include <iostream>
#include <string>
#include <set>

using namespace std;
int main() {
	int N, M, sum = 0;
	set<string> s;
	set<string> ans;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		if (s.find(str) != s.end()) {
			sum++;
			ans.insert(str);
		}
	}
	cout << sum << '\n';
	for (set<string>::iterator i = ans.begin(); i != ans.end(); i++) {
		cout << *i << '\n';
	}
} 
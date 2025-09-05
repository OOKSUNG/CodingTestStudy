#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
	
	list<int> l;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push_back") {
			int n;
			cin >> n;
			l.push_back(n);
		}
		else if (str == "push_front") {
			int n;
			cin >> n;
			l.push_front(n);
		}
		else if (str == "pop_front" && !l.empty()) {
			cout << l.front() << '\n';
			l.pop_front();
		}
		else if (str == "pop_back" && !l.empty()) {
			cout << l.back() << '\n';
			l.pop_back();
		}
		else if (str == "size") {
			cout << l.size() << '\n';
		}
		else if (str == "empty") {
			cout << l.empty() << '\n';
		}
		else if (str == "front" && !l.empty()) {
			cout << l.front() << '\n';
		}
		else if (str == "back" && !l.empty()) {
			cout << l.back() << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
} 
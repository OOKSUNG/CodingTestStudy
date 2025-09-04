#include <iostream>
#include <list>

using namespace std;
int main() {
	int N = 0, M;
	list<char> l;
	list<char>::iterator li;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		l.push_back(str[i]);
	}
	li = l.end();
	cin >> M;
	for (int i = 0; i < M; i++) {
		char com;
		cin >> com;
		if (com == 'L' && li != l.begin()) li--;
		else if (com == 'D' && li != l.end()) li++;
		else if (com == 'B' && li != l.begin()) li = l.erase(--li);
		else if (com == 'P') {
			char P;
			cin >> P;
			l.insert(li, P);
		}
	}
	while (!l.empty()) {
		cout << l.front();
		l.pop_front();
	}
} 
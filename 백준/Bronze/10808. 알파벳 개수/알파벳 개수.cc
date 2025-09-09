#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
	string str;
	vector<int> v(26, 0);
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		v[str[i] - 'a']++;
	}
	for (int i : v) {
		cout << i << ' ';
	}
} 
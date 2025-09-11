#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
	string S;
	vector<string> v;
	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		string str;
		for (int j = i; j < S.size(); j++) {
			str += S[j];
		}
		v.push_back(str);
	}
	std::sort(v.begin(), v.end());

	for (auto i : v) {
		cout << i << "\n";
	}
} 
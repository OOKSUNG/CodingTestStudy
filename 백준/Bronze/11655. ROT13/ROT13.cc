#include <iostream>
#include <string>

using namespace std;
int main() {
	string S;
	string ans;
	getline(cin, S);
	
	for (int i = 0; i < S.size(); i++) {
		if (S[i] < 'n' && S[i] >= 'a' && S[i] <= 'z') ans += (S[i] + 13);
		else if (S[i] < 'N' && S[i] <= 'Z' && S[i] >= 'A') ans += (S[i] + 13);
		else if (S[i] >= 'n' && S[i] <= 'z' && S[i] >= 'a') ans += (S[i] - 13);
		else if (S[i] >= 'N' && S[i] <= 'Z' && S[i] >= 'A') ans += (S[i] - 13);
		else ans += S[i];
	}

	cout << ans;
} 
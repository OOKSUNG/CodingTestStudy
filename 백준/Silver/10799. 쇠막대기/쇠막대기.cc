#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	string str;
	stack<char> st;
	int N = 0;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			st.push(str[i]);
		}
		else if (str[i] == ')' && str[i - 1] != ')') {
			st.pop();
			N += st.size();
		}
		else if (str[i] == ')' && str[i - 1] == ')') {
			st.pop();
			N += 1;
		}
	}
	cout << N;
} 
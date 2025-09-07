#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	string str;
	stack<char> st;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'z') cout << str[i];
		else if (str[i] == '(') {
			st.push(str[i]);
		}
		else if (str[i] == ')') {
			while (true) {
				if (st.top() == '(') {
					st.pop();
					break;
				}
				cout << st.top();
				st.pop();
			}
		}



		else if (str[i] == '+' || str[i] == '-') {
			while (!st.empty() && (st.top() == '*' || st.top() == '/' || st.top() == '-' || st.top() == '+')) {
				cout << st.top();
				st.pop();
			}
			st.push(str[i]);
		}
		else if (str[i] == '*' || str[i] == '/') {
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
				cout << st.top();
				st.pop();
			}
			st.push(str[i]);
		}
	
		
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	
} 
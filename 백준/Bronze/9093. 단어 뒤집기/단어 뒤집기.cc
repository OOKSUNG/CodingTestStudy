#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;
int main() {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		stack<char> st;
		queue<char> q;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				
				while (!st.empty()) {
					q.push(st.top());
					st.pop();
				}
				q.push(' ');
			}
			
			else st.push(str[i]);
		}
		
		while (!st.empty()) {
			q.push(st.top());
			st.pop();
		}

		while (!q.empty()) {
			cout << q.front();
			q.pop();
		}

		cout << "\n";
	}
} 
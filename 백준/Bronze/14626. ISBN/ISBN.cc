#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	cin >> str;

	for (int s = 0; s < 10; s++) {
		int sum = 0;
		for (int i = 0; i < 13; i++) {
			int tem = 0;
			
			if (str[i] == '*') tem = s;
			else tem = str[i] - '0';

			if (i % 2 == 0) sum += tem;
			else sum += 3 * tem;
		}
		
		if (sum % 10 == 0) {
			cout << s;
			break;
		}
	}
} 
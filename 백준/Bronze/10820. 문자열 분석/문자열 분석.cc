#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	
	while(getline(cin, str)){
		int Sn = 0, Bn = 0, N = 0, Bl = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				Sn++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z') {
				Bn++;
			}
			else if (str[i] >= '0' && str[i] <= '9') {
				N++;
			}
			else if (str[i] == ' ') {
				Bl++;
			}
		}
		cout << Sn << ' ' << Bn << ' ' << N << ' ' << Bl << ' ' << '\n';
		
	}
} 
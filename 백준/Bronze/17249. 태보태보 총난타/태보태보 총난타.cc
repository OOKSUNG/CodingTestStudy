#include <iostream>

using namespace std;
int main()
{
    string str;
    cin >> str;
    int L = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '@') L++;
        if (str[i] == '0') {
            cout << L << ' ';
            L = 0;
        }
    }
    cout << L;
}
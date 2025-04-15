#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) return a < b;
    else return a.length() < b.length();
}

int main()
{
    int N;
    cin >> N;
    string str[20000];
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    sort(str, str + N, compare );
    for (int i = 0; i < N; i++) {
        if (str[i] == str[i + 1]);
        else cout << str[i] << '\n';
    }
}
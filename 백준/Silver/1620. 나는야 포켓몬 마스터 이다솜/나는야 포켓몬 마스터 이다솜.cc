#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    unordered_map<string, int> m;
    vector<string> v;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        string str;
        cin >> str;
        m.insert({ str, i });
        v.push_back(str);
    }

    for (int i = 1; i <= M; i++) {
        string str;
        cin >> str;
        if (isdigit(str[0])) {
            int num = stoi(str);
            cout << v[num - 1] << '\n';
        }
        else {
            cout << m[str] << '\n';
        }
    }
}
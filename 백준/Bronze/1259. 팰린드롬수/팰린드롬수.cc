#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        char N[100000];
        bool isPel = true;
        cin >> N;
        if (N[0] == '0') break;
        for (int i = 0; i < strlen(N) / 2; i++) {
            if (N[i] != N[strlen(N) - 1 - i]) isPel = false;
        }
        if (isPel) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}
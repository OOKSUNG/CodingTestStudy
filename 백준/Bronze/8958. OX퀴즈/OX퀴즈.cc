#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        char S[81];
        cin >> S;
        int sum = 0;
        int tem = 1;
        for (int j = 0; j < strlen(S); j++) {
            if (S[j] == 'O') {
                sum += tem++;
            }
            else {
                tem = 1;
            }
        }
        cout << sum << '\n';
    }
}
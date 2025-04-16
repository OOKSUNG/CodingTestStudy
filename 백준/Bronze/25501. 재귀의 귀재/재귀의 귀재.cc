#include <iostream>
#include <cstring>

using namespace std;
int recursion(const char *s, int l, int r, int& num) {
    num++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, num);
}

int isPalindrome(const char* s, int &num) {
    return recursion(s, 0, strlen(s) - 1, num);
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        char S[1001];
        cin >> S;
        int num = 0;
        cout << isPalindrome(S, num) << ' ' << num << '\n';
    }
}
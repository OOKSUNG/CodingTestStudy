#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        char S[51];
        cin >> S;
        stack<int> st;
        bool isVPS = true;
        for (int i = 0; i < strlen(S); i++) {
            if (S[i] == '(') st.push(S[i]);
            else if (st.empty()) {
                isVPS = false;
                break;
            }
            else st.pop();
        }
        if (isVPS && st.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
    while (true) {
        char s[102];
        stack<char> st;
        cin.get(s, 102, '.');
        cin.get();cin.ignore();
        if (s[0] == '\0') break;
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                n1++;
            }
            else if (s[i] == '[') {
                st.push(s[i]);
                n3++;
            }
            else if (s[i] == ')') {
                n2++;
                if(!st.empty() && st.top() == '(')
                    st.pop();
            }
            else if (s[i] == ']') {
                n4++;
                if (!st.empty() && st.top() == '[')
                    st.pop();
            }
        }
        if (st.empty() && n1 == n2 && n3 == n4) cout << "yes" << '\n';
        else cout << "no" << '\n';
    } 
}
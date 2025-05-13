#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool istag = false;
    stack<char> stack;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            while (!stack.empty()) {
                cout << stack.top();
                stack.pop();
            }
            cout << s[i];
        }
        else if (s[i] == '<') {
            while (!stack.empty()) {
                cout << stack.top();
                stack.pop();
            }
            istag = true;
            cout << s[i];
        }
        else if (s[i] == '>') {
            istag = false;
            cout << s[i];
        }
        else if (!istag) {
            stack.push(s[i]);
        }
        else {
            cout << s[i];
        }
    }
    while (!stack.empty()) {
        cout << stack.top();
        stack.pop();
    }
}
#include <iostream>
#include <stack>

using namespace std;
int main()
{
    int N;
    stack<int> stack;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int input;
            cin >> input;
            stack.push(input);
        }

        else if (command == "pop") {
            if (stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << stack.top() << '\n';
                stack.pop();
            }
        }

        else if (command == "size") {
            cout << stack.size() << '\n';
        }

        else if (command == "empty") {
            if (stack.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }

        else if (command == "top") {
            if (stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << stack.top() << '\n';
            }
        }
    }
}
#include <iostream>
#include <stack>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> stack;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int command;
        cin >> command;
        switch (command) 
        {
            case(1):
            {
                int X;
                cin >> X;
                stack.push(X);
                break;
            }
            case(2):
            {
                if (stack.empty()) {
                    cout << -1 << '\n'; break;
                }
                else {
                    cout << stack.top() << '\n';
                    stack.pop();
                    break;
                }
            }
            case(3):
                cout << stack.size() << '\n';
                break;
            case(4):
                cout << stack.empty() << '\n';
                break;
            case(5): 
            {
                if (stack.empty()) {
                    cout << -1 << '\n';
                    break;
                }
                else {
                    cout << stack.top() << '\n';
                    break;
                }
            }
        }
    }
}
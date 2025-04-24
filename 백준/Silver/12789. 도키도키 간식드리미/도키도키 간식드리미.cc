#include <iostream>
#include <queue>
#include <stack>

using namespace std;
int main()
{
    int N;
    bool isNice = true;
    queue<int> q;
    stack<int> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tem;
        cin >> tem;
        q.push(tem);
    }
    for (int i = 1; i <= N; i++) {
        if (!isNice) {
            break;
        }
        while (!s.empty() || !q.empty()) {
            if (!q.empty() && i == q.front()) {
                q.pop();
                break;
            }
            else if (!s.empty() && i == s.top()) {
                s.pop();
                break;
            }
            else if (!s.empty() && q.empty() && i != s.top()) {
                isNice = false;
                break;
            }
            else if(!q.empty()){
                s.push(q.front());
                q.pop();
            }
        }
    }
    if (q.empty() && s.empty()) {
        cout << "Nice";
    }
    else {
        cout << "Sad";
    }
}
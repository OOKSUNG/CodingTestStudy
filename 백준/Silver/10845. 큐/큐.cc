#include <iostream>
#include <queue>

using namespace std;
void push(queue<int> &q, int x) {
    q.push(x);
}
void front(queue<int>& q) {
    if (q.empty()) cout << -1 << '\n';
    else cout << q.front() << '\n';
}
void back(queue<int>& q) {
    if (q.empty()) cout << -1 << '\n';
    else cout << q.back() << '\n';
}
void pop(queue<int>& q) {
    if (q.empty()) cout << -1 << '\n';
    else {
        front(q);
        q.pop();
    }
}
void size(queue<int>& q) {
    cout << q.size() << '\n';
}
void empty(queue<int>& q) {
    cout << q.empty() << '\n';
}
void fn(string s, queue<int>& q) {
    if (s == "front") front(q);
    else if (s == "back") back(q);
    else if (s == "pop") pop(q);
    else if (s == "size") size(q);
    else if (s == "empty") empty(q);
}

int main()
{
    int N;
    cin >> N;
    queue<int> q;
    for (int i = 0; i < N; i++) {
        string s;
        int x;
        cin >> s;
        if (s == "push") {
            cin >> x;
            push(q, x);
        }
        else fn(s, q);
    }
}
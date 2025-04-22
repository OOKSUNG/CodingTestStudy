#include <iostream>
#include <queue>

using namespace std;

void fn(queue<int>& q) {
    while(q.size() != 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    fn(q);
}
#include <iostream>
#include <queue>

using namespace std;
void fn(queue<int>& q, int K) {
    for (int i = 0; !q.empty(); i++) {
        for (int j = 0; j < K - 1; j++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1) cout << q.front();
        else cout << q.front() << ", ";
        q.pop();
    }
}
void print(void (*f)(queue<int>&,int),queue<int> q, int x) {
    cout << '<';
    f(q, x);
    cout << '>';
}

int main()
{
    int N, K;
    cin >> N >> K;
    queue<int> q;
    int* a = new int[N];
    
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    print(fn,q, K);

}
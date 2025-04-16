#include <iostream>
#include <stack>

using namespace std;
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int K;
    int sum = 0;
    cin >> K;
    stack<int> st;
    for (int i = 0; i < K; i++) {
        int N;
        cin >> N;
        if (N == 0 && !st.empty()) st.pop();
        else st.push(N);
    }
    for (int i = 0; i < K; i++) {
        if (st.empty()) break;
        sum += st.top();
        st.pop();
    }
    cout << sum;
}
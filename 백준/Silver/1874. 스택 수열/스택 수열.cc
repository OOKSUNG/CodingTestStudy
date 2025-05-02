#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int main()
{
    int n, c = 0;
    bool is = true;
    cin >> n;
    vector<int> v;
    vector<char> ans;
    stack<int> s;
    s.push(0);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        while (s.top() < v[i]) {
            c++;
            s.push(c);
            ans.push_back('+');
        }
        if (s.top() == v[i]) {
            s.pop();
            ans.push_back('-');
        }
        else {
            is = false;
            break;
        }
    }
    if (is) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << '\n';
        }
    }
    else cout << "NO";
    
}
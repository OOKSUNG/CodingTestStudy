#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int M;
    int B = 0;
    cin >> M;

    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        if (str == "add") {
            int x;
            cin >> x;
            B |= (1<<x);
        }

        else if (str == "remove") {
            int x;
            cin >> x;
            B &= ~(1 << x);
        }

        else if (str == "check") {
            int x, t = B;
            cin >> x;
            if (t & (1 << x)) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        else if (str == "toggle") {
            int x, t = B;
            cin >> x;
            if (t & (1 << x)) B &= ~(1 << x);
            else B |= (1 << x);
        }

        else if (str == "all") {
            B = 0;
            B |= (1<<21) - 1;
        }

        else if (str == "empty") {
            B = 0;
        }
    }
}

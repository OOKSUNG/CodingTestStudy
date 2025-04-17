#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int a, b, c;
        cin >> a >> b >> c;
        bool isT = 0;
        if (a == 0 && b == 0 && c == 0) break;
        else if (a > b && a > c && a*a == b*b + c*c) isT = 1;
        else if (b > a && b > c && b * b == a * a + c * c) isT = 1;
        else if (c > a && c > b && c * c == b * b + a * a) isT = 1;
        if (isT) cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }
}
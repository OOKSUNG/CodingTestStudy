#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B, C;
    int sum = 0;
    cin >> A >> B >> C;
    for (int i = 10; i <= 10000; i *= 10) {
        if (i > B) {
            sum = A * i + B;
            break;
        }
    }
    cout << A + B - C << '\n';
    cout << sum - C;
}
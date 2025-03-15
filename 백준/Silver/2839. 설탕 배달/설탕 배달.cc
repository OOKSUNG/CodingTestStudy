#include <iostream>

using namespace std;
int main() 
{
    int N;
    cin >> N;
    int sum = 5000;
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1700; j++) {
            if ((5 * i) + (3 * j) == N) {
                if (sum > (i + j)) sum = i + j;
            }
        }
    }
    if (sum == 5000) cout << -1;
    else cout << sum;
}
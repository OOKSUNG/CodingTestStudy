#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    double c1 = (double)A*B/C;
    double c2 = (double)A/B*C;
    
    if (c1 > c2) cout << (int)c1;
    else cout << (int)c2;
    return 0;
}
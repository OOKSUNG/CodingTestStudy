#include <iostream>

using namespace std;

int main() {
    int E, S, M;
    int e = 1, s = 1, m = 1;
    int ret = 1;
    cin >> E >> S >> M;
    
    while(true){
        if(E == e && S == s && M == m) {
            cout << ret;
            return 0;
        }
        e++; s++; m++; ret++;
        if(e > 15) e = 1;
        if(s > 28) s = 1;
        if(m > 19) m = 1;
        //cout << e << ' ' << s << ' ' << m << ' ' << ret << '\n';
    }

    return 0;
}
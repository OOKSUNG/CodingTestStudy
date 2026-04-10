#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int T = 4;
    while(T--){
        int temp;
        cin >> temp;
        sum += temp;
    }
    if(sum > 1500) cout << "No";
    else cout << "Yes";
    return 0;
}
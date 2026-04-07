#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    long double sum = 0;
    cin >> N;
    while(N--){
        long double temp;
        cin >> temp;
        sum += temp * temp * temp;
    }
    
    cout << fixed << setprecision(10) << cbrt(sum);
    return 0;
}
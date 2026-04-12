#include <iostream>

using namespace std;

int main() {
    int N;
    int a, b, c;
    cin >> N;
    cin >> a >> b >> c;
    
    int sum = 0;
    
    if(N < a) sum += N;
    else if(N >= a) sum += a;
    
    if(N < b) sum += N;
    else if(N >= b) sum += b;
    
    if(N < c) sum += N;
    else if(N >= c) sum += c;
    
    cout << sum;
    return 0;
}
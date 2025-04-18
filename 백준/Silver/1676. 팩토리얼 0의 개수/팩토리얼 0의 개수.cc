#include <iostream>

using namespace std;
int Num5(int n) {
    int num5 = 0;
    while(true){
        if (!(n % 5)) {
            num5++;
            n /= 5;
        }
        else break;
    }
    return num5;
}

int Num2(int n) {
    int num2 = 0;
    while(true) {
        if (!(n % 2)) {
            num2++;
            n /= 2;
        }
        else break;
    }
    return num2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    int sum = 0;
    int n2 = 0;
    int n5 = 0;
    cin >> N;
    for (int i = N; i > 0; i--) {
        n2 += Num2(i);
        n5 += Num5(i);
    }
    if (n2 >= n5) sum += n5;
    else sum += n2;
    cout << sum;
}
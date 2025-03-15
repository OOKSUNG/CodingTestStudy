#include <iostream>

using namespace std;
int main() 
{
    int N;
    cin >> N;
    int sum = 0;
    int i = 666;
    while (sum <= N) {
        int tem = i;
        while (tem >= 666) {
            if (tem % 10 == 6 && (tem/10) % 10 == 6 && (tem/100) % 10 == 6 && (tem/1000)%10 != 6) {
                sum++;
                if (sum == N) {
                    cout << i;
                    break;
                }
                tem /= 10;
            }
            else tem /= 10;
        }
        i++;
    }
}
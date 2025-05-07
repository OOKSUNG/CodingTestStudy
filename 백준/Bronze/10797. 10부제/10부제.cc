#include <iostream>


using namespace std;
int main()
{
    int day, sum = 0;
    cin >> day;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        if (n == day) sum++;
    }
    cout << sum;
}

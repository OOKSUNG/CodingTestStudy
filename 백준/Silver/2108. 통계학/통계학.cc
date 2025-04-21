#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
void av(int sum, int N) {
    float av = 0;
    av = 1.f * sum / N ;
    int avn = round(av);
    if (avn == -0) avn *= -1;
    cout << avn << '\n';
}
void mid(int* p, int N) {
    cout << *(p + N / 2) << '\n';
}
void fre(int* p, int N) {
    int* a = new int[8001]();
    int max_fre = -1;
    int max = 0, n = 0;
    for (int i = 0; i < N; i++) {
        int temp = *(p + i);
        *(a + temp + 4000) += 1;
    }

    for (int i = 8000; i >= 0; i--) {
        if (*(a + i) >= max_fre) { 
            max_fre = *(a + i);
            max = i - 4000;
        }
    }
    bool isf = false;
    for (int i = 0; i <= 8000; i++) {
        
        if (*(a + i) == max_fre && isf == false) {
            isf = true;
        }
        else if (*(a + i) == max_fre && isf == true) {
            max = i - 4000;
            break;
        }
    }
    cout << max << '\n';
    delete[] a;
}
void var(int* p, int N) {
    int min = 4001, max = -4000;
    for (int i = 0; i < N; i++) {
        if (*(p + i) > max) max = *(p + i);
        if (*(p + i) < min) min = *(p + i);
    }
    cout << max - min << '\n';
}
void fn(int* p, int N, int sum) {
    av(sum, N);
    mid(p, N);
    fre(p, N);
    var(p, N);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, sum = 0;
    cin >> N;
    int* ary = new int[N]();
    for (int i = 0; i < N; i++) {
        cin >> ary[i];
        sum += ary[i];
    }
    sort(ary, ary + N);
    fn(ary, N, sum);
    delete[] ary;
}
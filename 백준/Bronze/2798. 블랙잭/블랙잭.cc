#include <iostream>

using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int arr[100];
    int max = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        if (max == M) break;
        for (int j = i + 1; j < N; j++) {
            if (max == M) break;
            for (int k = j + 1; k < N; k++) {
                int tem = 0;
                tem = arr[i] + arr[j] + arr[k];
                if (tem > max && tem <= M) max = tem;
                if (max == M) {
                    cout << max;
                    break;
                }
            }
        }
    }
    if(max < M) cout << max;
}
#include <iostream>

using namespace std;
int main() 
{
    int N, M;
    int arr[50][50] = { 0 };
    int sum = 64;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char C;
            cin >> C;
            if (C == 'B') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }
    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int sumB = 0;
            int sumW = 0;

            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    //짝수칸인 경우
                    if ((k + l) % 2 == 0) {
                        if (arr[k][l] == 0) {
                            //짝수칸이 검은색인 경우
                            sumB += 1;
                        }
                        else {
                            //짝수칸이 하얀색인 경우
                            sumW += 1;
                        }
                    }
                    //홀수칸인 경우
                    else {
                        if (arr[k][l] == 0) {
                            //홀수칸이 검은색인 경우
                            sumW += 1;
                        }
                        else {
                            //홀수칸이 하얀색인 경우
                            sumB += 1;
                        }
                    }
                }
            }
            if (sum > sumW || sum > sumB) {
                if (sumW >= sumB) sum = sumB;
                else sum = sumW;
            }
        }
    }
    cout << sum;
}
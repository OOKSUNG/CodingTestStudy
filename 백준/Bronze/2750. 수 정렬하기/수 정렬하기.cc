#include <iostream>

using namespace std;
int main()
{
    //삽입정렬
    int N;
    int arr[1000];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < N ; i++) {
        int temp = arr[i];
        for (int j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }
}
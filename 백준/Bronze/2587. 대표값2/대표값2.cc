#include <iostream>

using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 1; i < 5; i++) {
        int temp = arr[i];
        for (int j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    cout << sum / 5 << '\n' << arr[2];
}
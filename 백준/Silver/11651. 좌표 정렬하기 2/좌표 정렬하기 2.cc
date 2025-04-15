#include <iostream>
#include <algorithm>

using namespace std;
struct Co {
    int x;
    int y;
};

bool compare(Co a, Co b) {
    if (a.y == b.y) return a.x < b.x;
    else return a.y < b.y;
}

int main()
{
    int N;
    Co arr[100000];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr, arr + N, compare );
    for (int i = 0; i < N; i++) {
        cout << arr[i].x << ' ' << arr[i].y << '\n';
    }
}
#include <iostream>

using namespace std;

int arr[100001];
int perfix[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    perfix[1] = arr[1];
    for(int i = 2; i <= N; i++){
        perfix[i] = perfix[i - 1] + arr[i];
    }
    
    for(int i = 1; i <= M; i++){
        int x, y;
        cin >> x >> y;
        cout << perfix[y] - perfix[x - 1] << '\n';
    }
    
    return 0;
}
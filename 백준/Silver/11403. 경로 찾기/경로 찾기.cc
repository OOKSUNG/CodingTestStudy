#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;
int N;
int arr[100][100];
int ans[100][100];

int main() {
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int m = 0; m < N; m++){
        for(int s = 0; s < N; s++){
            for(int e = 0; e < N; e++){
                if(arr[s][m] && arr[m][e]){
                    arr[s][e] = 1;
                }
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    
    
    return 0;
}
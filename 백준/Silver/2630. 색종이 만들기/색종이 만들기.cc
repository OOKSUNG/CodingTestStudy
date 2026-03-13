#include <iostream>

using namespace std;

int white = 0;
int blue = 0;

int arr[128][128];

void divide(int x, int y, int n){
    int first = arr[x][y];
    for(int i = x; i < x + n; i++){
        for(int j = y; j < y + n; j++){
            if (arr[i][j] != first){
                //4개로 분할 해서 재귀
                //x y, x y+n/2, x+n/2 y, x+n/2 y + n/2
                divide(x, y, n/2);
                divide(x, y+n/2, n/2);
                divide(x+n/2, y, n/2);
                divide(x+n/2, y+n/2, n/2);
                return;
            }
        }
    }
    if(first == 1) blue++;
    else white++;
}


int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    
    divide(0,0,N);
    
    cout << white << '\n' << blue;
    
    
    return 0;
}
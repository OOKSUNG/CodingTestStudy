#include <iostream>
#include <queue>

using namespace std;
int arr[1000000];
int ans = 0;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int min = 0;
    int max = 0;
    
    for(int i = 0; i < N; i++){
        if(max < arr[i]) max = arr[i];
    }
    
    int mid = (min + max) / 2;
    long long int sum = 0;
    
    while(min <= max){
        mid = (min + max) / 2;
        sum = 0;
        
        for(int i = 0; i < N; i++){
            int tem = arr[i] - mid;
            if(tem > 0) sum += tem;
        }
        
        if(sum >= M){
            ans = mid;
            min = mid + 1;
        }
        else {
            max = mid - 1;
        }
    }
    
    cout << ans;
    return 0;
}
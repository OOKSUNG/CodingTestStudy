#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    int *arr = new int[N];
    int *ans = new int[N];
    stack<int> st;
    for(int i = 0; i < N; i++){
        cin >> arr[i]; 
    }
    
    for(int i = N - 1; i >= 0; i--){
         while(!st.empty() && arr[i] >= st.top()){
             st.pop();
         }
         if(st.empty()) ans[i] =-1;
         else ans[i] = st.top();
         st.push(arr[i]);
    }
    
    for(int i = 0; i < N; i++){
        cout << ans[i] << ' ';
    }
    
    return 0;
}
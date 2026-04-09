#include <iostream>

using namespace std;

int main() {
    int idx = 1;
    int x;
    while(cin >> x){
        if(x==0) return 0;
        while(x--){
            int trash;
            cin >> trash;
        }
        cout << "Case " << idx++ << ": Sorting... done!" << '\n';    
    }
    return 0;
}
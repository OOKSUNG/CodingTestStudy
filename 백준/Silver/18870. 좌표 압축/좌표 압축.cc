#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v;
    vector<int> sv;
    map<int, int> map;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
        sv.push_back(x);
    }
    sort(sv.begin(), sv.end());
    unique(sv.begin(), sv.end());
    
    for(int i = 0; i < sv.size(); i++){
        map.insert({sv[i], i});
    }
    
    for(int i = 0; i < N; i++){
        cout << map[v[i]] << ' ';
    }
    
    return 0;
}
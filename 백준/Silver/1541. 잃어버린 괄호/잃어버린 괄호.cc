#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    stringstream ss(s);
    string temp;
    bool first = true;
    int result = 0;
    
    while(getline(ss, temp, '-')){
        int sum = 0;
        
        stringstream ss2(temp);
        string num;
        
        while(getline(ss2, num, '+')){
            sum += stoi(num);
        }
        
        if(first){
            result += sum;
            first = false;
        }
        else{
            result -= sum;
        }
    }
    cout << result;
    return 0;
}
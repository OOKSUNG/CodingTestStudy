#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = 0;
    sort(str.begin(), str.end(), greater<char>());
    cout << str;
    return 0;

}
#include <iostream>


using namespace std;
int main()
{
    string max;
    string ans;
    cin >> max >> ans;

    if (max.size() >= ans.size()) cout << "go";
    else cout << "no";
}
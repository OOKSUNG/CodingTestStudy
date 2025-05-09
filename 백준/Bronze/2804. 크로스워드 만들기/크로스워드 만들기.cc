#include <iostream>

using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    char a[31][31];

    int r , c;
    bool is = true;

    for (int i = 0; is; i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (str1[i] == str2[j]) {
                c = i; r = j; is = false; break;
            }
        }
    }
    int c1 = 0, c2 = 0;
    for (int i = 0; i < str2.size(); i++) {
        for (int j = 0; j < str1.size(); j++) {

            if (j == c && i == r) {
                a[i][j] = str2[c2++];
                c1++;
            }
            else if (j == c)a[i][j] = str2[c2++];
            else if (i == r)a[i][j] = str1[c1++];

            else a[i][j] = '.';


            cout << a[i][j];
        }
        cout << '\n';
    }
}
#include <iostream>
#include <string>

using namespace std;

void fn(int x) {
    if (x % 3 == 0 && x % 5 == 0) cout << "FizzBuzz";
    else if (x % 3 == 0) cout << "Fizz";
    else if (x % 5 == 0) cout << "Buzz";

    else cout << x;
}

int main()
{
    string a1, a2, a3;

    cin >> a1 >> a2 >> a3;

    if (a1 != "Fizz" && a1 != "Buzz" && a1 != "FizzBuzz") fn(stoi(a1) + 3);
    else if (a2 != "Fizz" && a2 != "Buzz" && a2 != "FizzBuzz") fn(stoi(a2) + 2);
    else if (a3 != "Fizz" && a3 != "Buzz" && a3 != "FizzBuzz") fn(stoi(a3) + 1);
}
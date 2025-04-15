#include <iostream>
#include <algorithm>

using namespace std;
struct Data {
    int age;
    string name;
};

bool compare(Data a, Data b) {
    return a.age < b.age;
}

int main()
{
    int N;
    cin >> N;
    Data *data = new Data[N];
    for (int i = 0; i < N; i++) {
        cin >> data[i].age >> data[i].name;
    }
    stable_sort(data, data + N, compare );
    for (int i = 0; i < N; i++) {
        cout << data[i].age << ' ' << data[i].name << '\n';
    }
}
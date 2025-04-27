#include <iostream>
#include <map>

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    cin >> N;
    map<int, int> A;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        A[x]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        
        cout << A[x] << " ";
    }
}
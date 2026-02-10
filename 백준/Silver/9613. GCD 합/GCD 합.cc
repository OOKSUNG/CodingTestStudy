#include <iostream>
#include <stdio.h>
using namespace std;

int gcd(int x, int y) {
	int z;
	if (y == 0) return 0;
	else {
		z = x % y;
		if (z == 0) {
			return y;
		}
		else return gcd(y, z);
	}
}

int x[101][101];
long y[101];

int main() 
{
	int t, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
		}
		for (int j = 0; j < n; j++) {
			for (int k = n; k > j; k--) {
				y[i] += gcd(x[i][j], x[i][k]);
			}
		}
		printf("%ld\n", y[i]);
	}
}
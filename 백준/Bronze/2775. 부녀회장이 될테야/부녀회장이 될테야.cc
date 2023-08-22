#include <iostream>

using namespace std;
int a[15][15] = {0, };
int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		for(int j = 1; j <= n; j++) {
			a[0][j] = j;
		}
		for(int j = 1; j <= k; j++) {
			for(int l = 1; l <= n; l++) {
				a[j][l] = a[j][l-1] + a[j-1][l];
			}
		}
		cout << a[k][n] << '\n';
	}
	return 0;
}
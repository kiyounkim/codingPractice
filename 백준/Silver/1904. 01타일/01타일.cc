#include <iostream>
using namespace std;
int f[1000000];

int fibonacci(int n) {
    f[1] = 1;
    f[2] = 2;
	int i;
    for (i=3;i<=n;i++){
        f[i] = (f[i - 1] + f[i - 2])%15746;
	}
    return f[n];
}
int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
    cout << fibonacci(n);
	return 0;
}
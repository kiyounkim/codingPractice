#include <iostream>
using namespace std;
int fibCount=0;
int fiboCount=0;
int f[1000000];

int fib(int n) {
    if (n == 1 || n == 2)
    	return 1;
    else {	fibCount++;
		return (fib(n - 1) + fib(n - 2));
	}
}
int fibonacci(int n) {
    f[1] = f[2] = 1;
	int i;
    for (i = 3 ;i<=n;i++){
		fiboCount++;
        f[i] = f[i - 1] + f[i - 2];
	}
    return f[n];
}
int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << fibCount+1 << endl;
	cout << fiboCount << endl;
	return 0;
}
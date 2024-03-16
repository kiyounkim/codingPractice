#include <bits/stdc++.h>
using namespace std;
int arr[45];
int fib(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(arr[n] != 0) return arr[n];
	arr[n] = fib(n-1) + fib(n-2);
	return arr[n];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	cout << fib(n) << endl;
}
#include <iostream>

using namespace std;

int a[41] = {0,1};

void fibonacci(int n) {
	if(n==0) return;
	for(int i=2;i<=n;i++){
		a[i] = a[i-1] + a[i-2];
	}
}

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int num;
		cin >> num;
		if(num == 0)
			cout << "1 0" << endl;
		else {
			fibonacci(num);
			cout << a[num-1] << " " << a[num] << endl;
		}
	}
	return 0;
}
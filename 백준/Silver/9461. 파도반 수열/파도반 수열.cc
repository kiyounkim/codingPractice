#include <iostream>

long long a[101];
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n,m;
	cin >> n ;
	a[0]=1;
	a[1]=1;
	a[2]=1;
	for(int i=0;i<n;i++){
		cin >> m;
		for(int j=3;j<=m;j++){
			a[j]=a[j-2]+a[j-3];
		}
		cout << a[m-1] << endl;
	}
	return 0;
}
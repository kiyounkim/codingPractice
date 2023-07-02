#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	int a[11]={1,2,4,};
	for(int i=3;i<11;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		cout << a[k-1] << "\n";
	}
}
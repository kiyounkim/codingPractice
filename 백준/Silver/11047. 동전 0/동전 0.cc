#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	int n,m;
	cin >> n >> m;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int count=0;
	for(int i=n-1;i>=0;i--){
		count+=m/arr[i];
		m%=arr[i];
	}
	cout << count;
}
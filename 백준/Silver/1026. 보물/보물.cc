#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	int sum = 0;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
	//sort a array from small to big
	sort(a.begin(),a.end());
	//sort b array from big to small
	sort(b.begin(),b.end(),greater<int>());
	for(int i=0;i<n;i++)
		sum += a[i]*b[i];
	cout << sum << endl;
}
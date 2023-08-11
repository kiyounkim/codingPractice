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
	vector<int> ropes(n);
	for (int i = 0; i < n; i++)
		cin >> ropes[i];
	sort(ropes.begin(), ropes.end(), greater<int>());
	int max=0;
	for(int i = 0; i < n; i++)
	{
		if (max < ropes[i] * (i + 1))
			max = ropes[i] * (i + 1);
	}
	cout << max;
}
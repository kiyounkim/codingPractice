#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int a[8001] = {0};

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0; // Change to int for summing
	for(int i=0;i<n;i++){
		cin >> v[i];
		sum += v[i];
		a[v[i] + 4000]++;
	}
	sort(v.begin(),v.end());
	int avg = round((float)sum / n); // Convert to float before dividing
	cout << avg << "\n";
	cout << v[n/2] << "\n";

	//find mode value. if there are more than one mode value, find the second smallest value
	int maxCount = 0;
	vector<int> modes;
	for (int i = 0; i < 8001; i++) {
		if (a[i] > maxCount) {
			maxCount = a[i];
			modes.clear();
			modes.push_back(i - 4000);
		} else if (a[i] == maxCount) {
			modes.push_back(i - 4000);
		}
	}

	if (modes.size() == 1) {
		cout << modes[0] << "\n";
	} else {
		sort(modes.begin(), modes.end());
		cout << modes[1] << "\n"; // Print the second smallest mode
	}

	cout << v[n-1] - v[0] << "\n";
	return 0;
}

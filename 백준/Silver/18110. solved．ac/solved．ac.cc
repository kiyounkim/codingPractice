#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	if(n==0) {
		cout << 0 << endl;
		return 0;
	}
	vector<int> v(n);
	int lowerBound = round((float)n*0.15);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = lowerBound; i < n-lowerBound; i++) {
		sum += v[i];
	}
	cout << round((float)sum/(n-lowerBound*2)) << endl;
	return 0;
}
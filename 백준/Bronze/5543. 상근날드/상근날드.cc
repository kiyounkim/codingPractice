#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v(3);
	vector<int> v2(2);
	for(int i = 0; i < 3; i++){
		cin >> v[i];
	}
	for(int i = 0; i < 2; i++){
		cin >> v2[i];
	}
	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end());
	cout << v[0] + v2[0] - 50;
}
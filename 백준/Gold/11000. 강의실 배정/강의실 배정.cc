#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=0;i<n;i++){
		pq.push(v[i].second);
		if(pq.top()<=v[i].first)
			pq.pop();
	}
	cout<<pq.size()<<endl;
}

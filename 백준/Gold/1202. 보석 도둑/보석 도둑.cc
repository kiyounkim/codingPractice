// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>

// using namespace std;

// int main(){
// 	int n,k;
// 	cin >> n >> k;
// 	vector<pair<int,int>> jewel;
// 	for(int i=0;i<n;i++){
// 		int weight,value;
// 		cin >> weight >> value;
// 		jewel.push_back(make_pair(weight,value));
// 	}
// 	vector<pair<int,int>> bag;
// 	for(int i=0;i<k;i++){
// 		int capacity;
// 		cin >> capacity;
// 		bag.push_back(make_pair(capacity,0));
// 	}
// 	sort(jewel.begin(),jewel.end());
// 	int sum = 0;
// 	for(int i=0;i<k;i++){
// 		priority_queue<pair<int, int>> pq;
// 		for(int j=0;j<n;j++){
// 			if(jewel[j].first <= bag[i].first)
// 				pq.push(make_pair(jewel[j].second,jewel[j].first));
// 		}
// 		sum+=pq.top().first;
// 		jewel.erase(jewel.begin()+pq.top().second);
// 		pq.pop();
// 	}
// 	cout << sum << endl;
// }
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> jewel(n);
	for(int i = 0; i < n; i++) {
		cin >> jewel[i].first >> jewel[i].second;
	}
	vector<int> bag(k);
	for(int i = 0; i < k; i++) {
		cin >> bag[i];
	}

	// Sorting the jewels by weight and the bags
	sort(jewel.begin(), jewel.end());
	sort(bag.begin(), bag.end());

	long long sum = 0;
	priority_queue<int> pq;
	int j = 0;
	for(int i = 0; i < k; i++) {
		while(j < n && jewel[j].first <= bag[i]) {
			pq.push(jewel[j].second);
			j++;
		}
		if(!pq.empty()) {
			sum += pq.top();
			pq.pop();
		}
	}
	cout << sum << endl;
}

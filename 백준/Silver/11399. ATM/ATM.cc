#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<int,int>> vec;
	int time;
	for(int i=0;i<n;i++){
		cin >> time;
		vec.push_back(make_pair(i+1,time));
	}
	sort(vec.begin(),vec.end(),compare);
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			ans+=vec[j].second;
		}
	}
	cout << ans;
}
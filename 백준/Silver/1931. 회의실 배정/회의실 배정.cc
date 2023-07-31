#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

//method for using sort
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
	int count = 0;
	//make vector that stores pair of start and end time
	vector<pair<int,int>> vec;
	int a,b;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		vec.push_back(make_pair(a,b));
	}
	//for greedy, we need to sort the time.
	//sort it by end time because we need maximum number of meetings -> most number of end times in a given time	
	sort(vec.begin(),vec.end(),compare);

	//greedy solution.
	int temp=0;
	for(int i=1;i<n;i++){
		if(vec[i].first >= vec[temp].second){
			temp = i;
			count++;
		}
	}
	cout << count+1;
}
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
	cin >> n >> m;
	map<int,bool> mp;
	map<int,bool> mp2;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mp[x] = true;
	}
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		mp2[x] = true;
	}
	int count = 0;
	for(auto it = mp2.begin();it!=mp2.end();it++){
		if(mp.find(it->first)==mp.end()){
			count++;
		}
	}
	for(auto it = mp.begin();it!=mp.end();it++){
		if(mp2.find(it->first)==mp2.end()){
			count++;
		}
	}
	cout << count << endl;
}

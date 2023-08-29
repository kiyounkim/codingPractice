#include <iostream>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	map<string,string> mp;
	for(int i=0;i<n;i++){
		string addr,pass;
		cin >> addr >> pass;
		mp[addr] = pass;
	}
	for(int i=0;i<m;i++){
		string addr;
		cin >> addr;
		cout << mp[addr] << "\n";
	}
	return 0;
}
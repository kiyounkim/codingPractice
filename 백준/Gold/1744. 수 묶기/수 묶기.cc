#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> pos,neg;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > 0) pos.push_back(x);
		else neg.push_back(x);
	}
	sort(pos.begin(),pos.end(),greater<int>());
	sort(neg.begin(),neg.end());
	int sum = 0;
	if(pos.size()%2!=0) {
		sum += pos[pos.size()-1];
		pos.pop_back();
	}
	if(neg.size()%2!=0) {
		sum += neg[neg.size()-1];
		neg.pop_back();
	}
	for(int i = 0; i < pos.size(); i+=2){
		if(pos[i+1]==1)
			sum += pos[i]+pos[i+1];
		else
			sum += pos[i]*pos[i+1];
	}
	for(int i=0;i<neg.size();i+=2) sum+=neg[i]*neg[i+1];
	cout<<sum;
}

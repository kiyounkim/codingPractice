#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n,k;
	cin >> k >> n;
	vector<int> lines(k);
	for(int i=0;i<k;i++){
		cin >> lines[i];
	}
	int ans = 0;
	long long low = 1;
	long long mid;
	long long high = *max_element(lines.begin(),lines.end());

	while(low<=high){
		mid = (low+high)/2;
		long long sum = 0;
		for(int i=0;i<k;i++){
			sum += lines[i]/mid;
		}
		if(sum>=n){
			ans = mid;
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	cout << ans;
}
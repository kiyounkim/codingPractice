#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	vector<int> v(n+1);
	for(int i=1;i<=n;i++){
		cin >> v[i];
		v[i]+=v[i-1];
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		cout << v[b]-v[a-1] << '\n';
	}
}
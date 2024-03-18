#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	char c;
	while(1){
		cin >> n >> c >> m;
		if(n == 0  && c=='W' && m == 0) break;
		if(c=='W'){
			int temp = n-m;
			if(temp < -200)
				cout << "Not allowed\n";
			else
				cout << temp << '\n';
		}
		else if(c=='D'){
			cout << n+m << '\n';
		}
	}
}
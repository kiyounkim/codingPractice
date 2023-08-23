#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int k;
	cin >> k;
	stack<int> s;
	int n;
	for(int i=0;i<k;i++){
		cin >> n;
		if(n == 0) s.pop();
		else s.push(n);
	}
	int sum = 0;
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	cout << sum << '\n';
	return 0;
}
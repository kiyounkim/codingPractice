#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	string str = "";
	stack<int> s;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		while (count < x) {
		s.push(++count);
		str += '+';
		}
		if(!s.empty() && s.top() == x) {
			s.pop();
			str += '-';
		} else {
			cout << "NO" << '\n';
			return 0;
		}
	}
	if(s.empty()){
		for(int i = 0; i < str.size(); i++){
			cout << str[i] << '\n';
		}
	}
	else{
		cout << "NO" << '\n';
	}
	return 0;
}
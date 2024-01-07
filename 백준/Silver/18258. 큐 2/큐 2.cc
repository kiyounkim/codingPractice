#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	int x;
	cin >> n;
	queue<int> s;
	for(int i=0;i<n;i++){
		string cmd;
		cin >> cmd;
		if(cmd == "push"){
			cin >> x;
			s.push(x);
		}
		if(cmd == "pop"){
			if(s.empty()) cout << -1 << '\n';
			else{
				cout << s.front() << '\n';
				s.pop();
			}
		}
		if(cmd == "size"){
			cout << s.size() << '\n';
		}
		if(cmd == "empty"){
			cout << s.empty() << '\n';
		}
		if(cmd == "front"){
			if(s.empty()) cout << -1 << '\n';
			else cout << s.front() << '\n';
		}
		if(cmd == "back"){
			if(s.empty()) cout << -1 << '\n';
			else cout << s.back() << '\n';
		}
	}
}
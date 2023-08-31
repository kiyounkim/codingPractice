#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	set<int> s;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string cmd;
		int num;
		cin >> cmd;
		if(cmd == "add"){
			cin >> num;
			s.insert(num);
		}
		else if(cmd == "remove"){
			cin >> num;
			s.erase(num);
		}
		else if(cmd == "check") {
			cin >> num;
			if(s.find(num) != s.end())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if(cmd == "toggle") {
			cin >> num;
			if(s.find(num) != s.end())
				s.erase(num);
			else
				s.insert(num);
		}
		else if(cmd == "all"){
			for(int i = 1; i <= 20; i++)
				s.insert(i);
		}
		else if(cmd == "empty")
			s.clear();
	}
	return 0;
}
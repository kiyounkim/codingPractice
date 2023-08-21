#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	cin >> n;
	stack<int> s;
	for(int i=0;i<n;i++){
		string cmd;
		cin >> cmd;
		if(cmd == "push"){
			int num;
			cin >> num;
			s.push(num);
		}
		else if(cmd == "pop"){
			int num;
			if(s.empty()) num = -1;
			else{
				num = s.top();
				s.pop();
			}
			cout << num << '\n';
		}
		else if(cmd == "top"){
			int num;
			if(s.empty()) num = -1;
			else num = s.top();
			cout << num << '\n';
		}
		else if(cmd == "size"){
			cout << s.size() << '\n';
		}
		else if(cmd == "empty"){
			cout << s.empty() << '\n';
		}
	}
}
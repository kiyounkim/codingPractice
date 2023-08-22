#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	string input;
	while(1){
		getline(cin,input);
		if(input.length() == 1 && input[0] == '.') break;
		stack<char> s;
		bool flag = true;
		for(int i = 0;i<input.length();i++){
			if(input[i]=='(' || input[i] == '[') s.push(input[i]);
			else if(input[i] == ')'){
				if(s.empty() || s.top() != '('){
					flag = false;
					cout << "no" << '\n';
					break;
				}
				else s.pop();
			}
			else if(input[i] == ']'){
				if(s.empty() || s.top() != '['){
					flag = false;
					cout << "no" << '\n';
					break;
				}
				else s.pop();
			}
		}
		if(flag){
			if(s.empty()) cout << "yes" << '\n';
			else cout << "no" << '\n';
		}
	}
	return 0;
}
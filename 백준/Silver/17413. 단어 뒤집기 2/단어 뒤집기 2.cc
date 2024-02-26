#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	
	bool tag = false;
 
	stack <char> s;
 
	for (char ch : str) {
		if (ch == '<')
		{
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			tag = true;
			cout << ch;
		}
		else if (ch == '>')
		{
			tag = false;
			cout << ch;
		}
		else if (tag)
		{
			cout << ch;
		}
		else
		{
			if (ch == ' ')
			{
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else
			{
				s.push(ch);
			}
		}
	}
	 
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << '\n';
 
	return 0;
}

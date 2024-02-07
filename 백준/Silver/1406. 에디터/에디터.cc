#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	list<char> l;
	for(int i=0;i<s.size();i++){
		l.push_back(s[i]);
	}
	auto cursor = l.end();
	for(int i=0;i<n;i++){
		char c;
		cin >> c;
		if(c=='L'){
			if(cursor!=l.begin()){
				cursor--;
			}
		}
		if(c=='D'){
			if(cursor!=l.end()){
				cursor++;
			}
		}
		if(c=='B'){
			if(cursor!=l.begin()){
				cursor--;
				cursor = l.erase(cursor);
			}
		}
		if(c=='P'){
			char x;
			cin >> x;
			l.insert(cursor,x);
		}
	}
	for(auto it = l.begin();it!=l.end();it++){
		cout << *it;
	}
}
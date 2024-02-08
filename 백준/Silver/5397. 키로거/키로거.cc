#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		list<char> l;
		list<char>::iterator it = l.begin();
		for(int j=0;j<s.size();j++){
			if(s[j] == '<'){
				if(it != l.begin()){
					it--;
				}
			}else if(s[j] == '>'){
				if(it != l.end()){
					it++;
				}
			}else if(s[j] == '-'){
				if(it != l.begin()){
					it--;
					it = l.erase(it);
				}
			}else{
				l.insert(it, s[j]);
			}
		}
		for(it = l.begin();it != l.end();it++){
			cout << *it;
		}
		cout << "\n";
	}
}
#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	while(1){
		string s;
		cin >> s;
		if(s == "0") break;
		int flag = 0;
		for(int i=0;i<s.size()/2;i++){
			if(s[i] != s[s.size()-1-i]){
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}
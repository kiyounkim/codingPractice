#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1){
		string s;
		getline(cin, s);
		if(s == "#") break;
		int count = 0;
		for(int i=0;i<s.length();i++){
			char temp = tolower(s[i]);
			if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u'){
				count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}

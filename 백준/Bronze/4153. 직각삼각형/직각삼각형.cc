#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	while(1){
		int s[3];
		cin >> s[0] >> s[1] >> s[2];
		if(s[0]==0 && s[1]==0 && s[2]==0) break;
		sort(s, s+3);
		if(pow(s[0],2)+pow(s[1],2)==pow(s[2],2)) cout << "right\n";
		else cout << "wrong\n";
	}
	return 0;
}

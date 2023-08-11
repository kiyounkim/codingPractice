#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int num[27] = {0};
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		int len = s.length()-1;
		int ans = 0;
		for (int j = 0; j <= len; j++) {
			num[s[j]-'A']+=pow(10,len-j);
		}
	}
	sort(num,num+27,greater<int>());
	int sum = 0;
	for(int i=0;i<10;i++){
		sum+=num[i]*(9-i);
	}
	cout << sum << endl;
}
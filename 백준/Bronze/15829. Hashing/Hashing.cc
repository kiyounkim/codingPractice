#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int arr[26];
	for(int i = 0; i < 26; i++) {
		arr[i] = i + 1;
	}
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long int sum = 0;
	for(int i=0;i<s.length();i++) {
		sum += (arr[s[i] - 'a'] * pow(31, i));
	}
	cout << sum % 1234567891 << endl;
	return 0;
}
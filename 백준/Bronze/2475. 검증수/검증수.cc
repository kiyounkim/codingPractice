#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	int sum=0;
    for(int i=0;i<5;i++){
		cin >> n;
		sum += pow(n,2);
	}
	cout << sum%10;
	return 0;
}

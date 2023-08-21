#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int a,b,c;
	int sum;
	cin >> a >> b >> c;
	sum = a*b*c;
	int arr[10] = {0,};
	while(sum != 0){
		arr[sum%10]++;
		sum /= 10;
	}
	for(int i=0;i<10;i++)
		cout << arr[i] << '\n';
	return 0;
}

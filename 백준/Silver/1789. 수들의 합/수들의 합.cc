#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	long long n;
	cin >> n;
	int i = 0;
	long long sum = 0;
	while(true){
		sum += i;
		if(sum > n){
			i--;
			break;
		}
		i++;
	}
	cout << i;
}
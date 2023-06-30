#include <iostream>

using namespace std;
unsigned long long rec(unsigned long long n);
int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	unsigned long long n;
	cin >> n;
	if(n==0)
		cout << 1 << endl;
	else
		cout << rec(n) << endl;
}
unsigned long long rec(unsigned long long n)
{
	if (n == 1)
		return 1;
	else
		return n * rec(n - 1);
}
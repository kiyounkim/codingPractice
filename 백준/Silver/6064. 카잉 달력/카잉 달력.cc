#include<iostream>
#include<vector>

using namespace std;
int gcd(int a, int b) { 
	if (b == 0) 
		return a; 
	return gcd(b, a % b);
}
int main() 
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        int lcm = M * N / gcd(M, N);
		int ans = -1;
		int cnt = 1;
		int a = 1, b = 1;
		for(int j=x;j<=lcm;j+=M){
            if(j%N==y%N){
                ans=j;
                break;
            }
        }
		cout << ans << "\n";
    }
}
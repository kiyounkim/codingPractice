
// #include <iostream>

// using namespace std;

// int a[223] = {0};
// int main(){
//     for(int i=1;i<=223;i++){
//         a[i] = i*i;
//     }
//     int n;
//     cin >> n;
//     int count = 0;
//     while(n>0){
//         for(int i=223;i>=1;i--){
//             if(n>=a[i]){
//                 n -= a[i];
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout << count << endl;
// }
//greedy does not work
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int dp[50001];

int main() 
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cin >> n;
	dp[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[1] + dp[i - 1];
		for (int j = 2; j * j <= i; j++)
			dp[i] = min(dp[i], 1 + dp[i - j * j]);
	}
	cout << dp[n];
}
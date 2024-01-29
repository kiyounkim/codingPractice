#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    vector<int> dp(n);

    for(int i = 0; i < n; i++) {
        cin >> num[i];
        dp[i] = num[i];
    }

    int ans = dp[0];
    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i], dp[i - 1] + num[i]);
        if(dp[i] > ans) {
            ans = dp[i];
        }
    }

    cout << ans << endl;
    return 0;
}

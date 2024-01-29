#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> num;
    vector<int> dp;
    for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        num.push_back(temp);
        dp.push_back(temp);
    }
    int ans=dp[0];
    for(int i=1; i<n; i++) {
        dp[i]=max(dp[i], dp[i-1]+num[i]);
        if(dp[i]>ans) {
            ans=dp[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

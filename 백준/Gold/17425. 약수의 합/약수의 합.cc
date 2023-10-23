#include <bits/stdc++.h>
using namespace std;

long long dp[1000001]={0};

void solveDP(int count){
    for(int i = 1; i <= 1000001; i++){
        for(int j = i; j <= 1000001; j+=i){
            dp[j] += i;
        }
    }

    for(int i = 2; i <= 1000001; i++){
        dp[i] += dp[i-1];
    }

    for(int j=0; j<count; j++){
        int input;
        cin >> input;
        cout << dp[input] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count;
    cin>>count;     
    solveDP(count);
}
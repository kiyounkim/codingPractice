#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin>>input;
    long long ans = 0;
    for(int i=1;i<=input;i++){
        ans+=i*(input/i);
    }
    cout<<ans<<"\n";
}
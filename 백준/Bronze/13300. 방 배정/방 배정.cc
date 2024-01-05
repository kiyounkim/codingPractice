#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int k;
    cin>>k;
    int boys[6] = {0};
    int girls[6] = {0};
    for(int i=0;i<n;i++){
        int s,y;
        cin>>s>>y;
        if(s==0)
            girls[y-1]++;
        else
            boys[y-1]++;
    }
    int sum = 0;
    for(int i=0;i<6;i++){
        sum+=(boys[i]+k-1)/k;
        sum+=(girls[i]+k-1)/k;
    }
    cout<<sum;
    return 0;
}
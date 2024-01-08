#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    stack <int> s;
    int* arr = new int[n];
    int* ans = new int[n];
    int index = 0;
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i = n-1;i>=0;i--){
        if(s.empty()){
            s.push(arr[i]);
            ans[i]=-1;
            continue;
        }
        while(!s.empty() && s.top()<=arr[i]) s.pop();
        if(s.empty()) ans[i]=-1;
        else ans[i]=s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++) cout << ans[i] << " ";
    return 0;
}
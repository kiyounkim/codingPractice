#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    stack <int> s;
    long long count=0;
    for(int i=0;i<n;i++){
        int height;
        cin >> height;
        if(s.empty()){
            s.push(height);
            continue;
        }
        while(!s.empty()&& s.top()<=height){
            s.pop();
        }
        count+=s.size();
        s.push(height);
    }
    cout<<count;
    return 0;
}
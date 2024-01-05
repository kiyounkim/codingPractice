#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,t;
    cin>>s>>t;
    int count = 0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                count++;
                t[j]='=';
                break;
            }
        }
    }
    cout<<(s.length()+t.length())-count*2<<endl;
    return 0;
}
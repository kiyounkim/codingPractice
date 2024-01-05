#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,t;
        cin >> s >> t;
        if(s.length()!=t.length()){
            cout << "Impossible" << "\n";
            continue;
        }
        int count=0;
        int slen = s.length();
        int tlen = t.length();
        for(int j=0;j<slen;j++){
            for(int k=0;k<tlen;k++){
                if(s[j]==t[k]){
                    count++;
                    t[k]='-';
                    break;
                }
            }
        }
        if(count==s.length()){
            cout << "Possible" << "\n";
        }
        else{
            cout << "Impossible" << "\n";
        }
    }
    return 0;
}
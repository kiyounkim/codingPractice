#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int a[26]={0};
        for(int j=0;j<s.length();j++){
            a[s[j]-'A']++;
        }
        int sum = 0;
        for(int j=0;j<26;j++){
            if(a[j]==0){
                sum += j+65;
            }
        }
        cout << sum << endl;
    }
}
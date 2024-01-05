#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    int arr[26] = {0};
    for(char c : s){
        arr[c-'a']++;
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}
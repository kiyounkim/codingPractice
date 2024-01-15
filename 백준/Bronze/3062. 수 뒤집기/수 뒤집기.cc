#include <bits/stdc++.h>
using namespace std;
string reverse(string s){
    string ans = "";
    for(int i=s.size()-1;i>=0;i--){
        ans += s[i];
    }
    return ans;
}
bool isPalindrome(string s){
    return s == reverse(s);
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        isPalindrome(to_string(stoi(s) + stoi(reverse(s)))) ? cout << "YES\n" : cout << "NO\n";
    }
}
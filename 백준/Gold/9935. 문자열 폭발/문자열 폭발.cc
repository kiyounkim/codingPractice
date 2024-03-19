#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,c;
    stack<char> st;
    cin >> s >> c;
    string ans = "";
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
        if(st.top() == c[c.length()-1] && st.size() >= c.length()){
            string temp = "";
            for(int j=c.length()-1;j>=0;j--){
                temp+=st.top();
                st.pop();
            }
            reverse(temp.begin(),temp.end());
            if(temp != c){
                for(int j=0;j<temp.size();j++){
                    st.push(temp[j]);
                }
            }
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    if(ans.length()==0)
        cout << "FRULA";
    else
        cout << ans;
}
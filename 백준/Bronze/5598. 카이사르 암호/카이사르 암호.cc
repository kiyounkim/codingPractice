#include <iostream>
#include <string>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]<='C')
            cout << (char)(s[i]+23);
        else
            cout << (char)(s[i]-3);
    }
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n-1;i++){
        string t;
        cin >> t;
        for(int j=0;j<s.size();j++){
            if(s[j]!=t[j]){
                s[j]='?';
            }
        }
    }
    cout << s << endl;
    return 0;
}

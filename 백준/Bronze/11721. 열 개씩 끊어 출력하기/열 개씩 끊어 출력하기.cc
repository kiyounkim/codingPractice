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
        if((i)%10==0 && i!=0) cout << endl;
        cout << s[i];
    }
}
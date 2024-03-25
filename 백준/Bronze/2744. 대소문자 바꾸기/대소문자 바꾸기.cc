#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]<='z'&&s[i]>='a')
            cout << char(s[i]-'a'+'A');
        if(s[i]<='Z'&&s[i]>='A')
            cout << char(s[i]-'A'+'a');
    }
    return 0;
}

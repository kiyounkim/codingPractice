#include <iostream>

using namespace std;

int main() {
    string s;
    int result=0;
    cin >> s;

    for(int i=0;i<s.length();i++) 
        if(s[i]!=s[i+1]) 
            result++;

    if(!result) 
        cout << result;
    else cout << result/2;
}
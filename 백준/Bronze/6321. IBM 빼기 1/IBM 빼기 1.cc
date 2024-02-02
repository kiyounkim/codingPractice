#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        cout << "String #" << i+1 <<"\n";
        for(int i=0;i<s.length();i++){
            if(s[i] == 'Z'){
                cout << "A";
            }else{
                cout << (char)(s[i]+1);
            }
        }
        cout << "\n\n";
    }
    return 0;
}

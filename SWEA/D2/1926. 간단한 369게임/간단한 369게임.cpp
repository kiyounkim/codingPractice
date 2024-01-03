#include <iostream>
#include <string>
using namespace std;
int check(string s){
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '3' || s[i] == '6' || s[i] == '9'){
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string s = to_string(i);
        if(check(s) == 0){
            cout << i << " ";
        }
        else{
            for(int j=0;j<check(s);j++){
                cout << "-";
            }
            cout << " ";
        }
    }
    return 0;
}
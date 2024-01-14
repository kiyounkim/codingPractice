#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string *arr = new string[s.length()];
    for (int i = 0; i < s.length(); i++) {
        arr[i] = s.substr(i, s.length());
    }
    sort(arr, arr + s.length());
    for(int i=0;i<s.length();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
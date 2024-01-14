#include <iostream>
#include <string>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[26]={0};
    bool flag = false;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        arr[s[0]-'a']++;
    }
    for(int i=0;i<26;i++)
        if(arr[i]>=5){
            cout << (char)(i+'a');
            flag = true;
        }
    if(!flag)
        cout << "PREDAJA";
    return 0;
}
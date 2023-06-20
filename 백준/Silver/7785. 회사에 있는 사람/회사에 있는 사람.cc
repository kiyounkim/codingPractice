#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, string> mp;
    string name, status;
    for(int i=0;i<n;i++){
        cin >> name >> status;
        if(status == "enter")
            mp[name] = status;
        if(status == "leave")
            mp.erase(name);
    }
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
        cout << it->first << '\n';
}
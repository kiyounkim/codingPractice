#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin >> n;
    int m;
    cin >> m;
    map<string, int> mp;
    map<int, string> mp2;
    string name;
    for(int i=0;i<n;i++){
        cin >> name;
        mp.insert({name,i});
        mp2.insert({i,name});
    }
    for(int i=0;i<m;i++){
        cin >> name;
        if(isdigit(name[0]))
           cout << mp2[stoi(name)-1];
        else
            cout << mp[name]+1;
        cout << "\n";
    }
}
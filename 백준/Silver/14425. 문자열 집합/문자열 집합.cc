#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    map<string, int> mp;
    string temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        mp[temp] = 1;
    }
    int count = 0;
    for(int i=0;i<m;i++){
        cin >> temp;
        if(mp.find(temp) != mp.end())
            count++;
    }
    cout << count;
}
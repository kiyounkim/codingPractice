#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(m.find(s) != m.end()){
            m[s]++;
        }else{
            m[s] = 1;
        }
    }
    int max = 0;
    string max_key;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > max){
            max = it->second;
            max_key = it->first;
        }
    }
    cout << max_key;
    return 0;
}

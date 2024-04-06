#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int t;
    vector<pair<int, int>> v;
    v.push_back({1, 0});
    v.push_back({0, 1});
    for(int i=2;i<=40;i++){
        v.push_back({v[i-1].first + v[i-2].first, v[i-1].second + v[i-2].second});
    }
    for(int i=0;i<n;i++){
        cin >> t;
        cout << v[t].first << " " << v[t].second << "\n";
    }
    return 0;
}
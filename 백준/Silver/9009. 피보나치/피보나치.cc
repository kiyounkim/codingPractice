#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> num(45);

void solve(){
    num[0]=1;
    num[1]=1;
    for(int i=0;i<43;i++){
        num[i+2]=num[i]+num[i+1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> v;
        int a;
        cin>>a;
        for(int i=44;i>=0;i--){
            if(a>=num[i]){
                v.push_back(num[i]);
                a-=num[i];
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

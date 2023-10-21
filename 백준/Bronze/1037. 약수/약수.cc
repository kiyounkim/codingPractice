#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int input;
    cin>>input;
    vector<int> arr(input);
    for(int i=0;i<input;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << arr[0] * arr[input-1] << "\n";
    return 0;
}
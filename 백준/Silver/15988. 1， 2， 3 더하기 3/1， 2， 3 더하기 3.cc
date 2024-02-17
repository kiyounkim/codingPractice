#include <iostream>

using namespace std;

long long arr[1000001];
int solve(int m){
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;
    for(int i=3;i<m;i++){
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%1000000009;
    }
    return arr[m-1];
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        cout << solve(m) << "\n";
    }
}
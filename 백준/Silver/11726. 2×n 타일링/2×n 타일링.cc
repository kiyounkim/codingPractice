#include <iostream>

using namespace std;

int a[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=n;i++){
        a[i]=(a[i-1]+a[i-2])%10007;
    }
    cout << a[n] << '\n';
    return 0;
}

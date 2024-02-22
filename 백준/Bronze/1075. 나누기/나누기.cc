#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, f;
    cin >> n >> f;
    int ans = 0;
    n = n/100*100;
    while(ans<100){
        if((n+ans)%f==0)
            break;
        ans++;
    }
    if(ans<10)
        cout << "0" << ans << endl;
    else
        cout << ans << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    long long ans = 0;
    int a,b;
    long long max = 0;
    for(int i=0;i<10;i++){
        cin >> a >> b;
        ans -= a;
        ans += b;
        if(ans > max) max = ans;
    }
    cout << max << endl;
    return 0;
}

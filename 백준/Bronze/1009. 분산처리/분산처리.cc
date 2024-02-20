#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        int temp = 1;
        for(int j=0;j<b;j++)
            temp = (temp * a) % 10;
        if(temp == 0)
            cout << 10 << '\n';
        else
            cout << temp << '\n';
    }
    return 0;
}

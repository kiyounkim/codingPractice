#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int top = a * d + b * c;
    int bottom = b * d;
    int num = gcd(top, bottom);
    cout << top / num << " " << bottom / num << "\n";
    return 0;
}

#include <iostream>
using namespace std;

int arr[26] = {0};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h,m,s;
    cin >> h >> m >> s;
    int t;
    cin >> t;
    s+=t;
    m+=s/60;
    s%=60;
    h+=m/60;
    cout << h%24 << " " << m%60 << " " << s%60 << endl;
    return 0;
}

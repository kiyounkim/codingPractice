#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n , m;
    cin >> n >> m;
    int maxa , maxb = 1001;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        maxa = min(maxa,a);
        maxb = min(maxb,b);
    }
    cout << min((n/6+1)*maxa, min(n/6*maxa + n%6*maxb, n*maxb));
}
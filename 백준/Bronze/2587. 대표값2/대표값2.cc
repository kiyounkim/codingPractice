#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    n=5;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    cout << sum/n << endl;
    cout << a[n/2] << endl;
}

#include <iostream>
#include <cmath>
using namespace std;

long long solve(int a,int b, int c){
    if(b==1) return a%c;
    if(b%2==0) return (solve(a,b/2,c)*solve(a,b/2,c))%c;
    return (((solve(a,b/2,c)*solve(a,b/2,c))%c)*a)%c;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    cout << solve(a,b,c);
    return 0;
}
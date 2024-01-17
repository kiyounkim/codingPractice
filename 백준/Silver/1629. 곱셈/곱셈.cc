#include <iostream>
#include <algorithm>
using namespace std;
 

long long solve(long long n, int m, int c){
    if(m==1) return n%c;
    long long tmp = solve(n, m/2, c);
    if(m%2==0) return (tmp*tmp)%c;
    else return (((tmp*tmp)%c)*n)%c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    int m, c;
    cin >> n >> m >> c;
    cout << solve(n, m, c);
    return 0;
}
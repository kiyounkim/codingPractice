#include <iostream>
using namespace std;

int arr[1001] = {0,1,3,};

int dp(int n){
    if(arr[n] != 0) return arr[n];
    else return arr[n] = (dp(n-1) + 2*dp(n-2)) % 10007;
}

int main() {
    int n;
    cin >> n;
    cout << dp(n);
}

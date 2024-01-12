#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    for(int i=0;i<n-1;i++){
        int num;
        cin >> num;
        sum += (num-1);
    }
    cout << sum << endl;
}
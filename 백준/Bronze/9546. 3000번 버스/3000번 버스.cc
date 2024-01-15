#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        double sum = 0;
        for(int j=0;j<k;j++){
            sum += 0.5;
            sum *= 2;
        }
        cout << (int)sum << endl;
    }
}
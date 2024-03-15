#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> prefixSum(n);
    int sum =0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
        prefixSum[i] = sum;
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        if(l==1)
            cout << prefixSum[r-1] << "\n";
        else
            cout << prefixSum[r-1] - prefixSum[l-2] << "\n";
    }
    return 0;
}
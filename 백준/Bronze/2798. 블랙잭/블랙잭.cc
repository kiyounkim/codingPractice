#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int min = m;
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum=a[i]+a[j]+a[k];
                if(sum>m)
                    continue;
                if(min>abs(m-sum)){
                    min = abs(m-sum);
                }
            }
        }
    }
    cout << m-min;
    return 0;
}
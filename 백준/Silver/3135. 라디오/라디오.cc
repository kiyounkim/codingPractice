#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    int ans = abs(a-b);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(abs(temp-b) < ans){
            ans = abs(temp-b)+1;
        }
    }
    cout << ans << endl;
}
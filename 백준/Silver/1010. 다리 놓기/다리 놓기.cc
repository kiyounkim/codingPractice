#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int samples,totalItems;
        cin >> samples >> totalItems;
        long long ans = 1;
        int r = 1;
        for(int j=totalItems;j>totalItems-samples;j--){
            ans *=j;
            ans /= r;
            r++;
        }
        cout << ans << endl;
    }
}
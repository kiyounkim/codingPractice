#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[10];
    for(int i=0;i<n;i++){
        for(int i=0;i<10;i++){
            arr[i] = 0;
        }
        for(int j=0;j<10;j++){
            cin >> arr[j];
        }
        sort(arr,arr+10);
        cout << arr[7] << "\n";
    }
    return 0;
}
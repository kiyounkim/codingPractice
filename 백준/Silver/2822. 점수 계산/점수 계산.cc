#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[8];
    int arr2[8];
    int arr3[8] = {0};
    for(int i=0;i<8;i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr, arr+8);
    int sum = 0;
    for(int i=8;i>3;i--){
        sum += arr[i-1];
        for(int j=0;j<8;j++){
            if(arr[i-1] == arr2[j]){
                arr3[j] = 1;
                break;
            }
        }
    }
    cout << sum << "\n";
    for(int i=0;i<8;i++){
        if(arr3[i] == 1){
            cout << i+1 << " ";
        }
    }
    return 0;
}
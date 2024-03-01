#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100001] = {0};
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 1;
    for(int i = 7; i < n; i++) {
        arr[i] = min(arr[i-1], min(arr[i-2], min(arr[i-5],arr[i-7]))) + 1;
    }
    cout << arr[n-1] << endl;
    return 0;
}

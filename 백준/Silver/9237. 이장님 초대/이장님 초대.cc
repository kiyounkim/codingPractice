#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        arr[i]-=n-i-1;
    }
    cout << *max_element(arr,arr+n)+n+1;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    n--;
    while(n>0){
        if(arr[n] <= arr[n-1]){
            count += abs(arr[n-1] - arr[n]) + 1;
            arr[n-1] = arr[n]-1;
        }
        n--;
    }
    cout << count;
}
